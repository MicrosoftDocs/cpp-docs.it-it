---
title: Supporto delle librerie per assembly misti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- msvcm90[d].dll
- mixed assemblies [C++], library support
- msvcmrt[d].lib
- libraries [C++], mixed assemblies
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d4b584e0bacb1cb93cad33efdff807bb5fa9c8e2
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704111"
---
# <a name="library-support-for-mixed-assemblies"></a>Supporto delle librerie per assembly misti

Visual C++ supporta l'utilizzo della libreria Standard C++, la libreria di runtime C (CRT), ATL e MFC per applicazioni compilate con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). In questo modo le applicazioni esistenti che utilizzano queste librerie possono per usare anche le funzionalità di .NET Framework.

> [!IMPORTANT]
> Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Questo supporto include le librerie di importazione e DLL seguenti:

- LIB msvcmrt [d] se esegue la compilazione con **/clr**. Collegamento di assembly misti a questa libreria di importazione.

Questo supporto offre che numerosi vantaggi:

- CRT e della libreria Standard C++ sono disponibili per codice misto. CRT e della libreria Standard C++ fornite non sono verificabili. Infine, le chiamate vengono ancora instradate nella stessa libreria Standard C++ e CRT che si utilizzi dal codice nativo.

- Correggere la gestione delle eccezioni unificata nelle immagini miste.

- Inizializzazione statica delle variabili C++ in immagini miste.

- Supporto per le variabili per dominio di applicazione e per ogni processo nel codice gestito.

- Consente di risolvere i problemi di blocco del caricatore applicata alla DLL miste compilate in Visual Studio 2003 e versioni precedenti.

Inoltre, questo supporto presenta le limitazioni seguenti:

- Solo il modello DLL CRT è supportato per il codice compilato con **/clr**. Non sono disponibili librerie CRT statiche che supportano **/clr** compilazioni.

Poiché non è garantito che funzionano con le versioni precedenti, è necessario aggiornare common language runtime (CLR) alla versione corrente. Codice compilato con queste modifiche non verrà eseguito in CLR versione 1. x.

## <a name="see-also"></a>Vedere anche

- [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
