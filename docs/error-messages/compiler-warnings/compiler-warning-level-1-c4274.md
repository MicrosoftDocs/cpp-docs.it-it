---
title: Avviso del compilatore (livello 1) C4274
ms.date: 11/04/2016
f1_keywords:
- C4274
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
ms.openlocfilehash: 5f2350f275f883e7bf18aa1621d08b34132e8dfb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175846"
---
# <a name="compiler-warning-level-1-c4274"></a>Avviso del compilatore (livello 1) C4274

\#ident ignorato; vedere la documentazione per #pragma commento (exestr,' String ')

La direttiva `#ident`, che inserisce una stringa specificata dall'utente nell'oggetto o nel file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.

> [!CAUTION]
>  Avviso C4274 consiglia di usare la direttiva [comment #pragma (exestr,' String ')](../../preprocessor/comment-c-cpp.md) . Tuttavia, questo Consiglio è deprecato e verrà rivisto in una versione futura del compilatore. Se si utilizza la direttiva `#pragma`, lo strumento Linker (LINK. exe) ignora il record di commento prodotto dalla direttiva e genera un avviso [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Invece di `#ident` direttiva, è consigliabile usare una stringa di risorsa della versione del file nell'applicazione.

## <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere la `#ident "`*stringa*`"` direttiva.

## <a name="see-also"></a>Vedere anche

[comment (C/C++)](../../preprocessor/comment-c-cpp.md)<br/>
[Avviso degli strumenti del linker LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)<br/>
[Uso di file di risorse](../../windows/working-with-resource-files.md)
