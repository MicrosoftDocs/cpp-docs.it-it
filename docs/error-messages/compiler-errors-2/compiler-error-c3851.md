---
title: Errore del compilatore C3851 | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3851
dev_langs:
- C++
helpviewer_keywords:
- C3851
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e6d0f6da9c3295aa6a8fad4bf5dfd8e725424739
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032487"
---
# <a name="compiler-error-c3851"></a>Errore del compilatore C3851

> «*char*': un nome di carattere universale non è possibile designare un carattere nel set di caratteri di base

## <a name="remarks"></a>Note

Nel codice compilato come C++, non è possibile usare un nome di carattere universale che rappresenta un carattere nel set di caratteri di origine di base esterno al valore letterale di stringa o carattere. Per altre informazioni, vedere [set di caratteri](../../cpp/character-sets.md). Nel codice compilato come C, è possibile usare un nome di carattere universale per i caratteri nell'intervallo 0x20-0x7F, inclusivo, ad eccezione di 0x24 ('$'), 0x40 ('\@'), o 0x60 ('\`').

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