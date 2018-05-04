---
title: Utilizzo di atexit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- atexit
dev_langs:
- C++
helpviewer_keywords:
- atexit function
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1bb0c89c34b5107326a961e874289d20cbd2385c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="using-atexit"></a>Utilizzo di atexit
Con il [atexit](../c-runtime-library/reference/atexit.md) funzione, è possibile specificare una funzione di elaborazione uscita che viene eseguita prima della chiusura del programma. Nessun oggetto statico globale inizializzato prima della chiamata a `atexit` viene eliminato prima dell'esecuzione della funzione di elaborazione uscita.  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)