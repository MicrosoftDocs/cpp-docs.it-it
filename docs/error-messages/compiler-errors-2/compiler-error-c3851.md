---
title: Errore del compilatore C3851
ms.date: 09/05/2018
f1_keywords:
- C3851
helpviewer_keywords:
- C3851
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
ms.openlocfilehash: 97d9ef1eeeffa0e5a63d2c8ae2428a3fad0ff238
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165584"
---
# <a name="compiler-error-c3851"></a>Errore del compilatore C3851

> '*char*': un nome di caratteri universali non può definire un carattere nel set di caratteri di base

## <a name="remarks"></a>Osservazioni

Nel codice compilato come C++, non è possibile usare un nome di carattere universale che rappresenta un carattere nel set di caratteri di origine di base esterno al valore letterale di stringa o carattere. Per altre informazioni, vedere [Character Sets](../../cpp/character-sets.md). Nel codice compilato come C, non è possibile usare un nome di carattere universale per i caratteri nell'intervallo 0x20-0x7F, inclusivo, ad eccezione di 0x24 (' $'), 0x40 ('\@') o 0x60 ('\`').

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
