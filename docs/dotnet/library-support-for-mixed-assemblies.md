---
title: Supporto delle librerie per assembly misti
ms.date: 09/18/2018
helpviewer_keywords:
- msvcm90[d].dll
- mixed assemblies [C++], library support
- msvcmrt[d].lib
- libraries [C++], mixed assemblies
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
ms.openlocfilehash: 42116c09d5b31cf669eb6d5d1e75eae60b2610a7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474750"
---
# <a name="library-support-for-mixed-assemblies"></a>Supporto delle librerie per assembly misti

Visual C++ supporta l'uso della libreria Standard C++, la libreria di runtime C (CRT), ATL e MFC per le applicazioni compilate con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). In questo modo le applicazioni esistenti che utilizzano queste librerie possono per usare anche le funzionalità di .NET Framework.

> [!IMPORTANT]
> Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Questo supporto include le librerie di importazione e DLL seguenti:

- [D] msvcmrt. lib se esegue la compilazione con **/clr**. Collegamento di assembly misti a questa libreria di importazione.

Questo supporto offre che numerosi vantaggi:

- La libreria CRT e la libreria Standard C++ sono disponibili per codice misto. CRT e della libreria Standard C++ forniti non sono verificabili. in definitiva, le chiamate vengono ancora instradate agli stessi CRT e della libreria Standard C++ si usano dal codice nativo.

- Correggere la gestione delle eccezioni unificato nelle immagini miste.

- Inizializzazione statica di variabili di C++ in immagini miste.

- Supporto per le variabili per dominio di applicazione e per ogni processo nel codice gestito.

- Risolve i problemi di blocco del caricatore che applicati per le DLL miste compilate in Visual Studio 2003 e versioni precedenti.

Inoltre, questo supporto presenta le limitazioni seguenti:

- Solo il modello DLL di CRT è supportato per il codice compilato con **/clr**. Non sono disponibili librerie CRT statiche che supportano **/clr** compilazioni.

## <a name="see-also"></a>Vedere anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
