---
description: 'Altre informazioni su: errore del compilatore C3722'
title: Errore del compilatore C3722
ms.date: 11/04/2016
f1_keywords:
- C3722
helpviewer_keywords:
- C3722
ms.assetid: 3cb28363-5eff-4548-bd0d-d5c615846353
ms.openlocfilehash: 6f24a480f4488ebb910921afe88fe03f54e957b6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239025"
---
# <a name="compiler-error-c3722"></a>Errore del compilatore C3722

evento generico non consentito

Il compilatore consente solo classi, struct e funzioni generiche.  Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md).

L'esempio seguente genera l'C3722:

```cpp
// C3722.cpp
// compile with: /clr
generic <typename T>
public delegate void MyEventHandler(System::Object^ sender, System::EventArgs^ e, T optional);

generic <class T>
public ref struct MyButton {
   generic<typename U>
   event MyEventHandler<U>^ Click;   // C3722
};
```
