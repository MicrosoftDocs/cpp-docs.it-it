---
title: Compilatore Warning (level 1) C4067
ms.date: 11/04/2016
f1_keywords:
- C4067
helpviewer_keywords:
- C4067
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
ms.openlocfilehash: 012866e328433ec9511782c26a39265481ff4940
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386512"
---
# <a name="compiler-warning-level-1-c4067"></a>Compilatore Warning (level 1) C4067

> token imprevisto direttiva del preprocessore seguente: previsto un carattere di nuova riga

## <a name="remarks"></a>Note

Il compilatore trovato e ignorati i caratteri aggiuntivi che segue una direttiva del preprocessore. Ciò può dipendere da eventuali caratteri non previsti, anche se una causa comune è un punto e virgola inutile dopo la direttiva. I commenti non causano l'avviso. Il **/Za** opzione del compilatore attiva l'avviso per le direttive del preprocessore ulteriori rispetto all'impostazione predefinita.

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

Per risolvere questo problema, eliminare i caratteri errati o spostarle in un blocco di commento. Alcuni avvisi C4067 potrebbero essere disattivati rimuovendo le **/Za** opzione del compilatore.

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