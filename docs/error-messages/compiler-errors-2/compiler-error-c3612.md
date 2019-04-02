---
title: Errore del compilatore C3612
ms.date: 11/04/2016
f1_keywords:
- C3612
helpviewer_keywords:
- C3612
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
ms.openlocfilehash: ab18381d3f263e3207662e1667ac5c835983412f
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781406"
---
# <a name="compiler-error-c3612"></a>Errore del compilatore C3612

'type': una classe sealed non può essere astratta

I tipi definiti tramite `value` sono sealed per impostazione predefinita, e una classe è astratta, a meno che non implementa tutti i metodi della relativa base. Una classe astratta sealed non può essere una classe di base né può essere creata.

Per altre informazioni, vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md).

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