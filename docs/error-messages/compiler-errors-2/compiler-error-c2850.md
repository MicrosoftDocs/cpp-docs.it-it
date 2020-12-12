---
description: 'Altre informazioni su: errore del compilatore C2850'
title: Errore del compilatore C2850
ms.date: 11/04/2016
f1_keywords:
- C2850
helpviewer_keywords:
- C2850
ms.assetid: f3efe86c-4168-4e76-a133-3f8314c69f51
ms.openlocfilehash: 820aa0e12db5ffe7e6d7b7bf0e87282f53e8477c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260163"
---
# <a name="compiler-error-c2850"></a>Errore del compilatore C2850

' construct ': consentito solo nell'ambito del file. non può trovarsi in un costrutto annidato

I costrutti, ad esempio alcuni pragma, possono essere visualizzati solo in ambito globale.

L'esempio seguente genera l'C2850:

```cpp
// C2850.cpp
// compile with: /c /Yc
// try the following line instead
// #pragma hdrstop
namespace X {
   #pragma hdrstop   // C2850
};
```
