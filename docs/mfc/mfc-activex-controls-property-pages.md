---
title: 'Controlli ActiveX MFC: Pagine delle proprietà | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DDP_ functions [MFC]
- MFC ActiveX controls [MFC], properties
- property pages [MFC], MFC ActiveX controls
- DoDataExchange method [MFC]
- OLEIVERB_PROPERTIES
- CPropertyPageDialog class [MFC]
- MFC ActiveX controls [MFC], property pages
ms.assetid: 1506f87a-9fd6-4505-8380-0dbc9636230e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 19dc08fc29de4affaea987025a2bc8b92bc56460
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50079857"
---
# <a name="mfc-activex-controls-property-pages"></a>Controlli ActiveX MFC: pagine delle proprietà

Pagine delle proprietà consentono a un utente di un controllo ActiveX visualizzare e modificare proprietà del controllo ActiveX. Queste proprietà sono accessibili tramite la chiamata di una controllo finestra di dialogo proprietà che contiene uno o più pagine delle proprietà che forniscono un'interfaccia grafica personalizzata per visualizzare e modificare le proprietà del controllo.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).

Pagine proprietà del controllo ActiveX vengono visualizzate in due modi:

- Quando il verbo di proprietà del controllo (**OLEIVERB_PROPERTIES**) viene richiamato, il controllo apre una finestra di dialogo delle proprietà modale che contiene le pagine delle proprietà del controllo.

- Il contenitore può visualizzare la propria finestra di dialogo non modale che mostra le pagine delle proprietà del controllo selezionato.

Finestra di dialogo Proprietà (illustrato nella figura seguente) è costituito da un'area di visualizzazione di schede per lo spostamento tra le pagine delle proprietà e una raccolta di pulsanti che eseguono attività comuni quali la chiusura di finestra di dialogo pagina proprietà, la pagina delle proprietà corrente, annullamento delle modifiche apportate o applicazione immediata di tutte le modifiche al controllo ActiveX.

![Finestra di dialogo proprietà per Circ3](../mfc/media/vc373i1.gif "vc373i1") finestra di dialogo proprietà

Questo articolo vengono trattati argomenti relativi all'uso di pagine delle proprietà in un controllo ActiveX. Sono inclusi:

