---
description: 'Altre informazioni su: errore del compilatore C2598'
title: Errore del compilatore C2598
ms.date: 11/04/2016
f1_keywords:
- C2598
helpviewer_keywords:
- C2598
ms.assetid: 40777c62-39ba-441e-b081-f49f94b43547
ms.openlocfilehash: 9ba2a37ee3acb841b340449e9a922ed98e3c9d24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120087"
---
# <a name="compiler-error-c2598"></a>Errore del compilatore C2598

la specifica del collegamento deve essere in ambito globale

L'identificatore di collegamento viene dichiarato nell'ambito locale.

L'esempio seguente genera l'C2598:

```cpp
// C2598.cpp
// compile with: /c
void func() {
   extern "C" int func2();   // C2598
}

extern "C" int func( int i );
```
