---
title: "Visualizzazioni Maschera (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC], basate su form"
  - "form [C++]"
  - "form [C++], aggiunta ad applicazioni"
  - "applicazioni basate su form"
  - "interfacce utente, form"
ms.assetid: efbe73c1-4ca4-4613-aac2-30d916e92c0e
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Visualizzazioni Maschera (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile aggiungere i form di qualsiasi applicazione di Visual C\+\+ supporta le librerie MFC, inclusi [applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) \(uno con la classe di visualizzazione deriva da `CFormView`\).  Se inizialmente non è stata creata l'applicazione supportare i form, Visual C\+\+ aggiunto questo supporto è quando si inserisce un nuovo form.  In un'applicazione SDI o in un'applicazione MDI, che implementano [l'architettura documento\/visualizzazione](../mfc/document-view-architecture.md)predefinito, quando l'utente sceglie il comando di `New` \(per impostazione predefinita, nel menu di **File** \), Visual C\+\+ questo suggerisce all'utente di scegliere dai form disponibili.  
  
 Con un'applicazione SDI, quando l'utente sceglie il comando di `New`, l'istanza corrente del form continua a funzionare ma una nuova istanza dell'applicazione al form selezionata viene creata se non ne viene trovato.  In un'applicazione MDI, l'istanza corrente del form continua a essere eseguito quando l'utente sceglie il comando di `New`.  
  
> [!NOTE]
>  È possibile inserire un form in un'applicazione a finestre \(una delle quali la classe della finestra di dialogo è basata su `CDialog` e una in cui nessuna classe di visualizzazione viene implementata\).  Tuttavia, senza l'architettura documento\/visualizzazione, Visual C\+\+ automaticamente non implementa **File** &#124;funzionalità di**Nuova**.  È necessario creare un modo affinché l'utente visualizzare i form aggiuntivi, come implementare una finestra di dialogo a schede con varie pagine delle proprietà.  
  
 Quando si inserisce un nuovo form dell'applicazione, Visual C\+\+ consente di effettuare le seguenti operazioni:  
  
-   Crea una classe basata su una delle classi stile form scelto \(`CFormView`, `CRecordView`, `CDaoRecordView`, o `CDialog`\).  
  
-   Crea una risorsa finestra di dialogo con gli stili appropriati \(oppure utilizzare una risorsa finestra di dialogo non ancora associata a una classe\).  
  
     Se si sceglie una risorsa finestra di dialogo esistente, potrebbe essere necessario impostare questi stili utilizzando la pagina delle proprietà per la finestra di dialogo.  Gli stili per una finestra di dialogo deve includere:  
  
     \=On Di**WS\_CHILD**  
  
     \=Off di`WS_BORDER`  
  
     \=Off Di**WS\_VISIBLE**  
  
     **WS\_CAPTION\=** out  
  
 Per le applicazioni basate sull'architettura documento\/visualizzazione, il comando di **Nuovo modulo** facendo clic con il pulsante destro del mouse in Visualizzazione classi\) anche:  
  
-   Crea una classe di base **CDocument**  
  
     Anziché creare una nuova classe creare, è possibile utilizzare una classe basata esistente di **CDocument**nel progetto.  
  
-   Genera un modello di documento \(derivato da **CDocument**\) con stringa, menu e le risorse icona.  
  
     È inoltre possibile creare una nuova classe su cui basare il modello.  
  
-   Aggiungere una chiamata a **AddDocumentTemplate** nel codice di `InitInstance` dell'applicazione.  
  
     Visual C\+\+ aggiunge questo codice a ogni nuovo form creata, per aggiungere il form all'elenco dei form disponibili quando l'utente sceglie il comando di `New`.  Questo codice include gli ID di risorsa associato e i nomi del modulo del documento, la visualizzazione e classi collegati frame che costituiscono insieme il nuovo oggetto form.  
  
     I modelli di documento fungono da connessione tra documenti, le finestre cornici e visualizzazioni.  Per un singolo documento, è possibile creare molti modelli.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Creare un'applicazione basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)  
  
-   [Inserendo un modulo in un progetto](../mfc/inserting-a-form-into-a-project.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)