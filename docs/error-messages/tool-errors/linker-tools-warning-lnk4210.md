---
title: Strumenti del linker LNK4210 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4210
dev_langs:
- C++
helpviewer_keywords:
- LNK4210
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8700d9ad8eeef177de2f70f616cb0c06ba50670
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34703678"
---
# <a name="linker-tools-warning-lnk4210"></a>Avviso degli strumenti del linker LNK4210

> sezione *sezione* esiste; potrebbe esistano inizializzatori o terminatori statici non gestiti

## <a name="remarks"></a>Note

Il codice ha introdotto inizializzatori o terminatori statici, ma il codice di avvio della libreria VCRuntime o equivalente (che deve essere eseguito l'inizializzatori o terminatori statici) non viene eseguita all'avvio dell'applicazione. Di seguito sono riportati alcuni esempi di codice che richiede inizializzatori o terminatori statici:

- Variabile di classe globale con un costruttore, un distruttore o una tabella di funzione virtuale.

- Variabile globale inizializzata con una costante in fase di compilazione non.

Per risolvere questo problema, provare una delle operazioni seguenti:

- Rimuovere tutto il codice con inizializzatori statici.

- Non utilizzare [/NOENTRY](../../build/reference/noentry-no-entry-point.md). Dopo aver rimosso /NOENTRY, potrebbe anche essere necessario rimuovere [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) dalla riga di comando del linker.

- Se la compilazione utilizza /MT, aggiungere libcmt.lib, libvcruntime.lib e libucrt.lib alla riga di comando del linker. Se la compilazione utilizza /MTd, aggiungere libcmtd.lib, vcruntimed.lib e libucrtd.lib.

- Quando si passa da /clr: pura compilazione /clr, rimuovere il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzione dalla riga del linker. Questo consente l'inizializzazione CRT e inizializzatori statici da eseguire all'avvio dell'applicazione. Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Il [/GS](../../build/reference/gs-buffer-security-check.md) opzione del compilatore richiede l'inizializzazione mediante la `__security_init_cookie` (funzione). L'inizializzazione viene fornita per impostazione predefinita nel codice di avvio della libreria VCRuntime che viene eseguito in `_DllMainCRTStartup`.

- Se il progetto viene compilato utilizzando /ENTRY e /ENTRY viene passata una funzione diversa da `_DllMainCRTStartup`, deve chiamare la funzione `_CRT_INIT` per inizializzare la libreria CRT. Non è sufficiente questa chiamata solo se la DLL utilizza /GS, richiede inizializzatori statici o viene chiamata nel contesto del codice MFC o ATL. Vedere [DLL e Visual C++ il comportamento della libreria di runtime](../../build/run-time-library-behavior.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
