---
description: 'Altre informazioni su: errore del compilatore C3612'
title: Errore del compilatore C3612
ms.date: 11/04/2016
f1_keywords:
- C3612
helpviewer_keywords:
- C3612
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
ms.openlocfilehash: 332d4bae940a0c98b148fd6ba951a4f51d1bee27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223100"
---
# <a name="compiler-error-c3612"></a>Errore del compilatore C3612

' type ': una classe sealed non può essere astratta

I tipi definiti tramite `value` sono sealed per impostazione predefinita e una classe è astratta, a meno che non implementi tutti i metodi della relativa base. Una classe astratta sealed non può essere una classe base né può essere creata un'istanza.

Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3612:

```cpp
// C3612.cpp
// compile with: /clr /c
value struct V: public System::ICloneable {};   // C3612

// OK
value struct V2: public System::ICloneable {
   Object^ Clone();
};
```
