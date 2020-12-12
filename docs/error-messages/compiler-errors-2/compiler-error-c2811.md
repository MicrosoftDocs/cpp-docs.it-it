---
description: 'Altre informazioni su: errore del compilatore C2811'
title: Errore del compilatore C2811
ms.date: 11/04/2016
f1_keywords:
- C2811
helpviewer_keywords:
- C2811
ms.assetid: 6a44b18e-44c1-49d8-9b99-e0545b9a6e7d
ms.openlocfilehash: 02b4770b08bdfc9ee15386874ebba2265716536d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194852"
---
# <a name="compiler-error-c2811"></a>Errore del compilatore C2811

' tipo1': non è possibile ereditare da' tipo2', una classe di riferimento può ereditare solo da una classe di riferimento o una classe di interfaccia

Si è provato a usare una classe non gestita come classe di base per una classe gestita.

L'esempio seguente genera l'C2811:

```cpp
// C2811.cpp
// compile with: /clr /c
struct S{};
ref struct T {};
ref class C : public S {};   // C2811
ref class D : public T {};   // OK
```
