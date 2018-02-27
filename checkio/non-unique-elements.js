function nonUniqueElements(data) {
    var mp = {};
    data = data.filter(function(item){
        if (item in mp){
            mp[item] = true
        }else {
            mp[item] = false;
        }
        return true;
    });
    
    return data.filter(function(item){ 
        return (mp[item] == true); 
    })
}

console.log(nonUniqueElements([3,1,2,3,3,4,5,10 , 1]));