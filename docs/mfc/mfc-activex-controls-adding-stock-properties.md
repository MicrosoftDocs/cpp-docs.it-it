---
title: 'Controlli ActiveX MFC: aggiunta di proprietà predefinite'
ms.date: 11/04/2016
helpviewer_keywords:
- BackColor property [MFC]
- properties [MFC], adding stock
- ForeColor property [MFC]
- MFC ActiveX controls [MFC], properties
- foreground colors, ActiveX controls
- foreground colors [MFC]
ms.assetid: 8b98c8c5-5b69-4366-87bf-0e61e6668ecb
ms.openlocfilehash: 16bdfddf0c028bc6a312767844b38c58c942d56e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364657"
---
# <a name="mfc-activex-controls-adding-stock-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà predefinite

Le proprietà predefinite differiscono dalle proprietà personalizzate in `COleControl`quanto sono già implementate dalla classe . `COleControl`contiene funzioni membro predefinite che supportano le proprietà comuni per il controllo. Alcune proprietà comuni includono la didascalia del controllo e i colori di primo piano e di sfondo. Per informazioni su altre proprietà predefinite, vedere [Proprietà predefinite supportate dall'Aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard) più avanti in questo articolo. Le voci della mappa di invio per le proprietà predefinite sono sempre precedute da DISP_STOCKPROP.

In questo articolo viene descritto come aggiungere una proprietà predefinita (in questo caso, Caption) a un controllo ActiveX utilizzando l'Aggiunta guidata proprietà e vengono illustrate le modifiche al codice risultanti. Gli argomenti includono:

- [Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà predefinita](#_core_using_classwizard_to_add_a_stock_property)

- [Aggiunta guidata proprietà modifiche per le proprietà predefinite](#_core_classwizard_changes_for_stock_properties)

- [Proprietà predefinite supportate dall'Aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard)

- [Proprietà azionarie e notifica](#_core_stock_properties_and_notification)

- [Proprietà colore](#_core_color_properties)

    > [!NOTE]
    >  I controlli personalizzati di Visual Basic dispongono in genere di proprietà quali Top, Left, Width, Height, Align, Tag, Name, TabIndex, TabStop e Parent. I contenitori di controlli ActiveX, tuttavia, sono responsabili dell'implementazione di queste proprietà del controllo e pertanto i controlli ActiveX non devono supportare queste proprietà.

## <a name="using-the-add-property-wizard-to-add-a-stock-property"></a><a name="_core_using_classwizard_to_add_a_stock_property"></a>Utilizzo dell'Aggiunta guidata proprietà per aggiungere una proprietà predefinita

L'aggiunta di proprietà predefinite richiede meno codice rispetto all'aggiunta di proprietà personalizzate perché il supporto per la proprietà viene gestito automaticamente da `COleControl`. Nella procedura seguente viene illustrata l'aggiunta della proprietà predefinita Caption a un framework di controlli ActiveX e può essere utilizzata anche per aggiungere altre proprietà predefinite. Sostituire il nome della proprietà predefinita selezionata per Didascalia.

#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà predefinita Caption mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata [l'Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nella casella **Nome proprietà** fare clic su **Didascalia**.

1. Fare clic su **Fine**.

## <a name="add-property-wizard-changes-for-stock-properties"></a><a name="_core_classwizard_changes_for_stock_properties"></a>Aggiunta guidata proprietà per le proprietà predefinite

Poiché `COleControl` supporta le proprietà predefinite, l'Aggiunta guidata proprietà non modifica in alcun modo la dichiarazione di classe; aggiunge la proprietà alla mappa di invio. L'Aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nell'implementazione (. CPP) :

[!code-cpp[NVC_MFC_AxUI#22](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_1.cpp)]

La riga seguente viene aggiunta alla descrizione dell'interfaccia del controllo (. IDL) :

[!code-cpp[NVC_MFC_AxUI#23](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_2.idl)]

Questa riga assegna alla proprietà Caption un ID specifico. Si noti che la proprietà è associabile e richiederà l'autorizzazione dal database prima di modificare il valore.

In questo modo il Caption proprietà disponibile per gli utenti del controllo. Per utilizzare il valore di una proprietà predefinita, accedere `COleControl` a una variabile membro o una funzione membro della classe base. Per altre informazioni su queste variabili membro e funzioni membro, vedere la sezione successiva Proprietà predefinite supportate dall'Aggiunta guidata proprietà.

## <a name="stock-properties-supported-by-the-add-property-wizard"></a><a name="_core_stock_properties_supported_by_classwizard"></a>Proprietà predefinite supportate dall'Aggiunta guidata proprietà

La `COleControl` classe fornisce nove proprietà predefinite. È possibile aggiungere le proprietà desiderate utilizzando l'Aggiunta guidata proprietà.

|Proprietà|Voce della mappa di spedizione|Come accedere al valore|
|--------------|------------------------|-------------------------|
|`Appearance`|DISP_STOCKPROP_APPEARANCE( )|Valore accessibile come `m_sAppearance`.|
|`BackColor`|DISP_STOCKPROP_BACKCOLOR( )|Valore accessibile `GetBackColor`chiamando .|
|`BorderStyle`|DISP_STOCKPROP_BORDERSTYLE( )|Valore accessibile come `m_sBorderStyle`.|
|`Caption`|DISP_STOCKPROP_CAPTION( )|Valore accessibile `InternalGetText`chiamando .|
|`Enabled`|DISP_STOCKPROP_ENABLED( )|Valore accessibile come `m_bEnabled`.|
|`Font`|DISP_STOCKPROP_FONT( )|Vedere l'articolo [Controlli ActiveX MFC: utilizzo dei tipi di carattere](../mfc/mfc-activex-controls-using-fonts.md) per l'utilizzo.|
|`ForeColor`|DISP_STOCKPROP_FORECOLOR( )|Valore accessibile `GetForeColor`chiamando .|
|`hWnd`|DISP_STOCKPROP_HWND( )|Valore accessibile come `m_hWnd`.|
|`Text`|DISP_STOCKPROP_TEXT( )|Valore accessibile `InternalGetText`chiamando . Questa proprietà è `Caption`uguale a , ad eccezione del nome della proprietà.|
|`ReadyState`|DISP_STOCKPROP_READYSTATE()|Valore accessibile come `m_lReadyState` o`GetReadyState`|

## <a name="stock-properties-and-notification"></a><a name="_core_stock_properties_and_notification"></a>Proprietà stock e notifica

La maggior parte delle proprietà predefinite dispone di funzioni di notifica che possono essere sostituite. Ad esempio, `BackColor` ogni volta che `OnBackColorChanged` la proprietà viene modificata, viene chiamata la funzione (una funzione membro della classe del controllo). L'implementazione `COleControl`predefinita `InvalidateControl`(in ) chiama . Eseguire l'override di questa funzione se si desidera eseguire azioni aggiuntive in risposta a questa situazione.

## <a name="color-properties"></a><a name="_core_color_properties"></a>Proprietà colore

È possibile utilizzare `ForeColor` `BackColor` il supporto e le proprietà, o le proprie proprietà di colore personalizzate, durante il disegno del controllo. Per utilizzare una proprietà color, chiamare il [COleControl::TranslateColor](../mfc/reference/colecontrol-class.md#translatecolor) funzione membro. I parametri di questa funzione sono il valore della proprietà color e un handle di tavolozza facoltativo. Il valore restituito è un valore **COLORREF** che può `SetTextColor` essere `CreateSolidBrush`passato alle funzioni GDI, ad esempio e .

I valori di `ForeColor` colore `BackColor` per il magazzino `GetForeColor` e `GetBackColor` le proprietà sono accessibili chiamando il o la funzione, rispettivamente.

Nell'esempio seguente viene illustrato l'utilizzo di queste due proprietà di colore quando si dipinge un controllo. Inizializza una variabile **temporanea COLORREF** e `CBrush` un `TranslateColor`oggetto con `ForeColor` chiamate a : `BackColor` una utilizzando la proprietà e l'altra utilizzando la proprietà . Un `CBrush` oggetto temporaneo viene quindi utilizzato per disegnare il rettangolo del `ForeColor` controllo e il colore del testo viene impostato utilizzando la proprietà .

[!code-cpp[NVC_MFC_AxUI#24](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
