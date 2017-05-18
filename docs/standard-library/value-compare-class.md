---
title: Classe value_compare | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- value_compare
dev_langs:
- C++
helpviewer_keywords:
- value_compare class
ms.assetid: c306c5b9-3505-4357-aa6b-216451b951ed
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 646d30d5e85c985896ee0380cac9c1630cb2ffbf
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="valuecompare-class"></a>Classe value_compare
Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto hash_map comparando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto hash_map.  
  
## <a name="syntax"></a>Sintassi  
  
```
class value_compare
 : std::public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(
    const value_type& left,
    const value_type& right) const
 {
    return (comp(left.first, right.first));

 }
protected:
    value_compare(const key_compare& c) : comp (c) { }
    key_compare comp;
};
```  
  
## <a name="remarks"></a>Note  
 I criteri di confronto forniti dalla classe value_compare tra oggetti **value_types** di elementi interi in un oggetto hash_map derivano da un confronto tra le chiavi degli elementi rispettivi mediante la costruzione della classe ausiliaria. L'operatore della funzione membro usa l'oggetto **comp** di tipo `key_compare` memorizzato nell'oggetto funzione fornito da value_compare per confrontare i componenti della chiave di ordinamento di due elementi.  
  
 Per hash_set e hash_multiset, che sono semplici contenitori in cui i valori delle chiavi sono identici ai valori degli elementi, value_compare equivale a `key_compare`. Questo non si applica per gli oggetti di tipo hash_map e hash_multimap, poiché il valore degli elementi di tipo `pair` non è identico al valore della chiave dell'elemento.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo ad [hash_map::value_comp](../standard-library/hash-map-class.md#value_comp) per indicazioni su come dichiarare e usare la classe value_compare.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<hash_map>  
  
 **Spazio dei nomi:** stdext  
  
## <a name="see-also"></a>Vedere anche  
 [Struct binary_function](../standard-library/binary-function-struct.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




