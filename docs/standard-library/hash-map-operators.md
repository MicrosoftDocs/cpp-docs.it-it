---
title: Operatori &lt;hash_map&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
caps.latest.revision: 13
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 6960d7dfc3a6f36f803ae765ad4cbeb77038401c
ms.lasthandoff: 02/24/2017

---
# <a name="lthashmapgt-operators"></a>Operatori &lt;hash_map&gt;
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator!= (hash_map)](#operator_neq__hash_map_)|[operator==](#operator_eq_eq)|  
|[operator== (hash_map)](#operator_eq_eq__hash_map_)|  
  
##  <a name="operator_neq__hash_map_"></a>  operator!= (hash_map)  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).  
  
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
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
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
  
##  <a name="operator_eq_eq__hash_map_"></a>  operator== (hash_map)  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).  
  
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
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
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
  
##  <a name="operator_neq"></a>  operator!=  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).  
  
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
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
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
  
##  <a name="operator_eq_eq"></a>  operator==  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).  
  
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
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
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
 [<hash_map>](../standard-library/hash-map.md)


