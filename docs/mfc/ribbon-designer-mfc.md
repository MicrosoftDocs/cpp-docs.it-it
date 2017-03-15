---
title: "Finestra di progettazione della barra multifunzione (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.ribbon.F1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (finestra di progettazione della barra multifunzione)"
  - "finestra di progettazione della barra multifunzione (MFC)"
ms.assetid: 0806dfd6-7d11-471a-99e1-4072852231f9
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Finestra di progettazione della barra multifunzione (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra di progettazione della barra multifunzione permette di creare e personalizzare barre multifunzione in applicazioni MFC.  Una barra multifunzione è un elemento dell'interfaccia utente che organizza i comandi in gruppi logici.  Questi gruppi sono visualizzati in schede separate in una striscia che occupa tutta la parte superiore della finestra.  La barra multifunzione sostituisce la barra dei menu e le barre degli strumenti.  Una barra multifunzione può migliorare significativamente l'usabilità delle applicazioni.  Per altre informazioni, vedere [Barre multifunzione](http://go.microsoft.com/fwlink/?LinkId=129233).  La figura seguente mostra una barra multifunzione.  
  
 ![Controllo della risorsa della barra multifunzione MFC](../mfc/media/ribbon_no_callouts.png "Ribbon\_No\_Callouts")  
  
 Per creare barre multifunzione nelle versioni precedenti di Visual Studio, era necessario scrivere codice che usasse le classi Ribbon MFC, come la [CMFCRibbonBar Class](../mfc/reference/cmfcribbonbar-class.md).  In [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] la finestra di progettazione della barra multifunzione offre un metodo alternativo per creare barre multifunzione. Prima di tutto, creare e personalizzare una barra multifunzione come risorsa.  Caricare quindi la risorsa barra multifunzione dal codice nell'applicazione MFC.  È anche possibile usare risorse barra multifunzione e classi Ribbon MFC insieme.  Ad esempio, è possibile creare una risorsa barra multifunzione e quindi aggiungervi più elementi a livello di codice al runtime.  
  
## Informazioni sulla finestra di progettazione della barra multifunzione  
 La finestra di progettazione della barra multifunzione crea e archivia la barra multifunzione come risorsa.  Quando si crea una risorsa barra multifunzione, la finestra di progettazione della barra multifunzione esegue tre operazioni:  
  
-   Aggiunge una voce nello script di definizione delle risorse del progetto \(\*.rc\).  Nell'esempio seguente `IDR_RIBBON` è il nome univoco che identifica la risorsa barra multifunzione, `RT_RIBBON_XML` è il tipo di risorsa e `ribbon.mfcribbon-ms` è il nome del file di risorse.  
  
    ```  
    IDR_RIBBON             RT_RIBBON_XML                      "res\\ribbon.mfcribbon-ms"  
    ```  
  
-   Aggiunge le definizioni degli ID comando a resource.h.  
  
    ```  
    #define IDR_RIBBON            307  
    ```  
  
-   Crea un file di risorse della barra multifunzione \(\*.mfcribbon\-ms\) che contiene il codice XML che definisce i pulsanti, i controlli e gli attributi della barra multifunzione.  Le modifiche apportate alla barra multifunzione nella finestra di progettazione della barra multifunzione vengono archiviate come XML nel file di risorse.  L'esempio di codice seguente mostra parte del contenuto di un file \*.mfcribbon\-ms.  
  
    ```  
    <RIBBON_BAR>  
      <ELEMENT_NAME>RibbonBar</ELEMENT_NAME>  
      <IMAGE>  
        <ID>  
          <NAME>IDB_BUTTONS</NAME>  
          <VALUE>113</VALUE>  
        </ID> …  
    ```  
  
 Per usare la risorsa barra multifunzione nell'applicazione MFC, caricare la risorsa chiamando [CMFCRibbonBar::LoadFromResource](../Topic/CMFCRibbonBar::LoadFromResource.md).  
  
## Creazione di una barra multifunzione mediante la finestra di progettazione della barra multifunzione  
 È possibile aggiungere una risorsa barra multifunzione al progetto MFC in due modi diversi:  
  
-   Creare un'applicazione MFC e configurare la Creazione guidata progetto MFC in modo da creare la barra multifunzione.  Per altre informazioni, vedere [Procedura dettagliata: creazione di un'applicazione barra multifunzione utilizzando MFC](../mfc/walkthrough-creating-a-ribbon-application-by-using-mfc.md).  
  
-   In un progetto MFC esistente creare una risorsa barra multifunzione e caricarla.  Per altre informazioni, vedere [Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble \(parte 1\)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md).  
  
 Se il progetto contiene già una barra multifunzione codificata manualmente, MFC include funzioni che permettono di convertire la barra multifunzione esistente in una risorsa barra multifunzione.  Per altre informazioni, vedere [Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon](../mfc/how-to-convert-an-existing-mfc-ribbon-to-a-ribbon-resource.md).  
  
> [!NOTE]
>  Le barre multifunzione non possono essere create in applicazioni basate su finestra di dialogo.  Per altre informazioni, vedere [Tipo di applicazione, Creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md).  
  
## Personalizzazione di barre multifunzione  
 Per aprire una barra multifunzione nella finestra di progettazione della barra multifunzione, fare doppio clic sulla risorsa barra multifunzione in Visualizzazione risorse.  Nella finestra di progettazione è possibile aggiungere, rimuovere e personalizzare gli elementi sulla barra multifunzione, il pulsante dell'applicazione o la barra di accesso rapido.  È anche possibile collegare eventi, ad esempio eventi di selezione di pulsanti ed eventi di menu, a un metodo nell'applicazione.  
  
 La figura seguente mostra i diversi componenti presenti nella finestra di progettazione della barra multifunzione.  
  
 ![Finestra di progettazione della barra multifunzione MFC](../mfc/media/ribbon_designer.png "Ribbon\_Designer")  
  
-   **Casella degli strumenti:** contiene i controlli che possono essere trascinati nell'area di progettazione.  
  
-   **Area di progettazione:** contiene la rappresentazione visiva della risorsa barra multifunzione.  
  
-   **Finestra Proprietà:** elenca gli attributi dell'elemento selezionato sull'area di progettazione.  
  
-   **Finestra Visualizzazione risorse:** visualizza le risorse che includono le risorse barra multifunzione nel progetto.  
  
-   **Barra degli strumenti Editor Ribbon:** contiene i comandi che permettono di visualizzare in anteprima la barra multifunzione e di modificarne il tema visivo.  
  
 Gli argomenti seguenti descrivono come usare le funzionalità della finestra di progettazione della barra multifunzione:  
  
-   [Procedura: personalizzare il pulsante dell'applicazione](../mfc/how-to-customize-the-application-button.md)  
  
-   [Procedura: personalizzare la barra di accesso rapido](../mfc/how-to-customize-the-quick-access-toolbar.md)  
  
-   [Procedura: aggiungere controlli Ribbon e gestori eventi](../mfc/how-to-add-ribbon-controls-and-event-handlers.md)  
  
-   [Procedura: caricare una risorsa Ribbon da un'applicazione MFC](../mfc/how-to-load-a-ribbon-resource-from-an-mfc-application.md)  
  
## Definizioni degli elementi della barra multifunzione  
 ![Barra multifunzione MFC](../mfc/media/ribbon.png "Ribbon")  
  
-   **Pulsante dell'applicazione:** pulsante visualizzato nell'angolo in alto a sinistra di una barra multifunzione.  Il pulsante dell'applicazione sostituisce il menu File ed è visibile anche quando la barra multifunzione è ridotta a icona.  Quando si fa clic su questo pulsante, viene visualizzato un menu che contiene un elenco di comandi.  
  
-   **Barra di accesso rapido:** piccola barra degli strumenti personalizzabile che visualizza i comandi usati più spesso.  
  
-   **Categoria**: raggruppamento logico che rappresenta il contenuto di una scheda della barra multifunzione.  
  
-   **Pulsante predefinito della categoria:** pulsante visualizzato sulla barra multifunzione quando questa è ridotta a icona.  Quando si fa clic su questo pulsante, la categoria viene visualizzata di nuovo come menu.  
  
-   **Pannello:** area della barra multifunzione che visualizza un gruppo di controlli correlati.  Ogni categoria della barra multifunzione contiene uno o più pannelli della barra multifunzione.  
  
-   **Elementi della barra multifunzione:** controlli nei pannelli, ad esempio i pulsanti e le caselle combinate.  Per visualizzare i diversi controlli che può ospitare una barra multifunzione, vedere [Esempio RibbonGadgets: applicazione gadget della barra multifunzione](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Working with Resource Files](../mfc/working-with-resource-files.md)