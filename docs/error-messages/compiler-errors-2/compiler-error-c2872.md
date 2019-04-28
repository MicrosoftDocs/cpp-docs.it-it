---
title: Errore del compilatore C2872
ms.date: 11/04/2016
f1_keywords:
- C2872
helpviewer_keywords:
- C2872
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
ms.openlocfilehash: 103998c7872b683c7405796ee28bd550246ae9bf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62257614"
---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872

«*simbolo*': simbolo ambiguo

Il compilatore non può determinare quale simbolo ci si riferisce a. Più di un simbolo con il nome specificato è nell'ambito. Vedere le note dopo il messaggio di errore per i percorsi dei file e le dichiarazioni il compilatore ha trovato per il simbolo ambiguo. Per risolvere questo problema, è possibile qualificare completamente il simbolo ambiguo utilizzando lo spazio dei nomi, ad esempio, `std::byte` o `::byte`. È anche possibile usare una [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) quando per garantirne l'uno spazio dei nomi incluso un nome breve pratico da utilizzare per evitare ambiguità tra i simboli del codice sorgente.

C2872 può verificarsi se un file di intestazione include un [direttiva using](../../cpp/namespaces-cpp.md#using_directives), ed è incluso un file di intestazione successivo che contiene un tipo che è anche nello spazio dei nomi specificato nella `using` direttiva. Specificare una `using` direttiva solo dopo tutti i file di intestazione vengono specificati con `#include`.

C2872 possono verificarsi in Visual Studio 2013 a causa di un conflitto tra il `Windows::Foundation::Metadata::Platform` tipo di enumerazione e la C++/definito CX `Platform` dello spazio dei nomi. Per risolvere questo problema, seguire questa procedura:

- Rimuovere la clausola "using Windows::Foundation::Metadata dello spazio dei nomi" dai file di progetto.

- Specificare il nome completo per qualsiasi tipo che è incluso in questo spazio dei nomi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2872, poiché viene effettuato un riferimento ambiguo a una variabile denominata `i`; due variabili con lo stesso nome sono nell'ambito:

```cpp
// C2872.cpp
// compile with: cl /EHsc C2872.cpp
namespace A {
   int i;
}

using namespace A;
int i;
int main() {
   ::i++;   // ok, uses i from global namespace
   A::i++;   // ok, uses i from namespace A
   i++;   // C2872 ambiguous: ::i or A::i?
   // To fix this issue, use the fully qualified name
   // for the intended variable.
}
```
