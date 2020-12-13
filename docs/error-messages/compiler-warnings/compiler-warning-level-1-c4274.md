---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4274'
title: Avviso del compilatore (livello 1) C4274
ms.date: 11/04/2016
f1_keywords:
- C4274
helpviewer_keywords:
- C4274
ms.assetid: 5a948680-7ed1-469f-978d-ae99d154e161
ms.openlocfilehash: aa1f6d3b07c7d788d9e47955c4bb51930522b7a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340099"
---
# <a name="compiler-warning-level-1-c4274"></a>Avviso del compilatore (livello 1) C4274

\#ident ignorato; vedere la documentazione per #pragma commento (exestr,' String ')

La `#ident` direttiva, che inserisce una stringa specificata dall'utente nell'oggetto o nel file eseguibile, è deprecata. Di conseguenza, il compilatore ignora la direttiva.

> [!CAUTION]
> Avviso C4274 consiglia di usare la direttiva [comment #pragma (exestr,' String ')](../../preprocessor/comment-c-cpp.md) . Tuttavia, questo Consiglio è deprecato e verrà rivisto in una versione futura del compilatore. Se si usa la `#pragma` direttiva, lo strumento Linker (LINK.exe) ignora il record di commento prodotto dalla direttiva e genera un avviso [LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md). Anziché la `#ident` direttiva, è consigliabile usare una stringa di risorsa della versione del file nell'applicazione.

## <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere la `#ident "` direttiva di *stringa* `"` .

## <a name="see-also"></a>Vedi anche

[comment (C/C++)](../../preprocessor/comment-c-cpp.md)<br/>
[Avviso degli strumenti del linker LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)<br/>
[Uso di file di risorse](../../windows/working-with-resource-files.md)
