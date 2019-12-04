---
title: Errore del compilatore C2695
ms.date: 11/04/2016
f1_keywords:
- C2695
helpviewer_keywords:
- C2695
ms.assetid: 3f6f2091-c38b-40ea-ab6c-f1846f5702d7
ms.openlocfilehash: 6d46699a2036c4f45daf3c34802ddb6b44e554ff
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755213"
---
# <a name="compiler-error-c2695"></a>Errore del compilatore C2695

' funzione1': la funzione virtuale che esegue l'override differisce da' funzione2' solo dalla convenzione di chiamata

La firma di una funzione in una classe derivata non può eseguire l'override di una funzione in una classe di base e modificare la convenzione di chiamata.

L'esempio seguente genera l'C2695:

```cpp
// C2695.cpp
class C {
   virtual void __fastcall func();
};

class D : public C {
   virtual void __clrcall func();   // C2695
};
```
