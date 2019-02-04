#initialize section 
import numpy as np;
ppp = print;
x = np.array([[1,1,1],[-1,-1,-1],[2,2,0]], np.int32)
x0 = np.array([[1,1,1],[2,2,2],[3,3,3]],np.int32);
x1 = np.array([[1,1,1],[2,2,2],[3,3,3]],np.int32);
y0 = np.array([[3/7.0]*3,[1/9]*3,[100.3]*3])
z0 = np.array([[3/7.0]*4,[1/9]*4,[100.3]*4,[1]*4])
z1 = np.array([[3/7.0]*4,[1/9]*4,[100.3]*4])
p0 = np.array([[1],[1],[1]])
c0 = np.array([[1+3.j, 4.j],[0,3+3.j]])

#######################################################
# Start !!!
# Meta data, shape, underlying dtype ;
ppp(x.shape); 
ppp(x.dtype); 

#slicing and indexing 
x[0:1]
x[0:2]
x[2:2]
x[1,2]
x[:,2]

#Shared memory of different wrappers


# internal storage structure 
# to access corresponding meta data 
ppp(x.flags)
ppp(x.shape)
ppp(x.strides)
ppp(x.ndim)
ppp(x.data)
ppp(x.size)
ppp(x.itemsize)	
ppp(x.nbytes)	
ppp(x.base)	

# the strided scheme, N-D-array storage
 

# Array Methods 

## Array conversion to other data structure, data are copied , rawmemory - datastructure
l0 = x0.tolist(); 
byte_array_0 = x0.tostring(); #nice raw data
x0.tobytes(); 
x0.tofile(); # also nice raw binary data 

x0.dumps(); # pickle of the data strucutre 
f0=open("./delete_this_file")
x0.dump(f0) # write the pickle to file directory

x0.view("int"); # how to view the memory data, causious
x0.fill(1.3);
x0.view("int");
x0.astype("float64"); # safer, type cast 

x0.tostring(); 
x0.byteswap(); ##?

x3 = x0.copy(); #real copy 

c0.dtype
c0.getfield("float64"); 
c0.getfield("float64",8); # again, don't convert float to int without causion
 
c0.setflags(); # very useful considering other mechanisms such as parallelism, ??
c0.flags
c0.setflags(write=False)
c0.flags;


## Shape/View Manipulation, resize vs reshape, transpose, flatten/ravel, axis swap ... all copy is shallow, just copies of view instead of real data, and just change the default view(manipulation method) instead of real data arrangement 
z0.reshape([2,8]); # not a inplace operation 
z0.reize([1,16]); # this is inplace 
z0.ravel(); #inplace 
z0.flatten(); # not inplace operation, make a copy 
p0
p0.squeeze(); 

## Item selection , item manipulation, default treated as 1D array unless axis is specified 

x0.take(1) # return a scaler in numpy datatype 
x0.take([1,2,3]) # return an array in numpy datatypes
x0.take([0,1],axis =0) #very much like a clip 

x0.put(1,1); #no axis supported 

np.repeat([1,2],axis=0); #direction is restricted, repeat can not increase the dimension of original datastructure

x0.choose(); #??default to int?

x0.sort(axis=0); #inplace, be caucious with default axis
x0.argsort(); # ??
x0.partition(); # ??
x0.argpartition(); # ??

x0.nonzero(); # more like argnonzero;
x0.diagnoal(0,0,1);  #offset is wired 


## Calculation
input_axis = 0; # axis for axis-dim, and it means along that dim  
x1.sum(input_axis)
x1.sum(axis = 1)
x1.argmax(axis = 0 ) #return indices 
x1.max(axis=0)
x1.conj()
x1.clip(0,2) #截断
y0.dtype(); 
y0.round(2); 
y0.trace();
y0.mean();
y0.mean(axis=0);
y0.var(); 
y0.var(axis=0); 
y0.std(); 
x.prod(axis=1);
x.all();
x.all(axis=0); 
x.any(); 

# Basic arithmetic  
## pairwise + binary
x0 + x1 
x0 - x1 
x0 * x1 
x0 / x1 
x0 % x1 
x0 ** x1 
x1[1,2] = 0 ; 
x0 / x1
x0 << x1 
x0 >> x1 
x0 & x1 
x0 ^ x1 
x0 | x1 
~x1 
x0 < x1 
x0 == x1 

## unary 
-x1
x1.__ng__()
x1.__pos__()
x1.__invert__()

## unary with input, more readable 
input_val  = 9999 ; 
x0.__lt__(input_val);
x1.__floordiv__(input_val);
x1//2; 

## notice inplace opreations compared to non-inplace ones 
## inplace ones cast the result of operation to fit into callers' precision/type/..., non-inplace one rebind the name 



## Matrix multiplication  
x1.__matmul__(x1); 

