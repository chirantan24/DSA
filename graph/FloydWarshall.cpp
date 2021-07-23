void shortest_distance(vector<vector<int>>&matrix){
	    int v=matrix.size();
	    for(int k=0;k<v;k++)
	    for(int i=0;i<v;i++)
	    for(int j=0;j<v;j++)
	    if(matrix[i][k]>=0 && matrix[k][j]>=0 && ((matrix[i][k]+matrix[k][j])<matrix[i][j] || matrix[i][j]==-1))
	    matrix[i][j]=matrix[i][k]+matrix[k][j];
	}
