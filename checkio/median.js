function median(data) {
	data.sort(function(i,h) { return i - h;})
	if(data.length == 1){
		return data[0];
	}
	if(data.length % 2 != 0){
		var mid = Math.ceil(data.length / 2) - 1;
		return data[mid];
	}else {
		return ((data[data.length / 2] + data[(data.length / 2) - 1])) / 2
	}
}

console.log(median([1, 2, 3, 4, 5]))



