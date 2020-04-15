---
title: Avviso del compilatore (livello 1) C4274
ms.date: 11/04/2016
f1_keywords:
- C4274
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
ms.openlocfilehash: 5d005fccc5920aea61698a65edf9284d56366a1d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377070"
---
# <a name="compiler-warning-level-1-c4274"></a>Avviso del compilatore (livello 1) C4274

\#ident ignorato; vedere la documentazione per #pragma comment(exestr, 'string')

La `#ident` direttiva, che inserisce una stringa specificata dall'utente nell'oggetto o nel file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.

> [!CAUTION]
> L'avviso C4274 consiglia di utilizzare la [direttiva #pragma comment(exestr, 'string').](../../preprocessor/comment-c-cpp.md) Tuttavia, questo avviso è deprecato e verrà rivisto in una versione futura del compilatore. Se si `#pragma` utilizza la direttiva , lo strumento del linker (LINK.exe) ignora il record di commento prodotto dalla direttiva e genera [l'avviso LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Anziché `#ident` la direttiva, è consigliabile usare una stringa di risorse della versione del file nell'applicazione.

## <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere `#ident "`la direttiva *string.* `"`

## <a name="see-also"></a>Vedere anche

[comment (C/C++)](../../preprocessor/comment-c-cpp.md)<br/>
[Avviso degli strumenti del linker LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)<br/>
[Uso di file di risorse](../../windows/working-with-resource-files.md)
