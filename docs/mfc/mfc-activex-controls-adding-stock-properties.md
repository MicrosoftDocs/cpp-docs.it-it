---
title: "Controlli ActiveX MFC: aggiunta di propriet&#224; predefinite | Microsoft Docs"
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
  - "BackColor (proprietà)"
  - "ForeColor (proprietà)"
  - "colori di primo piano"
  - "colori di primo piano, controlli ActiveX"
  - "MFC (controlli ActiveX), proprietà"
  - "proprietà [MFC], aggiunta predefiniti"
ms.assetid: 8b98c8c5-5b69-4366-87bf-0e61e6668ecb
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: aggiunta di propriet&#224; predefinite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le proprietà predefinite differiscono dalle proprietà personalizzate in quanto sono già implementate dalla classe `COleControl`.  `COleControl` contiene le funzioni membro predefinite che supportano le proprietà comuni per il controllo.  Alcune proprietà comuni includono la barra del titolo del controllo e ai colori di primo piano e di sfondo.  Per informazioni su altre proprietà predefinite, vedere più avanti [Proprietà predefinite supportate dall'Aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard) in questo articolo.  Le voci della mappa di invio per le proprietà predefinite sono precedute sempre da **DISP\_STOCKPROP**.  
  
 In questo articolo viene descritto come aggiungere una proprietà predefinita \(in questo caso, caption\) a un controllo ActiveX mediante l'aggiunta guidata proprietà e vengono illustrate le modifiche con estensione codice.  Gli argomenti trattati includono  
  
