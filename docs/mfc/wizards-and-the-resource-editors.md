---
title: Procedure guidate ed editor risorse | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: db1b807856baf4cab3cdef57092cd29fdff3a19d
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951140"
---
# <a name="wizards-and-the-resource-editors"></a>Procedure guidate ed editor risorse
Visual C++ include diverse procedure guidate per l'utilizzo nella programmazione di MFC, insieme a molti editor di risorse integrata. Per la programmazione, i controlli ActiveX di [Creazione guidata controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md) svolge una funzione simile a quella della creazione guidata applicazione MFC. Sebbene sia possibile scrivere applicazioni MFC senza la maggior parte di questi strumenti, gli strumenti notevolmente semplificano e velocizzare il lavoro.  
  
##  <a name="_core_use_appwizard_to_create_an_mfc_application"></a> Utilizzare la creazione guidata applicazione MFC per creare un'applicazione MFC  
 Usare la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per creare un progetto MFC in Visual C++, che include OLE e il supporto per database. I file nel progetto contengono dell'applicazione, documenti, visualizzazione e le classi finestra cornice. risorse standard, compresi i menu e una barra degli strumenti facoltativo; altro necessari file di Windows; i file RTF facoltativo contenente gli argomenti della Guida di Windows standard che è possibile modificare ed estendere per creare file della Guida del programma.  
  
##  <a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a> Utilizzare Visualizzazione classi per gestire le classi e i messaggi di Windows  
 Consente di visualizzare classe creare funzioni di gestione per i messaggi di Windows e i comandi, creare e gestire le classi, creare le variabili membro di classe, creare proprietà e metodi di automazione, creare classi di database e altro ancora.  
  
> [!NOTE]
>  Visualizzazione classi consente inoltre di eseguire l'override di funzioni virtuali nelle classi MFC. Selezionare la classe e la funzione virtuale per eseguire l'override. Il resto del processo è simile alla gestione dei messaggi, come descritto nei paragrafi seguenti.  
  
 Le applicazioni in esecuzione su Windows sono [basate su messaggi](../mfc/message-handling-and-mapping.md). Le azioni dell'utente e altri eventi che si verificano nel programma in esecuzione provocano Windows inviare messaggi di windows nel programma. Ad esempio, se l'utente fa clic in una finestra, Windows invia un messaggio WM_LBUTTONDOWN quando viene premuto il pulsante sinistro del mouse e un messaggio WM_LBUTTONUP quando viene rilasciato il pulsante. Quando l'utente seleziona i comandi dalla barra dei menu, Windows invia inoltre WM_COMMAND (messaggi).  
  
 Nel framework MFC, vari oggetti, ad esempio documenti, visualizzazioni, finestre cornice, modelli di documento e l'oggetto applicazione, possono "handle" messaggi. Tale oggetto fornisce una funzione del gestore"" come uno dei relativi membri funzioni, e il framework esegue il mapping il messaggio in arrivo al gestore.  
  
 Gran parte dell'attività di programmazione viene scelta dei messaggi per eseguire il mapping per gli oggetti e quindi implementando tale mapping. A tale scopo, utilizzare Visualizzazione classi e nella finestra Proprietà.  
  
 Finestra Proprietà creerà funzioni membro di gestore di messaggi vuota e utilizzare editor del codice sorgente per implementare il corpo del gestore. È anche possibile creare o modificare le classi (incluse le classi personalizzate, non è derivate dalle classi MFC) e i relativi membri con Visualizzazione classi. Per ulteriori informazioni sull'utilizzo di visualizzazione classi e sulle procedure guidate che aggiungere codice a un progetto, vedere [aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).  
  
##  <a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a> Utilizzare gli editor di risorse per creare e modificare le risorse  
 Usare Visual C++ [editor di risorse](../windows/resource-editors.md) per creare e modificare i menu, finestre di dialogo, controlli personalizzati, tasti di scelta rapida, bitmap, icone, cursori, stringhe e le risorse di versione. A partire da Visual C++ versione 4.0, un editor barra degli strumenti semplifica la creazione di barre degli strumenti.  
  
 Come ausilio ancor più, la libreria Microsoft Foundation Class fornisce un file denominato comune. RES, che contiene risorse "ClipArt" che è possibile copiare da comuni. RES e incollare nel file di risorsa. COMUNI. RES include i pulsanti della barra degli strumenti, comuni i cursori, icone e molto altro. È possibile utilizzare, modificare e ridistribuire queste risorse nell'applicazione. Per altre informazioni comuni. RES, vedere la [esempio Clipart](../visual-cpp-samples.md).  
  
 La creazione guidata applicazione MFC, le procedure guidate di Visual C++, editor di risorse e del framework MFC di eseguire molte operazioni e facilitare la gestione del codice molto più semplice. La maggior parte del codice specifico dell'applicazione è nelle classi documento e la visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
