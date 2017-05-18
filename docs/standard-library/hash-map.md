---
title: '&lt;hash_map&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.<hash_map>
- <hash_map>
- std::<hash_map>
dev_langs:
- C++
helpviewer_keywords:
- hash_map header
ms.assetid: 0765708a-a668-42a2-9800-654c857bdcc2
caps.latest.revision: 27
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: a1c256df1182c00c1b6045923ba9975f02c9bfa2
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="lthashmapgt"></a>&lt;hash_map&gt;
> [!NOTE]
>  Questa intestazione è obsoleta. L'alternativa è [<unordered_map>](../standard-library/unordered-map.md).  
  
 Definisce le classi del modello del contenitore hash_map e hash_multimap e i relativi modelli di supporto.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione <hash_map> e <hash_set> non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <hash_map>  
  
```  
  
### <a name="operators"></a>Operatori  
  
|Versione hash_map|Versione hash_multimap|Descrizione|  
|-----------------------|----------------------------|-----------------|  
|[operator!= (hash_map)](../standard-library/hash-map-operators.md#op_neq)|`operator!= (hash_multimap)`|Verifica se l'oggetto hash_map o hash_multimap a sinistra dell'operatore non è uguale all'oggetto hash_map o hash_multimap a destra.|  
|[operator== (hash_map)](../standard-library/hash-map-operators.md#op_eq_eq)|`operator== (hash_multimap)`|Verifica se l'oggetto hash_map o hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_map o hash_multimap a destra.|  
  
### <a name="specialized-template-functions"></a>Funzioni di modello specializzate  
  
|Versione hash_map|Versione hash_multimap|Descrizione|  
|-----------------------|----------------------------|-----------------|  
|[swap (hash_map)](../standard-library/hash-map-class.md#swap)|[swap (hash_multimap)](../standard-library/hash-multimap-class.md#swap)|Scambia gli elementi di due oggetti hash_map o hash_multimap.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe hash_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash_map, hash_multimap, hash_set o hash_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.|  
|[Classe value_compare](../standard-library/value-compare-class.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto hash_map comparando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto hash_map.|  
|[Classe hash_map](../standard-library/hash-map-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia che ha una chiave di ordinamento con valore univoco e un valore di dati associato.|  
|[Classe hash_multimap](../standard-library/hash-multimap-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia con una chiave di ordinamento il cui valore non deve essere univoco e un valore di dati associato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<hash_map>  
  
 **Spazio dei nomi:** stdext  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




