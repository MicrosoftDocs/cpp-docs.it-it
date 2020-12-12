---
description: 'Altre informazioni su: routing dei comandi'
title: comandi (routing)
ms.date: 09/06/2019
helpviewer_keywords:
- MFC, command routing
- command handling [MFC], routing commands
- handlers [MFC]
- handlers, command [MFC]
- command routing
ms.assetid: 9393a956-bdd4-47c5-9013-dbd680433f93
ms.openlocfilehash: 4004f74413f236599c5cdd14f6593bc5d2bd26b8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283446"
---
# <a name="command-routing"></a>comandi (routing)

La responsabilità dell'utente nell'utilizzo dei comandi è limitata alla creazione di connessioni mappa messaggi tra i comandi e le relative funzioni di gestione, un'attività per la quale si utilizza la [creazione guidata classe MFC](reference/mfc-class-wizard.md). È inoltre necessario scrivere il codice per i gestori di comandi.

I messaggi di Windows in genere sono inviati alla finestra cornice principale, ma i messaggi di comando vengono indirizzati in seguito ad altri oggetti. Il framework indirizza i comandi attraverso una sequenza standard di oggetti destinazione comando, uno dei quali deve disporre di un gestore per il comando. Ogni oggetto destinazione comando controlla la propria mappa messaggi per verificare se può gestire il messaggio in arrivo.

Classi di destinazione comando diverse controllano le proprie mappe messaggi in momenti diversi. In genere una classe indirizza il comando a determinati altri oggetti per concedere a questi la prima opportunità di gestire il comando. Se nessuno di questi oggetti gestisce il comando, la classe originale controlla la propria mappa messaggi. Quindi, se non riesce a fornire un gestore, può indirizzare il comando ad altre destinazioni comando. La tabella [Routing standard dei comandi](#_core_standard_command_route) che segue mostra in che modo ciascuna delle classi struttura questa sequenza. L'ordine generale in cui una destinazione comando esegue il routing di un comando è:

1. Al proprio oggetto destinazione comando figlio attivo al momento.

1. A se stessa.

1. Ad altre destinazioni comando.

Quanto è costoso questo meccanismo di routing rispetto a ciò che il gestore esegue in risposta a un comando, il costo del routing è basso. Occorre tenere presente che il framework genera comandi solo quando l'utente interagisce con un oggetto dell'interfaccia utente.

### <a name="standard-command-route"></a><a name="_core_standard_command_route"></a> Routing standard dei comandi

|Quando un oggetto di questo tipo riceve un comando . . .|Concede a se stesso e ad altri oggetti destinazione comando l'opportunità di gestire il comando in questo ordine:|
|----------------------------------------------------------|-----------------------------------------------------------------------------------------------------|
|Finestra cornice MDI (`CMDIFrameWnd`)|1. attivo `CMDIChildWnd`<br />2. questa finestra cornice<br />3. applicazione ( `CWinApp` oggetto)|
|Finestre cornice del documento (`CFrameWnd`, `CMDIChildWnd`)|1. visualizzazione attiva<br />2. questa finestra cornice<br />3. applicazione ( `CWinApp` oggetto)|
|Visualizzazione|1. questa visualizzazione<br />2. documento collegato alla visualizzazione|
|Documento|1. questo documento<br />2. modello di documento collegato al documento|
|Finestra di dialogo|1. questa finestra di dialogo<br />2. finestra proprietaria della finestra di dialogo<br />3. applicazione ( `CWinApp` oggetto)|

Nei casi in cui le voci numerate nella seconda colonna della tabella precedente menzionano altri oggetti, come un documento, vedere l'elemento corrispondente nella prima colonna. Ad esempio, quando si legge nella seconda colonna che la visualizzazione inoltra un comando al suo documento, vedere la voce "Documento" nella prima colonna per continuare a seguire il routing.

## <a name="see-also"></a>Vedi anche

[Modalità di chiamata di un gestore da parte del Framework](how-the-framework-calls-a-handler.md)
