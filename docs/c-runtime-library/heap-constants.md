---
title: Costanti heap | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _HEAPBADPTR
- _HEAPEMPTY
- _HEAPBADBEGIN
- _HEAPOK
- _HEAPBADNODE
- _HEAPEND
dev_langs: C++
helpviewer_keywords:
- _HEAPOK constants
- _HEAPEND constants
- HEAPBADBEGIN constants
- _HEAPBADNODE constants
- HEAPBADNODE constants
- HEAPBADPTR constants
- _HEAPEMPTY constants
- HEAPEND constants
- HEAPOK constants
- HEAPEMPTY constants
- _HEAPBADBEGIN constants
- _HEAPBADPTR constants
- heap constants
ms.assetid: 3f751bb9-2dc4-486f-b5f5-9061c96d3754
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e2e1a15b371aa4f2997d453e2543123b279ac0df
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="heap-constants"></a>Constanti heap
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <malloc.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Queste costanti forniscono il valore restituito che indica lo stato dell'heap.  
  
|Costante|Significato|  
|--------------|-------------|  
|`_HEAPBADBEGIN`|Le informazioni di intestazione iniziali non sono state trovate o non erano valide.|  
|`_HEAPBADNODE`|È stato trovato un nodo non valido o l'heap è danneggiato.|  
|`_HEAPBADPTR`|Il campo **_pentry** della struttura **_HEAPINFO** non contiene un puntatore valido nell'heap (solo routine `_heapwalk`).|  
|`_HEAPEMPTY`|L'heap non è stato inizializzato.|  
|`_HEAPEND`|Fine dell'heap raggiunta correttamente (solo routine `_heapwalk`).|  
|`_HEAPOK`|L'heap è coerente (solo routine `_heapset` e `_heapchk`). Nessun errore fino a questo punto; la struttura **_HEAPINFO** contiene informazioni sulla voce seguente (solo routine `_heapwalk`).|  
  
## <a name="see-also"></a>Vedere anche  
 [_heapchk](../c-runtime-library/reference/heapchk.md)   
 [_heapset](../c-runtime-library/heapset.md)   
 [_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)