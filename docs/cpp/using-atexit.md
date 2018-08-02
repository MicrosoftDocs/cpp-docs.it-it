---
title: Utilizzo di atexit | Microsoft Docs
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
ms.openlocfilehash: f4acd81a5420f9fe2685e7570f26fea61691b845
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39467404"
---
# <a name="using-atexit"></a>Utilizzo di atexit
Con il [atexit](../c-runtime-library/reference/atexit.md) (funzione), è possibile specificare una funzione di elaborazione uscita che viene eseguita prima della chiusura del programma. Nessun oggetto statico globale inizializzato prima della chiamata a **atexit** vengono eliminati definitivamente prima dell'esecuzione della funzione di elaborazione uscita.  
  
## <a name="see-also"></a>Vedere anche  
 [Altre considerazioni di terminazione](../cpp/additional-termination-considerations.md)