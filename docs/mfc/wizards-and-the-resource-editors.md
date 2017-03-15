---
title: "Procedure guidate ed editor risorse | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], e MFC"
  - "Visualizzazione classi (strumento), gestione della messaggistica Windows"
  - "editor, risorsa"
  - "MFC [C++], editor risorse"
  - "MFC [C++], procedure guidate"
  - "Creazione guidata applicazione MFC"
  - "editor risorse, MFC"
  - "procedure guidate [C++], programmazione MFC"
  - "procedure guidate [MFC]"
ms.assetid: f5dd4d13-9dc1-4a49-b6bf-5b3cb45fa8ba
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Procedure guidate ed editor risorse
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ include diverse procedure guidate da utilizzare nella programmazione MFC, con molti editor di risorse integrati.  Per la programmazione dei controlli ActiveX, [Creazione guidata controllo ActiveX](../mfc/reference/mfc-activex-control-wizard.md) ha uno scopo molto simile a quello della Creazione guidata applicazione MFC.  Sebbene sia possibile scrivere applicazioni MFC senza la maggior parte di questi strumenti, gli strumenti e semplificano notevolmente accelerano il lavoro.  
  
##  <a name="_core_use_appwizard_to_create_an_mfc_application"></a> Utilizzare la Creazione guidata applicazione MFC per creare un'applicazione MFC  
 Utilizzare [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per creare un progetto MFC in Visual C\+\+, che possono includere OLE e il supporto di database.  I file del progetto contengono l'applicazione, vengono registrati, visualizzare e classi della finestra cornice; risorse MFC standard, inclusi i menu e la barra degli strumenti facoltativa; altri file necessari; Windows e .rtf facoltativo archivia contenere gli argomenti della Guida di Windows standard che è possibile rivedere e aumentare per creare il file della Guida del programma.  
  
##  <a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a> Visualizzazione utilizzare le classi per gestire le classi e i messaggi di windows  
 Guide di Visualizzazione classi create le funzioni di gestione dei messaggi e i comandi di windows, è possibile creare e gestire le classi, è necessario creare le variabili membro di classe, si creano metodi di automazione e proprietà, creare le classi di database e altro ancora.  
  
> [!NOTE]
>  Visualizzazione classi consente anche di eseguire l'override delle funzioni virtuali nelle classi MFC.  Selezionare classe e la funzione virtuale per eseguire l'override.  Il resto del processo è simile alla gestione dei messaggi, come descritto nei paragrafi seguenti.  
  
 Le applicazioni eseguite in base alle finestre sono [messaggio determinato](../mfc/message-handling-and-mapping.md).  Azioni utente e altri eventi che si verificano nelle finestre di causa di programma in esecuzione per inviare messaggi alle finestre del programma.  Ad esempio, se l'utente fa clic con il mouse in una finestra, le finestre invia un messaggio di `WM_LBUTTONDOWN` quando il pulsante sinistro del mouse viene premuto e un messaggio di `WM_LBUTTONUP` quando il pulsante viene rilasciato.  Le finestre anche invia i messaggi di **WM\_COMMAND** quando l'utente seleziona comandi della barra dei menu.  
  
 Nel framework MFC, i vari oggetti, quali documenti, visualizzazioni, le finestre cornici, modelli di documento e l'oggetto application, possono gestire "" messaggi.  Tale oggetto vengono fornite "una funzione di gestione" come una delle funzioni membro e il framework esegue il mapping del messaggio in arrivo al gestore.  
  
 Una grande parte dell'attività di programmazione è la scelta di messaggi per eseguire il mapping agli oggetti quindi a implementare il mapping.  A tal fine, utilizzare la Visualizzazione classi e la Finestra Proprietà.  
  
 La Finestra Proprietà parametri funzione membro per la gestione dei messaggi vuoti e utilizzare l'editor del codice sorgente per implementare il corpo del gestore.  È inoltre possibile creare o modificare le classi \(comprese le classi personalizzate, non derivate dalle classi MFC\) e i relativi membri mediante Visualizzazione classi.  Per ulteriori informazioni sull'utilizzo della Visualizzazione classi e sulle procedure guidate per l'aggiunta di codice a un progetto, vedere [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).  
  
##  <a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a> Utilizzare gli editor di risorse per creare e le Modifiche risorse  
 Utilizzare Visual C\+\+ [editor di risorse](../mfc/resource-editors.md) per creare e menu Modifica, finestre di dialogo, controlli personalizzati, tasti di scelta rapida, bitmap, le icone, cursori, stringhe e risorse della versione.  A partire da Visual C\+\+ versione 4,0, un editor barra degli strumenti consente di creare barre degli strumenti molto più semplice.  
  
 Per semplificare ulteriormente, la libreria MFC fornisce un file denominato COMMON.RES, contenente le risorse "clip art." che è possibile copiare da COMMON.RES e di inserimento nel proprio file di risorse.  COMMON.RES sono inclusi i pulsanti della barra degli strumenti, i cursori comuni, icone e così via.  È possibile utilizzare, modificare e ridistribuire queste risorse nell'applicazione.  Per ulteriori informazioni su COMMON.RES, vedere [Esempio clip art.](../top/visual-cpp-samples.md)  
  
 La Creazione guidata applicazione MFC, le procedure guidate di Visual C\+\+, gli editor di risorse e il framework MFC fare molto lavoro automaticamente e rendere la gestione del codice molto più semplice.  La maggior parte del codice specifico dell'applicazione sia nelle classi visualizzazione e documento.  
  
## Vedere anche  
 [Utilizzo delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)