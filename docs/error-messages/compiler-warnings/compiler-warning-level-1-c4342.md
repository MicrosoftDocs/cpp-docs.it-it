---
title: Avviso del compilatore (livello 1) C4342
ms.date: 11/04/2016
f1_keywords:
- C4342
helpviewer_keywords:
- C4342
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
ms.openlocfilehash: 439c4976f25688fd9220c3f58ceb933266b5f15c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447335"
---
# <a name="compiler-warning-level-1-c4342"></a>Avviso del compilatore (livello 1) C4342

modifica del comportamento: '*funzione*' chiamato, ma un operatore membro è stato chiamato nelle versioni precedenti

Nelle versioni di Visual C++ precedenti Visual Studio 2002, un membro è stato chiamato, ma questo comportamento è stato modificato e il compilatore ora rileva la corrispondenza più appropriata nell'ambito dello spazio dei nomi.

Se è stato trovato un operatore membro, il compilatore in precedenza non considererebbero qualsiasi spazio dei nomi degli operatori di ambito. Se è presente una corrispondenza migliore nell'ambito dello spazio dei nomi, il compilatore corrente in modo corretto viene chiamato, mentre non verrebbe considerato compilatori precedenti.

Questo avviso deve essere disabilitato dopo aver aggiornato il codice alla versione corrente.  Il compilatore può fornire i falsi positivi, la generazione di questo avviso per il codice in cui è presente alcuna modifica del comportamento.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'errore C4342:

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