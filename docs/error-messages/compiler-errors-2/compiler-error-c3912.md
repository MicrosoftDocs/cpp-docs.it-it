---
description: 'Altre informazioni su: errore del compilatore C3912'
title: Errore del compilatore C3912
ms.date: 11/04/2016
f1_keywords:
- C3912
helpviewer_keywords:
- C3912
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
ms.openlocfilehash: 5c7828fa055aff08ea57759bdf3ee9b9677cc0f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144066"
---
# <a name="compiler-error-c3912"></a>Errore del compilatore C3912

' Event ': il tipo di evento deve essere un tipo delegato

Un evento è stato dichiarato ma non è del tipo appropriato.

Per ulteriori informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

L'esempio seguente genera l'C3912:

```cpp
// C3912.cpp
// compile with: /clr
delegate void H();
ref class X {
   event int Ev;   // C3912
   event H^ Ev2;   // OK
};
```
