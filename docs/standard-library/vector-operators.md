---
title: Operatori &lt;vector&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
ms.assetid: 1d14f312-6f59-4ec7-88ae-95f89a558823
caps.latest.revision: 13
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 4f99e943ce0dfa6a8450b795723e9dc209d3770a
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="ltvectorgt-operators"></a>operatori &lt;vector&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_neq"></a>  operator!=  
 Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.  
  
```  
bool operator!=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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
  
##  <a name="op_lt"></a>  operator&lt;  
 Verifica se l'oggetto a sinistra dell'operatore è minore dell'oggetto a destra.  
  
```  
bool operator<(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.  
  
```  
bool operator<=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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
  
##  <a name="op_eq_eq"></a>  operator==  
 Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.  
  
```  
bool operator==(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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
  
##  <a name="op_gt"></a>  operator&gt;  
 Verifica se l'oggetto a sinistra dell'operatore è maggiore dell'oggetto a destra.  
  
```  
bool operator>(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.  
  
```  
bool operator>=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **vector**.  
  
 `right`  
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


