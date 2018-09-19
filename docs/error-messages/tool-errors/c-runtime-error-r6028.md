---
title: C R6028 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6028
dev_langs:
- C++
helpviewer_keywords:
- R6028
ms.assetid: 81e99079-4388-4244-a4f7-4641c508871c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5a23fcd6ff7c5fb49e31efab831f1102bc079d91
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093389"
---
# <a name="c-runtime-error-r6028"></a>R6028 di errore di Runtime C

Impossibile inizializzare "heap"

> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono molti motivi possibili per questo errore, ma spesso è causato da una condizione di memoria estremamente basse, un bug nel programma, o dai driver hardware difettoso.
>
>  Per risolvere questo errore, è possibile provare questi passaggi:
>
>  -   Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> -   Se l'app funzionava in modo corretto prima di un'installazione recente di un'altra app o il driver, usare il **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere il nuova app o il driver e provare di nuovo l'app.
> -   Controllare i siti Web del produttore dell'hardware o **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software e driver.
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica quando il sistema operativo non riesce a creare il pool di memoria per l'applicazione. In particolare, il Runtime C (CRT) ha chiamato la funzione Win32 `HeapCreate` che ha restituito NULL (errore).

Se questo errore si verifica durante l'avvio dell'applicazione, il sistema potrebbe non essere in grado di soddisfare le richieste dell'heap perché sono stati caricati driver difettosi. Verificare la disponibilità di driver aggiornati in Windows Update o sul sito Web del fornitore hardware.