---
description: 'Altre informazioni su: supporto delle librerie per assembly misti'
title: Supporto delle librerie per assembly misti
ms.date: 09/18/2018
helpviewer_keywords:
- msvcm90[d].dll
- mixed assemblies [C++], library support
- msvcmrt[d].lib
- libraries [C++], mixed assemblies
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
ms.openlocfilehash: d20069c2caa1cf46ebdb54907de586630d4ee71c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113714"
---
# <a name="library-support-for-mixed-assemblies"></a>Supporto delle librerie per assembly misti

Visual C++ supporta l'utilizzo della libreria standard C++, della libreria di runtime C (CRT), ATL e MFC per le applicazioni compilate con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). In questo modo, le applicazioni esistenti che usano queste librerie possono usare anche .NET Framework funzionalità.

> [!IMPORTANT]
> Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Questo supporto include le DLL e le librerie di importazione seguenti:

- Msvcmrt [d]. lib se si compila con **/CLR**. Assembly misti collegamento a questa libreria di importazione.

Questo supporto offre diversi vantaggi correlati:

- La libreria standard CRT e C++ sono disponibili per il codice misto. La libreria standard CRT e C++ fornita non sono verificabili. Infine, le chiamate vengono comunque indirizzate alla stessa libreria standard CRT e C++ usata dal codice nativo.

- Correzione della gestione unificata delle eccezioni in immagini miste.

- Inizializzazione statica delle variabili C++ in immagini miste.

- Supporto per le variabili per AppDomain e per processo nel codice gestito.

- Risolve i problemi di blocco del caricatore applicati a DLL miste compilate in Visual Studio 2003 e versioni precedenti.

Inoltre, questo supporto presenta le limitazioni seguenti:

- Solo il modello di DLL CRT è supportato per il codice compilato con **/CLR**. Non sono presenti librerie CRT statiche che supportano le compilazioni **/CLR** .

## <a name="see-also"></a>Vedi anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
