---
description: 'Altre informazioni su: errore del compilatore C3618'
title: Errore del compilatore C3618
ms.date: 11/04/2016
f1_keywords:
- C3618
helpviewer_keywords:
- C3618
ms.assetid: cacc105d-4389-4cb8-ae6c-41a3622e9a86
ms.openlocfilehash: 09e1a2a77410cc7836c00a3dd11cf5ed36553273
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223074"
---
# <a name="compiler-error-c3618"></a>Errore del compilatore C3618

' Function ': Impossibile definire un metodo contrassegnato DllImport

Un metodo contrassegnato con <xref:System.Runtime.InteropServices.DllImportAttribute> viene definito nel specified.DLL.

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
