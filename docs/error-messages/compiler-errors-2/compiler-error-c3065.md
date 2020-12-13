---
description: 'Altre informazioni su: errore del compilatore C3065'
title: Errore del compilatore C3065
ms.date: 11/04/2016
f1_keywords:
- C3065
helpviewer_keywords:
- C3065
ms.assetid: e7a0bc69-1c68-459e-a7c4-93c65609ff7c
ms.openlocfilehash: 9c3c2ef0d788a193f2f2d61bf76e7672d1deda87
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341152"
---
# <a name="compiler-error-c3065"></a>Errore del compilatore C3065

la dichiarazione di proprietà in ambito non di classe non è consentita

Il modificatore __declspec della [proprietà](../../cpp/property-cpp.md) è stato usato al di fuori di una classe.  Una proprietà può essere dichiarata solo all'interno di una classe.

L'esempio seguente genera l'errore C3065:

```cpp
// C3065.cpp
// compile with: /c
__declspec(property(get=get_i)) int i;   // C3065

class x {
public:
   __declspec(property(get=get_i)) int i;   // OK
};
```
