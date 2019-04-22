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
ms.openlocfilehash: 41cbb86b4245bd78baecd222b5573ba5e877243a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58773827"
---
# <a name="wizards-and-the-resource-editors"></a>Procedure guidate ed editor risorse

Visual C++ include diverse procedure guidate per l'uso nella programmazione con MFC, insieme a molti editor di risorse integrato. Per i controlli ActiveX programmazione, il [Creazione guidata controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md) svolge una funzione analoga a quella della creazione guidata applicazione MFC. È possibile scrivere le applicazioni MFC senza la maggior parte di questi strumenti, gli strumenti notevolmente semplificano e velocizzare il lavoro.

##  <a name="_core_use_appwizard_to_create_an_mfc_application"></a> Usare la creazione guidata applicazione MFC per creare un'applicazione MFC

Usare la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per creare un progetto MFC in Visual C++, che può includere OLE e supporto del database. File del progetto contengano l'applicazione, documenti, visualizzazione e classi frame-window; risorse standard, inclusi i menu e una barra degli strumenti facoltativo; altro necessari file di Windows; e i file RTF facoltativa che contiene gli argomenti della Guida di Windows standard che è possibile rivedere e potenziare per creare i file della Guida del programma.

##  <a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a> Utilizzare Visualizzazione classi per la gestione di classi e i messaggi di Windows

Consente di visualizzazione classi creare funzioni di gestione per i messaggi di Windows e i comandi, creare e gestire le classi, creare le variabili membro di classe, creare proprietà e metodi di automazione, creare classi di database e altro ancora.

> [!NOTE]
>  Visualizzazione classi consente inoltre di eseguire l'override di funzioni virtuali nelle classi MFC. Selezionare la classe e la funzione virtuale per eseguire l'override. Il resto del processo è simile alla gestione dei messaggi, come descritto nei paragrafi seguenti.

Le applicazioni in esecuzione in Windows vengono [basate su messaggi](../mfc/message-handling-and-mapping.md). Le azioni dell'utente e altri eventi che si verificano nel programma in esecuzione provocano Windows inviare messaggi alle finestre nel programma. Ad esempio, se l'utente fa clic in una finestra, Windows invia un messaggio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e un messaggio WM_LBUTTONUP quando viene rilasciato il pulsante. Quando l'utente seleziona i comandi dalla barra dei menu, Windows invia inoltre WM_COMMAND (messaggi).

Nel framework MFC, vari oggetti, ad esempio documenti, visualizzazioni, finestre cornice, modelli di documento e l'oggetto di applicazione, possono "handle" dei messaggi. Un oggetto di questo tipo fornisce una funzione del gestore"" come uno dei relativi membri funzioni e la struttura associa il messaggio in arrivo al gestore.

Gran parte dell'attività di programmazione è la scelta di quali messaggi relativi a eseguire il mapping a quali oggetti e quindi implementare tale mapping. A tale scopo, usare Visualizzazione classi e nella finestra Proprietà.

La finestra proprietà verrà creata funzioni membro vuoto del gestore di messaggi ed è utilizzare editor del codice sorgente per implementare il corpo del gestore. È anche possibile creare o modificare le classi (incluse le classi personalizzate, non è derivate dalle classi MFC) e i relativi membri con Visualizzazione classi. Per altre informazioni sull'utilizzo di visualizzazione classi e sulle procedure guidate che aggiungere codice a un progetto, vedere [aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).

##  <a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a> Utilizzare gli editor di risorse per creare e modificare le risorse

Usare Visual C++ [editor di risorse](../windows/resource-editors.md) per creare e modificare i menu, finestre di dialogo, i controlli personalizzati, tasti di scelta rapida, bitmap, icone, cursori, stringhe e le risorse della versione. A partire da Visual C++ versione 4.0, un editor barra degli strumenti rende molto più semplice la creazione di barre degli strumenti.

Per agevolare ulteriormente, la libreria Microsoft Foundation Class offre un file denominato comune. RES, che contiene le risorse di "ClipArt" che è possibile copiare dai più comuni. RES e incollare nel file di risorsa. COMUNI. RES include i pulsanti della barra degli strumenti, comuni cursori, icone e altro ancora. È possibile usare, modificare e ridistribuire le risorse nell'applicazione. Per altre informazioni sui comuni. RES, vedere la [Clipart esempio](../overview/visual-cpp-samples.md).

La creazione guidata applicazione MFC, le procedure guidate di Visual C++, gli editor di risorse e il framework MFC non molto lavoro per l'utente e la gestione del codice molto più semplice. La maggior parte del codice specifico dell'applicazione è in classi documento e visualizzazione.

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
