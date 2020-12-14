---
description: 'Altre informazioni su: errore del compilatore C3851'
title: Errore del compilatore C3851
ms.date: 09/05/2018
f1_keywords:
- C3851
helpviewer_keywords:
- C3851
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
ms.openlocfilehash: 62f35b8828f7c8f1af9769152a88b7240ff9ff93
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255366"
---
# <a name="compiler-error-c3851"></a>Errore del compilatore C3851

> '*char*': un nome di caratteri universali non può definire un carattere nel set di caratteri di base

## <a name="remarks"></a>Commenti

Nel codice compilato come C++, non è possibile usare un nome di carattere universale che rappresenta un carattere nel set di caratteri di origine di base esterno al valore letterale di stringa o carattere. Per altre informazioni, vedere [Character Sets](../../cpp/character-sets.md). Nel codice compilato come C, non è possibile usare un nome di carattere universale per i caratteri nell'intervallo 0x20-0x7F, inclusivo, ad eccezione di 0x24 (' $'), 0x40 (' \@ ') o 0x60 (' \` ').

## <a name="example"></a>Esempio

Gli esempi seguenti generano l'errore C3851 e mostrano come correggerlo:

```cpp
// C3851.cpp
int main()
{
   int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set
   int test2_A = 0;        // OK
}
```
