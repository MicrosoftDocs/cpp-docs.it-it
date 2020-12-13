---
description: 'Altre informazioni su: errore del compilatore C3910'
title: Errore del compilatore C3910
ms.date: 11/04/2016
f1_keywords:
- C3910
helpviewer_keywords:
- C3910
ms.assetid: cfcbe620-b463-463b-95ea-2d60ad33ebb5
ms.openlocfilehash: 802aac0d27e230920a906b96afc78100296c75de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144144"
---
# <a name="compiler-error-c3910"></a>Errore del compilatore C3910

' Event ': deve definire il membro ' Method '

Un evento è stato definito, ma non contiene il metodo della funzione di accesso obbligatorio specificato.

Per ulteriori informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

L'esempio seguente genera l'C3910:

```cpp
// C3910.cpp
// compile with: /clr /c
delegate void H();
ref class X {
   event H^ E {
      // uncomment the following lines
      // void add(H^) {}
      // void remove( H^ h ) {}
      // void raise( ) {}
   };   // C3910

   event H^ E2; // OK data member
};
```
