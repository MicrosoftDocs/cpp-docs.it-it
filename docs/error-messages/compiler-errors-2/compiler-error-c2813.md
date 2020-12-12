---
description: 'Altre informazioni su: errore del compilatore C2813'
title: Errore del compilatore C2813
ms.date: 11/04/2016
f1_keywords:
- C2813
helpviewer_keywords:
- C2813
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
ms.openlocfilehash: 51de4100da8c0dd1a3b2ad1857799769b2abea24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278402"
---
# <a name="compiler-error-c2813"></a>Errore del compilatore C2813

\#l'importazione non è supportata con/MP

L'errore C2813 viene generato se in un comando del compilatore vengono specificati l'opzione **/MP** e due o più file da compilare e uno o più file contengono la direttiva per il preprocessore [#import](../../preprocessor/hash-import-directive-cpp.md) . La direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) genera classi C++ dai tipi contenuti nella libreria dei tipi specificata e quindi scrive tali classi in due file di intestazione. La direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) non è supportata nel caso in cui più unità di compilazione importano la stessa libreria dei tipi, dal momento che, quando provano a scrivere contemporaneamente gli stessi file di intestazione, viene generato un conflitto.

Questo errore del compilatore e l'opzione del compilatore **/MP** sono una novità di Visual Studio 2008.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C2813. La riga di comando nel commento "compile with:" indica al compilatore di usare le opzioni **/MP** e **/c** per compilare diversi file. Almeno uno dei file contiene la direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) . A scopo di verifica, nell'esempio viene usato due volte lo stesso file.

```cpp
// C2813.cpp
// compile with: /MP /c C2813.cpp C2813.cpp
#import "C:\windows\system32\stdole2.tlb"   // C2813
int main()
{
}
```
