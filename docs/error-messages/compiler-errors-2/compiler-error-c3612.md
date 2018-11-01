---
title: Errore del compilatore C3612
ms.date: 11/04/2016
f1_keywords:
- C3612
helpviewer_keywords:
- C3612
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
ms.openlocfilehash: a6084632ac0a84cc058ea73eb3c2b632208792eb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475933"
---
# <a name="compiler-error-c3612"></a>Errore del compilatore C3612

'type': una classe sealed non può essere astratta

I tipi definiti tramite `value` sono sealed per impostazione predefinita, e una classe è astratta, a meno che non implementa tutti i metodi della relativa base. Una classe astratta sealed non può essere una classe di base né può essere creata.

Per altre informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3612:

```
// C3612.cpp
// compile with: /clr /c
value struct V: public System::ICloneable {};   // C3612

// OK
value struct V2: public System::ICloneable {
   Object^ Clone();
};
```