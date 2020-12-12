---
description: 'Altre informazioni su: errore del compilatore C3073'
title: Errore del compilatore C3073
ms.date: 11/04/2016
f1_keywords:
- C3073
helpviewer_keywords:
- C3073
ms.assetid: b24b9b8b-f9fb-4c3c-a1a0-97fad2081bfc
ms.openlocfilehash: e26938d6c708c364bb2447b793abf7d51adb5779
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320247"
---
# <a name="compiler-error-c3073"></a>Errore del compilatore C3073

' type ': la classe di riferimento non ha un costruttore di copia definito dall'utente

In una compilazione [/CLR (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) , il compilatore non genererà un costruttore di copia per un tipo di riferimento. In qualsiasi compilazione **/CLR** è necessario definire un costruttore di copia personalizzato per un tipo riferimento se si prevede che un'istanza del tipo venga copiata.

Per ulteriori informazioni, vedere [semantica dello stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3073.

```cpp
// C3073.cpp
// compile with: /clr
ref class R {
public:
   R(int) {}
};

ref class S {
public:
   S(int) {}
   S(const S %rhs) {}   // copy constructor
};

void f(R) {}
void f2(S) {}
void f3(R%){}

int main() {
   R r(1);
   f(r);   // C3073
   f3(r);   // OK

   S s(1);
   f2(s);   // OK
}
```
