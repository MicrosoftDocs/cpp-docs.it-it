---
title: Aggiungere un gestore dell'evento
ms.date: 11/12/2018
f1_keywords:
- vc.codewiz.eventhandler.overview
- vc.codewiz.eventhandler.overview
helpviewer_keywords:
- event handlers, adding
- properties [Visual Studio], MSBuild
- MSBuild, properties
- event handler wizard [C++]
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
ms.openlocfilehash: 96e5b8777bb8b0c976277a06e8ad49b3334921fb
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328571"
---
# <a name="add-an-event-handler"></a>Aggiungere un gestore dell'evento

Dall'editor di risorse è possibile aggiungere un nuovo gestore dell'evento o modificare un gestore dell'evento esistente per un controllo di finestra di dialogo usando la [Creazione guidata gestore eventi](#event-handler-wizard).

È possibile aggiungere un evento alla classe che implementa la finestra di dialogo usando la [finestra Proprietà](/visualstudio/ide/reference/properties-window). Per aggiungere l'evento a una classe diversa dalla classe della finestra di dialogo, usare la Creazione guidata gestore eventi.

**Per aggiungere un gestore dell'evento a un controllo di finestra di dialogo:**

1. Fare doppio clic sulla risorsa finestra di dialogo nella [Visualizzazione risorse](../windows/how-to-create-a-resource-script-file.md#create-resources) per aprire la risorsa che contiene il controllo nell'[Editor di finestre](../windows/dialog-editor.md).

1. Fare clic con il pulsante destro del mouse sul controllo per il quale si vuole gestire l'evento di notifica.

1. Nel menu di scelta rapida scegliere **Aggiungi gestore eventi** per visualizzare la Creazione guidata gestore eventi.

1. Selezionare l'evento nella casella **Tipo di messaggio** per aggiungerlo alla classe selezionata nella casella **Elenco classi**.

1. Accettare il nome predefinito nella casella **Nome gestore funzioni** o specificare il nome desiderato.

1. Selezionare **Aggiungi e modifica** per aggiungere il gestore dell'evento al progetto e aprire l'editor di testo nella nuova funzione per aggiungere il codice del gestore dell'evento appropriato.

   Se il tipo di messaggio selezionato ha già un gestore dell'evento per la classe selezionata, **Aggiungi e modifica** non è disponibile e **Modifica codice** è disponibile. Selezionare **Modifica codice** per aprire l'editor di testo nella funzione esistente.

In alternativa, è possibile aggiungere i gestori di eventi dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window). Per altre informazioni, vedere [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md).

## <a name="in-this-section"></a>Contenuto della sezione

- [Creazione guidata gestore eventi](#event-handler-wizard)

## <a name="event-handler-wizard"></a>Creazione guidata gestore eventi

Questa procedura guidata aggiunge un gestore dell'evento per un controllo di finestra di dialogo alla classe selezionata. Se si aggiunge un gestore dell'evento dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window), è possibile aggiungerlo solo la classe che implementa la finestra di dialogo. Per altre informazioni, vedere [Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md).

- **Nome comando**

  Identifica il controllo selezionato, per il quale viene aggiunto il gestore dell'evento. Questa casella non è disponibile.

- **Tipo di messaggio**

  Visualizza l'elenco dei possibili gestori di messaggi correnti per il controllo selezionato.

- **Nome gestore funzioni**

  Visualizza il nome della funzione aggiunta per gestire l'evento. Per impostazione predefinita, il nome è basato sul tipo di messaggio e il comando, preceduto da `On`. Ad esempio, per il pulsante denominato `IDC_BUTTON1`, il tipo di messaggio `BN_CLICKED` visualizza il nome del gestore funzioni `OnBnClickedButton1`.

- **Elenco classi**

  Visualizza le classi disponibili a cui è possibile aggiungere un gestore dell'evento. La classe per la finestra di dialogo selezionata è visualizzata in rosso.

- **Descrizione gestore**

  Specifica una descrizione per l'elemento selezionato nella casella **Tipo di messaggio**. Questa casella non è disponibile.

- **Aggiungi e modifica**

  Aggiunge il gestore di messaggi alla classe o all'oggetto selezionato. Apre anche l'editor di testo nella nuova funzione in modo che sia possibile aggiungere il codice del gestore per la notifica del controllo.

- **Modifica codice**

  Apre l'editor di testo per la funzione esistente selezionata in modo che sia possibile aggiungere o modificare il codice del gestore di notifiche del controllo.
