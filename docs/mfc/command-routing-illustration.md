---
description: 'Scopri di più su: illustrazione del routing dei comandi'
title: Illustrazione del routing dei comandi
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, command routing
- command handling [MFC], routing commands
- command routing [MFC], OnCmdMsg handler
ms.assetid: 4b7b4741-565f-4878-b076-fd85c670f87f
ms.openlocfilehash: 51c5182eb1fa2a8b9666e265526e9220a9f3d4a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159960"
---
# <a name="command-routing-illustration"></a>Illustrazione del routing dei comandi

Per illustrare, prendere in considerazione un messaggio di comando da una voce di menu Cancella tutto nel menu modifica di un'applicazione MDI. Si supponga che la funzione di gestione per questo comando venga eseguita come funzione membro della classe Document dell'applicazione. Di seguito viene illustrato il modo in cui il comando raggiunge il proprio gestore dopo che l'utente sceglie la voce di menu:

1. La finestra cornice principale riceve prima il messaggio di comando.

1. La finestra cornice MDI principale fornisce alla finestra figlio MDI attualmente attiva la possibilità di gestire il comando.

1. Il routing standard di una finestra cornice figlio MDI dà alla visualizzazione la possibilità di eseguire il comando prima di controllare la propria mappa messaggi.

1. La vista controlla prima di tutto la propria mappa messaggi e, non trova alcun gestore, quindi instrada il comando al documento associato.

1. Il documento controlla la mappa messaggi e trova un gestore. Questa funzione membro del documento viene chiamata e il routing viene interrotto.

Se il documento non disponeva di un gestore, eseguirebbe il routing del comando al modello di documento. Il comando restituirà quindi la visualizzazione e quindi la finestra cornice. Infine, la finestra cornice controllerebbe la mappa messaggi. Se il controllo ha avuto esito negativo, il comando verrebbe indirizzato nuovamente alla finestra cornice MDI principale e quindi all'oggetto applicazione, ovvero la destinazione finale dei comandi non gestiti.

## <a name="see-also"></a>Vedi anche

[Modalità di chiamata di un gestore da parte del Framework](how-the-framework-calls-a-handler.md)
