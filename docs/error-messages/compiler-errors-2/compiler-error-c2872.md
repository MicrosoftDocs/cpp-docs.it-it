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
ms.openlocfilehash: 038c3475a6041dfb719bb2270a87ac2898f8b958
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036761"
---
# <a name="compiler-error-c2872"></a>Errore del compilatore C2872

«*simbolo*': simbolo ambiguo

Il compilatore non può determinare quale simbolo ci si riferisce a. Più di un simbolo con il nome specificato è nell'ambito. Vedere le note dopo il messaggio di errore per i percorsi dei file e le dichiarazioni il compilatore ha trovato per il simbolo ambiguo. Per risolvere questo problema, è possibile qualificare completamente il simbolo ambiguo utilizzando lo spazio dei nomi, ad esempio, `std::byte` o `::byte`. È anche possibile usare una [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) quando per garantirne l'uno spazio dei nomi incluso un nome breve pratico da utilizzare per evitare ambiguità tra i simboli del codice sorgente.

C2872 può verificarsi se un file di intestazione include un [direttiva using](../../cpp/namespaces-cpp.md#using_directives), ed è incluso un file di intestazione successivo che contiene un tipo che è anche nello spazio dei nomi specificato nella `using` direttiva. Specificare una `using` direttiva solo dopo tutti i file di intestazione vengono specificati con `#include`.

Per altre informazioni sull'errore C2872, vedere gli articoli della Knowledge Base [PRB: compilatore errori quando si usare #import di XML in Visual C++ .NET](http://support.microsoft.com/kb/316317) e ["C2872 errore: 'Platform': simbolo ambiguo" messaggio di errore quando si utilizza il Spazio dei nomi Windows::Foundation::Metadata in Visual Studio 2013](https://support.microsoft.com/kb/2890859).

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