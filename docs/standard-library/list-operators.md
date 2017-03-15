---
title: Operatori &lt;list&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8103d8f2-c30f-49ad-ac50-b3ba6a907ebe
caps.latest.revision: 7
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 617ac2187ec3cd6d46cec6076fa72cc437803714
ms.lasthandoff: 02/24/2017

---
# <a name="ltlistgt-operators"></a>Operatori &lt;list&gt;
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|[operator==](#operator_eq_eq)|  
  
##  <a name="a-nameoperatorneqa--operator"></a><a name="operator_neq"></a>  operator!=  
 Verifica se l'oggetto elenco a sinistra dell'operatore non è uguale all'oggetto elenco a destra.  
  
```
bool operator!=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli elenchi non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. Due elenchi sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_ne.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
  
int main( )  
{  
using namespace std;  
list <int> c1, c2;  
c1.push_back( 1 );  
c2.push_back( 2 );  
  
if ( c1 != c2 )  
cout << "Lists not equal." << endl;  
else  
cout << "Lists equal." << endl;  
}  
\* Output:  
Lists not equal.  
*\  
```  
  
##  <a name="a-nameoperatorlta--operatorlt"></a><a name="operator_lt_"></a>  operator&lt;  
 Verifica se l'oggetto elenco a sinistra dell'operatore è minore dell'oggetto elenco a destra.  
  
```
bool operator<(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'elenco a sinistra dell'operatore è minore ma non uguale all'elenco a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. La relazione minore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_lt.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   list <int> c1, c2;  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   c1.push_back( 4 );  
  
   c2.push_back( 1 );  
   c2.push_back( 3 );  
  
   if ( c1 < c2 )  
      cout << "List c1 is less than list c2." << endl;  
   else  
      cout << "List c1 is not less than list c2." << endl;  
}  
\* Output:   
List c1 is less than list c2.  
*\   
```  
  
##  <a name="a-nameoperatorlteqa--operatorlt"></a><a name="operator_lt__eq"></a>  operator&lt;=  
 Verifica se l'oggetto elenco a sinistra dell'operatore è minore o uguale all'oggetto elenco a destra.  
  
```
bool operator<=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'elenco a sinistra dell'operatore è minore o uguale all'elenco a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. La relazione minore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_le.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   list <int> c1, c2;  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   c1.push_back( 4 );  
  
   c2.push_back( 1 );  
   c2.push_back( 3 );  
  
   if ( c1 <= c2 )  
      cout << "List c1 is less than or equal to list c2." << endl;  
   else  
      cout << "List c1 is greater than list c2." << endl;  
}  
\* Output:   
List c1 is less than or equal to list c2.  
*\  
```  
  
##  <a name="a-nameoperatoreqeqa--operator"></a><a name="operator_eq_eq"></a>  operator==  
 Verifica se l'oggetto elenco a sinistra dell'operatore è uguale all'oggetto elenco a destra.  
  
```
bool operator==(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'elenco a sinistra dell'operatore è uguale all'elenco a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. Due elenchi sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_eq.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
int main( )   
{  
   using namespace std;   
  
   list <int> c1, c2;  
   c1.push_back( 1 );  
   c2.push_back( 1 );  
  
   if ( c1 == c2 )  
      cout << "The lists are equal." << endl;  
   else  
      cout << "The lists are not equal." << endl;  
}  
\* Output:   
The lists are equal.  
*\  
```  
  
##  <a name="a-nameoperatorgta--operatorgt"></a><a name="operator_gt_"></a>  operator&gt;  
 Verifica se l'oggetto elenco a sinistra dell'operatore è maggiore dell'oggetto elenco a destra.  
  
```
bool operator>(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'elenco a sinistra dell'operatore è maggiore dell'elenco a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_gt.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
int main( )   
{  
   using namespace std;   
   list <int> c1, c2;  
   c1.push_back( 1 );  
   c1.push_back( 3 );  
   c1.push_back( 1 );  
  
   c2.push_back( 1 );  
   c2.push_back( 2 );  
   c2.push_back( 2 );  
  
   if ( c1 > c2 )  
      cout << "List c1 is greater than list c2." << endl;  
   else  
      cout << "List c1 is not greater than list c2." << endl;  
}  
\* Output:   
List c1 is greater than list c2.  
*\  
```  
  
##  <a name="a-nameoperatorgteqa--operatorgt"></a><a name="operator_gt__eq"></a>  operator&gt;=  
 Verifica se l'oggetto elenco a sinistra dell'operatore è maggiore o uguale all'oggetto elenco a destra.  
  
```
bool operator>=(
    const list<Type, Allocator>& left,
    const list<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **list**.  
  
 `right`  
 Oggetto di tipo **list**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'elenco a sinistra dell'operatore è maggiore o uguale all'elenco a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti elenco si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// list_op_ge.cpp  
// compile with: /EHsc  
#include <list>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;   
   list <int> c1, c2;  
   c1.push_back( 1 );  
   c1.push_back( 3 );  
   c1.push_back( 1 );  
  
   c2.push_back( 1 );  
   c2.push_back( 2 );  
   c2.push_back( 2 );  
  
   if ( c1 >= c2 )  
      cout << "List c1 is greater than or equal to list c2." << endl;  
   else  
      cout << "List c1 is less than list c2." << endl;  
}  
\* Output:   
List c1 is greater than or equal to list c2.  
*\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<list>](../standard-library/list.md)




