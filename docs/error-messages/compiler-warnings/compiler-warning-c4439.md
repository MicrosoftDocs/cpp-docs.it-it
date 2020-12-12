---
description: 'Altre informazioni su: avviso del compilatore C4439'
title: Avviso del compilatore C4439
ms.date: 11/04/2016
f1_keywords:
- C4439
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
ms.openlocfilehash: 123f42ca495faeccc995dc1ac87572180d1dce70
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180747"
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
