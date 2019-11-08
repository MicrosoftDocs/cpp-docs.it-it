---
title: Riferimenti al preprocessore C/C++
ms.date: 10/31/2019
helpviewer_keywords:
- preprocessor
- preprocessor, reference overview
ms.assetid: e4a52843-7016-4f6d-8b40-cb1ace18f805
ms.openlocfilehash: ef93f2cb98a033eed539ffc25559937b274d8a21
ms.sourcegitcommit: 2362d15b5eb18d27773c3f7522da3d0eed9e2571
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2019
ms.locfileid: "73754078"
---
# <a name="cc-preprocessor-reference"></a>Riferimenti al preprocessore C/C++

Il *riferimento alC++ preprocessore c/preprocessore* illustra il preprocessore implementato in Microsoft CC++/. Il preprocessore esegue alcune operazioni preliminari sui file C e C++ prima che siano passati al compilatore. È possibile utilizzare il preprocessore per compilare in modo condizionale il codice, inserire file, specificare i messaggi di errore in fase di compilazione e applicare le regole specifiche del computer alle sezioni di codice.

In Visual Studio 2019 l'opzione del compilatore [/Experimental: preprocessore](../build/reference/experimental-preprocessor.md) Abilita una nuova implementazione del preprocessore. La nuova implementazione è ancora in corso ed è quindi considerata sperimentale. È concepito per essere conforme a C99, C11 e C++ 20. Per altre informazioni, vedere [Panoramica del preprocessore sperimentale MSVC](preprocessor-experimental-overview.md).

## <a name="in-this-section"></a>In questa sezione

\ [preprocessore](preprocessor.md)
Viene fornita una panoramica dei preprocessori sperimentali tradizionali e nuovi.

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
Vengono descritte le direttive, in genere utilizzate per rendere i programmi di origine semplici da modificare e da compilare in diversi ambienti di esecuzione.

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)\
Vengono illustrati i quattro operatori specifici del preprocessore utilizzati nel contesto della direttiva `#define`.

[Macro predefinite](../preprocessor/predefined-macros.md)\
Vengono illustrate le macro predefinite specificate da ANSI e da Microsoft C++.

[Pragmas](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
Vengono illustrati i pragma che offrono un metodo per ogni compilatore per fornire le funzionalità specifiche del sistema operativo e del computer mantenendo la compatibilità generale con i linguaggi C e C++.

## <a name="related-sections"></a>Sezioni correlate

riferimento al linguaggio\ [ C++ ](../cpp/cpp-language-reference.md)
Viene fornito materiale di riferimento per l'implementazione Microsoft del linguaggio C++.

[Riferimento al linguaggio C](../c-language/c-language-reference.md)\
Viene fornito materiale di riferimento per l'implementazione Microsoft del linguaggio C.

[C/C++\ riferimento alla compilazione](../build/reference/c-cpp-building-reference.md)
Vengono forniti collegamenti agli argomenti relativi alle opzioni del compilatore e del linker.

[Progetti di Visual Studio C++ -](../build/creating-and-managing-visual-cpp-projects.md)\
Viene descritta l'interfaccia utente di Visual Studio che consente di specificare le directory che il sistema del progetto cercherà per individuare i file per il progetto C++.
