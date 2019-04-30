---
title: Errore del compilatore C2800
ms.date: 11/04/2016
f1_keywords:
- C2800
helpviewer_keywords:
- C2800
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
ms.openlocfilehash: e893866a28c124e9e6cbc9663a488f89ac2d291b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408550"
---
# <a name="compiler-error-c2800"></a>Errore del compilatore C2800

Impossibile eseguire l'overload 'operator operator'

Impossibile eseguire l'overload di operatori seguenti: accesso a membro di classe (`.`), puntatore a membro (`.*`), risoluzione dell'ambito (`::`), espressione condizionale (`? :`), e `sizeof`.

L'esempio seguente genera l'errore C2800:

```
// C2800.cpp
// compile with: /c
class C {
   operator:: ();   // C2800
};
```