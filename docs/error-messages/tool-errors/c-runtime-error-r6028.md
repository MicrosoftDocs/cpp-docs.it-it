---
description: 'Altre informazioni su: errore di runtime di C R6028'
title: Errore di runtime di C R6028
ms.date: 11/04/2016
f1_keywords:
- R6028
helpviewer_keywords:
- R6028
ms.assetid: 81e99079-4388-4244-a4f7-4641c508871c
ms.openlocfilehash: f4b634814331a7301fccef77be31034afc77084a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301776"
---
# <a name="c-runtime-error-r6028"></a>Errore di runtime di C R6028

Impossibile inizializzare "heap"

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma spesso a causa di una condizione di memoria molto bassa, di un bug nel programma o di driver hardware difettosi.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Se l'app funzionava prima di un'installazione recente di un'altra app o driver, usare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per rimuovere la nuova app o il driver, quindi riprovare a eseguire l'app.
> - Controllare il sito Web del fornitore dell'hardware o **Windows Update** nel **Pannello di controllo** per gli aggiornamenti del software e del driver.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica quando il sistema operativo non riesce a creare il pool di memoria per l'applicazione. In particolare, il Runtime C (CRT) ha chiamato la funzione Win32 `HeapCreate` che ha restituito NULL (errore).

Se questo errore si verifica durante l'avvio dell'applicazione, il sistema potrebbe non essere in grado di soddisfare le richieste dell'heap perché sono stati caricati driver difettosi. Verificare la disponibilità di driver aggiornati in Windows Update o sul sito Web del fornitore hardware.
