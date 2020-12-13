---
description: 'Altre informazioni su: errore del compilatore C3665'
title: Errore del compilatore C3665
ms.date: 11/04/2016
f1_keywords:
- C3665
helpviewer_keywords:
- C3665
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
ms.openlocfilehash: 3a4585361fa2ffab4835fafd47778a5c591bb001
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134277"
---
# <a name="compiler-error-c3665"></a>Errore del compilatore C3665

' distruttore ': identificatore di override ' keyword ' non consentito in un distruttore/finalizzatore

È stata usata una parola chiave non consentita su un distruttore o un finalizzatore.

Ad esempio, non è possibile richiedere un nuovo slot su un distruttore o un finalizzatore.  Per altre informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

L'esempio seguente genera l'C3665:

```cpp
// C3665.cpp
// compile with: /clr
public ref struct R {
   virtual ~R() { }
   virtual void a() { }
};

public ref struct S : R {
   virtual ~S() new {}   // C3665
   virtual void a() new {}   // OK
};
```
