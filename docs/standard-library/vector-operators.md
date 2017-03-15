---
title: Operatori &lt;vector&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 1d14f312-6f59-4ec7-88ae-95f89a558823
caps.latest.revision: 13
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 14308c0789851af423fd687f88acfe9177d89aff
ms.lasthandoff: 02/24/2017

---
# <a name="ltvectorgt-operators"></a>operatori &lt;vector&gt;
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|[operator==](#operator_eq_eq)|  
  
##  <a name="a-nameoperatorneqa--operator"></a><a name="operator_neq"></a>  operator!=  
 Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.  
  
```  
bool operator!=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se i vettori non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Due vettori sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_ne.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
     v2.push_back( 2 );  
  
   if ( v1 != v2 )  
      cout << "Vectors not equal." << endl;  
   else  
      cout << "Vectors equal." << endl;  
}  
```  
  
```Output  
Vectors not equal.  
```  
  
##  <a name="a-nameoperatorlta--operatorlt"></a><a name="operator_lt_"></a>  operator&lt;  
 Verifica se l'oggetto a sinistra dell'operatore è minore dell'oggetto a destra.  
  
```  
bool operator<(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il vettore a sinistra dell'operatore è minore del vettore a destra; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_lt.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
   v1.push_back( 4 );  
  
   v2.push_back( 1 );  
   v2.push_back( 3 );  
  
   if ( v1 < v2 )  
      cout << "Vector v1 is less than vector v2." << endl;  
   else  
      cout << "Vector v1 is not less than vector v2." << endl;  
}  
```  
  
```Output  
Vector v1 is less than vector v2.  
```  
  
##  <a name="a-nameoperatorlteqa--operatorlt"></a><a name="operator_lt__eq"></a>  operator&lt;=  
 Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.  
  
```  
bool operator<=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il vettore a sinistra dell'operatore è minore o uguale al vettore a destra; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_le.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
   v1.push_back( 4 );  
  
   v2.push_back( 1 );  
   v2.push_back( 3 );  
  
   if ( v1 <= v2 )  
      cout << "Vector v1 is less than or equal to vector v2." << endl;  
   else  
      cout << "Vector v1 is greater than vector v2." << endl;  
}  
```  
  
```Output  
Vector v1 is less than or equal to vector v2.  
```  
  
##  <a name="a-nameoperatoreqeqa--operator"></a><a name="operator_eq_eq"></a>  operator==  
 Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.  
  
```  
bool operator==(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il vettore a sinistra dell'operatore è uguale al vettore a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Due vettori sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_eq.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
   v2.push_back( 1 );  
  
   if ( v1 == v2 )  
      cout << "Vectors equal." << endl;  
   else  
      cout << "Vectors not equal." << endl;  
}  
```  
  
```Output  
Vectors equal.  
```  
  
##  <a name="a-nameoperatorgta--operatorgt"></a><a name="operator_gt_"></a>  operator&gt;  
 Verifica se l'oggetto a sinistra dell'operatore è maggiore dell'oggetto a destra.  
  
```  
bool operator>(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il vettore a sinistra dell'operatore è maggiore del vettore a destra; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_gt.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
   v1.push_back( 3 );  
   v1.push_back( 1 );  
  
   v2.push_back( 1 );  
   v2.push_back( 2 );  
   v2.push_back( 2 );  
  
   if ( v1 > v2 )  
      cout << "Vector v1 is greater than vector v2." << endl;  
   else  
      cout << "Vector v1 is not greater than vector v2." << endl;  
}  
```  
  
```Output  
Vector v1 is greater than vector v2.  
```  
  
##  <a name="a-nameoperatorgteqa--operatorgt"></a><a name="operator_gt__eq"></a>  operator&gt;=  
 Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.  
  
```  
bool operator>=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 Oggetto di tipo **vector**.  
  
 ` right`  
 Oggetto di tipo **vector**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se il vettore a sinistra dell'operatore è maggiore o uguale al vettore a destra; in caso contrario, **false**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_ge.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
  
   vector <int> v1, v2;  
   v1.push_back( 1 );  
   v1.push_back( 3 );  
   v1.push_back( 1 );  
  
     v2.push_back( 1 );  
   v2.push_back( 2 );  
   v2.push_back( 2 );  
  
   if ( v1 >= v2 )  
      cout << "Vector v1 is greater than or equal to vector v2." << endl;  
   else  
      cout << "Vector v1 is less than vector v2." << endl;  
}  
```  
  
```Output  
Vector v1 is greater than or equal to vector v2.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<vector>](../standard-library/vector.md)


