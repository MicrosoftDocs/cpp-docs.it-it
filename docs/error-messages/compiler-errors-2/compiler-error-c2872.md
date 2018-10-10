---
title: Errore del compilatore C2872 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2872
dev_langs:
- C++
helpviewer_keywords:
- C2872
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e4bdc67e13db11949371e2f9e3d8a205b146d701
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890116"
---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872

«*simbolo*': simbolo ambiguo

Il compilatore non può determinare quale simbolo ci si riferisce a. Più di un simbolo con il nome specificato è nell'ambito. Vedere le note dopo il messaggio di errore per i percorsi dei file e le dichiarazioni il compilatore ha trovato per il simbolo ambiguo. Per risolvere questo problema, è possibile qualificare completamente il simbolo ambiguo utilizzando lo spazio dei nomi, ad esempio, `std::byte` o `::byte`. È anche possibile usare una [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) quando per garantirne l'uno spazio dei nomi incluso un nome breve pratico da utilizzare per evitare ambiguità tra i simboli del codice sorgente.

C2872 può verificarsi se un file di intestazione include un [direttiva using](../../cpp/namespaces-cpp.md#using_directives), ed è incluso un file di intestazione successivo che contiene un tipo che è anche nello spazio dei nomi specificato nella `using` direttiva. Specificare una `using` direttiva solo dopo tutti i file di intestazione vengono specificati con `#include`.

C2872 possono verificarsi in Visual Studio 2013 a causa di un conflitto tra il il `Windows::Foundation::Metadata::Platform` enum tipo e il C + + c++ /CLI definito CX `Platform` dello spazio dei nomi. Per risolvere questo problema, seguire questa procedura:

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