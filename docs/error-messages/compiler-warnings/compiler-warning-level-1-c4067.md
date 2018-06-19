---
title: Compilatore (livello 1) Avviso C4067 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4067
dev_langs:
- C++
helpviewer_keywords:
- C4067
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ee6b48327e8754f9388e0df8f43009a5be70c97
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
ms.locfileid: "34255453"
---
# <a name="compiler-warning-level-1-c4067"></a>Compilatore (livello 1) Avviso C4067

> token imprevisti seguente direttiva per il preprocessore: previsto un carattere di nuova riga

## <a name="remarks"></a>Note

Il compilatore trovato e ignorati caratteri supplementari dopo una direttiva del preprocessore. Ciò può dipendere da tutti i caratteri imprevisti, anche se una causa comune è un punto e virgola errato dopo la direttiva. I commenti non causano questo avviso. Il **/Za** opzione del compilatore attiva l'avviso per le direttive del preprocessore ulteriori rispetto all'impostazione predefinita.

## <a name="example"></a>Esempio

```cpp
// C4067a.cpp
// compile with: cl /EHsc /DX /W1 /Za C4067a.cpp
#include <iostream>
#include <string> s     // C4067
#if defined(X);         // C4067
std::string s{"X is defined"};
#else
std::string s{"X is not defined"};
#endif;                 // C4067 only under /Za
int main()
{
    std::cout << s << std::endl;
}
```

Per risolvere il problema, eliminare i singoli caratteri o spostarli in un blocco di commento. Alcuni avvisi C4067 potrebbero essere disabilitati rimuovendo le **/Za** opzione del compilatore.

```cpp
// C4067b.cpp
// compile with: cl /EHsc /DX /W1 C4067b.cpp
#include <iostream>
#include <string>
#if defined(X)
std::string s{"X is defined"};
#else
std::string s{"X is not defined"};
#endif
int main()
{
    std::cout << s << std::endl;
}
```