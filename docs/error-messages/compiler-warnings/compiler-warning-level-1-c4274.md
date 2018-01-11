---
title: Compilatore (livello 1) Avviso C4274 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4274
dev_langs: C++
helpviewer_keywords: C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4519258a10937ad96528f34484a44d398a0cd0ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4274"></a>Compilatore (livello 1) Avviso C4274
\#Ident ignorato. vedere la documentazione di #pragma comment (exestr, 'string')  
  
 Il `#ident` direttiva, che inserisce una stringa specificata dall'utente nell'oggetto o file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.  
  
> [!CAUTION]
>  Avviso C4274 consiglia di utilizzare il [#pragma comment (exestr, 'string')](../../preprocessor/comment-c-cpp.md) direttiva. Tuttavia, questa raccomandazione è deprecata e verrà modificata in una versione futura del compilatore. Se si utilizza il `#pragma` direttiva, lo strumento linker (LINK.exe) ignora il record di commento prodotto dalla direttiva e genera l'avviso [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Anziché il `#ident` direttiva, è consigliabile utilizzare una stringa di risorsa di versione di file nell'applicazione.  
  
## <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere il `#ident "` *stringa* `"` direttiva.  
  
## <a name="see-also"></a>Vedere anche  
 [commento (C/C++)](../../preprocessor/comment-c-cpp.md)   
 [Strumenti del linker LNK4229 avviso](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)   
 [Uso di file di risorse](../../windows/working-with-resource-files.md)