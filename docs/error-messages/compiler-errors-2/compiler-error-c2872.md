---
title: Errore del compilatore C2872
ms.date: 11/04/2016
f1_keywords:
- C2872
helpviewer_keywords:
- C2872
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
ms.openlocfilehash: f57b250f87bd7f2c5808b5a681ddfe49dfa5e876
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228895"
---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872

'*Symbol*': simbolo ambiguo

Il compilatore non è in grado di determinare il simbolo a cui si fa riferimento. Più di un simbolo con il nome specificato è nell'ambito. Vedere le note che seguono il messaggio di errore per i percorsi dei file e le dichiarazioni trovate dal compilatore per il simbolo ambiguo. Per risolvere questo problema, è possibile qualificare completamente il simbolo ambiguo usando il relativo spazio dei nomi, ad esempio `std::byte` o `::byte` . È anche possibile usare un [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) per assegnare a uno spazio dei nomi incluso un nome breve utile da usare quando si distinguere simboli nel codice sorgente.

C2872 può verificarsi se un file di intestazione include una [direttiva using](../../cpp/namespaces-cpp.md#using_directives)e viene incluso un file di intestazione successivo che contiene un tipo che si trova anche nello spazio dei nomi specificato nella **`using`** direttiva. Specificare una **`using`** direttiva solo dopo che tutti i file di intestazione sono stati specificati con `#include` .

C2872 può verificarsi in Visual Studio 2013 a causa di un conflitto tra il `Windows::Foundation::Metadata::Platform` tipo enum e lo `Platform` spazio dei nomi C++/CX-defined. Per risolvere il problema, attenersi alla seguente procedura:

- Rimuovere la clausola "using namespace Windows:: Foundation:: Metadata" dai file di progetto.

- Specificare il nome completo per qualsiasi tipo incluso in questo spazio dei nomi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2872, in quanto viene creato un riferimento ambiguo a una variabile denominata `i` ; due variabili con lo stesso nome rientrano nell'ambito:

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
