---
title: Operatori &lt;set&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- set/std::operator!=
- set/std::operator&gt;
- set/std::operator&gt;=
- set/std::operator&lt;
- set/std::operator&lt;=
- set/std::operator==
dev_langs:
- C++
ms.assetid: b4256ebc-c449-4688-95db-fced42d20d4d
caps.latest.revision: 8
manager: ghogen
helpviewer_keywords:
- std::operator!= (set)
- std::operator&gt; (set)
- std::operator&gt;= (set)
- std::operator&lt; (set)
- std::operator&lt;= (set)
- std::operator== (set)
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 5bae2e375833cae5d775085519e145a4dab69eab
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltsetgt-operators"></a>Operatori &lt;set&gt;
||||  
|-|-|-|  
|[operator!= (set)](#op_neq)|[operator&gt; (set)](#op_gt)|[operator&gt;= (set)](#eq)|  
|[operator&lt; (set)](#op_lt)|[operator&lt;= (set)](#eq)|[operator== (set)](#op_eq_eq)|  
|[operator!= (multiset)](#op_neq_multiset)|[operator&gt; (multiset)](#op_gt_multiset)|[operator&gt;= (multiset)](#op_gt_eq_multiset)|  
|[operator&lt; (multiset)](#op_lt_multiset)|[operator&lt;= (multiset)](#op_lt_eq_multiset)|[operator== (multiset)](#op_eq_eq_multiset)|  
  
##  <a name="op_neq"></a>  operator!= (set)  
 Verifica se l'oggetto set a sinistra dell'operatore non è uguale all'oggetto set a destra.  
  
```
bool operator!=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti set non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. Due oggetti set sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_ne.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 != s2 )  
      cout << "The sets s1 and s2 are not equal." << endl;  
   else  
      cout << "The sets s1 and s2 are equal." << endl;  
  
   if ( s1 != s3 )  
      cout << "The sets s1 and s3 are not equal." << endl;  
   else  
      cout << "The sets s1 and s3 are equal." << endl;  
}  
\* Output:   
The sets s1 and s2 are not equal.  
The sets s1 and s3 are equal.  
*\  
```  
  
##  <a name="op_lt"></a>  operator&lt; (set)  
 Verifica se l'oggetto set a sinistra dell'operatore è minore dell'oggetto set a destra.  
  
```
bool operator<(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto set a sinistra dell'operatore è rigorosamente minore dell'oggetto set a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. La relazione minore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_lt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 < s2 )  
      cout << "The set s1 is less than the set s2." << endl;  
   else  
      cout << "The set s1 is not less than the set s2." << endl;  
  
   if ( s1 < s3 )  
      cout << "The set s1 is less than the set s3." << endl;  
   else  
      cout << "The set s1 is not less than the set s3." << endl;  
}  
\* Output:   
The set s1 is less than the set s2.  
The set s1 is not less than the set s3.  
*\  
```  
  
##  <a name="op_lt_eq"></a>  operator&lt;= (set)  
 Verifica se l'oggetto set a sinistra dell'operatore è minore o uguale all'oggetto set a destra.  
  
```
bool operator!<=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto set a sinistra dell'operatore è minore o uguale all'oggetto set a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. La relazione minore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_le.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 <= s2 )  
      cout << "Set s1 is less than or equal to the set s2." << endl;  
   else  
      cout << "The set s1 is greater than the set s2." << endl;  
  
   if ( s1 <= s3 )  
      cout << "Set s1 is less than or equal to the set s3." << endl;  
   else  
      cout << "The set s1 is greater than the set s3." << endl;  
  
   if ( s1 <= s4 )  
      cout << "Set s1 is less than or equal to the set s4." << endl;  
   else  
      cout << "The set s1 is greater than the set s4." << endl;  
}  
\* Output:   
Set s1 is less than or equal to the set s2.  
The set s1 is greater than the set s3.  
Set s1 is less than or equal to the set s4.  
*\  
```  
  
##  <a name="op_eq_eq"></a>  operator== (set)  
 Verifica se l'oggetto set a sinistra dell'operatore è uguale all'oggetto set a destra.  
  
```
bool operator!==(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto set a sinistra dell'operatore è uguale all'oggetto set a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. Due oggetti set sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_eq.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 == s2 )  
      cout << "The sets s1 and s2 are equal." << endl;  
   else  
      cout << "The sets s1 and s2 are not equal." << endl;  
  
   if ( s1 == s3 )  
      cout << "The sets s1 and s3 are equal." << endl;  
   else  
      cout << "The sets s1 and s3 are not equal." << endl;  
}  
\* Output:   
The sets s1 and s2 are not equal.  
The sets s1 and s3 are equal.  
*\  
```  
  
##  <a name="op_gt"></a>  operator&gt; (set)  
 Verifica se l'oggetto set a sinistra dell'operatore è maggiore dell'oggetto set a destra.  
  
```
bool operator>(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto set a sinistra dell'operatore è maggiore dell'oggetto set a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. La relazione maggiore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_gt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 > s2 )  
      cout << "The set s1 is greater than the set s2." << endl;  
   else  
      cout << "The set s1 is not greater than the set s2." << endl;  
  
   if ( s1 > s3 )  
      cout << "The set s1 is greater than the set s3." << endl;  
   else  
      cout << "The set s1 is not greater than the set s3." << endl;  
}  
\* Output:   
The set s1 is not greater than the set s2.  
The set s1 is greater than the set s3.  
*\  
```  
  
##  <a name="op_gt_eq"></a>  operator&gt;= (set)  
 Verifica se l'oggetto set a sinistra dell'operatore è maggiore o uguale all'oggetto set a destra.  
  
```
bool operator!>=(const set <Key, Traits, Allocator>& left, const set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo **set**.  
  
 `right`  
 Oggetto di tipo **set**.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto set a sinistra dell'operatore è maggiore o uguale all'oggetto set a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti set si basa su un confronto a coppie dei rispettivi elementi. La relazione maggiore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// set_op_ge.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   set <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 >= s2 )  
      cout << "Set s1 is greater than or equal to set s2." << endl;  
   else  
      cout << "The set s1 is less than the set s2." << endl;  
  
   if ( s1 >= s3 )  
      cout << "Set s1 is greater than or equal to set s3." << endl;  
   else  
      cout << "The set s1 is less than the set s3." << endl;  
  
   if ( s1 >= s4 )  
      cout << "Set s1 is greater than or equal to set s4." << endl;  
   else  
      cout << "The set s1 is less than the set s4." << endl;  
}  
\* Output:   
The set s1 is less than the set s2.  
Set s1 is greater than or equal to set s3.  
Set s1 is greater than or equal to set s4.  
*\  
```  
  
##  <a name="op_neq_multiset"></a>  operator!= (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore non è uguale all'oggetto multiset a destra.  
  
```
bool operator!=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti set o multiset non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. Due oggetti multiset sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_ne.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 != s2 )  
      cout << "The multisets s1 and s2 are not equal." << endl;  
   else  
      cout << "The multisets s1 and s2 are equal." << endl;  
  
   if ( s1 != s3 )  
      cout << "The multisets s1 and s3 are not equal." << endl;  
   else  
      cout << "The multisets s1 and s3 are equal." << endl;  
}  
\* Output:   
The multisets s1 and s2 are not equal.  
The multisets s1 and s3 are equal.  
*\  
```  
  
##  <a name="op_lt_multiset"></a>  operator&lt; (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore è minore dell'oggetto multiset a destra.  
  
```
bool operator<(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto multiset a sinistra dell'operatore è rigorosamente minore dell'oggetto multiset a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. La relazione minore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_lt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 < s2 )  
      cout << "The multiset s1 is less than "  
           << "the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is not less than "  
           << "the multiset s2." << endl;  
  
   if ( s1 < s3 )  
      cout << "The multiset s1 is less than "  
           << "the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is not less than "  
           << "the multiset s3." << endl;  
}  
\* Output:   
The multiset s1 is less than the multiset s2.  
The multiset s1 is not less than the multiset s3.  
*\  
```  
  
##  <a name="op_lt_eq_multiset"></a>  operator&lt;= (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore è minore o uguale all'oggetto multiset a destra.  
  
```
bool operator!<=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto multiset a sinistra dell'operatore è minore o uguale all'oggetto multiset a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. La relazione minore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_le.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 <= s2 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s2." << endl;  
  
   if ( s1 <= s3 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s3." << endl;  
  
   if ( s1 <= s4 )  
      cout << "The multiset s1 is less than "  
           << "or equal to the multiset s4." << endl;  
   else  
      cout << "The multiset s1 is greater than "  
           << "the multiset s4." << endl;  
}  
\* Output:   
The multiset s1 is less than or equal to the multiset s2.  
The multiset s1 is greater than the multiset s3.  
The multiset s1 is less than or equal to the multiset s4.  
*\  
```  
  
##  <a name="op_eq_eq_multiset"></a>  operator== (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore è uguale all'oggetto multiset a destra.  
  
```
bool operator!==(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto multiset a sinistra dell'operatore è uguale all'oggetto multiset a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. Due oggetti multiset sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_eq.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i );  
   }  
  
   if ( s1 == s2 )  
      cout << "The multisets s1 and s2 are equal." << endl;  
   else  
      cout << "The multisets s1 and s2 are not equal." << endl;  
  
   if ( s1 == s3 )  
      cout << "The multisets s1 and s3 are equal." << endl;  
   else  
      cout << "The multisets s1 and s3 are not equal." << endl;  
}  
\* Output:   
The multisets s1 and s2 are not equal.  
The multisets s1 and s3 are equal.  
*\  
```  
  
##  <a name="op_gt_multiset"></a>  operator&gt; (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore è maggiore dell'oggetto multiset a destra.  
  
```
bool operator>(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto multiset a sinistra dell'operatore è maggiore dell'oggetto multiset a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. La relazione maggiore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_gt.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
   }  
  
   if ( s1 > s2 )  
      cout << "The multiset s1 is greater than "  
           << "the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is not greater "  
           << "than the multiset s2." << endl;  
  
   if ( s1 > s3 )  
      cout << "The multiset s1 is greater than "  
           << "the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is not greater than "  
           << "the multiset s3." << endl;  
}  
\* Output:   
The multiset s1 is not greater than the multiset s2.  
The multiset s1 is greater than the multiset s3.  
*\  
```  
  
##  <a name="op_gt_eq_multiset"></a>  operator&gt;= (multiset)  
 Verifica se l'oggetto multiset a sinistra dell'operatore è maggiore o uguale all'oggetto multiset a destra.  
  
```
bool operator!>=(const multiset <Key, Traits, Allocator>& left, const multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `multiset`.  
  
 `right`  
 Oggetto di tipo `multiset`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto multiset a sinistra dell'operatore è maggiore o uguale all'oggetto multiset a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti multiset si basa su un confronto a coppie dei rispettivi elementi. La relazione maggiore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// multiset_op_ge.cpp  
// compile with: /EHsc  
#include <set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   multiset <int> s1, s2, s3, s4;  
   int i;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      s1.insert ( i );  
      s2.insert ( i * i );  
      s3.insert ( i - 1 );  
      s4.insert ( i );  
   }  
  
   if ( s1 >= s2 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s2." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s2." << endl;  
  
   if ( s1 >= s3 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s3." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s3." << endl;  
  
   if ( s1 >= s4 )  
      cout << "The multiset s1 is greater than "  
           << "or equal to the multiset s4." << endl;  
   else  
      cout << "The multiset s1 is less than "  
           << "the multiset s4." << endl;  
}  
\* Output:   
The multiset s1 is less than the multiset s2.  
The multiset s1 is greater than or equal to the multiset s3.  
The multiset s1 is greater than or equal to the multiset s4.  
*\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<set>](../standard-library/set.md)




