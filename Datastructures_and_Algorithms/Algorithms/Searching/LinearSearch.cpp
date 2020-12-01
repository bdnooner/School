/*
    Sequential/Linear search

    Inefficient with larger data sets
    have to iterate through the list until the value is found

*/

char x = ' ';
bool found = false;

for (int i = 0; i < n; i++)
{
    if (list[i] == x)
    {
        found = true;
        break;
    }

    if(found) //x is in the array
    {
        //insert whatever actions needs to be taken with the found value
    }

    else //x is not in the array
    {
        //take actions if the value is not in the array
    }
}