---
title: Errore del compilatore C3808 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3808
dev_langs:
- C++
helpviewer_keywords:
- C3808
ms.assetid: 2ee8ac97-3ea4-417a-8710-be73a7f98cf4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40668b8b2cc1a1f85b0ad4a7ef63d89956e922b3
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34705205"
---
# <a name="compiler-error-c3808"></a>Errore del compilatore C3808

> '*tipo*': una classe con l'attributo ComImport non può definire membri '*membro*', solo abstract o dllimport funzioni sono consentite

## <a name="remarks"></a>Note

Un tipo che deriva da <xref:System.Runtime.InteropServices.ComImportAttribute> non è possibile definire *membro*.

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3808.

```cpp
// C3808.cpp
// compile with: /c /clr:pure user32.lib
using namespace System::Runtime::InteropServices;

[System::Runtime::InteropServices::ComImportAttribute()]
ref struct S1 {
   int f() {}   // C3808
   virtual int g() abstract;   // OK

   [DllImport("msvcrt.dll")]
   int printf(System::String ^, int i);   // OK
};
```