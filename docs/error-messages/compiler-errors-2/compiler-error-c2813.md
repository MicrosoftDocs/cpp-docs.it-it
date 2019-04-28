---
title: Errore del compilatore C2813
ms.date: 11/04/2016
helpviewer_keywords:
- C2813
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
ms.openlocfilehash: 38b4bad77f836053f86a06491ef6bebbcc16671a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62265984"
---
# <a name="compiler-error-c2813"></a>Errore del compilatore C2813

\#importazione non è supportata con /MP

L'errore C2813 viene generato se in un comando del compilatore vengono specificati l'opzione **/MP** e due o più file da compilare e uno o più file contengono la direttiva per il preprocessore[#import](../../preprocessor/hash-import-directive-cpp.md) . La direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) genera classi C++ dai tipi contenuti nella libreria dei tipi specificata e quindi scrive tali classi in due file di intestazione. La direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) non è supportata nel caso in cui più unità di compilazione importano la stessa libreria dei tipi, dal momento che, quando provano a scrivere contemporaneamente gli stessi file di intestazione, viene generato un conflitto.

Questo errore del compilatore e il **/MP** opzione del compilatore sono una novità di Visual Studio 2008.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C2813. La riga di comando nel commento "compile with:" indica al compilatore di usare le opzioni **/MP** e **/c** per compilare diversi file. Almeno uno dei file contiene la direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) . A scopo di verifica, nell'esempio viene usato due volte lo stesso file.

```
// C2813.cpp
// compile with: /MP /c C2813.cpp C2813.cpp
#import "C:\windows\system32\stdole2.tlb"   // C2813
int main()
{
}
```