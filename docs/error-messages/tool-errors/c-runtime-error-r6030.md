---
title: C Runtime Errore R6030 del linguaggio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6030
dev_langs:
- C++
helpviewer_keywords:
- R6030
ms.assetid: 0238a6c3-a033-4046-8adc-f8f99d961153
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 63606624e1cbcc5ef2c5ea453ee6d346e3e686a8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038126"
---
# <a name="c-runtime-error-r6030"></a>C Runtime Errore R6030 del linguaggio

CRT non inizializzato

> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Questo problema è causato in genere da alcuni programmi software di sicurezza o raramente, da un bug nel programma.
>
>  Per risolvere questo errore, è possibile provare questi passaggi:
>
>  -   Il software di sicurezza potrebbe essere istruzioni specifiche per ridurre questo problema. Controllare i siti Web del fornitore di software di sicurezza per i dettagli. In alternativa, verificare la presenza di versioni aggiornate dei software di sicurezza o prova il software di sicurezza diversi.
> -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica se si usa il Runtime di C (CRT), ma non è stato eseguito il codice di avvio di CRT. È possibile che venga visualizzato questo errore se il linker passa [/ENTRY](../../build/reference/entry-entry-point-symbol.md) viene usato per sostituire l'impostazione predefinita a partire indirizzo, in genere **mainCRTStartup**, **wmainCRTStartup** per un EXE, console **WinMainCRTStartup** oppure **wWinMainCRTStartup** per un eseguibile di Windows, o **DllMainCRTStartup** per una DLL. A meno che una delle funzioni precedente viene chiamata all'avvio, non verrà inizializzato il Runtime di C. Queste funzioni di avvio sono in genere chiamate per impostazione predefinita quando si collega alla libreria di runtime C e utilizza il normale **principale**, **wmain**, **WinMain**, o  **DllMain** punti di ingresso.

È anche possibile visualizzare questo errore quando un altro programma Usa tecniche di inserimento di codice per intercettare determinati chiamate alla libreria DLL. Alcuni programmi di sicurezza intrusivo utilizzano questa tecnica. Nelle versioni di Visual C++ precedenti Visual Studio 2015, è possibile usare una libreria CRT collegata staticamente per risolvere il problema, ma questa operazione è sconsigliata per motivi di sicurezza e applicazione degli aggiornamenti. La correzione dell'errore potrebbero richiedere un intervento dell'utente finale.