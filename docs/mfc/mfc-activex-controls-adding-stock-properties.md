---
title: 'Controlli ActiveX MFC: Aggiunta proprietà predefinite | Microsoft Docs'
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
ms.openlocfilehash: 4100dc14a25a744e5c28ffd1b16119408d800656
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404514"
---
# <a name="mfc-activex-controls-adding-stock-properties"></a>Controlli ActiveX MFC: aggiunta di proprietà predefinite

Proprietà predefinite sono diverse dalle proprietà personalizzate in essi sono già implementate dalla classe `COleControl`. `COleControl` contiene le funzioni membro predefinite che supportano le proprietà comuni per il controllo. Alcune proprietà comuni includono la didascalia del controllo e i colori di primo piano e sfondo. Per informazioni su altre proprietà predefinite, vedere [predefinite delle proprietà supportate dall'Aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard) più avanti in questo articolo. Le voci della mappa di distribuzione per le proprietà sono sempre precedute dal prefisso DISP_STOCKPROP stock.

Questo articolo viene descritto come aggiungere una proprietà predefinita (in questo caso, didascalia) a un controllo ActiveX tramite l'aggiunta guidata proprietà e vengono illustrate le modifiche del codice risultante. Gli argomenti trattati includono:

- [Tramite l'aggiunta guidata proprietà aggiungere una proprietà predefinita](#_core_using_classwizard_to_add_a_stock_property)

- [Aggiunta guidata proprietà modifiche per le proprietà predefinite](#_core_classwizard_changes_for_stock_properties)

- [Proprietà predefinite supportate per l'aggiunta guidata proprietà](#_core_stock_properties_supported_by_classwizard)

- [La notifica e proprietà predefinite](#_core_stock_properties_and_notification)

- [Proprietà dei colori](#_core_color_properties)

    > [!NOTE]
    >  Controlli personalizzati di Visual Basic dispongono in genere di proprietà, ad esempio Top, Left, larghezza, altezza, allineare, Tag, nome, TabIndex, TabStop e padre. Contenitori di controlli ActiveX, tuttavia, sono responsabili dell'implementazione di queste proprietà di controllo e di conseguenza i controlli ActiveX non devono supportare queste proprietà.

##  <a name="_core_using_classwizard_to_add_a_stock_property"></a> Tramite l'aggiunta guidata proprietà per aggiungere una proprietà predefinita

Aggiunta di proprietà predefinite richiede meno codice rispetto all'aggiunta di proprietà personalizzate in quanto il supporto per la proprietà viene gestita automaticamente da `COleControl`. La procedura seguente viene illustrato come aggiungere la proprietà Caption predefinita per un'infrastruttura di controllo di ActiveX e può essere utilizzata anche per aggiungere altre proprietà predefinite. Sostituire il nome di proprietà predefinite selezionate per la didascalia.

#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà Caption predefinita mediante l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

     Verrà visualizzata la [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).

1. Nel **nome della proprietà** fare clic su **didascalia**.

1. Scegliere **Fine**.

##  <a name="_core_classwizard_changes_for_stock_properties"></a> Aggiungi modifica di proprietà per le proprietà predefinite

Poiché `COleControl` supporta proprietà predefinite, l'aggiunta guidata proprietà non influisce in alcun modo la dichiarazione di classe, che aggiunge la proprietà alla mappa di invio. L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nell'implementazione (. File CPP):

[!code-cpp[NVC_MFC_AxUI#22](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_1.cpp)]

La riga seguente viene aggiunto alla descrizione dell'interfaccia del controllo (. File IDL):

[!code-cpp[NVC_MFC_AxUI#23](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_2.idl)]

Questa riga viene assegnato un ID specifico. la proprietà Caption Si noti che la proprietà è associabile e richiederà l'autorizzazione dal database prima di modificare il valore.

La proprietà Caption ciò rende disponibili agli utenti del controllo. Per usare il valore di una proprietà predefinita, accedere a una variabile membro o una funzione membro del `COleControl` classe di base. Per altre informazioni su queste variabili membro e funzioni membro, vedere la sezione successiva, predefinite delle proprietà supportate dall'Aggiunta guidata proprietà.

##  <a name="_core_stock_properties_supported_by_classwizard"></a> Proprietà predefinite supportate per l'aggiunta guidata proprietà

Il `COleControl` classe fornisce nove proprietà predefinite. È possibile aggiungere le proprietà desiderate tramite l'aggiunta guidata proprietà.

|Proprietà|Voce della mappa di invio|Come valore di accesso|
|--------------|------------------------|-------------------------|
|`Appearance`|DISP_STOCKPROP_APPEARANCE)|Valore accessibile come `m_sAppearance`.|
|`BackColor`|DISP_STOCKPROP_BACKCOLOR)|Valore accessibile tramite una chiamata `GetBackColor`.|
|`BorderStyle`|DISP_STOCKPROP_BORDERSTYLE)|Valore accessibile come `m_sBorderStyle`.|
|`Caption`|DISP_STOCKPROP_CAPTION)|Valore accessibile tramite una chiamata `InternalGetText`.|
|`Enabled`|DISP_STOCKPROP_ENABLED)|Valore accessibile come `m_bEnabled`.|
|`Font`|DISP_STOCKPROP_FONT)|Vedere l'articolo [controlli ActiveX MFC: i tipi di carattere usando](../mfc/mfc-activex-controls-using-fonts.md) per l'utilizzo.|
|`ForeColor`|DISP_STOCKPROP_FORECOLOR)|Valore accessibile tramite una chiamata `GetForeColor`.|
|`hWnd`|DISP_STOCKPROP_HWND)|Valore accessibile come `m_hWnd`.|
|`Text`|DISP_STOCKPROP_TEXT)|Valore accessibile tramite una chiamata `InternalGetText`. Questa proprietà è identico `Caption`, tranne il nome della proprietà.|
|`ReadyState`|DISP_STOCKPROP_READYSTATE()|Valore accessibile come `m_lReadyState` o `GetReadyState`|

##  <a name="_core_stock_properties_and_notification"></a> La notifica e proprietà predefinite

La maggior parte delle proprietà predefinite includono funzioni di notifica che possono essere sottoposto a override. Ad esempio, ogni volta che il `BackColor` proprietà viene modificata, il `OnBackColorChanged` viene chiamata la funzione (una funzione membro della classe del controllo). L'implementazione predefinita (in `COleControl`) chiama `InvalidateControl`. Se si desidera eseguire altre azioni in risposta a questa situazione l'override della funzione.

##  <a name="_core_color_properties"></a> Proprietà dei colori

È possibile usare le scorte `ForeColor` e `BackColor` proprietà o le proprietà di colore personalizzato, quando si disegna il controllo. Per usare una proprietà color, chiamare il [COleControl::TranslateColor](../mfc/reference/colecontrol-class.md#translatecolor) funzione membro. I parametri di questa funzione sono il valore della proprietà del colore e un handle di tavolozza facoltativo. Il valore restituito è un **COLORREF** funzioni che può essere passato a GDI, ad esempio `SetTextColor` e `CreateSolidBrush`.

I valori di colore per il magazzino `ForeColor` e `BackColor` sono accessibili tramite la chiamata ai `GetForeColor` o il `GetBackColor` funzione, rispettivamente.

Nell'esempio seguente illustra l'uso di queste due proprietà di colore quando si disegna un controllo. Inizializza una variabile temporanea **COLORREF** variabile e un `CBrush` oggetto con le chiamate a `TranslateColor`: uno che utilizza il `ForeColor` proprietà e l'altro tramite il `BackColor` proprietà. Una variabile temporanea `CBrush` oggetto viene quindi usato per disegnare il rettangolo e il colore del testo viene impostato utilizzando il `ForeColor` proprietà.

[!code-cpp[NVC_MFC_AxUI#24](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-properties_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md)<br/>
[Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
