---
title: Compilatore (livello 1) Avviso C4274 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-csharp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4274
dev_langs:
- C++
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: fbba1e6dde180e77afe7ed8960849ee8cc0fd108
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4274"></a>Compilatore (livello 1) Avviso C4274
\#Ident ignorato. vedere la documentazione di #pragma comment (exestr, 'string')  
  
 Il `#ident` direttiva, che inserisce una stringa specificata dall'utente nell'oggetto o file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.  
  
> [!CAUTION]
>  Avviso C4274 consiglia di utilizzare il [#pragma comment (exestr, 'string')](../../preprocessor/comment-c-cpp.md) (direttiva). Tuttavia, questo consiglio è deprecato e verrà modificato in una versione futura del compilatore. Se si utilizza il `#pragma` direttiva, lo strumento del linker (LINK.exe) ignora il record di commento prodotto dalla direttiva e genera l'avviso [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Anziché il `#ident` direttiva, è consigliabile utilizzare una stringa di risorsa versione file nell'applicazione.  
  
## <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere il `#ident "` *stringa* `"` (direttiva).  
  
## <a name="see-also"></a>Vedere anche  
 [comment (C/C++)](../../preprocessor/comment-c-cpp.md)   
 [Strumenti del linker LNK4229 di avviso](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)   
 [Utilizzo dei file di risorse](../../windows/working-with-resource-files.md)
