---
title: Errore del compilatore C3535
ms.date: 11/04/2016
f1_keywords:
- C3535
helpviewer_keywords:
- C3535
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
ms.openlocfilehash: e80fa62db9795838980c63e113300a554afabef3
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040861"
---
# <a name="compiler-error-c3535"></a>Errore del compilatore C3535

non è possibile dedurre il tipo per 'type1' da 'type2'

Il tipo della variabile dichiarata dal `auto` parola chiave non può essere dedotto dal tipo dell'espressione di inizializzazione. Ad esempio, questo errore si verifica se l'espressione di inizializzazione viene valutata `void`, che non è un tipo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che il tipo dell'espressione di inizializzazione non `void`.

1. Assicurarsi che la dichiarazione non è un puntatore a un tipo fondamentale. Per altre informazioni, vedere [tipi fondamentali](../../cpp/fundamental-types-cpp.md).

1. Assicurarsi che se la dichiarazione è un puntatore a un tipo, l'espressione di inizializzazione è un tipo di puntatore.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3535 poiché restituisce l'espressione di inizializzazione `void`.

```
// C3535a.cpp
// Compile with /Zc:auto
void f(){}
int main()
{
   auto x = f();   //C3535
   return 0;
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3535 perché l'istruzione dichiara una variabile `x` come puntatore a un tipo dedotto, ma il tipo dell'inizializzatore di espressione è double. Di conseguenza, il compilatore non è possibile dedurre il tipo della variabile.

```
// C3535b.cpp
// Compile with /Zc:auto
int main()
{
   auto* x = 123.0;   // C3535
   return 0;
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3535 poiché variabile `p` dichiara un puntatore a un tipo dedotto, ma l'espressione di inizializzazione non è un tipo di puntatore.

```
// C3535c.cpp
// Compile with /Zc:auto
class A { };
A x;
auto *p = x;  // C3535
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-keyword.md)<br/>
[Tipi fondamentali](../../cpp/fundamental-types-cpp.md)