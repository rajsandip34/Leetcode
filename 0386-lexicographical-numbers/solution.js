/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    a=[];
    for(var i=1;i<=n;i++){
        a.push(i);
    }
    a.sort();
    return a;
};
