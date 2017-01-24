---
title: "Creazione di un&#39;applicazione MFC basata su form | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfcforms.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC], basate su form"
  - "applicazioni basate su form"
ms.assetid: 048d2f7d-b60d-4386-ad8e-71d49af9c05e
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un&#39;applicazione MFC basata su form
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un form costituisce una finestra di dialogo dotata di controlli che consentono all'utente di accedere ed eventualmente modificare i dati.  Può rivelarsi utile sviluppare un'applicazione in cui l'utente può effettuare una selezione tra vari form.  In un'applicazione di questo tipo è in genere possibile accedere ai form facendo clic su **Nuovo** dal menu **File**.  Vengono tuttavia considerate applicazioni basate su form anche le applicazioni a finestre, in cui non è possibile accedere al comando **Nuovo** del menu **File**.  
  
 Le applicazioni basate su form con interfaccia a documento singolo \(SDI, Single Document Interface\) consentono di eseguire una sola istanza di un determinato form alla volta.  Per eseguire più form contemporaneamente da un'applicazione SDI basata su form, selezionare un nuovo form scegliendo **Nuovo** dal menu **File**.  
  
 Creando applicazioni basate su form con interfaccia a documenti multipli \(MDI, Multiple Document Interface\), è possibile usufruire del supporto di più istanze dello stesso form.  
  
 Se si crea un'applicazione dotata del supporto di documenti multipli di primo livello, il desktop costituisce implicitamente il padre del documento e il frame del documento non è limitato all'area client dell'applicazione.  È possibile aprire più istanze del documento, ognuna dotata di frame, menu e icona della barra delle applicazioni specifici.  Le istanze successive dei documenti possono essere chiuse singolarmente, tuttavia se si sceglie `Exit` dal menu **File** dell'istanza iniziale, vengono chiuse tutte le istanze.  
  
 Le applicazioni SDI, MDI e a documenti multipli di primo livello sono tutte basate su form e utilizzano l'architettura documento\/visualizzazione.  
  
 Qualsiasi applicazione a finestre è per definizione basata su form.  Poiché le applicazioni di questo tipo non utilizzano l'architettura documento\/ visualizzazione, è necessario gestire i metodi di creazione e di accesso per i form aggiuntivi creati.  
  
 La classe base per le applicazioni basate su form corrisponde a [CFormView](../../mfc/reference/cformview-class.md).  Se l'applicazione dispone del supporto per database, è inoltre possibile selezionare qualsiasi classe derivata da `CFormView`.  Un form rappresenta qualsiasi finestra derivata da `CFormView` o da una classe che eredita da `CFormView`.  
  
 Anche nel caso in cui si utilizzi una classe base come [CView](../../mfc/reference/cview-class.md), l'applicazione può successivamente essere trasformata in un'applicazione basata su form mediante l'[aggiunta di una classe MFC](../../mfc/reference/adding-an-mfc-class.md) derivata da `CFormView` e la selezione della casella di controllo **Genera risorse DocTemplate** nella [Creazione guidata classe MFC](../../mfc/reference/document-template-strings-mfc-add-class-wizard.md).  
  
 Una volta completata la procedura guidata, viene aperto il progetto. Se è stata selezionata come classe base `CFormView` o una classe che eredita da `CFormView` oppure è stata creata un'applicazione a finestre, viene inoltre aperto l'editor finestre.  A questo punto è possibile progettare il primo form.  
  
### Per avviare la creazione di un eseguibile MFC basato su form  
  
1.  Attenersi alla procedura illustrata in [Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella schermata [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC, selezionare la casella di controllo **Supporto architettura documento\/ visualizzazione**.  
  
3.  Selezionare **Documento singolo**, **Documenti multipli** o **Documenti multipli di primo livello**.  
  
    > [!NOTE]
    >  Se si sceglie un'applicazione SDI, MDI o con interfaccia a documenti multipli di primo livello, nella pagina [Classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) della creazione guidata la classe `CView` viene impostata per impostazione predefinita come classe base per la visualizzazione dell'applicazione.  Per creare un'applicazione basata su form è necessario selezionare `CFormView` come classe base per la visualizzazione dell'applicazione.  La procedura guidata non fornisce il supporto di stampa per le applicazioni basate su form.  
  
4.  Impostare le opzioni di progetto desiderate nelle altre schermate della procedura guidata.  
  
5.  Scegliere **Fine** per generare lo scheletro di applicazione.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Classi di visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Alternative all'architettura documento\/ visualizzazione](../../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Visualizzazioni Maschera](../../mfc/form-views-mfc.md)   
 [Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)   
 [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)