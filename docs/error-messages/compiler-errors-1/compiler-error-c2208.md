---
description: 'Altre informazioni su: errore del compilatore C2208'
title: Errore del compilatore C2208
ms.date: 11/04/2016
f1_keywords:
- C2208
helpviewer_keywords:
- C2208
ms.assetid: 9ae704bc-bf70-45f1-8e47-0470f21edd4e
ms.openlocfilehash: 76452c504e5f90857b15c5fc9250923705d3d20c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245642"
---
# <a name="compiler-error-c2208"></a>Errore del compilatore C2208

' type ': nessun membro definito utilizzando questo tipo

Un identificatore che risolve in un nome di tipo si trova in una dichiarazione di aggregazione, ma il compilatore non può dichiarare un membro.

L'esempio seguente genera l'C2208:

```cpp
// C2208.cpp
class C {
   C;   // C2208
   C(){}   // OK
};
```
