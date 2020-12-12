---
description: 'Altre informazioni su: errore di runtime di C R6027'
title: Errore di runtime di C R6027
ms.date: 11/04/2016
f1_keywords:
- R6027
helpviewer_keywords:
- R6027
ms.assetid: c06a62b3-08d9-4bf5-bcad-8340ec552f69
ms.openlocfilehash: 0f69972495d45de96585e9008ce24d53958fd7c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237465"
---
# <a name="c-runtime-error-r6027"></a>Errore di runtime di C R6027

spazio insufficiente per l'inizializzazione di lowio

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore può essere dovuto a diversi motivi, ma in genere è dovuto a una condizione di memoria estremamente insufficiente. Può anche essere causato da un bug nell'app, dal danneggiamento delle librerie Visual C++ utilizzate o da un driver.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Se l'app funzionava prima di un'installazione recente di un'altra app o driver, usare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per rimuovere la nuova app o il driver, quindi riprovare a eseguire l'app.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare tutte le copie del Microsoft Visual C++ ridistribuibile.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica quando non è disponibile memoria sufficiente per inizializzare il supporto di I/O di basso livello nel runtime C. Questo errore si verifica in genere all'avvio dell'app. Verificare che l'app e i driver e le dll caricati non danneggino l'heap all'avvio.
