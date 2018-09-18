---
title: Compilatore avviso (livello 4) C4001 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4001
dev_langs:
- C++
helpviewer_keywords:
- C4001
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c325656b9e61ee324a3b9f171413f1020440f9ab
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025412"
---
# <a name="compiler-warning-level-4-c4001"></a>Compilatore avviso (livello 4) C4001

è stata usata l'estensione non standard 'commento a riga singola'

> [!NOTE]
> Questo avviso è stata rimossa in Visual Studio 2017 versione 15.5 poiché i commenti a riga singola sono standard C99.

I commenti a riga singola sono in C++ standard e in C a partire da C99.
In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), i file C che contengono commenti a riga singola, generare C4001 a causa dell'utilizzo di un'estensione non standard. Poiché i commenti a riga singola sono standard in C++, i file C che contiene i commenti a riga singola non producono C4001 durante la compilazione con estensioni Microsoft (/Ze).

## <a name="example"></a>Esempio

Per disabilitare l'avviso, rimuovere il commento [#pragma warning(disable:4001)](../../preprocessor/warning.md).

```
// C4001.cpp
// compile with: /W4 /Za /TC
// #pragma warning(disable:4001)
int main()
{
   // single-line comment in main
   // C4001
}
```