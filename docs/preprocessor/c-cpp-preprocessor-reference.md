---
title: Riferimenti al preprocessore C/C++
description: Informazioni di riferimento per il preprocessore del compilatore Microsoft C/C++ in Visual Studio.
ms.date: 09/10/2020
helpviewer_keywords:
- preprocessor
- preprocessor, reference overview
ms.assetid: e4a52843-7016-4f6d-8b40-cb1ace18f805
ms.openlocfilehash: e53f7270a71e5e7c3f456be7d55d49eaf352aecb
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040743"
---
# <a name="cc-preprocessor-reference"></a>Riferimenti al preprocessore C/C++

Il *riferimento al preprocessore c/c++* illustra il preprocessore implementato in Microsoft C/c++. Il preprocessore esegue alcune operazioni preliminari sui file C e C++ prima che siano passati al compilatore. È possibile utilizzare il preprocessore per compilare in modo condizionale il codice, inserire file, specificare i messaggi di errore in fase di compilazione e applicare le regole specifiche del computer alle sezioni di codice.

In Visual Studio 2019 l'opzione del compilatore [/Experimental: preprocessore](../build/reference/experimental-preprocessor.md) Abilita una nuova implementazione del preprocessore. La nuova implementazione è ancora in corso ed è quindi considerata sperimentale. È concepito per essere conforme a C99, C11 e C++ 20. Per altre informazioni, vedere [MSVC New Preprocessor Overview](preprocessor-experimental-overview.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Preprocessore](preprocessor.md)\
Viene fornita una panoramica dei preprocessori conformi tradizionali e nuovi.

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
Vengono descritte le direttive, in genere utilizzate per rendere i programmi di origine semplici da modificare e da compilare in diversi ambienti di esecuzione.

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)\
Vengono illustrati i quattro operatori specifici del preprocessore utilizzati nel contesto della direttiva `#define`.

[Macro predefinite](../preprocessor/predefined-macros.md)\
Vengono illustrate le macro predefinite come specificato dagli standard C e C++ e da Microsoft C++.

[Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
Vengono illustrati i pragma che offrono un metodo per ogni compilatore per fornire le funzionalità specifiche del sistema operativo e del computer mantenendo la compatibilità generale con i linguaggi C e C++.

## <a name="related-sections"></a>Sezioni correlate

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)\
Viene fornito materiale di riferimento per l'implementazione Microsoft del linguaggio C++.

[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)\
Viene fornito materiale di riferimento per l'implementazione Microsoft del linguaggio C.

[Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md)\
Vengono forniti collegamenti agli argomenti relativi alle opzioni del compilatore e del linker.

[Progetti di Visual Studio-C++](../build/creating-and-managing-visual-cpp-projects.md)\
Viene descritta l'interfaccia utente di Visual Studio che consente di specificare le directory che il sistema del progetto cercherà per individuare i file per il progetto C++.
