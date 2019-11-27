---
title: Avviso del compilatore (livello 4) C4001
ms.date: 11/04/2016
f1_keywords:
- C4001
helpviewer_keywords:
- C4001
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
ms.openlocfilehash: fc4ae55c5d25719e930a7435e0f9bf3ee2071a21
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541633"
---
# <a name="compiler-warning-level-4-c4001"></a>Avviso del compilatore (livello 4) C4001

è stata usata l'estensione non standard ' commento a riga singola '

> [!NOTE]
> Questo avviso è stato rimosso in Visual Studio 2017 versione 15,5 perché i commenti a riga singola sono standard in C99.

I commenti a riga singola sono standard C++ in e standard in C a partire da C99.
In Strict ANSI Compatibility ([/za](../../build/reference/za-ze-disable-language-extensions.md)), i file C che contengono commenti a riga singola generano C4001 a causa dell'utilizzo di un'estensione non standard. Poiché i commenti a riga singola sono standard C++in, i file C contenenti commenti a riga singola non producono C4001 durante la compilazione con le estensioni Microsoft (/Ze).

## <a name="example"></a>Esempio

Per disabilitare l'avviso, rimuovere il commento [#pragma avviso (Disable: 4001)](../../preprocessor/warning.md).

```cpp
// C4001.cpp
// compile with: /W4 /Za /TC
// #pragma warning(disable:4001)
int main()
{
   // single-line comment in main
   // C4001
}
```