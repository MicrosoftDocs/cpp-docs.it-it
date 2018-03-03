---
title: Utilizzo di atexit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- atexit
dev_langs:
- C++
helpviewer_keywords:
- atexit function
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7aec0e5aedb2d17e7d22b4f480eaef2be26413fe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-atexit"></a>Utilizzo di atexit
Con il [atexit](../c-runtime-library/reference/atexit.md) funzione, è possibile specificare una funzione di elaborazione uscita che viene eseguita prima della chiusura del programma. Nessun oggetto statico globale inizializzato prima della chiamata a `atexit` viene eliminato prima dell'esecuzione della funzione di elaborazione uscita.  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)