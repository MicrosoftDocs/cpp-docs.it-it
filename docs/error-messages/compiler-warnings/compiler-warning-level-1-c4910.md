---
title: Compilatore avviso (livello 1) C4910 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9f758e2e15d5492724e9b819622202831d4e9f5d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910
'\<identificatore >': 'dllexport' e 'extern' sono incompatibili in un'istanza esplicita  
  
 La creazione dell'istanza di modello esplicita denominata  *\<identificatore >* viene modificata da entrambe le `__declspec(dllexport)` e `extern` parole chiave. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Creare un'istanza esplicita](../../cpp/explicit-instantiation.md)   
 [dllexport, dllimport](../../cpp/dllexport-dllimport.md)   
 [Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)