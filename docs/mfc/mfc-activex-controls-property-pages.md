---
title: "Controlli ActiveX MFC: pagine delle propriet&#224; | Microsoft Docs"
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
  - "CPropertyPageDialog (classe)"
  - "funzioni DDP"
  - "DoDataExchange (metodo)"
  - "MFC (controlli ActiveX), proprietà"
  - "MFC (controlli ActiveX), proprietà (pagine)"
  - "OLEIVERB_PROPERTIES"
  - "proprietà (pagine), controlli ActiveX MFC"
ms.assetid: 1506f87a-9fd6-4505-8380-0dbc9636230e
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: pagine delle propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà consentono all'utente di un controllo ActiveX di visualizzare e modificare le proprietà del controllo stesso.  Per accedere a queste proprietà occorre richiamare una finestra di dialogo delle proprietà del controllo contenente una o più pagine delle proprietà che forniscono un'interfaccia grafica personalizzata per la visualizzazione e la modifica delle proprietà del controllo stesso.  
  
 Le pagine delle proprietà di controllo ActiveX vengono visualizzate in due modi:  
  
-   Quando il verbo delle proprietà del controllo \(**OLEIVERB\_PROPERTIES**\) viene richiamato, il controllo apre una finestra di dialogo modale della proprietà contenente le pagine delle proprietà del controllo.  
  
-   Il contenitore consente di visualizzare la relativa finestra di dialogo non modale che mostra le pagine delle proprietà del controllo selezionato.  
  
 La finestra di dialogo proprietà \(illustrata nella figura seguente\) contiene un'area per visualizzare la pagina delle proprietà corrente, le schede per passare tra le pagine delle proprietà e una raccolta di pulsanti che eseguono attività comuni quali chiudere la finestra di dialogo della pagina delle proprietà, annullando tutte le modifiche apportate, o applicando immediatamente le modifiche al controllo ActiveX.  
  
 ![Finestra di dialogo Proprietà per Circ3](../mfc/media/vc373i1.png "vc373I1")  
Finestra di Dialogo Proprietà  
  
 Questo articolo illustra gli argomenti correlati a utilizzare le pagine delle proprietà in un controllo ActiveX.  tra cui:  
  
