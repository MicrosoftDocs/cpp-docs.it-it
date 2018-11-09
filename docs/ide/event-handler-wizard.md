---
title: Creazione guidata gestore eventi
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.eventhandler.overview
helpviewer_keywords:
- Event Handler Wizard [C++]
ms.assetid: af8e1835-94b1-4d9a-b353-c519e011d3a1
ms.openlocfilehash: e48d995aed0c59cc4ba7b645706448b5c3618b4a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654168"
---
# <a name="event-handler-wizard"></a>Creazione guidata gestore eventi

Questa procedura guidata aggiunge un gestore dell'evento per un controllo di finestra di dialogo alla classe selezionata. Se si aggiunge un gestore dell'evento dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window), è possibile aggiungerlo solo la classe che implementa la finestra di dialogo. Per altre informazioni, vedere [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md).

- **Nome comando**

   Identifica il controllo selezionato, per il quale viene aggiunto il gestore dell'evento. Questa casella non è disponibile.

- **Tipo di messaggio**

   Visualizza l'elenco dei possibili gestori di messaggi correnti per il controllo selezionato.

- **Nome gestore funzioni**

   Visualizza il nome della funzione aggiunta per gestire l'evento. Per impostazione predefinita, il nome è basato sul tipo di messaggio e il comando, preceduto da "On". Ad esempio, per il pulsante denominato `IDC_BUTTON1`, il tipo di messaggio `BN_CLICKED` visualizza il nome del gestore funzioni `OnBnClickedButton1`.

- **Elenco classi**

   Visualizza le classi disponibili a cui è possibile aggiungere un gestore dell'evento. La classe per la finestra di dialogo selezionata è visualizzata in rosso.

- **Descrizione gestore**

   Specifica una descrizione per l'elemento selezionato nella casella **Tipo di messaggio**. Questa casella non è disponibile.

- **Aggiungi e modifica**

   Aggiunge il gestore di messaggi per la classe o oggetto selezionato e quindi apre l'editor di testo per la nuova funzione in modo che sia possibile aggiungere il codice del gestore di notifiche del controllo.

- **Modifica codice**

   Apre l'editor di testo per la funzione esistente selezionata in modo che sia possibile aggiungere o modificare il codice del gestore di notifiche del controllo.

## <a name="see-also"></a>Vedere anche

[Aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md)