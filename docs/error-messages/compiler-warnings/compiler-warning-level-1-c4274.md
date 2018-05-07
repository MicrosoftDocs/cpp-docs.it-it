---
title: Compilatore (livello 1) Avviso C4274 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4274
dev_langs:
- C++
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 39b941fc0cb32e268e33d3b0e1ae66079e8decaf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
 [Strumenti del linker LNK4229 di avviso](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)   
 [Uso di file di risorse](../../windows/working-with-resource-files.md)