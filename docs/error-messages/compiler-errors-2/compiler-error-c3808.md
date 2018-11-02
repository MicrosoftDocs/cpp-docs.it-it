---
title: Errore del compilatore C3808
ms.date: 11/04/2016
f1_keywords:
- C3808
helpviewer_keywords:
- C3808
ms.assetid: 2ee8ac97-3ea4-417a-8710-be73a7f98cf4
ms.openlocfilehash: 0a1b0b82241c6e48d2c1941ff8122697d11492eb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587733"
---
# <a name="compiler-error-c3808"></a>Errore del compilatore C3808

> «*tipo*': una classe con l'attributo ComImport non può definire membro '*membro*', solo abstract o dllimport funzioni consentite

## <a name="remarks"></a>Note

Un tipo da cui deriva <xref:System.Runtime.InteropServices.ComImportAttribute> non è possibile definire *membro*.

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

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