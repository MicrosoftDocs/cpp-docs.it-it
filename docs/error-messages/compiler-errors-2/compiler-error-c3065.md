---
title: Errore del compilatore C3065
ms.date: 11/04/2016
f1_keywords:
- C3065
helpviewer_keywords:
- C3065
ms.assetid: e7a0bc69-1c68-459e-a7c4-93c65609ff7c
ms.openlocfilehash: e12f6e318d51ecaccc7c29e1e01d1aedcaac937e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404214"
---
# <a name="compiler-error-c3065"></a>Errore del compilatore C3065

la dichiarazione di proprietà in ambito non di classe non è consentita

Il modificatore __declspec della [proprietà](../../cpp/property-cpp.md) è stato usato al di fuori di una classe.  Una proprietà può essere dichiarata solo all'interno di una classe.

L'esempio seguente genera l'errore C3065:

```
// C3065.cpp
// compile with: /c
__declspec(property(get=get_i)) int i;   // C3065

class x {
public:
   __declspec(property(get=get_i)) int i;   // OK
};
```