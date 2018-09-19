---
title: Errore del compilatore C3270 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3270
dev_langs:
- C++
helpviewer_keywords:
- C3270
ms.assetid: 70e6e76b-7415-48f5-a61e-2ed50caf08e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9c421ee1efa56e7f7e9a9444bafa15d392a78ae3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053492"
---
# <a name="compiler-error-c3270"></a>Errore del compilatore C3270

'campo': l'attributo FieldOffset può essere utilizzato solo nel contesto di StructLayout(Explicit); in questo caso è necessario

Un campo è stato contrassegnato con **FieldOffset**, che è consentito solo quando **StructLayout (Explicit)** è attiva.

L'esempio seguente genera l'errore C3270:

```
// C3270_2.cpp
// compile with: /clr /c
using namespace System::Runtime::InteropServices;

[ StructLayout(LayoutKind::Sequential) ]
// try the following line instead
// [ StructLayout(LayoutKind::Explicit) ]
public value struct MYUNION
{
   [FieldOffset(0)] int a;   // C3270
   // ...
};
```
