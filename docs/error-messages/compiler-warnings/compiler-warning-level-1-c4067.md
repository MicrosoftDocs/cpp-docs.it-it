---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4067'
title: Avviso del compilatore (livello 1) C4067
ms.date: 11/04/2016
f1_keywords:
- C4067
helpviewer_keywords:
- C4067
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
ms.openlocfilehash: b11167ba5648e71be16197ecfb418d92cb5d879a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267664"
---
# <a name="compiler-warning-level-1-c4067"></a>Avviso del compilatore (livello 1) C4067

> token imprevisti che seguono la direttiva per il preprocessore: prevista una nuova riga

## <a name="remarks"></a>Commenti

Il compilatore ha trovato e ignorato caratteri aggiuntivi in seguito a una direttiva per il preprocessore. Questa situazione può essere causata da caratteri imprevisti, anche se una causa comune è un punto e virgola randagio dopo la direttiva. I commenti non generano questo avviso. L'opzione del compilatore **/za** Abilita questo avviso per più direttive del preprocessore rispetto all'impostazione predefinita.

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

Per risolvere il problema, eliminare i caratteri smarriti o spostarli in un blocco di commento. Alcuni avvisi di C4067 possono essere disabilitati rimuovendo l'opzione del compilatore **/za** .

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
