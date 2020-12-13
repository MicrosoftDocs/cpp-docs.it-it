---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4255'
title: Avviso del compilatore (livello 4) C4255
ms.date: 11/04/2016
f1_keywords:
- C4255
helpviewer_keywords:
- C4255
ms.assetid: 2087b635-4b4c-4182-8a01-c26770d2bb88
ms.openlocfilehash: 31c5a121c944a65a0a5c3cd13d3e6201c3ad43a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339169"
---
# <a name="compiler-warning-level-4-c4255"></a>Avviso del compilatore (livello 4) C4255

' Function ': nessun prototipo di funzione fornito: conversione di ' ()' in ' (void)'

Il compilatore non ha trovato un elenco esplicito di argomenti per una funzione. Questo avviso è solo per il compilatore C.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4255:

```c
// C4255.c
// compile with: /W4 /WX
#pragma warning (default : 4255)

void f()  { // C4255
// try the following line instead
//void f(void) {
}

int main(int argc, char *argv[]) {
   f();
}
```
