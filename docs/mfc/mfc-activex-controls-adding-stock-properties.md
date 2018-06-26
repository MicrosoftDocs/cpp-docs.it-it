---
title: 'Controlli ActiveX MFC: Aggiunta di proprietà predefinite | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- BackColor property [MFC]
- properties [MFC], adding stock
- ForeColor property [MFC]
- MFC ActiveX controls [MFC], properties
- foreground colors, ActiveX controls
- foreground colors [MFC]
ms.assetid: 8b98c8c5-5b69-4366-87bf-0e61e6668ecb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 791694bfa1bcd7472be4691d9aef133b80ccace4
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930130"
---
# <a name="mfc-activex-controls-adding-stock-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà predefinite
Proprietà predefinite sono diverse dalle proprietà personalizzate in essi sono già implementati dalla classe `COleControl`. `COleControl` contiene le funzioni membro predefinite che supportano le proprietà comuni per il controllo. Alcune proprietà comuni includono la didascalia del controllo e i colori di primo piano e sfondo. Per informazioni su altre proprietà predefinite, vedere [proprietà predefinite supportate per l'aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard) più avanti in questo articolo. Le voci della mappa di distribuzione per le proprietà sono sempre precedute dal prefisso DISP_STOCKPROP stock.  
  
 In questo articolo descrive come aggiungere una proprietà predefinita (in questo caso, didascalia) a un controllo ActiveX mediante l'aggiunta guidata proprietà e illustra le modifiche al codice risultante. Gli argomenti trattati includono:  
  
-   [Tramite l'aggiunta guidata proprietà aggiungere una proprietà predefinita](#_core_using_classwizard_to_add_a_stock_property)  
  
-   [Aggiunta guidata proprietà modifiche per le proprietà predefinite](#_core_classwizard_changes_for_stock_properties)  
  
-   [Proprietà predefinite supportate per l'aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard)  
  
-   [Proprietà predefinite e notifica](#_core_stock_properties_and_notification)  
  
-   [Proprietà dei colori](#_core_color_properties)  
  
    > [!NOTE]
    >  Controlli personalizzati di Visual Basic dispongono in genere di proprietà, ad esempio Top, Left, larghezza, altezza, Allinea, Tag, nome, TabIndex, TabStop e padre. Contenitori dei controlli ActiveX, tuttavia, sono responsabili dell'implementazione di queste proprietà di controllo e pertanto i controlli ActiveX non devono supportare queste proprietà.  
  
##  <a name="_core_using_classwizard_to_add_a_stock_property"></a> Tramite l'aggiunta guidata proprietà per aggiungere una proprietà predefinita  
 Aggiunta di proprietà predefinite richiede meno codice rispetto all'aggiunta di proprietà personalizzate in quanto il supporto per la proprietà verrà gestita automaticamente da `COleControl`. La procedura seguente illustra come aggiungere la proprietà Caption predefinita per un'infrastruttura di controllo ActiveX e può essere utilizzata anche per aggiungere altre proprietà predefinite. Sostituire il nome di proprietà predefinite selezionate per la didascalia.  
  
#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà di didascalia predefinita mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  
  
5.  Nel **nome della proprietà** fare clic su **didascalia**.  
  
6.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_properties"></a> Aggiunta guidata proprietà viene modificato per le proprietà predefinite  
 Poiché `COleControl` supporta proprietà predefinite, l'aggiunta guidata proprietà non modifica la dichiarazione di classe in alcun modo, che aggiunge la proprietà alla mappa di invio. L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nell'implementazione (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#22](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_1.cpp)]  
  
 La riga seguente viene aggiunto alla descrizione dell'interfaccia del controllo (. File IDL):  
  
 [!code-cpp[NVC_MFC_AxUI#23](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_2.idl)]  
  
 Questa riga assegna la proprietà Caption un ID specifico. Si noti che la proprietà è associabile e richiederà l'autorizzazione dal database prima di modificare il valore.  
  
 In questo modo la proprietà Caption disponibili agli utenti del controllo. Per utilizzare il valore di una proprietà predefinita, accedere a una variabile membro o una funzione membro del `COleControl` classe di base. Per ulteriori informazioni su queste variabili membro e funzioni membro, vedere la sezione successiva, le proprietà predefinite supportate per l'aggiunta guidata proprietà.  
  
##  <a name="_core_stock_properties_supported_by_classwizard"></a> Proprietà predefinite supportate per l'aggiunta guidata proprietà  
 Il `COleControl` classe fornisce nove proprietà predefinite. È possibile aggiungere le proprietà desiderate tramite l'aggiunta guidata proprietà.  
  
|Proprietà|Voce della mappa di invio|Come valore di accesso|  
|--------------|------------------------|-------------------------|  
|`Appearance`|DISP_STOCKPROP_APPEARANCE)|Valore accessibile come `m_sAppearance`.|  
|`BackColor`|DISP_STOCKPROP_BACKCOLOR)|Valore accessibile chiamando `GetBackColor`.|  
|`BorderStyle`|DISP_STOCKPROP_BORDERSTYLE)|Valore accessibile come `m_sBorderStyle`.|  
|`Caption`|DISP_STOCKPROP_CAPTION)|Valore accessibile chiamando `InternalGetText`.|  
|`Enabled`|DISP_STOCKPROP_ENABLED)|Valore accessibile come `m_bEnabled`.|  
|`Font`|DISP_STOCKPROP_FONT)|Vedere l'articolo [controlli ActiveX MFC: utilizzo dei tipi di carattere](../mfc/mfc-activex-controls-using-fonts.md) per l'utilizzo.|  
|`ForeColor`|DISP_STOCKPROP_FORECOLOR)|Valore accessibile chiamando `GetForeColor`.|  
|`hWnd`|DISP_STOCKPROP_HWND)|Valore accessibile come `m_hWnd`.|  
|`Text`|DISP_STOCKPROP_TEXT)|Valore accessibile chiamando `InternalGetText`. Questa proprietà è identico `Caption`, ad eccezione del nome di proprietà.|  
|`ReadyState`|DISP_STOCKPROP_READYSTATE()|Valore accessibile come `m_lReadyState` o `GetReadyState`|  
  
