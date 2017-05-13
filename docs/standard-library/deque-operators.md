---
title: Operatori &lt;deque&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
ms.assetid: 482d7c92-54c7-493b-99e6-2a73617481a5
caps.latest.revision: 7
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 9d7f8ff1d198e8608cb5aa96852dc5b263277e02
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="ltdequegt-operators"></a>Operatori &lt;deque&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_neq"></a>  operator!=  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore non è uguale all'oggetto deque sul lato destro.  
  
```
bool operator!=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti deque non sono uguali, **false** se gli oggetti deque sono uguali.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. Due oggetti deque sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_ne.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c2.push_back( 2 );  
  
   if ( c1 != c2 )  
      cout << "The deques are not equal." << endl;  
   else  
      cout << "The deques are equal." << endl;  
}  
\* Output:   
The deques are not equal.  
*\  
```  
  
##  <a name="op_lt"></a>  operator&lt;  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore è minore dell'oggetto deque sul lato destro.  
  
```
bool operator<(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la deque a sinistra dell'operatore è minore ma non uguale alla deque a destra, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione minore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_lt.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   c1.push_back( 4 );  
  
   c2.push_back( 1 );  
   c2.push_back( 3 );  
  
   if ( c1 < c2 )  
      cout << "Deque c1 is less than deque c2." << endl;  
   else  
      cout << "Deque c1 is not less than deque c2." << endl;  
}  
\* Output:   
Deque c1 is less than deque c2.  
*\   
```  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore è minore o uguale all'oggetto deque sul lato destro.  
  
```
bool operator<=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la deque a sinistra dell'operatore è minore o uguale alla deque a destra, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione minore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_le.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   c1.push_back( 4 );  
  
   c2.push_back( 1 );  
   c2.push_back( 3 );  
  
   if ( c1 <= c2 )  
      cout << "Deque c1 is less than or equal to deque c2." << endl;  
   else  
      cout << "Deque c1 is greater than deque c2." << endl;  
}  
\* Output:   
Deque c1 is less than or equal to deque c2.  
*\  
  
```  
  
##  <a name="op_eq_eq"></a>  operator==  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore è uguale all'oggetto deque sul lato destro.  
  
```
bool operator==(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la deque a sinistra dell'operatore è uguale alla deque a destra, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. Due deque sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_eq.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c2.push_back( 1 );  
  
   if ( c1 == c2 )  
      cout << "The deques are equal." << endl;  
   else  
      cout << "The deques are not equal." << endl;  
  
   c1.push_back( 1 );  
   if ( c1 == c2 )  
      cout << "The deques are equal." << endl;  
   else  
      cout << "The deques are not equal." << endl;  
}  
\* Output:   
The deques are equal.  
The deques are not equal.  
*\  
  
```  
  
##  <a name="op_gt"></a>  operator&gt;  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore è maggiore dell'oggetto deque sul lato destro.  
  
```
bool operator>(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la deque a sinistra dell'operatore è maggiore della deque a destra, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_gt.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c1.push_back( 3 );  
   c1.push_back( 1 );  
  
   c2.push_back( 1 );  
   c2.push_back( 2 );  
   c2.push_back( 2 );  
  
   if ( c1 > c2 )  
      cout << "Deque c1 is greater than deque c2." << endl;  
   else  
      cout << "Deque c1 is not greater than deque c2." << endl;  
}  
\* Output:   
Deque c1 is greater than deque c2.  
*\  
  
```  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Verifica se l'oggetto deque sul lato sinistro dell'operatore è maggiore o uguale all'oggetto deque sul lato destro.  
  
```
bool operator>=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `deque`.  
  
 `right`  
 Oggetto di tipo `deque`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se la deque a sinistra dell'operatore è maggiore o uguale alla deque a destra, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// deque_op_ge.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1, c2;  
  
   c1.push_back( 1 );  
   c1.push_back( 3 );  
   c1.push_back( 1 );  
  
   c2.push_back( 1 );  
   c2.push_back( 2 );  
   c2.push_back( 2 );  
  
   if ( c1 >= c2 )  
      cout << "Deque c1 is greater than or equal to deque c2." << endl;  
   else  
      cout << "Deque c1 is less than deque c2." << endl;  
}  
\* Output:   
Deque c1 is greater than or equal to deque c2.  
*\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<deque >](../standard-library/deque.md)




