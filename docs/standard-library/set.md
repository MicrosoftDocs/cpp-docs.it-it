---
title: '&lt;set&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: <set>
dev_langs: C++
helpviewer_keywords: set header
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c56eec9249f073f27b063778df460ef7347a6e7b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltsetgt"></a>&lt;set&gt;
Definisce le classi modello del contenitore set e multiset e i rispettivi modelli di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <set>  
  
```  
  
## <a name="members"></a>Membri  
  
### <a name="operators"></a>Operatori  
  
|Versione set|Versione multiset|Descrizione|  
|-----------------|----------------------|-----------------|  
|[operator!= (set)](../standard-library/set-operators.md#op_neq)|[operator!= (multiset)](../standard-library/set-operators.md#op_neq)|Verifica se l'oggetto set o multiset a sinistra dell'operatore non è uguale all'oggetto set o multiset a destra.|  
|[operator< (set)](../standard-library/set-operators.md#op_lt)|[operator< (multiset)](../standard-library/set-operators.md#op_lt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore dell'oggetto set o multiset a destra.|  
|[operator<= (set)](../standard-library/set-operators.md#op_lt_eq)|[operator\<= (multiset)](../standard-library/set-operators.md#op_lt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore o uguale all'oggetto set o multiset a destra.|  
|[operator== (set)](../standard-library/set-operators.md#op_eq_eq)|[operator== (multiset)](../standard-library/set-operators.md#op_eq_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è uguale all'oggetto set o multiset a destra.|  
|[operator> (set)](../standard-library/set-operators.md#op_gt)|[operator> (multiset)](../standard-library/set-operators.md#op_gt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore dell'oggetto set o multiset a destra.|  
|[operator>= (set)](../standard-library/set-operators.md#op_gt_eq)|[operator>= (multiset)](../standard-library/set-operators.md#op_gt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore o uguale all'oggetto set o multiset a destra.|  
  
### <a name="specialized-template-functions"></a>Funzioni di modello specializzate  
  
|Versione set|Versione multiset|Descrizione|  
|-----------------|----------------------|-----------------|  
|[swap](../standard-library/set-functions.md#swap)|[swap (multiset)](../standard-library/set-functions.md#swap_multiset)|Scambia gli elementi di due set o multiset.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe set](../standard-library/set-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|  
|[Classe multiset](../standard-library/multiset-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti devono essere univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



