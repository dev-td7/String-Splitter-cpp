# String-Splitter-cpp

We have StringTokenizer class in Java. To provide the same functionality in C++, I have created this class so that strings can be split into substrings provided the Delimiting characters.

Also, we have a twist here. There is a separate option to choose whether or not you want to include spaces in the returned string. Most times, if we demand delimiters to be returned, we have to add additional code to skip spaces and tabs. 

# How to use

There are 5 constructors:

1.  split_s(string str,string lim,bool lim_return,bool spaces_return)
    
    Use this constructor if you specify delimiters and also specify if you want spaces and delimiters. 
    
    WARNING: Do not specify spaces and tabs in delimiters IF you are demanding delimiters and dont want spaces/tabs to be returned. In       that case you wont get your spaces/tabs.
    
2.  split_s(string str,string lim,bool lim_return)

    Use this constructor if you specify delimiters and also if you want them to be returned. Spaces will be returned in this case.
    
3.  split_s(string str,string lim)

    Use this constructor if you just specify delimiters. In this case, spaces will be returned and delimiters won't be returned.
    
4.  split_s(string str, bool spaces_return)

    Use this constructor if you just want to skip spaces and tabs from the string.
    
5.  split_s(string str)

    It is not recommended to use this constructor as this limits the functionality of the class. Spaces are returned in this case.
    
By using one of these constructors, you may initialize the object of this class.

To get splitted strings one by one, use the next() function.
    string next();

For example:

    string str = sp.next();
    
    //'sp' is the object of this class.
    
To know whether there are more characters that can be returned, use the has_more() function.
    bool has_more();
    
For example:

    while(sp.has_more()==true){
        //Code
    }
    
    //'sp' is the object of this class, as in the previous example.
    
It is recommended that you loop on the condition has_more() and then extract strings using next() function.


# Report bugs if any :)
