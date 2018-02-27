function countNeighbours(data, row, col) {
	var res = 0;
	var a1 = [0,  0, 1 , -1, -1, -1, 1,  1];
	var a2 = [1, -1, 0 ,  0, -1,  1, 1, -1];

	for(var indx in a1){
		
		var i = row + a1[indx];
		var j = col + a2[indx];
		
		if(i >= 0 && j >= 0 && j < data.length  && i < data[i].length && data[i][j] == 1){
			res = res + 1;
		}
	}

    return res;
}

var res = countNeighbours([[[1,0,1,0,1],[0,1,0,1,0],[1,0,1,0,1],[0,1,0,1,0],[1,0,1,0,1],[0,1,0,1,0]],5,4])

console.log(res);