##  <a name="_core_stock_properties_and_notification"></a> Proprietà predefinite e notifica  
 La maggior parte delle proprietà predefinite dispongono di funzioni di notifica che possono essere sottoposto a override. Ad esempio, ogni volta che il `BackColor` proprietà viene modificata, il `OnBackColorChanged` funzione (una funzione membro della classe del controllo) viene chiamata. L'implementazione predefinita (in `COleControl`) chiamate `InvalidateControl`. Se si desidera eseguire altre azioni in risposta a questa situazione l'override della funzione.  
  
##  <a name="_core_color_properties"></a> Proprietà dei colori  
 È possibile utilizzare le scorte `ForeColor` e `BackColor` proprietà o la propria proprietà del colore personalizzato, quando il disegno del controllo. Per utilizzare una proprietà color, chiamare il [COleControl::TranslateColor](../mfc/reference/colecontrol-class.md#translatecolor) funzione membro. I parametri di questa funzione sono il valore della proprietà del colore e un handle di tavolozza facoltativo. Il valore restituito è un **COLORREF** funzioni che può essere passati a GDI, ad esempio `SetTextColor` e `CreateSolidBrush`.  
  
 I valori di colore per l'azione `ForeColor` e `BackColor` alle proprietà si accedono chiamando la `GetForeColor` o il `GetBackColor` funzione, rispettivamente.  
  
 Nell'esempio seguente viene illustrato l'utilizzo di queste due proprietà di colore quando si disegna un controllo. L'inizializzazione di una password temporanea **COLORREF** variabile e un `CBrush` oggetto con chiamate a `TranslateColor`: uno che utilizza il `ForeColor` proprietà e l'altro tramite il `BackColor` proprietà. Una password temporanea `CBrush` oggetto viene quindi usato per disegnare il rettangolo e viene impostato il colore del testo utilizzando il `ForeColor` proprietà.  
  
 [!code-cpp[NVC_MFC_AxUI#24](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)
