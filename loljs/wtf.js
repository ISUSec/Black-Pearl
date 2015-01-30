x = [1,2,3][x]
if ( y == true                          && y == 1    && y !== 1                 // y = [1]
  && 'hello'.charAt(z) != 'hello'[z]    && z != true && Math.max(z, null) === 0 // z = -1
  && Math.max(-1, x) != Math.max(-1, x) && x == x    && !isFinite(x)            // x = undefined
   ) {
     console.log("flag");
   }
