---
description: 'Altre informazioni su: errore del compilatore C2800'
title: Errore del compilatore C2800
ms.date: 11/04/2016
f1_keywords:
- C2800
helpviewer_keywords:
- C2800
ms.assetid: a2f1a590-9fe6-44cb-ad09-b4505ef47c6a
ms.openlocfilehash: 7adcb8e24bd7b3f3941260a9cceaa5157334ae8d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297505"
---
# <a name="compiler-error-c2800"></a>Errore del compilatore C2800

non è possibile eseguire l'overload di ' operator Operator '

Non è possibile eseguire l'overload degli operatori seguenti: accesso ai membri `.` di classe (), puntatore a membro ( `.*` ), risoluzione dell'ambito ( `::` ), espressione condizionale ( `? :` ) e **`sizeof`** .

L'esempio seguente genera l'C2800:

```cpp
// C2800.cpp
// compile with: /c
class C {
   operator:: ();   // C2800
};
```
