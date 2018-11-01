---
title: Errore del compilatore C3183
ms.date: 11/04/2016
f1_keywords:
- C3183
helpviewer_keywords:
- C3183
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
ms.openlocfilehash: 232e9999bc31ac3e01833e7982acfb03e9d0afaf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50497239"
---
# <a name="compiler-error-c3183"></a>Errore del compilatore C3183

impossibile definire una classe, uno struct o un'unione senza nome all'interno del tipo gestito o WinRT 'type'

Un tipo incorporato in un tipo gestito o WinRT deve essere denominato.

L'esempio seguente genera l'errore C3183:

```
// C3183a.cpp
// compile with: /clr /c
ref class Test
{
   ref class
   {  // C3183, delete class or name it
      int a;
      int b;
   };
};
```
