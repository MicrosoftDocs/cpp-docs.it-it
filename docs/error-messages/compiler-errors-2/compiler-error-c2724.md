---
title: Errore del compilatore C2724
ms.date: 11/04/2016
f1_keywords:
- C2724
helpviewer_keywords:
- C2724
ms.assetid: 4e4664bc-8c96-4156-b79f-03436f532ea8
ms.openlocfilehash: 3014a12767cb9a73dc65852c544b7ac9574b9a52
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383061"
---
# <a name="compiler-error-c2724"></a>Errore del compilatore C2724

'identifier': non utilizzare 'static' le funzioni membro definite in ambito file

Funzioni membro statiche devono essere dichiarate con collegamento esterno.

L'esempio seguente genera l'errore C2724:

```
// C2724.cpp
class C {
   static void func();
};

static void C::func(){};   // C2724
// try the following line instead
// void C::func(){};
```