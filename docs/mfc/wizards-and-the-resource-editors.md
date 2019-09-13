---
title: Procedure guidate ed editor risorse
ms.date: 11/04/2016
helpviewer_keywords:
- application wizards [MFC], and MFC
- MFC, resource editors
- resource editors, MFC
- MFC Application Wizard
- editors [MFC], resource
- wizards [MFC]
- wizards [MFC], MFC programming
- MFC, wizards
- Class View tool, managing Windows messages
ms.assetid: f5dd4d13-9dc1-4a49-b6bf-5b3cb45fa8ba
ms.openlocfilehash: fb1a523ca82cd8e1a4256da657efe9702517beda
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907357"
---
# <a name="wizards-and-the-resource-editors"></a>Procedure guidate ed editor risorse

Visual C++ include diverse procedure guidate per l'utilizzo nella programmazione MFC, insieme a molti editor di risorse integrati. Per la programmazione dei controlli ActiveX, la [creazione guidata controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md) ha uno scopo analogo a quello della creazione guidata applicazione MFC. Sebbene sia possibile scrivere applicazioni MFC senza la maggior parte di questi strumenti, gli strumenti semplificano e velocizzano notevolmente il lavoro.

##  <a name="_core_use_appwizard_to_create_an_mfc_application"></a>Utilizzare la creazione guidata applicazione MFC per creare un'applicazione MFC

Utilizzare la [creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per creare un progetto MFC in C++Visual, che può includere il supporto per OLE e database. I file del progetto contengono le classi dell'applicazione, del documento, della vista e della finestra cornice; risorse standard, inclusi i menu e una barra degli strumenti facoltativa. altri file di Windows necessari; e file con estensione RTF facoltativi contenenti argomenti della Guida di Windows standard che è possibile modificare e migliorare per creare il file della guida del programma.

##  <a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a>Usare Visualizzazione classi per gestire le classi e i messaggi di Windows

Visualizzazione classi consente di creare funzioni di gestione per i messaggi e i comandi di Windows, creare e gestire classi, creare variabili membro della classe, creare metodi e proprietà di automazione, creare classi di database e altro ancora.

> [!NOTE]
>  Visualizzazione classi consente inoltre di eseguire l'override delle funzioni virtuali nelle classi MFC. Selezionare la classe e la funzione virtuale di cui eseguire l'override. Il resto del processo è simile alla gestione dei messaggi, come descritto nei paragrafi seguenti.

Le applicazioni in esecuzione in Windows sono [basate su messaggi](../mfc/message-handling-and-mapping.md). Le azioni dell'utente e gli altri eventi che si verificano nel programma in esecuzione fanno sì che Windows invii messaggi alle finestre del programma. Ad esempio, se l'utente fa clic con il mouse in una finestra, Windows invia un messaggio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e un messaggio WM_LBUTTONUP quando viene rilasciato il pulsante. Windows invia anche messaggi WM_COMMAND quando l'utente seleziona i comandi dalla barra dei menu.

Nel framework MFC, diversi oggetti, ad esempio documenti, viste, finestre cornice, modelli di documento e l'oggetto applicazione, possono "gestire" i messaggi. Tale oggetto fornisce una "funzione di gestione" come una delle funzioni membro e il Framework esegue il mapping del messaggio in arrivo al relativo gestore.

Una parte importante dell'attività di programmazione è la scelta dei messaggi a cui eseguire il mapping a quali oggetti e quindi l'implementazione del mapping. A tale scopo, usare Visualizzazione classi e la [creazione guidata classe](reference/mfc-class-wizard.md).

La [creazione guidata classe](reference/mfc-class-wizard.md) creerà funzioni membro di gestione messaggi vuote e l'editor del codice sorgente verrà usato per implementare il corpo del gestore. È anche possibile creare o modificare classi, incluse le classi personalizzate, non derivate dalle classi MFC, e i relativi membri con Visualizzazione classi. Per ulteriori informazioni sull'utilizzo di Visualizzazione classi e sulle procedure guidate che aggiungono codice a un progetto, vedere [aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).

##  <a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a>Usare gli editor di risorse per creare e modificare le risorse

Usare gli C++ [editor di risorse](../windows/resource-editors.md) visive per creare e modificare menu, finestre di dialogo, controlli personalizzati, tasti di scelta rapida, bitmap, icone, cursori, stringhe e risorse della versione. A partire dalla C++ versione di Visual 4,0, un editor della barra degli strumenti semplifica notevolmente la creazione di barre degli strumenti.

Per semplificare ulteriormente, il libreria Microsoft Foundation Class fornisce un file denominato comune. RES, che contiene le risorse "clipart" che è possibile copiare dal comune. RES e incollare nel file di risorse. Comune. RES include pulsanti della barra degli strumenti, cursori comuni, icone e altro ancora. È possibile usare, modificare e ridistribuire queste risorse nell'applicazione. Per ulteriori informazioni su COMMON. RES, vedere l' [esempio ClipArt](../overview/visual-cpp-samples.md).

La creazione guidata applicazione MFC, le C++ creazioni guidate visive, gli editor di risorse e il framework MFC eseguono molte operazioni e semplificano notevolmente la gestione del codice. La maggior parte del codice specifico dell'applicazione si trova nelle classi Document e View.

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
