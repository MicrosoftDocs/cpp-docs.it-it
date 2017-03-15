---
title: "Aggiunta di funzionalit&#224; con creazioni guidate codice | Microsoft Docs"
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
  - "vc.codewiz.classes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate classi [C++]"
  - "creazioni guidate codice [C++]"
  - "progetti [C++], aggiunta di funzionalità"
  - "progetti Visual C++, aggiunta di funzionalità"
  - "procedure guidate [C++], codice"
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di funzionalit&#224; con creazioni guidate codice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo aver creato un progetto, è possibile che si desideri modificarlo o aggiungervi delle funzionalità,  ad esempio creando nuove classi, aggiungendo nuove variabili e funzioni membro oppure metodi e proprietà di automazione.  È possibile eseguire queste operazioni mediante le creazioni guidate codice.  
  
> [!NOTE]
>  È ora possibile aggiungere gestori di messaggi ai quali associare i messaggi ed eseguire l'override delle funzioni virtuali MFC mediante la [finestra Proprietà](../Topic/Properties%20Window.md).  
  
## Accesso alle creazioni guidate codice di Visual C\+\+  
 È possibile accedere alle creazioni guidate codice di Visual C\+\+ nei tre modi descritti di seguito.  
  
-   Utilizzare il comando **Aggiungi nuovo elemento** del menu **Progetto** per visualizzare la finestra di dialogo `Add New Item`, in cui è possibile aggiungere nuovi file al progetto.  Utilizzare il comando **Aggiungi classe** per visualizzare la finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md), che consente di avviare le procedure guidate per ogni tipo di classe che è possibile aggiungere al progetto.  Utilizzare il comando **Aggiungi risorsa** per visualizzare la finestra di dialogo [Aggiungi risorsa](../windows/add-resource-dialog-box.md), nella quale creare o selezionare una risorsa da aggiungere al progetto.  
  
     Se si seleziona una classe o un'interfaccia del progetto in Visualizzazione classi, nel menu **Progetto** saranno disponibili anche i seguenti comandi:  
  
    -   **Implementa interfaccia** \(solo da una classe Control\)  
  
    -   **Aggiungi funzione**  
  
    -   **Aggiungi variabile**  
  
    -   **Aggiungi punto di connessione** \(solo da una classe ATL\)  
  
    -   **Aggiungi metodo** \(solo da un'interfaccia\)  
  
    -   **Aggiungi proprietà** \(solo da un'interfaccia\)  
  
    -   **Aggiungi evento** \(solo da una classe Control\)  
  
-   In **Esplora soluzioni** fare clic con il pulsante destro del mouse su una cartella qualsiasi e scegliere **Aggiungi** dal menu di scelta rapida per aggiungere al progetto file nuovi o esistenti, cartelle, elementi, classi, risorse e riferimenti Web.  
  
-   Nella [finestra Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nodo appropriato e scegliere **Aggiungi** dal menu di scelta rapida per aggiungere al progetto funzioni, variabili, classi, proprietà, metodi, eventi, interfacce, punti di connessione o altro codice.  
  
    > [!NOTE]
    >  In Visual Studio non sono disponibili procedure guidate per l'aggiunta di un'interfaccia a un progetto.  Per aggiungere un'interfaccia a un progetto ATL o [aggiungere supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md), aggiungere un oggetto semplice mediante la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).  In alternativa, aprire il file IDL del progetto e creare l'interfaccia immettendo quanto segue:  
  
    ```  
    interface IMyInterface {  
    };  
  
    ```  
  
     Per ulteriori informazioni, vedere [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
    |Accesso alla creazione guidata da|Descrizione|  
    |---------------------------------------|-----------------|  
    |Aggiungi nuovo elemento|Mediante le creazioni guidate codice Aggiungi nuovo elemento è possibile aggiungere file di origine al progetto.  Se necessario, vengono create directory aggiuntive per facilitare il reperimento dei file da parte del motore di compilazione del progetto.  Utilizzando le creazioni guidate codice accessibili mediante l'icona Aggiungi elemento è possibile effettuare le seguenti operazioni:<br /><br /> -   Aggiungere i file di origine C\+\+ \(con estensioni cpp, h, idl, rc, srf, def, rgs\).<br />-   Aggiungere i file di sviluppo Web  \(con estensioni html, asp, css, xml\).<br />-   Aggiungere i file di utilità e risorse \(con estensioni bmp, cur, ico, rct, sql, txt\).<br /><br /> In genere non è necessario fornire alcuna informazione. Alla struttura ad albero di sviluppo viene automaticamente aggiunto un file,  che può essere rinominato nella finestra delle proprietà.|  
    |Esplora soluzioni|A seconda della posizione in cui si trova il cursore quando si fa clic con il pulsante destro del mouse su un elemento, in Esplora soluzioni sono disponibili diverse creazioni guidate codice.  Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore della struttura ad albero di sviluppo e riprovare.  Mediante le creazioni guidate codice è possibile inserire il codice aggiuntivo nella posizione corretta all'interno della struttura ad albero di sviluppo, indipendentemente dalla posizione del cursore.  In Esplora soluzioni sono disponibili le seguenti creazioni guidate:<br /><br /> -   Aggiungi classe \(apre la finestra di dialogo **Aggiungi classe** che contiene le nuove creazioni guidate di codice\).<br />-   Aggiungi risorsa \(Nuova, Importa o Personalizza\).<br />-   Aggiungi riferimento Web.|  
    |Visualizzazione classi|A seconda della posizione in cui si trova il cursore quando si fa clic con il pulsante destro del mouse su un elemento, in  Visualizzazione classi sono disponibili diverse creazioni guidate codice.  Se l'opzione **Aggiungi** non viene visualizzata quando si fa clic con il pulsante destro del mouse su un elemento, spostare il cursore al livello superiore della struttura ad albero della classe e riprovare.  Mediante le creazioni guidate codice è possibile inserire il codice aggiuntivo nella posizione corretta all'interno della struttura ad albero di sviluppo, indipendentemente dalla posizione del cursore.  In Visualizzazione classi sono disponibili le seguenti creazioni guidate:<br /><br /> -   [Funzione Aggiungi membro](../ide/adding-a-member-function-visual-cpp.md).<br />-   [Variabile Aggiungi membro](../ide/adding-a-member-variable-visual-cpp.md).<br />-   [Aggiungi classe](../ide/adding-a-class-visual-cpp.md).<br />-   [Implementa interfaccia](../ide/implement-interface-wizard.md) \(solo da una classe di controllo\)<br />-   [Aggiungi punto di connessione](../ide/implement-connection-point-wizard.md)\(solo da una classe ATL\)<br />-   [Aggiungi metodo](../ide/add-method-wizard.md)\(solo da un'interfaccia\)<br />-   [Aggiungi proprietà](../ide/names-add-property-wizard.md) \(solo da un'interfaccia\)<br />-   [Aggiungi evento](../ide/add-event-wizard.md) \(solo da una classe Control\)<br /><br /> Fare clic su Aggiungi classe per visualizzare la finestra di dialogo **Aggiungi classe**, che consente di accedere a tutte le nuove creazioni guidate codice Aggiungi classe.|  
  
## Vedere anche  
 [Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Tipi di progetto Visual C\+\+](../ide/visual-cpp-project-types.md)   
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)