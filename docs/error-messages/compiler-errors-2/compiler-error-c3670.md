---
title: Errore del compilatore C3670 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3670
dev_langs:
- C++
helpviewer_keywords:
- C3670
ms.assetid: d0fa9c6e-8f90-48c7-9066-31b4fa5942eb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1129a25e628710121d667a44022eec5a0450b092
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115333"
---
# <a name="compiler-error-c3670"></a>Errore del compilatore C3670

'override': Impossibile eseguire l'override di metodo di classe di base inaccessibile 'method'

Override può avvenire solo su una funzione il cui livello di accesso lo rende disponibile in un tipo derivato. Per altre informazioni, vedere [esegue l'override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3670:

```
// C3670.cpp
// compile with: /clr /c
public ref class C {
// Uncomment the following line to resolve.
// public:
   virtual void g() { }
};

public ref class D : public C {
public:
   virtual void f() new sealed = C::g {};   // C3670
};
```