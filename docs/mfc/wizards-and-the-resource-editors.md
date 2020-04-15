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
ms.openlocfilehash: 04d9f2cf615636b151af93a3c3880f7357496048
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365270"
---
# <a name="wizards-and-the-resource-editors"></a>Procedure guidate ed editor risorse

Nella programmazione MFC sono incluse diverse procedure guidate da utilizzare, insieme a molti editor di risorse integrati. Per la programmazione di controlli ActiveX, la [Creazione guidata controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md) ha uno scopo molto simile a quello della Creazione guidata applicazione MFC. Sebbene sia possibile scrivere applicazioni MFC senza la maggior parte di questi strumenti, gli strumenti semplificano e velocizzano notevolmente il lavoro.

## <a name="use-the-mfc-application-wizard-to-create-an-mfc-application"></a><a name="_core_use_appwizard_to_create_an_mfc_application"></a>Utilizzare la Creazione guidata applicazione MFC per creare un'applicazione MFC

Utilizzare la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per creare un progetto MFC in Visual C, che può includere OLE e il supporto di database. I file nel progetto contengono le classi dell'applicazione, del documento, della visualizzazione e della finestra cornice; risorse standard, inclusi i menu e una barra degli strumenti opzionale; altri file di Windows necessari; e file RTF facoltativi contenenti argomenti standard della Guida di Windows che è possibile rivedere e aumentare per creare il file della Guida del programma.

## <a name="use-class-view-to-manage-classes-and-windows-messages"></a><a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a>Utilizzare Visualizzazione classi per gestire classi e messaggi di WindowsUse Class View to Manage Classes and Windows Messages

Visualizzazione classi consente di creare funzioni di gestione per i messaggi e i comandi di Windows, creare e gestire classi, creare variabili membro di classe, creare metodi e proprietà di automazione, creare classi di database e altro ancora.

> [!NOTE]
> Visualizzazione classi consente inoltre di eseguire l'override delle funzioni virtuali nelle classi MFC. Selezionare la classe e la funzione virtuale da sostituire. Il resto del processo è simile alla gestione dei messaggi, come descritto nei paragrafi seguenti.

Le applicazioni in esecuzione in Windows sono [basate sui messaggi](../mfc/message-handling-and-mapping.md). Le azioni dell'utente e altri eventi che si verificano nel programma in esecuzione causano l'invio di messaggi alle finestre del programma. Ad esempio, se l'utente fa clic con il mouse in una finestra, Windows invia un messaggio di WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e un messaggio di WM_LBUTTONUP quando il pulsante viene rilasciato. Windows invia anche WM_COMMAND messaggi quando l'utente seleziona i comandi dalla barra dei menu.

Nel framework MFC, vari oggetti, ad esempio documenti, visualizzazioni, finestre cornice, modelli di documento e l'oggetto applicazione, possono "gestire" i messaggi. Tale oggetto fornisce una "funzione del gestore" come una delle relative funzioni membro e il framework esegue il mapping del messaggio in arrivo al relativo gestore.

Gran parte dell'attività di programmazione è la scelta dei messaggi di cui eseguire il mapping a quali oggetti e quindi implementare tale mapping. A tale scopo, utilizzare Visualizzazione classi e la [Creazione guidata classe](reference/mfc-class-wizard.md).

La [Creazione guidata classe](reference/mfc-class-wizard.md) creerà funzioni membro del gestore messaggi vuote e si utilizzerà l'editor del codice sorgente per implementare il corpo del gestore. È inoltre possibile creare o modificare classi (incluse le classi personalizzate, non derivate dalle classi MFC) e i relativi membri con Visualizzazione classi. Per ulteriori informazioni sull'utilizzo di Visualizzazione classi e sulle procedure guidate che aggiungono codice a un progetto, vedere [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).

## <a name="use-the-resource-editors-to-create-and-edit-resources"></a><a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a>Usare gli editor di risorse per creare e modificare le risorseUse the Resource Editors to Create and Edit Resources

Utilizzare gli editor di [risorse](../windows/resource-editors.md) di Visual C, per creare e modificare menu, finestre di dialogo, controlli personalizzati, tasti di scelta rapida, bitmap, icone, cursori, stringhe e risorse di versione. A partire dalla versione 4.0, l'editor di un oggetto strumenti semplifica molto la creazione delle barre degli strumenti.

Per esadire ancora di più, la libreria Microsoft Foundation Class fornisce un file denominato COMMON. RES, che contiene le risorse "clip art" che è possibile copiare da COMMON. RES e incollare nel proprio file di risorse. Comune. RES include pulsanti della barra degli strumenti, cursori comuni, icone e altro ancora. È possibile utilizzare, modificare e ridistribuire queste risorse nell'applicazione. Per ulteriori informazioni su COMMON. RES, vedere [l'esempio Clipart](../overview/visual-cpp-samples.md).

La Creazione guidata applicazione MFC, le procedure guidate di Visual C, gli editor di risorse e il framework MFC consentono di eseguire molte operazioni e semplificano la gestione del codice. La maggior parte del codice specifico dell'applicazione si trova nelle classi documento e visualizzazione.

## <a name="see-also"></a>Vedere anche

[Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
