---
title: Errore del compilatore C2695
ms.date: 11/04/2016
f1_keywords:
- C2695
helpviewer_keywords:
- C2695
ms.assetid: 3f6f2091-c38b-40ea-ab6c-f1846f5702d7
ms.openlocfilehash: 08f74bf635324ed9a05c13ecf532862d58e4f0b1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368188"
---
# <a name="compiler-error-c2695"></a>Errore del compilatore C2695

'function1': funzione virtual in override differisce da 'function2' solo per la convenzione di chiamata

La firma di una funzione in una classe derivata non può eseguire l'override di una funzione in una classe di base e modificare la convenzione di chiamata.

L'esempio seguente genera l'errore C2695:

```
// C2695.cpp
class C {
   virtual void __fastcall func();
};

class D : public C {
   virtual void __clrcall func();   // C2695
};
```