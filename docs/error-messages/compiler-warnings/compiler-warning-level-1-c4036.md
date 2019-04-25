---
title: Avviso del compilatore (livello 1) C4036
ms.date: 11/04/2016
f1_keywords:
- C4036
helpviewer_keywords:
- C4036
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
ms.openlocfilehash: 632e88bb64568c97e937e83e177598054a954f22
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62151786"
---
# <a name="compiler-warning-level-1-c4036"></a>Avviso del compilatore (livello 1) C4036

'type' senza nome come parametro effettivo

Non è stato specificato alcun nome di tipo per una struttura, unione, enumerazione o classe usata come parametro effettivo. Se si usa [/Zg](../../build/reference/zg-generate-function-prototypes.md) per generare prototipi di funzione, il compilatore genera questo avviso e imposta come commento il parametro formale nel prototipo generato.

Per risolvere il problema, specificare un nome di tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4036.

```
// C4036.c
// compile with: /Zg /W1
// D9035 expected
typedef struct { int i; } T;
void f(T* t) {}   // C4036

// OK
typedef struct MyStruct { int i; } T2;
void f2(T2 * t) {}
```