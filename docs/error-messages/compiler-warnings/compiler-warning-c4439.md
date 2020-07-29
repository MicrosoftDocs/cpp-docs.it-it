---
title: Avviso del compilatore C4439
ms.date: 11/04/2016
f1_keywords:
- C4439
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
ms.openlocfilehash: baf74733c94fdb03f130d2300d0918845cc4de4c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223330"
---
# <a name="compiler-warning-c4439"></a>Avviso del compilatore C4439

' Function ': la definizione di funzione con un tipo gestito nella firma deve avere una convenzione di chiamata __clrcall

Il compilatore ha sostituito in modo implicito una convenzione di chiamata con [`__clrcall`](../../cpp/clrcall.md) . Per risolvere il problema, rimuovere la **`__cdecl`** **`__stdcall`** convenzione di chiamata o.

C4439 viene sempre emesso come un errore. È possibile disattivare questo avviso con `#pragma warning` o **`/wd`** . per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4439.

```cpp
// C4439.cpp
// compile with: /clr
void __stdcall f( System::String^ arg ) {}   // C4439
void __clrcall f2( System::String^ arg ) {}   // OK
void f3( System::String^ arg ) {}   // OK
```
