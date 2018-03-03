---
title: Strumenti del linker LNK4210 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4210
dev_langs:
- C++
helpviewer_keywords:
- LNK4210
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e4e2d596527b60735b42fb4edfff6f36d0be808d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4210"></a>Avviso degli strumenti del linker LNK4210  
  
> sezione *sezione* esiste; potrebbe esistano inizializzatori o terminatori statici non gestiti  
  
Il codice ha introdotto inizializzatori o terminatori statici, ma il codice di avvio della libreria VCRuntime o equivalente (che deve essere eseguito l'inizializzatori o terminatori statici) non viene eseguita all'avvio dell'applicazione. Di seguito sono riportati alcuni esempi di codice che richiede inizializzatori o terminatori statici:  
  
-   Variabile di classe globale con un costruttore, un distruttore o una tabella di funzione virtuale.  
  
-   Variabile globale inizializzata con una costante in fase di compilazione non.  
  
Per risolvere questo problema, provare una delle operazioni seguenti:  
  
-   Rimuovere tutto il codice con inizializzatori statici.  
  
-   Non utilizzare [/NOENTRY](../../build/reference/noentry-no-entry-point.md). Dopo aver rimosso /NOENTRY, potrebbe anche essere necessario rimuovere [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) dalla riga di comando del linker.  
  
-   Se la compilazione utilizza /MT, aggiungere libcmt.lib, libvcruntime.lib e libucrt.lib alla riga di comando del linker. Se la compilazione utilizza /MTd, aggiungere libcmtd.lib, vcruntimed.lib e libucrtd.lib.  
  
-   Quando si passa da /clr: pura compilazione /clr, rimuovere il [/ENTRY](../../build/reference/entry-entry-point-symbol.md) opzione dalla riga del linker. Questo consente l'inizializzazione CRT e inizializzatori statici da eseguire all'avvio dell'applicazione.  
  
 Il [/GS](../../build/reference/gs-buffer-security-check.md) opzione del compilatore richiede l'inizializzazione mediante la `__security_init_cookie` (funzione). L'inizializzazione viene fornita per impostazione predefinita nel codice di avvio della libreria VCRuntime che viene eseguito in `_DllMainCRTStartup`.  
  
-   Se il progetto viene compilato utilizzando /ENTRY e /ENTRY viene passata una funzione diversa da `_DllMainCRTStartup`, deve chiamare la funzione `_CRT_INIT` per inizializzare la libreria CRT. Non è sufficiente questa chiamata solo se la DLL utilizza /GS, richiede inizializzatori statici o viene chiamata nel contesto del codice MFC o ATL. Vedere [DLL e Visual C++ il comportamento della libreria di runtime](../../build/run-time-library-behavior.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)