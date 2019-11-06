---
title: Avviso del compilatore C4439
ms.date: 11/04/2016
f1_keywords:
- C4439
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
ms.openlocfilehash: 7cab2e55fca640438051fbb79ac933e83d5f3cbb
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73623661"
---
# <a name="compiler-warning-c4439"></a>Avviso del compilatore C4439

' Function ': la definizione di funzione con un tipo gestito nella firma deve avere una convenzione di chiamata clrcall

Il compilatore ha sostituito in modo implicito una convenzione di chiamata con [clrcall](../../cpp/clrcall.md). Per risolvere il problema, rimuovere la convenzione di chiamata `__cdecl` o `__stdcall`.

C4439 viene sempre emesso come un errore. È possibile disattivare questo avviso con il `#pragma warning` o **/WD.** ; Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4439.

```cpp
// C4439.cpp
// compile with: /clr
void __stdcall f( System::String^ arg ) {}   // C4439
void __clrcall f2( System::String^ arg ) {}   // OK
void f3( System::String^ arg ) {}   // OK
```