-   [Implementare la pagina delle proprietà predefinita per un controllo ActiveX](#_core_implementing_the_default_property_page)  
  
-   [Aggiunta di controlli a una pagina delle proprietà](#_core_adding_controls_to_a_property_page)  
  
-   [Personalizzare la funzione DoDataExchange](#_core_customizing_the_dodataexchange_function)  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)  
  
-   [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)  
  
 Per informazioni sull'utilizzo delle finestre delle proprietà in un'applicazione MFC diverso da un controllo ActiveX, vedere [Finestre delle proprietà](../mfc/property-sheets-mfc.md).  
  
##  <a name="_core_implementing_the_default_property_page"></a> Implementazione della pagina di proprietà predefinita  
 Se si utilizza la Creazione guidata del controllo ActiveX per creare il progetto di controllo, la Creazione guidata del controllo ActiveX fornisce una classe della pagina di proprietà predefinita per il controllo derivato da [COlePropertyPage Class](../mfc/reference/colepropertypage-class.md).  Inizialmente, questa pagina delle proprietà è vuota, ma è possibile aggiungere qualsiasi controllo di finestra di dialogo o gruppo di controlli a essa.  Poiché la Creazione guidata del controllo ActiveX crea un'unica classe della pagina delle proprietà per impostazione predefinita, le classi aggiuntive della pagina delle proprietà \(anche derivate da `COlePropertyPage`\) devono essere creati mediante Visualizzazione classi.  Per ulteriori informazioni su questa procedura, vedere [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md).  
  
 L'implementazione di una pagina delle proprietà \(in questo caso, quella predefinita\) si suddivide in tre passaggi:  
  
#### Implementare una pagina delle proprietà  
  
1.  Aggiungere una classe derivata `COlePropertyPage` al progetto di controllo.  Se il progetto è stato creato mediante la Creazione guidata del controllo ActiveX \(come in questo caso\), la classe della pagina delle proprietà predefinita già esiste.  
  
2.  Utilizzare l'editor delle finestre di dialogo per aggiungere controlli al modello della pagina delle proprietà.  
  
3.  Personalizzare la funzione `DoDataExchange` della classe derivata `COlePropertyPage` per scambiare i valori tra il controllo della pagina delle proprietà e il controllo ActiveX.  
  
 Ad esempio, le procedure seguenti utilizzano un controllo semplice \(denominato "Esempio"\).  L'esempio è stato creato mediante la Creazione guidata del controllo ActiveX e contiene solo la proprietà predefinita della barra del titolo.  
  
##  <a name="_core_adding_controls_to_a_property_page"></a> Aggiunta di Controlli a una Pagina delle Proprietà  
  
#### Aggiungere controlli a una pagina delle proprietà  
  
1.  Con il progetto di controllo, aprire Visualizzazione Risorse.  
  
2.  Fare doppio clic sull'icona della directory **Finestra di dialogo**.  
  
3.  Aprire la finestra di dialogo **IDD\_PROPPAGE\_SAMPLE** .  
  
     La Creazione guidata del controllo ActiveX aggiunge il nome del progetto alla fine dell'ID della finestra di dialogo, in questo caso, Esempio.  
  
4.  Trascinare il controllo selezionato dalla casella degli strumenti nell'area della finestra di dialogo.  
  
5.  Per questo esempio, un controllo con etichetta di testo "Titolo :" e un controllo casella di modifica con un identificatore **IDC\_CAPTION** sono sufficienti.  
  
6.  Fare clic su **Salva** sulla barra degli strumenti delle applicazioni per salvare le modifiche.  
  
 Ora che l'interfaccia utente è stata modificata, è necessario collegare la casella di modifica alla proprietà Caption.  Questa operazione viene eseguita nella sezione seguente modificando la funzione `CSamplePropPage::DoDataExchange`.  
  
##  <a name="_core_customizing_the_dodataexchange_function"></a> Personalizzare la Funzione DoDataExchange  
 La funzione [CWnd::DoDataExchange](../Topic/CWnd::DoDataExchange.md) della pagina delle proprietà consente di collegare i valori della pagina proprietà con valori effettivi delle proprietà del controllo.  Per stabilire collegamenti, è necessario eseguire il mapping dei campi appropriati della pagina delle proprietà con le rispettive proprietà del controllo.  
  
 Le associazioni sono implementate utilizzando le funzioni **DDP\_** della pagina delle proprietà.  Le funzioni **DDP\_** lavorano come le funzioni **DDX\_** utilizzate nelle finestre di dialogo standard di MFC, con un'eccezione.  Oltre al riferimento a una variabile membro, le funzioni **DDP\_** accettano il nome della proprietà del controllo.  Di seguito viene fornita una voce tipica nella funzione `DoDataExchange` per una pagina delle proprietà.  
  
 [!code-cpp[NVC_MFC_AxUI#31](../mfc/codesnippet/CPP/mfc-activex-controls-property-pages_1.cpp)]  
  
 Questa funzione associa la variabile membro `m_caption` della pagina delle proprietà con la barra del titolo, utilizzando la funzione `DDP_TEXT`.  
  
 Dopo aver inserito il controllo della pagina delle proprietà, è necessario stabilire un collegamento tra il controllo della pagina delle proprietà, `IDC_CAPTION` e l'effettiva proprietà del controllo, barra del titolo, utilizzando la funzione **DDP\_Text** come descritto in precedenza.  
  
 [Pagine delle proprietà](../mfc/reference/property-pages-mfc.md) è disponibile per altri tipi di controllo della finestra di dialogo, quali caselle di controllo, pulsanti di opzione e le caselle di riepilogo.  La tabella seguente elenca l'intero set di funzioni **DDP\_** della pagina delle proprietà e i loro scopi:  
  
### Funzioni della pagina delle proprietà  
  
|Nome della funzione|Utilizzare questa funzione per creare un collegamento|  
|-------------------------|-----------------------------------------------------------|  
|`DDP_CBIndex`|L'indice della stringa selezionata in una casella combinata con una proprietà del controllo.|  
|`DDP_CBString`|La stringa selezionata in una casella combinata con una proprietà del controllo.  La stringa selezionata può iniziare con le stesse lettere del valore della proprietà ma non deve corrisponderla completamente.|  
|`DDP_CBStringExact`|La stringa selezionata in una casella combinata con una proprietà del controllo.  La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|  
|`DDP_Check`|Una casella di controllo con una proprietà del controllo.|  
|`DDP_LBIndex`|L'indice della stringa selezionata in una casella di riepilogo con una proprietà del controllo.|  
|`DDP_LBString`|La stringa selezionata in una casella di riepilogo con una proprietà del controllo.  La stringa selezionata può iniziare con le stesse lettere del valore della proprietà ma non deve corrisponderla completamente.|  
|`DDP_LBStringExact`|La stringa selezionata in una casella di riepilogo con una proprietà del controllo.  La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|  
|`DDP_Radio`|Un pulsante di opzione con una proprietà del controllo.|  
|**DDP\_Text**|Testo con una proprietà del controllo.|  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [COlePropertyPage Class](../mfc/reference/colepropertypage-class.md)