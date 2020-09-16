---
title: Errore del compilatore C3535
ms.date: 11/04/2016
f1_keywords:
- C3535
helpviewer_keywords:
- C3535
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
ms.openlocfilehash: 673fe6a8b5eb6dfcd9caa841b18d5b47fb7858bf
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686090"
---
# <a name="compiler-error-c3535"></a>Errore del compilatore C3535

non è possibile dedurre il tipo per ' tipo1' da' tipo2'

Il tipo della variabile dichiarata dalla **`auto`** parola chiave non può essere dedotto dal tipo dell'espressione di inizializzazione. Questo errore si verifica, ad esempio, se l'espressione di inizializzazione restituisce **`void`** , che non è un tipo.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che il tipo dell'espressione di inizializzazione non sia **`void`** .

1. Assicurarsi che la dichiarazione non sia un puntatore a un tipo fondamentale. Per altre informazioni, vedere [tipi fondamentali](../../cpp/fundamental-types-cpp.md).

1. Assicurarsi che se la dichiarazione è un puntatore a un tipo, l'espressione di inizializzazione è un tipo di puntatore.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene restituito C3535 perché l'espressione di inizializzazione restituisce **`void`** .

```cpp
// C3535a.cpp
// Compile with /Zc:auto
void f(){}
int main()
{
   auto x = f();   //C3535
   return 0;
}
```

Nell'esempio seguente viene restituito C3535 perché l'istruzione dichiara una variabile `x` come puntatore a un tipo dedotto, ma il tipo dell'espressione dell'inizializzatore è Double. Di conseguenza, il compilatore non può dedurre il tipo della variabile.

```cpp
// C3535b.cpp
// Compile with /Zc:auto
int main()
{
   auto* x = 123.0;   // C3535
   return 0;
}
```

Nell'esempio seguente viene restituito C3535 perché `p` la variabile dichiara un puntatore a un tipo dedotto, ma l'espressione di inizializzazione non è un tipo di puntatore.

```cpp
// C3535c.cpp
// Compile with /Zc:auto
class A { };
A x;
auto *p = x;  // C3535
```

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-keyword.md)<br/>
[Tipi fondamentali](../../cpp/fundamental-types-cpp.md)
