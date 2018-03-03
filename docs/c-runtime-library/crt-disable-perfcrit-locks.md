---
title: _CRT_DISABLE_PERFCRIT_LOCKS | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _CRT_DISABLE_PERFCRIT_LOCKS
- CRT_DISABLE_PERFCRIT_LOCKS
dev_langs:
- C++
helpviewer_keywords:
- CRT_DISABLE_PERFCRIT_LOCKS constant
- _CRT_DISABLE_PERFCRIT_LOCKS constant
ms.assetid: 36cc2d86-cdb1-4b2b-a03c-c0d3818e7c6f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 07962266c94743968ff407aa5be78f66e189f6aa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crtdisableperfcritlocks"></a>_CRT_DISABLE_PERFCRIT_LOCKS
Disabilita il blocco con particolari requisiti di prestazioni nelle operazioni di I/O.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#define _CRT_DISABLE_PERFCRIT_LOCKS  
```  
  
## <a name="remarks"></a>Note  
 La definizione di questo simbolo può migliorare le prestazioni dei programmi con vincoli di I/O a thread singolo forzando tutte le operazioni di I/O ad assumere un modello di I/O a thread singolo. Per altre informazioni, vedere [Prestazioni librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)