---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4002'
title: Avviso del compilatore (livello 1) C4002
ms.date: 11/04/2016
f1_keywords:
- C4002
helpviewer_keywords:
- C4002
ms.assetid: 6bda1dfe-e2e4-4771-9794-5a404c466dd5
ms.openlocfilehash: 5a0150c10e6a80604b97528dcedfc15b2cf4d0e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336000"
---
# <a name="compiler-warning-level-1-c4002"></a>Avviso del compilatore (livello 1) C4002

troppi parametri effettivi per la macro 'identifier'

Il numero di parametri effettivi nella macro supera il numero di parametri formali nella definizione della stessa. Il preprocessore raccoglie i parametri supplementari, ma li ignora durante l'espansione della macro.

L'errore C4002 può verificarsi quando si usa [Variadic Macros](../../preprocessor/variadic-macros.md)in modo non corretto.

L'esempio seguente genera l'errore C4002:

```cpp
// C4002.cpp
// compile with: /W1
#define test(a) (a)

int main() {
   int a = 1;
   int b = 2;
   a = test(a,b);   // C4002
   // try..
   a = test(a);
}
```

Questo errore può verificarsi anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: non sono più accettate virgole aggiuntive nella macro.

Il compilatore non accetta più virgole aggiuntive in una macro. Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rimuovere le virgole aggiuntive.

```cpp
// C4002b.cpp
// compile with: /W1
#define F(x,y)
int main()
{
   F(2,,,,,,3,,,,,,)   // C4002
   // Try the following line instead:
   // F(2,3)
}
```
