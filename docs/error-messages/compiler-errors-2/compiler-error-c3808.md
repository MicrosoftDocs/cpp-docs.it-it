---
description: 'Altre informazioni su: errore del compilatore C3808'
title: Errore del compilatore C3808
ms.date: 11/04/2016
f1_keywords:
- C3808
helpviewer_keywords:
- C3808
ms.assetid: 2ee8ac97-3ea4-417a-8710-be73a7f98cf4
ms.openlocfilehash: e5d31e884de0b04caba7c52e8d6abc01b3d21a35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315153"
---
# <a name="compiler-error-c3808"></a>Errore del compilatore C3808

> '*Type*': una classe con l'attributo ComImport non può definire il membro '*member*'. sono consentite solo le funzioni abstract o dllimport

## <a name="remarks"></a>Commenti

Un tipo che deriva da <xref:System.Runtime.InteropServices.ComImportAttribute> non può definire il *membro*.

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3808.

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
