---
description: 'Altre informazioni su: errore di runtime di C R6016'
title: Errore di runtime di C R6016
ms.date: 11/04/2016
f1_keywords:
- R6016
helpviewer_keywords:
- R6016
ms.assetid: 7bd3f274-d9c4-4bc4-8252-80bf168c4c3a
ms.openlocfilehash: 79339400436f21aefc0edea101b4642d443f5ce0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237686"
---
# <a name="c-runtime-error-r6016"></a>Errore di runtime di C R6016

Spazio per i dati di thread insufficiente.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma spesso a causa di una condizione di memoria estremamente bassa, di un bug nell'app o di un bug in un componente aggiuntivo o in un'estensione usata dall'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Usare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare l'app.
> - Usare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per rimuovere, ripristinare o reinstallare componenti aggiuntivi o estensioni usati dall'app.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché il programma non ha ricevuto memoria sufficiente dal sistema operativo per completare una [_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md) o una chiamata oppure l' `_beginthreadex` archiviazione thread-local non è stata inizializzata da `_beginthread` o `_beginthreadex` .

Quando viene avviato un nuovo thread, la libreria deve creare un database interno per tale thread. Se il database non può essere espanso con la memoria fornita dal sistema operativo, il thread non viene avviato e il processo di chiamata viene arrestato. Questa situazione può verificarsi quando il processo ha creato troppi thread o se lo spazio di archiviazione thread-local si è esaurito.

Si consiglia di usare un eseguibile che chiama la libreria di runtime C (CRT) `_beginthreadex` per la creazione del thread anziché l'API Windows `CreateThread` . `_beginthreadex` inizializza l'archiviazione statica interna utilizzata da molte funzioni CRT nello spazio di archiviazione locale del thread. Se si usa `CreateThread` per creare un thread, la libreria CRT può terminare il processo con R6016 quando viene effettuata una chiamata a una funzione CRT che richiede un'archiviazione statica interna inizializzata.
