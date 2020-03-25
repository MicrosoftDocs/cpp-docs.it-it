---
title: Avviso del compilatore (livello 1) C4342
ms.date: 11/04/2016
f1_keywords:
- C4342
helpviewer_keywords:
- C4342
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
ms.openlocfilehash: 8ac00d3d57f8cf7d6c85f3106dbe9b8c3cb9adf0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162920"
---
# <a name="compiler-warning-level-1-c4342"></a>Avviso del compilatore (livello 1) C4342

modifica del comportamento: è stato chiamato '*Function*', ma nelle versioni precedenti è stato chiamato un operatore membro

Nelle versioni di Visual C++ Studio precedenti a visual Studio 2002 è stato chiamato un membro, ma questo comportamento è stato modificato e il compilatore ora trova la migliore corrispondenza nell'ambito dello spazio dei nomi.

Se è stato trovato un operatore membro, il compilatore non considererà in precedenza gli operatori di ambito dello spazio dei nomi. Se è presente una corrispondenza migliore nell'ambito dello spazio dei nomi, il compilatore corrente lo chiama correttamente, mentre i compilatori precedenti non lo considerano.

Questo avviso dovrebbe essere disabilitato dopo il completamento del trasferimento del codice alla versione corrente.  Il compilatore può restituire falsi positivi, generando questo avviso per il codice in cui non è presente alcuna modifica del comportamento.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'C4342:

```cpp
// C4342.cpp
// compile with: /EHsc /W1
#include <fstream>
#pragma warning(default: 4342)
using namespace std;
struct X : public ofstream {
   X();
};

X::X() {
   open( "ofs_bug_ev.txt." );
   if ( is_open() ) {
      *this << "Text" << "<-should be text" << endl;   // C4342
      *this << ' ' << "<-should be space symbol" << endl;   // C4342
   }
}

int main() {
   X b;
   b << "Text" << "<-should be text" << endl;
   b << ' ' << "<-should be space symbol" << endl;
}
```
