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
ms.openlocfilehash: 13e8af5ddb3dd5130c864e42383e3bb9ff23b87b
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625434"
---
# <a name="mfc-activex-controls-adding-stock-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà predefinite

Le proprietà predefinite sono diverse da quelle personalizzate perché sono già implementate dalla classe `COleControl` . `COleControl`contiene funzioni membro predefinite che supportano proprietà comuni per il controllo. Alcune proprietà comuni includono la didascalia del controllo e i colori di primo piano e di sfondo. Per informazioni su altre proprietà predefinite, vedere [proprietà predefinite supportate dalla procedura guidata Aggiungi proprietà](#_core_stock_properties_supported_by_classwizard) più avanti in questo articolo. Le voci della mappa di invio per le proprietà predefinite sono sempre precedute dal prefisso DISP_STOCKPROP.

Questo articolo descrive come aggiungere una proprietà predefinita, in questo caso la didascalia, a un controllo ActiveX usando l'aggiunta guidata proprietà e illustra le modifiche del codice risultante. Gli argomenti includono:

- [Utilizzo della procedura guidata Aggiungi proprietà per aggiungere una proprietà predefinita](#_core_using_classwizard_to_add_a_stock_property)

- [Aggiunta guidata proprietà modifiche per le proprietà predefinite](#_core_classwizard_changes_for_stock_properties)

- [Proprietà predefinite supportate dall'aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard)

- [Proprietà e notifiche predefinite](#_core_stock_properties_and_notification)

- [Proprietà colore](#_core_color_properties)

    > [!NOTE]
    >  Visual Basic controlli personalizzati hanno in genere proprietà quali Top, Left, Width, Height, Align, tag, Name, TabIndex, TabStop e Parent. I contenitori di controlli ActiveX, tuttavia, sono responsabili dell'implementazione di queste proprietà del controllo e pertanto i controlli ActiveX non devono supportare queste proprietà.

## <a name="using-the-add-property-wizard-to-add-a-stock-property"></a><a name="_core_using_classwizard_to_add_a_stock_property"></a>Utilizzo della procedura guidata Aggiungi proprietà per aggiungere una proprietà predefinita

Per aggiungere proprietà predefinite è necessario meno codice rispetto all'aggiunta di proprietà personalizzate, perché il supporto per la proprietà viene gestito automaticamente da `COleControl` . Nella procedura seguente viene illustrata l'aggiunta della proprietà della didascalia azionaria a un Framework di controllo ActiveX, che può essere utilizzata anche per aggiungere altre proprietà predefinite. Sostituire il nome della proprietà predefinita per la didascalia.

#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà titolo stock utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l' [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nella casella **nome proprietà** fare clic su **didascalia**.

1. Fare clic su **Fine**.

## <a name="add-property-wizard-changes-for-stock-properties"></a><a name="_core_classwizard_changes_for_stock_properties"></a>Aggiunta guidata proprietà modifiche per le proprietà predefinite

Poiché `COleControl` supporta le proprietà predefinite, l'aggiunta guidata proprietà non modifica la dichiarazione di classe in alcun modo; aggiunge la proprietà alla mappa di invio. L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nell'implementazione di (. File CPP):

[!code-cpp[NVC_MFC_AxUI#22](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_1.cpp)]

La riga seguente viene aggiunta alla descrizione dell'interfaccia del controllo (. File IDL):

[!code-cpp[NVC_MFC_AxUI#23](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_2.idl)]

Questa riga assegna alla proprietà Caption un ID specifico. Si noti che la proprietà è associabile e richiederà l'autorizzazione dal database prima di modificare il valore.

In questo modo la proprietà Caption risulta disponibile per gli utenti del controllo. Per usare il valore di una proprietà predefinita, accedere a una variabile membro o a una funzione membro della `COleControl` classe di base. Per ulteriori informazioni su queste variabili membro e sulle funzioni membro, vedere la sezione successiva proprietà predefinite supportate dall'aggiunta guidata proprietà.

## <a name="stock-properties-supported-by-the-add-property-wizard"></a><a name="_core_stock_properties_supported_by_classwizard"></a>Proprietà predefinite supportate dall'aggiunta guidata proprietà

La `COleControl` classe fornisce nove proprietà predefinite. È possibile aggiungere le proprietà desiderate utilizzando l'aggiunta guidata proprietà.

|Proprietà|Voce della mappa di invio|Come accedere al valore|
|--------------|------------------------|-------------------------|
|`Appearance`|DISP_STOCKPROP_APPEARANCE ()|Valore accessibile come `m_sAppearance` .|
|`BackColor`|DISP_STOCKPROP_BACKCOLOR ()|Valore accessibile chiamando `GetBackColor` .|
|`BorderStyle`|DISP_STOCKPROP_BORDERSTYLE ()|Valore accessibile come `m_sBorderStyle` .|
|`Caption`|DISP_STOCKPROP_CAPTION ()|Valore accessibile chiamando `InternalGetText` .|
|`Enabled`|DISP_STOCKPROP_ENABLED ()|Valore accessibile come `m_bEnabled` .|
|`Font`|DISP_STOCKPROP_FONT ()|Vedere l'articolo [controlli ActiveX MFC: uso dei tipi di carattere](mfc-activex-controls-using-fonts.md) per l'utilizzo.|
|`ForeColor`|DISP_STOCKPROP_FORECOLOR ()|Valore accessibile chiamando `GetForeColor` .|
|`hWnd`|DISP_STOCKPROP_HWND ()|Valore accessibile come `m_hWnd` .|
|`Text`|DISP_STOCKPROP_TEXT ()|Valore accessibile chiamando `InternalGetText` . Questa proprietà è uguale a `Caption` , ad eccezione del nome della proprietà.|
|`ReadyState`|DISP_STOCKPROP_READYSTATE ()|Valore accessibile come `m_lReadyState` o`GetReadyState`|

## <a name="stock-properties-and-notification"></a><a name="_core_stock_properties_and_notification"></a>Proprietà e notifiche predefinite

La maggior parte delle proprietà predefinite dispone di funzioni di notifica di cui è possibile eseguire l'override. Ad esempio, ogni volta che la `BackColor` proprietà viene modificata, `OnBackColorChanged` viene chiamata la funzione (una funzione membro della classe del controllo). L'implementazione predefinita (in `COleControl` ) chiama `InvalidateControl` . Eseguire l'override di questa funzione se si desidera eseguire ulteriori azioni in risposta a questa situazione.

## <a name="color-properties"></a><a name="_core_color_properties"></a>Proprietà colore

Quando si disegna il controllo, è possibile usare le proprietà Stock `ForeColor` e `BackColor` Properties oppure le proprietà del colore personalizzate. Per usare una proprietà Color, chiamare la funzione membro [COleControl:: TranslateColor](reference/colecontrol-class.md#translatecolor) . I parametri di questa funzione sono il valore della proprietà Color e un handle facoltativo per la tavolozza. Il valore restituito è un valore **COLORREF** che può essere passato alle funzioni GDI, ad esempio `SetTextColor` e `CreateSolidBrush` .

È possibile accedere ai valori dei colori per l'azione `ForeColor` e le `BackColor` proprietà chiamando `GetForeColor` rispettivamente la `GetBackColor` funzione o.

Nell'esempio seguente viene illustrato l'utilizzo di queste due proprietà del colore durante la verniciatura di un controllo. Inizializza una variabile **COLORREF** temporanea e un `CBrush` oggetto con chiamate a `TranslateColor` : uno usando la `ForeColor` proprietà e l'altro usando la `BackColor` Proprietà. Un `CBrush` oggetto temporaneo viene quindi utilizzato per disegnare il rettangolo del controllo e il colore del testo viene impostato utilizzando la `ForeColor` Proprietà.

[!code-cpp[NVC_MFC_AxUI#24](codesnippet/cpp/mfc-activex-controls-adding-stock-properties_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[Classe COleControl](reference/colecontrol-class.md)
