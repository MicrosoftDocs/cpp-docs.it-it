---
title: Errore del compilatore C3665
ms.date: 11/04/2016
f1_keywords:
- C3665
helpviewer_keywords:
- C3665
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
ms.openlocfilehash: 40de7a7b1ede5e6dbbc20d2128b782c0ad6f798b
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781029"
---
# <a name="compiler-error-c3665"></a>Errore del compilatore C3665

'distruttore': identificatore 'keyword' non consentito in un distruttore/finalizzatore di override

È stata usata una parola chiave che non è consentito in un distruttore o un finalizzatore.

Ad esempio, un nuovo slot non può essere richiesto in un distruttore o un finalizzatore.  Per altre informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

L'esempio seguente genera l'errore C3665:

```
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