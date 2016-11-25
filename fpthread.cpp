#include "fpthread.h"

const int N = 20;
const int WALL = 9999;
QVector< QPair<int, int>> wave;
QVector< QPair <int, int> > oldWave;
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };
int nstep = 0;

int sT = 20;

FPThread::FPThread(QObject* parent): QThread(parent)
{
    for (int i = 0; i < N; i++)
    {
        QVector<int> a;
        for (int j = 0; j < N; j++)
        {
            a.push_back(0);
        }
        map.push_back(a);
    }

    /*for(int i = 0; i < 20; i++)
    {
        map[i][0] = map[0][i] = map[19][i] = map[i][19] = -1;
    }*/

        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
            {
                if (qrand() % 4 == 0)
                    map[i][j] = WALL;
                else
                    map[i][j] = -1;
            }
        for (int i = 0; i < N; ++i)
        {
            map[i][0] = WALL;
            map[0][i] = WALL;
            map[i][N - 1] = WALL;
            map[N - 1][i] = WALL;
        }



        oldWave.push_back(QPair<int, int>(1, 1));

        map[1][1] = nstep;

}


void FPThread :: run()
{


        while (oldWave.size() > 0)
        {
            ++nstep;
            wave.clear();
            for (QVector<QPair<int, int> >::iterator i = oldWave.begin(); i != oldWave.end(); ++i)
            {
                for (int d = 0; d < 4; ++d)
                {
                    int nx = i -> first + dx[d];
                    int ny = i -> second + dy[d];
                    if (map[nx][ny] == -1)
                    {
                        wave.push_back(QPair<int, int>(nx, ny));
                        map[nx][ny] = 7;//nstep;

                        emit NumberChanged();
                        msleep(sT);
                        qDebug() << QString ::number(nx) << "  " << QString ::number(ny);
                        if (nx == N - 3 && ny == N - 3)
                        {
                            qDebug() << "done";
                            goto done;

                        }

                    }
                }
            }
            oldWave = wave;
        }
     done:
        int x = N - 3;
        int y = N - 3;
        wave.clear();
        wave.push_back(QPair<int, int>(x, y));
        qDebug() << QString ::number(map[x][y]);
        while (map[x][y] != 0)
        {
            for (int d = 0; d < 4; ++d)
            {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (map[x][y] - 1 == map[nx][ny])
                {
                    x = nx;
                    y = ny;
                    path.push_back(QPair<int, int>(x, y));
                    qDebug() << "fp->map.size()";
                    break;
                }
            }
        }

        emit NumberChanged();
        msleep(sT);
}