- [Implementazione della pagina delle proprietà predefinito per un controllo ActiveX](#_core_implementing_the_default_property_page)

- [Aggiunta di controlli a una pagina delle proprietà](#_core_adding_controls_to_a_property_page)

- [Personalizzazione della funzione DoDataExchange](#_core_customizing_the_dodataexchange_function)

Per altre informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)

- [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)

Per informazioni sull'uso di finestre delle proprietà in un'applicazione MFC diverso da un controllo ActiveX, vedere [finestre delle proprietà](../mfc/property-sheets-mfc.md).

##  <a name="_core_implementing_the_default_property_page"></a> Implementa la pagina delle proprietà predefinito

Se si usa la creazione guidata controllo ActiveX per creare il progetto di controllo, la creazione guidata controllo ActiveX fornisce una classe di pagina delle proprietà predefinito per il controllo derivato da [classe COlePropertyPage](../mfc/reference/colepropertypage-class.md). Inizialmente, questa pagina delle proprietà è vuota, ma è possibile aggiungere qualsiasi controllo finestra di dialogo o un set di controlli a esso. Poiché la creazione guidata controllo ActiveX Crea classe pagina delle proprietà solo una per impostazione predefinita, le classi delle pagine proprietà aggiuntiva (anche derivato da `COlePropertyPage`) deve essere creata usando Visualizzazione classi. Per altre informazioni su questa procedura, vedere [controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzate](../mfc/mfc-activex-controls-adding-another-custom-property-page.md).

Implementazione di una proprietà di pagina (in questo caso, il valore predefinito) è un processo in tre passaggi:

#### <a name="to-implement-a-property-page"></a>Per implementare una pagina delle proprietà

1. Aggiungere un `COlePropertyPage`-una classe derivata al progetto del controllo. Se il progetto è stato creato tramite la creazione guidata controllo ActiveX (come in questo caso), la classe delle pagine proprietà predefinite esiste già.

1. Usare l'editor finestre per aggiungere controlli al modello di pagina di proprietà.

1. Personalizzare il `DoDataExchange` funzione del `COlePropertyPage`-derivata per lo scambio di valori compresi tra il controllo della pagina proprietà e il controllo ActiveX.

Ad esempio scopi, le procedure seguenti usano un controllo semplice (denominato "Sample"). Esempio è stato creato utilizzando la creazione guidata controllo ActiveX e contiene solo la proprietà Caption azionario.

##  <a name="_core_adding_controls_to_a_property_page"></a> Aggiunta di controlli a una pagina delle proprietà

#### <a name="to-add-controls-to-a-property-page"></a>Per aggiungere controlli a una pagina delle proprietà

1. Aprire il progetto di controllo, aprire Visualizzazione risorse.

1. Fare doppio clic il **dialogo** icona directory.

1. Aprire il dialogo IDD_PROPPAGE_SAMPLE.

   Alla fine della finestra di dialogo ID, in questo caso, esempio, la creazione guidata controllo ActiveX aggiunge il nome del progetto.

1. Trascinare e rilasciare il controllo selezionato dalla casella degli strumenti nell'area della finestra di dialogo.

1. Per questo esempio, un testo controllo etichetta "didascalia:" e un controllo casella di modifica con un identificatore IDC_CAPTION sono sufficienti.

1. Fare clic su **salvare** sulla barra degli strumenti per salvare le modifiche.

Ora che l'interfaccia utente è stato modificato, è necessario collegare la casella di modifica con la proprietà Caption. Questa operazione viene eseguita nella sezione seguente, modificando il `CSamplePropPage::DoDataExchange` (funzione).

##  <a name="_core_customizing_the_dodataexchange_function"></a> Personalizzazione della funzione DoDataExchange

Pagina delle proprietà [CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) funzione consente di collegare valori di proprietà di pagina con i valori effettivi delle proprietà nel controllo. Per stabilire collegamenti, è necessario mappare i campi della pagina proprietà appropriata per le proprietà dei rispettivi controlli.

Questi mapping vengono implementati usando la pagina delle proprietà **DDP** funzioni. Il **DDP** funzioni funzionano come le **DDX _** funzioni utilizzate nelle finestre dialogo MFC standard, con un'eccezione. Oltre il riferimento a una variabile membro **DDP** funzioni accettano il nome della proprietà del controllo. Di seguito è una voce tipica di `DoDataExchange` funzione per una pagina delle proprietà.

[!code-cpp[NVC_MFC_AxUI#31](../mfc/codesnippet/cpp/mfc-activex-controls-property-pages_1.cpp)]

Questa funzione consente di associare la pagina delle proprietà *m_caption* variabile membro con la didascalia, utilizzando il `DDP_TEXT` (funzione).

Dopo aver creato il controllo pagina delle proprietà inserito, è necessario stabilire un collegamento tra il controllo della pagina proprietà IDC_CAPTION e la proprietà di controllo effettivi, didascalia, utilizzando il `DDP_Text` funzionano come descritto in precedenza.

[Pagine delle proprietà](../mfc/reference/property-pages-mfc.md) sono disponibili per altri tipi di controllo di finestra di dialogo, ad esempio caselle di controllo, pulsanti di opzione e caselle di riepilogo. La tabella seguente elenca l'intero set di pagina delle proprietà **DDP** funzioni e le relative funzioni:

### <a name="property-page-functions"></a>Pagina delle proprietà di funzioni

|Nome funzione|Utilizzare questa funzione per collegamento|
|-------------------|-------------------------------|
|`DDP_CBIndex`|Indice della stringa selezionata in una casella combinata con una proprietà del controllo.|
|`DDP_CBString`|La stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere il valore della proprietà, ma non deve necessariamente corrispondere completamente.|
|`DDP_CBStringExact`|La stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa devono corrispondere esattamente.|
|`DDP_Check`|Una casella di controllo con una proprietà del controllo.|
|`DDP_LBIndex`|Indice della stringa selezionata nella casella di riepilogo con una proprietà del controllo.|
|`DDP_LBString`|La stringa selezionata nella casella di riepilogo con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere il valore della proprietà, ma non deve necessariamente corrispondere completamente.|
|`DDP_LBStringExact`|La stringa selezionata nella casella di riepilogo con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa devono corrispondere esattamente.|
|`DDP_Radio`|Pulsante di opzione con una proprietà del controllo.|
|`DDP_Text`|Testo con una proprietà del controllo.|

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Classe COlePropertyPage](../mfc/reference/colepropertypage-class.md)
