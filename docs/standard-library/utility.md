---
title: '&lt;utility&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <utility>
- utility/std::<utility>
- std.<utility>
- std::<utility>
dev_langs:
- C++
helpviewer_keywords:
- utility header
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
caps.latest.revision: 18
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
ms.openlocfilehash: 67792e92a4a8336c025249a5d1322d00360a62c5
ms.lasthandoff: 02/24/2017

---
# <a name="ltutilitygt"></a>&lt;utility&gt;
Definisce i tipi, le funzioni e gli operatori della libreria standard C++ che semplificano la costruzione e la gestione di coppie di oggetti, utili quando è necessario considerare due oggetti come se fossero uno solo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <utility>  
  
```  
  
## <a name="remarks"></a>Note  
 Le coppie sono ampiamente usate nella libreria standard C++. Sono necessarie sia come argomenti e valori restituiti per diverse funzioni sia come tipi di elemento per contenitori quali la [classe map](../standard-library/map-class.md) e la [classe multimap](../standard-library/multimap-class.md). L'intestazione \<utility> viene inclusa automaticamente da \<map> per semplificare la gestione dei rispettivi elementi di tipi coppia chiave/valore.  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[tuple_element](../standard-library/tuple-element-class-tuple.md)|Classe che esegue il wrapping del tipo di un elemento `pair`.|  
|[tuple_size](../standard-library/tuple-size-class-tuple.md)|Classe che esegue il wrapping di un conteggio di elementi `pair`.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[forward](../standard-library/utility-functions.md#forward)|Impedisce che il tipo di riferimento (`lvalue` o `rvalue`) dell'argomento venga nascosto dall'inoltro perfetto.|  
|[get](../standard-library/utility-functions.md#get)|Funzione che ottiene un elemento da un oggetto `pair`.|  
|[make_pair](../standard-library/utility-functions.md#make_pair)|Funzione di supporto del modello usata per costruire oggetti di tipo `pair`, in cui i tipi di componenti sono basati sui tipi di dati passati come parametri.|  
|[move](../standard-library/utility-functions.md#move)|Restituisce l'argomento passato sotto forma di riferimento `rvalue`.|  
|[swap](../standard-library/utility-functions.md#swap)|Scambia gli elementi di due oggetti `pair`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator!=](../standard-library/utility-operators.md#operator_neq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|  
|[operator==](../standard-library/utility-operators.md#operator_eq_eq)|Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.|  
|[operator<](../standard-library/utility-operators.md#operator_lt_)|Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.|  
|[operator\<=](../standard-library/utility-operators.md#operator_lt__eq)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|  
|[operator>](../standard-library/utility-operators.md#operator_gt_)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.|  
|[operator>=](../standard-library/utility-operators.md#operator_gt__eq)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.|  
  
### <a name="structs"></a>Struct  
  
|||  
|-|-|  
|[identity](../standard-library/identity-structure.md)||  
|[pair](../standard-library/pair-structure.md)|Tipo che permette di considerare due oggetti come un singolo oggetto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)




