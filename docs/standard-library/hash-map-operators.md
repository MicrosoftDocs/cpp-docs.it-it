---
title: Operatori &lt;hash_map&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- hash_map/std::operator!=
- hash_map/std::operator==
dev_langs: C++
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
caps.latest.revision: "13"
manager: ghogen
ms.openlocfilehash: 5322bdb23a40cb5ffea74a6c772245bdf8cdb05a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lthashmapgt-operators"></a>Operatori &lt;hash_map&gt;
|||  
|-|-|  
|[operator!=](#op_neq)|[operator!= (multimap)](#op_neq_mm)|
|[operator==](#op_eq_eq)|[operator== (multimap)](#op_eq_eq_mm)|
  
##  <a name="op_neq"></a>  operator!=  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).  
  
 Verifica se l'oggetto hash_map a sinistra dell'operatore non è uguale all'oggetto hash_map a destra.  
  
```  
bool operator!=(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `hash_map`.  
  
 `right`  
 Oggetto di tipo `hash_map`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti hash_map non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti hash_map si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_map sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
 I membri del [< hash_map >](hash-map.md) e [< hash_set >](hash-set.md) file di intestazione nel [ stdext Namespace](stdext-namespace.md).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// hash_map_op_ne.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_map <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 != hm2 )  
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm2 are equal." << endl;  
  
   if ( hm1 != hm3 )  
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm3 are equal." << endl;  
}  
```  
  
```Output  
The hash_maps hm1 and hm2 are not equal.  
The hash_maps hm1 and hm3 are equal.  
```  
  
##  <a name="op_eq_eq"></a>  operator== 
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).  
  
 Verifica se l'oggetto hash_map a sinistra dell'operatore è uguale all'oggetto hash_map a destra.  
  
```  
bool operator==(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `hash_map`.  
  
 `right`  
 Oggetto di tipo `hash_map`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto hash_map a sinistra dell'operatore è uguale all'oggetto hash_map a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti hash_map si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_map sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
    
### <a name="example"></a>Esempio  
  
```cpp  
// hash_map_op_eq.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_map <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 == hm2 )  
      cout << "The hash_maps hm1 and hm2 are equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;  
  
   if ( hm1 == hm3 )  
      cout << "The hash_maps hm1 and hm3 are equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;  
}  
```  
  
```Output  
The hash_maps hm1 and hm2 are not equal.  
The hash_maps hm1 and hm3 are equal.  
```  
  
##  <a name="op_neq_mm"></a>operatore! = (hash_multimap) 
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).  
  
 Verifica se l'oggetto hash_multimap a sinistra dell'operatore non è uguale all'oggetto hash_multimap a destra.  
  
```  
bool operator!=(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `hash_multimap`.  
  
 `right`  
 Oggetto di tipo `hash_multimap`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti hash_multimap non sono uguali; **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti hash_multimap si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multimap sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
   
### <a name="example"></a>Esempio  
  
```cpp  
// hash_multimap_op_ne.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_multimap <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 != hm2 )  
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;  
  
   if ( hm1 != hm3 )  
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;  
}  
```  
  
```Output  
The hash_multimaps hm1 and hm2 are not equal.  
The hash_multimaps hm1 and hm3 are equal.  
```  
  
##  <a name="op_eq_eq_mm"></a>operatore = = (hash_multimap)
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).  
  
 Verifica se l'oggetto hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_multimap a destra.  
  
```  
bool operator==(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `left`  
 Oggetto di tipo `hash_multimap`.  
  
 `right`  
 Oggetto di tipo `hash_multimap`.  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_multimap a destra; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto tra gli oggetti hash_multimap si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multimap sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// hash_multimap_op_eq.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_multimap<int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair<int, int> Int_Pair;  
  
   for (i = 0; i < 3; i++)  
   {  
      hm1.insert(Int_Pair(i, i));  
      hm2.insert(Int_Pair(i, i*i));  
      hm3.insert(Int_Pair(i, i));  
   }  
  
   if ( hm1 == hm2 )  
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;  
  
   if ( hm1 == hm3 )  
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;  
}  
```  
  
```Output  
The hash_multimaps hm1 and hm2 are not equal.  
The hash_multimaps hm1 and hm3 are equal.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [<hash_map>](hash-map.md)

