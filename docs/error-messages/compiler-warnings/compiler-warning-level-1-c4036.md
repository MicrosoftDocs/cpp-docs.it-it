---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4036'
title: Avviso del compilatore (livello 1) C4036
ms.date: 11/04/2016
f1_keywords:
- C4036
helpviewer_keywords:
- C4036
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
ms.openlocfilehash: 6547cd068b39ff3db54829dfc20fb47a52113e2a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318923"
---
# <a name="compiler-warning-level-1-c4036"></a>Avviso del compilatore (livello 1) C4036

'type' senza nome come parametro effettivo

Non è stato specificato alcun nome di tipo per una struttura, unione, enumerazione o classe usata come parametro effettivo. Se si usa [/Zg](../../build/reference/zg-generate-function-prototypes.md) per generare prototipi di funzione, il compilatore genera questo avviso e imposta come commento il parametro formale nel prototipo generato.

Per risolvere il problema, specificare un nome di tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4036.

```c
// C4036.c
// compile with: /Zg /W1
// D9035 expected
typedef struct { int i; } T;
void f(T* t) {}   // C4036

// OK
typedef struct MyStruct { int i; } T2;
void f2(T2 * t) {}
```