-   [Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà predefinita](#_core_using_classwizard_to_add_a_stock_property)  
  
-   [Modifiche dell'Aggiunta guidata proprietà per le proprietà predefinite](#_core_classwizard_changes_for_stock_properties)  
  
-   [Proprietà predefinite supportate dall'Aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard)  
  
-   [Proprietà predefinite e notifica](#_core_stock_properties_and_notification)  
  
-   [Proprietà color](#_core_color_properties)  
  
    > [!NOTE]
    >  I controlli personalizzati di Visual Basic in genere presentano proprietà quali top, left, la larghezza, altezza, true, label, name, TabIndex, tabstop e padre.  I contenitori di controlli ActiveX, tuttavia, sono responsabili dell'implementazione delle proprietà del controllo e pertanto i controlli ActiveX non supportino queste proprietà.  
  
##  <a name="_core_using_classwizard_to_add_a_stock_property"></a> Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà predefinita  
 L'aggiunta di proprietà predefinite richiede meno codice che viene aggiunta di proprietà personalizzate perché il supporto per la proprietà viene gestito automaticamente da `COleControl`.  La procedura riportata di seguito viene illustrata l'aggiunta di proprietà predefinito della barra del titolo a un framework di controlli ActiveX e può essere utilizzata per aggiungere altre proprietà predefinite.  Sostituire il nome della proprietà predefinito selezionato per la barra del titolo.  
  
#### Per aggiungere la proprietà predefinita della barra del titolo mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà aperto [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nella casella di **Nome proprietà**, fare clic **Titolo**.  
  
6.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_properties"></a> Modifiche dell'Aggiunta guidata proprietà per le proprietà predefinite  
 Poiché le proprietà predefinite il tipo di `COleControl`, l'aggiunta guidata proprietà non cambia la dichiarazione di classe in alcun modo; aggiungi proprietà alla mappa submit.  L'aggiunta guidata proprietà aggiungere la seguente riga alla mappa di invio del controllo, che si trova nel file di implementazione \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxUI#22](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-properties_1.cpp)]  
  
 La riga seguente viene aggiunto al file di descrizione dell'interfaccia del controllo \(.IDL\):  
  
 [!code-cpp[NVC_MFC_AxUI#23](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-properties_2.idl)]  
  
 Questa riga assegnata alla proprietà caption un ID specifica  Si noti che la proprietà è associabile e richiederà l'autorizzazione dal database prima di modificare il valore.  
  
 Ciò rende disponibile la proprietà caption degli utenti del controllo.  Per utilizzare il valore di una proprietà predefinita, accedere a una variabile membro o una funzione membro della classe base di `COleControl`.  Per ulteriori informazioni su questi membri variabili e funzioni membro, vedere la sezione successiva, immagazzinano le proprietà supportate dall'Aggiunta guidata proprietà.  
  
##  <a name="_core_stock_properties_supported_by_classwizard"></a> Immagazzini le proprietà supportate dall'Aggiunta guidata proprietà  
 La classe di `COleControl` fornisce nove proprietà predefinite.  È possibile aggiungere proprietà desiderata tramite l'aggiunta guidata proprietà.  
  
|Proprietà|Voce di mapping di invio|Accedere come valore|  
|---------------|------------------------------|--------------------------|  
|**Aspetto**|**DISP\_STOCKPROP\_APPEARANCE\( \)**|Valore accessibili come **m\_sAppearance**.|  
|`BackColor`|**DISP\_STOCKPROP\_BACKCOLOR\( \)**|Valore accessibile chiamando `GetBackColor`.|  
|`BorderStyle`|**DISP\_STOCKPROP\_BORDERSTYLE\( \)**|Valore accessibili come **m\_sBorderStyle**.|  
|**Didascalia**|**DISP\_STOCKPROP\_CAPTION\( \)**|Valore accessibile chiamando `InternalGetText`.|  
|**Enabled**|**DISP\_STOCKPROP\_ENABLED\( \)**|Valore accessibili come **m\_bEnabled**.|  
|**Tipo di carattere**|**DISP\_STOCKPROP\_FONT\( \)**|Vedere l'articolo [Controlli ActiveX MFC: Utilizzo dei tipi di carattere](../mfc/mfc-activex-controls-using-fonts.md) per l'utilizzo.|  
|`ForeColor`|**DISP\_STOCKPROP\_FORECOLOR\( \)**|Stimare accessibile chiamando `GetForeColor`.|  
|**hWnd**|**DISP\_STOCKPROP\_HWND\( \)**|Stimare accessibili come `m_hWnd`.|  
|**Testo**|**DISP\_STOCKPROP\_TEXT\( \)**|Valore accessibile chiamando `InternalGetText`.  Questa proprietà è la stessa di **Titolo**, fatta eccezione per il nome della proprietà.|  
|**ReadyState**|**DISP\_STOCKPROP\_READYSTATE\(\)**|Valore accessibili come m\_lReadyState o `GetReadyState`|  
  
##  <a name="_core_stock_properties_and_notification"></a> Proprietà predefinite e notifica  
 La maggior parte delle proprietà predefinite presentano funzioni di notifica che è possibile eseguire l'override.  Ad esempio, ogni volta che la proprietà di `BackColor` viene modificata, la funzione di `OnBackColorChanged` \(una funzione membro della classe del controllo\) viene chiamata.  L'implementazione predefinita \(in `COleControl`\) chiama `InvalidateControl`.  L'override della funzione se si desidera intraprendere azioni aggiuntive in risposta a questa situazione.  
  
##  <a name="_core_color_properties"></a> Proprietà color  
 È possibile utilizzare `ForeColor` e le proprietà predefiniti di `BackColor`, o le proprietà di colore personalizzate quando si disegna il controllo.  Per utilizzare una proprietà color, chiamare la funzione membro di [COleControl::TranslateColor](../Topic/COleControl::TranslateColor.md).  I parametri della funzione vengono il valore della proprietà color e handle facoltative della tavolozza.  Il valore restituito è un valore di **COLORREF** che può essere passato a funzioni GDI, come `SetTextColor` e `CreateSolidBrush`.  
  
 I valori di colore per `ForeColor` e le proprietà predefiniti di `BackColor` avviene chiamando `GetForeColor` o la funzione di `GetBackColor`, rispettivamente.  
  
 Il seguente esempio viene illustrato l'utilizzo di queste due proprietà color quando si disegna un controllo.  Inizializza una variabile temporanea di **COLORREF** e un oggetto di `CBrush` con chiamate a `TranslateColor`: uno using the `ForeColor` e l'altro using the `BackColor`.  Un oggetto temporaneo di `CBrush` quindi utilizzato per disegnare il rettangolo del controllo e il colore del testo viene impostato utilizzando la proprietà di `ForeColor`.  
  
 [!code-cpp[NVC_MFC_AxUI#24](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-properties_3.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [COleControl Class](../mfc/reference/colecontrol-class.md)