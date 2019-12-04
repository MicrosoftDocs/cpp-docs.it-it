---
title: Errore del compilatore C3618
ms.date: 11/04/2016
f1_keywords:
- C3618
helpviewer_keywords:
- C3618
ms.assetid: cacc105d-4389-4cb8-ae6c-41a3622e9a86
ms.openlocfilehash: 6f0edf1addf753054fbc50a1591b5b1a37394087
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759724"
---
# <a name="compiler-error-c3618"></a>Errore del compilatore C3618

' Function ': Impossibile definire un metodo contrassegnato DllImport

Un metodo contrassegnato con <xref:System.Runtime.InteropServices.DllImportAttribute> viene definito nell'oggetto specificato. DLL.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3618.

```cpp
// C3618.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[ DllImport("user32.dll", EntryPoint="MessageBox", CharSet=CharSet::Ansi) ]  // CHANGED
void Func();

void Func() {}   // C3618, remove this function definition to resolve
```
