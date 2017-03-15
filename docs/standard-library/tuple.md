---
title: '&lt;tuple&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <tuple>
dev_langs:
- C++
helpviewer_keywords:
- tuple header
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
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
translationtype: Machine Translation
ms.sourcegitcommit: 41b445ceeeb1f37ee9873cb55f62d30d480d8718
ms.openlocfilehash: 7771de57070961751e16294bc966e08843baef4c
ms.lasthandoff: 02/24/2017

---
# <a name="lttuplegt"></a>&lt;tuple&gt;
Definisce un modello `tuple` le cui istanze contengono oggetti di tipi diversi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <tuple>  
```  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[tuple](../standard-library/tuple-class.md)|Esegue il wrapping di una sequenza di elementi di lunghezza fissa.|  
|[Classe tuple_element](../standard-library/tuple-element-class-tuple.md)|Esegue il wrapping del tipo di un elemento `tuple`.|  
|[Classe tuple_size](../standard-library/tuple-size-class-tuple.md)|Esegue il wrapping del conteggio di elementi `tuple`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator==](../standard-library/tuple-operators.md#operator_eq_eq)|Confronto tra oggetti `tuple`, uguali|  
|[operator!=](../standard-library/tuple-operators.md#operator_neq)|Confronto tra oggetti `tuple`, non uguali|  
|[operator<](../standard-library/tuple-operators.md#operator_lt_)|Confronto tra oggetti `tuple`, minore di|  
|[operator<=](../standard-library/tuple-operators.md#operator_lt__eq)|Confronto tra oggetti `tuple`, minore o uguale a|  
|[operator>](../standard-library/tuple-operators.md#operator_gt_)|Confronto tra oggetti `tuple`, maggiore di|  
|[operator>=](../standard-library/tuple-operators.md#operator_gt__eq)|Confronto tra oggetti `tuple`, maggiore o uguale a|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[get](../standard-library/tuple-functions.md#get_function)|Ottiene un elemento da un oggetto `tuple`.|  
|[make_tuple](../standard-library/tuple-functions.md#make_tuple_function)|Genera un oggetto `tuple` da valori di elemento.|  
|[tie](../standard-library/tuple-functions.md#tie_function)|Genera un oggetto `tuple` da riferimenti di elemento.|  
  
## <a name="see-also"></a>Vedere anche  
 [\<array>](../standard-library/array.md)


