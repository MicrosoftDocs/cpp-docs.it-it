---
title: Errore del compilatore C3912
ms.date: 11/04/2016
f1_keywords:
- C3912
helpviewer_keywords:
- C3912
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
ms.openlocfilehash: bd66196c35715304577b8f6785261be8bdcdafec
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58773398"
---
# <a name="compiler-error-c3912"></a>Errore del compilatore C3912

'event': tipo di evento deve essere un tipo delegato

Un evento è stato dichiarato ma non è del tipo appropriato.

Per altre informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3912:

```
// C3912.cpp
// compile with: /clr
delegate void H();
ref class X {
   event int Ev;   // C3912
   event H^ Ev2;   // OK
};
```