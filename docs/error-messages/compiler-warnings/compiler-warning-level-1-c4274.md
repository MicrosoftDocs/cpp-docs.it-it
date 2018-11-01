---
title: Compilatore Warning (level 1) C4274
ms.date: 11/04/2016
f1_keywords:
- C4274
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
ms.openlocfilehash: dcdf804ac6e02d2bb161751db054d7f1f62ddbb5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50564593"
---
# <a name="compiler-warning-level-1-c4274"></a>Compilatore Warning (level 1) C4274

\#Ident ignorato. vedere la documentazione di #pragma comment (exestr, 'string')

Il `#ident` direttiva, che inserisce una stringa specificata dall'utente nell'oggetto o file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.

> [!CAUTION]
>  Avviso C4274 è possibile usare la [#pragma comment (exestr, 'string')](../../preprocessor/comment-c-cpp.md) direttiva. Tuttavia, questa raccomandazione è deprecata e verrà modificata in una versione futura del compilatore. Se si usa la `#pragma` direttive, lo strumento linker (LINK.exe) ignora i record di commento prodotto dalla direttiva e genera l'avviso [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Anziché il `#ident` direttiva, è consigliabile usare una stringa di risorsa di versione di file nell'applicazione.

## <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il `#ident "` *stringa* `"` direttiva.

## <a name="see-also"></a>Vedere anche

[comment (C/C++)](../../preprocessor/comment-c-cpp.md)<br/>
[Avviso degli strumenti del linker LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)<br/>
[Uso di file di risorse](../../windows/working-with-resource-files.md)