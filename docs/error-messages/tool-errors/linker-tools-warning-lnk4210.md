---
title: Avviso degli strumenti del linker LNK4210
ms.date: 11/04/2016
f1_keywords:
- LNK4210
helpviewer_keywords:
- LNK4210
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
ms.openlocfilehash: 75376129ce0033c717a4da3074cee9de132d357d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395066"
---
# <a name="linker-tools-warning-lnk4210"></a>Avviso degli strumenti del linker LNK4210

> sezione *sezione* esiste; potrebbe esistano inizializzatori o terminatori statici non gestiti

## <a name="remarks"></a>Note

Ha introdotto codice inizializzatori o terminatori statici, ma il codice di avvio della libreria VCRuntime o equivalente (che deve essere eseguito l'inizializzatori o terminatori statici) non viene eseguito all'avvio dell'applicazione. Di seguito sono riportati alcuni esempi di codice che richiede inizializzatori o terminatori statici:

- Variabile di classe globale con un costruttore, un distruttore o tabella di funzioni virtuali.

- Variabile globale inizializzata con una costante non tempo di compilazione.

Per risolvere questo problema, provare una delle operazioni seguenti:

- Rimuovere tutto il codice con inizializzatori statici.

- Non utilizzare [/NOENTRY](../../build/reference/noentry-no-entry-point.md). Dopo aver rimosso /NOENTRY, potrebbe anche essere necessario rimuovere [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) dalla riga di comando del linker.

- Se la compilazione utilizza /MT, aggiungere LIBCMT. lib, libvcruntime e libucrt alla riga di comando del linker. Se la compilazione utilizza /MTd, aggiungere LIBCMTD. lib e vcruntimed della versione finale.

- Quando si spostano da /clr: pura compilazione /clr, rimuovere il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzione da riga del linker. Questo consente l'inizializzazione di CRT e inizializzatori statici deve essere eseguito all'avvio dell'applicazione. Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Il [/GS](../../build/reference/gs-buffer-security-check.md) l'opzione del compilatore richiede l'inizializzazione mediante le `__security_init_cookie` (funzione). Questa inizializzazione viene fornita per impostazione predefinita nel codice di avvio della libreria VCRuntime che viene eseguito in `_DllMainCRTStartup`.

- Se il progetto viene compilato usando /ENTRY e /ENTRY viene passata una funzione diversa `_DllMainCRTStartup`, è necessario chiamare la funzione `_CRT_INIT` per inizializzare la libreria CRT. Questa chiamata da solo non è sufficiente se la DLL Usa l'opzione /GS, richiede gli inizializzatori statici o viene chiamata nel contesto del codice MFC o ATL. Visualizzare [DLL e Visual C++ il comportamento della libreria di runtime](../../build/run-time-library-behavior.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/linking.md)
