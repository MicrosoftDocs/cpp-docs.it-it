---
title: Errore del compilatore C3535 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3535
dev_langs:
- C++
helpviewer_keywords:
- C3535
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 215fa52f892cb569b32335ca439811eb07b28dc7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46094078"
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

[Auto (parola chiave)](../../cpp/auto-keyword.md)<br/>
[Tipi fondamentali](../../cpp/fundamental-types-cpp.md)