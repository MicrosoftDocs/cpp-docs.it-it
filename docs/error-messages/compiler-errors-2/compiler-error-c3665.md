---
title: Errore del compilatore C3665 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3665
dev_langs:
- C++
helpviewer_keywords:
- C3665
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16d7f64bebfda41a958edf9759359bc38352c086
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025256"
---
# <a name="compiler-error-c3665"></a>Errore del compilatore C3665

'distruttore': identificatore 'keyword' non consentito in un distruttore/finalizzatore di override

È stata usata una parola chiave che non è consentito in un distruttore o un finalizzatore.

Ad esempio, un nuovo slot non può essere richiesto in un distruttore o un finalizzatore.  Per altre informazioni, vedere [override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

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