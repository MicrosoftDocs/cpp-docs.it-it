---
title: C R6027 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6027
dev_langs:
- C++
helpviewer_keywords:
- R6027
ms.assetid: c06a62b3-08d9-4bf5-bcad-8340ec552f69
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3694c367c090d0dcc2fb5e4ac72c8f00593fed27
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084809"
---
# <a name="c-runtime-error-r6027"></a>R6027 di errore di Runtime C

spazio insufficiente per l'inizializzazione lowio

> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma in genere è causato da una condizione di memoria estremamente bassa. Può essere causato anche da un bug nell'app, dal danneggiamento delle librerie Visual C++ che utilizza o da un driver.
>
>  Per risolvere questo errore, è possibile provare questi passaggi:
>
>  -   Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> -   Se l'app funzionava in modo corretto prima di un'installazione recente di un'altra app o il driver, usare il **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere il nuova app o il driver e provare di nuovo l'app.
> -   Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C++ Redistributable.
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica quando non vi è memoria disponibile insufficiente disponibile per l'inizializzazione del supporto dei / o a basso livello nel runtime di C. Questo errore si verifica in genere all'avvio dell'app. Verificare che l'app e i driver e le DLL che vengono caricati non danneggino l'heap all'avvio.