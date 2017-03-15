---
title: '&lt;map&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::<map>
- std.<map>
- <map>
dev_langs:
- C++
helpviewer_keywords:
- map header
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: fad398e9f18c2f45de7e071be464e3eff2e9243e
ms.lasthandoff: 02/24/2017

---
# <a name="ltmapgt"></a>&lt;map&gt;
Definisce le classi del modello del contenitore map e multimap e i relativi modelli di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <map>  
  
```  
  
## <a name="members"></a>Membri  
  
### <a name="operators"></a>Operatori  
  
|Versione map|Versione multimap|Descrizione|  
|-----------------|----------------------|-----------------|  
|[operator!= (map)](../standard-library/map-operators.md#operator_neq)|[operator!= (multimap)](../standard-library/map-operators.md#operator_neq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore non è uguale all'oggetto map o multimap a destra.|  
|[operator< (map)](../standard-library/map-operators.md#operator_eq_eq)|[operator< (multimap)](../standard-library/map-operators.md#operator_eq_eq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore dell'oggetto map o multimap a destra.|  
|[operator<= (map)](../standard-library/map-operators.md#operator_lt_)|[operator\<= (multimap)](../standard-library/map-operators.md#operator_lt_)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è minore o uguale all'oggetto map o multimap a destra.|  
|[operator== (map)](../standard-library/map-operators.md#operator_lt__eq)|[operator== (multimap)](../standard-library/map-operators.md#operator_lt__eq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è uguale all'oggetto map o multimap a destra.|  
|[operator> (map)](../standard-library/map-operators.md#operator_gt_)|[operator> (multimap)](../standard-library/map-operators.md#operator_gt_)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore dell'oggetto map o multimap a destra.|  
|[operator>= (map)](../standard-library/map-operators.md#operator_gt__eq)|[operator>= (multimap)](../standard-library/map-operators.md#operator_gt__eq)|Verifica se l'oggetto map o multimap a sinistra dell'operatore è maggiore o uguale all'oggetto map o multimap a destra.|  
  
### <a name="specialized-template-functions"></a>Funzioni di modello specializzate  
  
|Versione map|Versione multimap|Descrizione|  
|-----------------|----------------------|-----------------|  
|[swap (map)](../standard-library/map-functions.md#swap)|[swap (multimap)](../standard-library/map-functions.md#swap)|Scambia gli elementi di due oggetti map o multimap.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe value_compare](../standard-library/value-compare-class-map.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.|  
|[Classe map](../standard-library/map-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati.|  
|[Classe multimap](../standard-library/multimap-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui ciascuno degli elementi presenta una chiave univoca in base alla quale i dati vengono automaticamente ordinati e le chiavi non necessitano di valori univoci.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




