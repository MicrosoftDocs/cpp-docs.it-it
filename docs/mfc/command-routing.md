---
title: Comandi (Routing) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, command routing
- command handling [MFC], routing commands
- handlers [MFC]
- handlers, command [MFC]
- command routing
ms.assetid: 9393a956-bdd4-47c5-9013-dbd680433f93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ecb836f8fee1efab7f5f925c6ec3ce0f470d666b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346282"
---
# <a name="command-routing"></a>comandi (routing)
Le responsabilità del programmatore nell'uso dei comandi si limitano alla creazione di connessioni mappa messaggi fra i comandi e le loro funzioni di gestione, un'attività per la quale si usa la finestra Proprietà. È anche necessario scrivere la maggior parte dei gestori di comando.  
  
 I messaggi di Windows in genere sono inviati alla finestra cornice principale, ma i messaggi di comando vengono indirizzati in seguito ad altri oggetti. Il framework indirizza i comandi attraverso una sequenza standard di oggetti destinazione comando, uno dei quali deve disporre di un gestore per il comando. Ogni oggetto destinazione comando controlla la propria mappa messaggi per verificare se può gestire il messaggio in arrivo.  
  
 Classi di destinazione comando diverse controllano le proprie mappe messaggi in momenti diversi. In genere una classe indirizza il comando a determinati altri oggetti per concedere a questi la prima opportunità di gestire il comando. Se nessuno di questi oggetti gestisce il comando, la classe originale controlla la propria mappa messaggi. Quindi, se non riesce a fornire un gestore, può indirizzare il comando ad altre destinazioni comando. La tabella [Routing standard dei comandi](#_core_standard_command_route) che segue mostra in che modo ciascuna delle classi struttura questa sequenza. L'ordine generale in cui una destinazione comando esegue il routing di un comando è:  
  
1.  Al proprio oggetto destinazione comando figlio attivo al momento.  
  
2.  A se stessa.  
  
3.  Ad altre destinazioni comando.  
  
 Come costosa è il meccanismo di distribuzione rispetto a ciò che esegue il gestore in risposta a un comando, il costo del routing è basso. Occorre tenere presente che il framework genera comandi solo quando l'utente interagisce con un oggetto dell'interfaccia utente.  
  
### <a name="_core_standard_command_route"></a> Routing standard dei comandi  
  
|Quando un oggetto di questo tipo riceve un comando . . .|Concede a se stesso e ad altri oggetti destinazione comando l'opportunità di gestire il comando in questo ordine:|  
|----------------------------------------------------------|-----------------------------------------------------------------------------------------------------|  
|Finestra cornice MDI (`CMDIFrameWnd`)|1.  Attiva `CMDIChildWnd`<br />2.  Questa finestra cornice<br />3.  Applicazione (`CWinApp` oggetto)|  
|Finestre cornice del documento (`CFrameWnd`, `CMDIChildWnd`)|1.  Visualizzazione attiva<br />2.  Questa finestra cornice<br />3.  Applicazione (`CWinApp` oggetto)|  
|Visualizza|1.  Questa visualizzazione<br />2.  Documento collegato alla visualizzazione|  
|Document|1.  Documento corrente<br />2.  Modello di documento collegato al documento|  
|Finestra di dialogo|1.  Questa finestra di dialogo<br />2.  Finestra proprietaria della finestra di dialogo.<br />3.  Applicazione (`CWinApp` oggetto)|  
  
 Nei casi in cui le voci numerate nella seconda colonna della tabella precedente menzionano altri oggetti, come un documento, vedere l'elemento corrispondente nella prima colonna. Ad esempio, quando si legge nella seconda colonna che la visualizzazione inoltra un comando al suo documento, vedere la voce "Documento" nella prima colonna per continuare a seguire il routing.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)

