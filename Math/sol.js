


/* CMD FORMAT : node sol.js 1,0,1,0,1,0,1,0,1,0,  */ 

//TIME COMPLEXITY : O(N)
//SPACE COMPLEXITY : O(1)


const solve = (t) => {
let count = 0;
let n = t.length;
let ans = 0;
let lastZero = -1;
let beforeLastZero = -1;

for(let i = 0; i < n; ++i)
{

    if (!t[i])
    {
         
        if (i - beforeLastZero > count)
        {
            count = i - beforeLastZero;
            ans = lastZero;
        }

        beforeLastZero = lastZero;
        lastZero = i;
    }
}

if (n - beforeLastZero >=count) ans = lastZero;

return ans;
}

let t =process.argv[2].split(',').map(Number=> Number*=1 );
console.log(t)
let n = t.length;
console.log(solve(t))  
