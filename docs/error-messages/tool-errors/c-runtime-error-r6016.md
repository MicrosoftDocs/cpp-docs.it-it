---
title: C R6016 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6016
dev_langs:
- C++
helpviewer_keywords:
- R6016
ms.assetid: 7bd3f274-d9c4-4bc4-8252-80bf168c4c3a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65f4b4529e0faf433ff9dc5c4fc2c0594a4d9ff6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076645"
---
# <a name="c-runtime-error-r6016"></a>R6016 di errore di Runtime C

Spazio per i dati di thread insufficiente.

> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono molti motivi possibili per questo errore, ma spesso è causato da una condizione di memoria estremamente basse, un bug nell'app o da un bug in un componente aggiuntivo o l'estensione usata dall'app.
>
>  Per risolvere questo errore, è possibile provare questi passaggi:
>
>  -   Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> -   Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare l'app.
> -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere, ripristinare o reinstallare i componenti aggiuntivi o estensioni usate dall'app.
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché il programma non ha ricevuto sufficiente memoria dal sistema operativo per completare una [beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md) oppure `_beginthreadex` chiamata o risorsa di archiviazione locale non è stato inizializzato dal thread `_beginthread` o `_beginthreadex`.

Quando viene avviato un nuovo thread, la libreria deve creare un database interno per tale thread. Se il database non può essere espanso con la memoria fornita dal sistema operativo, il thread non viene avviato e il processo di chiamata viene arrestato. Questa situazione può verificarsi quando il processo ha creato troppi thread o se lo spazio di archiviazione thread-local si è esaurito.

È consigliabile che un eseguibile che chiama la libreria di runtime C (CRT) deve utilizzare `_beginthreadex` per la creazione del thread anziché l'API Windows `CreateThread`. `_beginthreadex` inizializza l'archiviazione statica interna utilizzata da molte funzioni CRT nello spazio di archiviazione locale del thread. Se si usa `CreateThread` per creare un thread, la libreria CRT può terminare il processo con R6016 quando viene effettuata una chiamata a una funzione CRT che richiede un'archiviazione statica interna inizializzata.