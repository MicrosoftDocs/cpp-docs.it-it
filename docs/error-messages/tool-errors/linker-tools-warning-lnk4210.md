---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4210'
title: Avviso degli strumenti del linker LNK4210
ms.date: 11/04/2016
f1_keywords:
- LNK4210
helpviewer_keywords:
- LNK4210
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
ms.openlocfilehash: 7634952df026dc664aed2a2f9625a7380b3a38b4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150605"
---
# <a name="linker-tools-warning-lnk4210"></a>Avviso degli strumenti del linker LNK4210

> *sezione* della sezione esistente. potrebbero essere presenti inizializzatori o terminatori statici non gestiti

## <a name="remarks"></a>Commenti

Nel codice sono stati introdotti inizializzatori o terminatori statici, ma il codice di avvio della libreria VCRuntime o il relativo equivalente (che deve eseguire gli inizializzatori o i terminatori statici) non viene eseguito all'avvio dell'applicazione. Di seguito sono riportati alcuni esempi di codice che richiedono inizializzatori o terminatori statici:

- Variabile di classe globale con un costruttore, un distruttore o una tabella di funzioni virtuali.

- Variabile globale inizializzata con una costante non in fase di compilazione.

Per risolvere il problema, provare a eseguire una delle operazioni seguenti:

- Rimuovere tutto il codice con inizializzatori statici.

- Non usare [/NOENTRY](../../build/reference/noentry-no-entry-point.md). Dopo la rimozione di/NOENTRY, potrebbe anche essere necessario rimuovere [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) dalla riga di comando del linker.

- Se la compilazione USA/MT, aggiungere LIBCMT. lib, libvcruntime. lib e libucrt. lib alla riga di comando del linker. Se la compilazione USA/MTd, aggiungere libcmtd. lib, vcruntimed. lib e libucrtd. lib.

- Quando si esegue il passaggio dalla compilazione/clr: pure a/CLR, rimuovere l'opzione [/entry](../../build/reference/entry-entry-point-symbol.md) dalla riga del linker. Questo consente l'inizializzazione di CRT e consente l'esecuzione di inizializzatori statici all'avvio dell'applicazione. L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

L'opzione del compilatore [/GS](../../build/reference/gs-buffer-security-check.md) richiede l'inizializzazione da parte della `__security_init_cookie` funzione. Questa inizializzazione viene fornita per impostazione predefinita nel codice di avvio della libreria VCRuntime che viene eseguito in `_DllMainCRTStartup` .

- Se il progetto viene compilato con/ENTRY e se/ENTRY viene passata una funzione diversa da `_DllMainCRTStartup` , la funzione deve chiamare `_CRT_INIT` per inizializzare CRT. Questa chiamata non è sufficiente se la DLL USA/GS, richiede inizializzatori statici o viene chiamata nel contesto di codice MFC o ATL. Per ulteriori informazioni, vedere [dll e Visual C++ comportamento della libreria di runtime](../../build/run-time-library-behavior.md) .

## <a name="see-also"></a>Vedi anche

- [Impostazione delle opzioni del linker](../../build/reference/linking.md)
