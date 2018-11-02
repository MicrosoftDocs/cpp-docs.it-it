---
title: Errore del compilatore C2842
ms.date: 11/04/2016
f1_keywords:
- C2842
helpviewer_keywords:
- C2842
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
ms.openlocfilehash: 2ec39768a88da049c6a31ca2a9de226e25479c99
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571470"
---
# <a name="compiler-error-c2842"></a>Errore del compilatore C2842

'class': un tipo gestito o WinRT non può definire il proprio 'operator new' o 'operator delete'

È possibile definire il proprio * * operatore new o **operatore delete** per gestire l'allocazione di memoria nell'heap nativo. Tuttavia, le classi di riferimento non possono definire questi operatori perché vengono allocati esclusivamente nell'heap gestito.

Per altre informazioni, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2842.

```
// C2842.cpp
// compile with: /clr /c
ref class G {
   void* operator new( size_t nSize );   // C2842
};
```
