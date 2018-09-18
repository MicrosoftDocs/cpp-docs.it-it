---
title: Avviso del compilatore C4439 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4439
dev_langs:
- C++
helpviewer_keywords:
- C4439
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 646b057f3f25bec8b686b08d50f0e473542ddcfc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076112"
---
# <a name="compiler-warning-c4439"></a>Avviso del compilatore C4439

'function': definizione di funzione con un tipo gestito nella firma deve avere un clrcall convenzione di chiamata

Il compilatore ha sostituito in modo implicito una convenzione di chiamata con [clrcall](../../cpp/clrcall.md). Per risolvere questo problema, rimuovere il `__cdecl` o `__stdcall` convenzione di chiamata.

C4439 viene sempre generato come errore. È possibile disattivare questo avviso con il `#pragma warning` oppure **/wd**; vedere [avviso](../../preprocessor/warning.md) o [/w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md)per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4439.

```
// C4439.cpp
// compile with: /clr
void __stdcall f( System::String^ arg ) {}   // C4439
void __clrcall f2( System::String^ arg ) {}   // OK
void f3( System::String^ arg ) {}   // OK
```