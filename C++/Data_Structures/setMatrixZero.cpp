void Solution::setZeroes(vector<vector<int> > &A) {

    int m = A.size();
    int n = A[0].size();

    int R = 1;
    int C = 1;

    for (int i = 0; i < m; i++)
    {
        if (!A[i][0])
        {
            C = 0;
            break;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (!A[0][j])
        {
            R = 0;
            break;
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (!A[i][j])
            {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }


    for (int i = 1; i < m; i++)
    {
        if (!A[i][0])
        {
            for (int j = 1; j < n; j++)
                A[i][j] = 0;
        }
    }

    for (int j = 1; j < n; j++)
    {
        if (!A[0][j])
        {
            for (int i = 1; i < m; i++)
                A[i][j] = 0;
        }
    }

    if (!R)
    {
        for (int j = 0; j < n; j++)
            A[0][j] = 0;
    }

    if (!C)
    {
        for (int i = 0; i < m; i++)
            A[i][0] = 0;
    }

}
