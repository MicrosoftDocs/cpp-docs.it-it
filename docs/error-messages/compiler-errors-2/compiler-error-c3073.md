---
title: Errore del compilatore C3073
ms.date: 11/04/2016
f1_keywords:
- C3073
helpviewer_keywords:
- C3073
ms.assetid: b24b9b8b-f9fb-4c3c-a1a0-97fad2081bfc
ms.openlocfilehash: 8a4a2011124056af7064c8241450e1f3613776a9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580869"
---
# <a name="compiler-error-c3073"></a>Errore del compilatore C3073

'type': classe di riferimento dispone di un costruttore di copia definito dall'utente

In un [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) compilazione, il compilatore non genererà un costruttore di copia per un tipo riferimento. In una qualsiasi **/clr** compilazione, è necessario definire il proprio costruttore di copia per un tipo riferimento se si prevede che un'istanza del tipo deve essere copiato.

Per altre informazioni, vedere [semantica dello Stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3073.

```
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