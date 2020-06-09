---
title: 'Controlli ActiveX MFC: pagine delle proprietà'
ms.date: 11/19/2018
helpviewer_keywords:
- DDP_ functions [MFC]
- MFC ActiveX controls [MFC], properties
- property pages [MFC], MFC ActiveX controls
- DoDataExchange method [MFC]
- OLEIVERB_PROPERTIES
- CPropertyPageDialog class [MFC]
- MFC ActiveX controls [MFC], property pages
ms.assetid: 1506f87a-9fd6-4505-8380-0dbc9636230e
ms.openlocfilehash: 3d22085daa503a7c778111718445920f98b98a89
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84615432"
---
# <a name="mfc-activex-controls-property-pages"></a>Controlli ActiveX MFC: pagine delle proprietà

Le pagine delle proprietà consentono a un utente del controllo ActiveX di visualizzare e modificare le proprietà del controllo ActiveX. È possibile accedere a queste proprietà richiamando una finestra di dialogo Proprietà controllo, che contiene una o più pagine delle proprietà che forniscono un'interfaccia grafica personalizzata per la visualizzazione e la modifica delle proprietà del controllo.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Le pagine delle proprietà del controllo ActiveX vengono visualizzate in due modi:

- Quando viene richiamato il verbo delle proprietà del controllo (**OLEIVERB_PROPERTIES**), il controllo apre una finestra di dialogo delle proprietà modale che contiene le pagine delle proprietà del controllo.

- Il contenitore può visualizzare la propria finestra di dialogo non modale che mostra le pagine delle proprietà del controllo selezionato.

La finestra di dialogo Proprietà, illustrata nella figura seguente, è costituita da un'area per la visualizzazione della pagina delle proprietà corrente, dalle schede per il cambio tra le pagine delle proprietà e da una raccolta di pulsanti che eseguono attività comuni, ad esempio la chiusura della finestra di dialogo della pagina delle proprietà, l'annullamento delle modifiche apportate o l'applicazione immediata di eventuali modifiche al controllo ActiveX.

![Finestra di dialogo Proprietà per Circ3](../mfc/media/vc373i1.gif "Finestra di dialogo Proprietà per Circ3") <br/>
Finestra di dialogo Proprietà

Questo articolo illustra gli argomenti correlati all'uso delle pagine delle proprietà in un controllo ActiveX. Sono inclusi:

- [Implementazione della pagina delle proprietà predefinita per un controllo ActiveX](#_core_implementing_the_default_property_page)

- [Aggiunta di controlli a una pagina delle proprietà](#_core_adding_controls_to_a_property_page)

- [Personalizzazione della funzione DoDataExchange](#_core_customizing_the_dodataexchange_function)

Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](mfc-activex-controls-adding-another-custom-property-page.md)

- [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](mfc-activex-controls-using-stock-property-pages.md)

Per informazioni sull'utilizzo delle finestre delle proprietà in un'applicazione MFC diversa da un controllo ActiveX, vedere [finestre delle proprietà](property-sheets-mfc.md).

## <a name="implementing-the-default-property-page"></a><a name="_core_implementing_the_default_property_page"></a>Implementazione della pagina delle proprietà predefinita

Se si utilizza la creazione guidata controllo ActiveX per creare il progetto di controllo, la creazione guidata controllo ActiveX fornisce una classe di pagine delle proprietà predefinita per il controllo derivato dalla [Classe COlePropertyPage](reference/colepropertypage-class.md). Inizialmente, questa pagina delle proprietà è vuota, ma è possibile aggiungere qualsiasi controllo o set di controlli della finestra di dialogo. Poiché la creazione guidata controllo ActiveX crea una sola classe di pagine delle proprietà per impostazione predefinita, è necessario creare classi di pagine delle proprietà aggiuntive (anche derivate da `COlePropertyPage` ) utilizzando Visualizzazione classi. Per ulteriori informazioni su questa procedura, vedere [controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](mfc-activex-controls-adding-another-custom-property-page.md).

L'implementazione di una pagina delle proprietà (in questo caso, l'impostazione predefinita) è un processo in tre passaggi:

#### <a name="to-implement-a-property-page"></a>Per implementare una pagina delle proprietà

1. Aggiungere una `COlePropertyPage` classe derivata da al progetto di controllo. Se il progetto è stato creato utilizzando la creazione guidata controllo ActiveX (come in questo caso), la classe della pagina delle proprietà predefinita esiste già.

1. Utilizzare l'editor finestre per aggiungere qualsiasi controllo al modello di pagina delle proprietà.

1. Personalizzare la `DoDataExchange` funzione della `COlePropertyPage` classe derivata da per scambiare valori tra il controllo della pagina delle proprietà e il controllo ActiveX.

Ad esempio, le procedure seguenti utilizzano un controllo semplice (denominato "Sample"). L'esempio è stato creato utilizzando la creazione guidata controllo ActiveX e contiene solo la proprietà titolo Stock.

## <a name="adding-controls-to-a-property-page"></a><a name="_core_adding_controls_to_a_property_page"></a>Aggiunta di controlli a una pagina delle proprietà

#### <a name="to-add-controls-to-a-property-page"></a>Per aggiungere controlli a una pagina delle proprietà

1. Con il progetto di controllo aperto, aprire Visualizzazione risorse.

1. Fare doppio clic sull'icona della **finestra di dialogo** .

1. Aprire la finestra di dialogo IDD_PROPPAGE_SAMPLE.

   Nella creazione guidata controllo ActiveX il nome del progetto viene aggiunto alla fine dell'ID della finestra di dialogo, in questo caso Sample.

1. Trascinare e rilasciare il controllo selezionato dalla casella degli strumenti nell'area della finestra di dialogo.

1. Per questo esempio, è sufficiente un controllo etichetta di testo "didascalia:" e un controllo casella di modifica con un identificatore IDC_CAPTION.

1. Fare clic su **Salva** sulla barra degli strumenti per salvare le modifiche.

Ora che l'interfaccia utente è stata modificata, è necessario collegare la casella di modifica con la proprietà Caption. Questa operazione viene eseguita nella sezione seguente modificando la `CSamplePropPage::DoDataExchange` funzione.

## <a name="customizing-the-dodataexchange-function"></a><a name="_core_customizing_the_dodataexchange_function"></a>Personalizzazione della funzione DoDataExchange

La pagina delle proprietà [CWnd::D funzione odataexchange](reference/cwnd-class.md#dodataexchange) consente di collegare i valori della pagina delle proprietà con i valori effettivi delle proprietà nel controllo. Per stabilire i collegamenti, è necessario eseguire il mapping dei campi della pagina delle proprietà appropriati alle rispettive proprietà del controllo.

Questi mapping vengono implementati utilizzando la pagina delle proprietà **DDP_** funzioni. Le funzioni di **DDP_** funzionano come le funzioni di **DDX_** utilizzate nelle finestre di dialogo MFC standard, con un'eccezione. Oltre al riferimento a una variabile membro, **DDP_** funzioni accettano il nome della proprietà del controllo. Di seguito è riportata una voce tipica della `DoDataExchange` funzione per una pagina delle proprietà.

[!code-cpp[NVC_MFC_AxUI#31](codesnippet/cpp/mfc-activex-controls-property-pages_1.cpp)]

Questa funzione associa la variabile membro *m_caption* della pagina delle proprietà alla didascalia, usando la `DDP_TEXT` funzione.

Dopo aver inserito il controllo della pagina delle proprietà, è necessario stabilire un collegamento tra il controllo della pagina delle proprietà, IDC_CAPTION e la proprietà del controllo effettiva, Caption, usando la `DDP_Text` funzione come descritto in precedenza.

Le [pagine delle proprietà](reference/property-pages-mfc.md) sono disponibili per altri tipi di controllo della finestra di dialogo, ad esempio caselle di controllo, pulsanti di opzione e caselle di riepilogo. La tabella seguente elenca l'intero set di pagine delle proprietà **DDP_** funzioni e i rispettivi scopi:

### <a name="property-page-functions"></a>Funzioni della pagina delle proprietà

|Nome della funzione|Usare questa funzione per collegare|
|-------------------|-------------------------------|
|`DDP_CBIndex`|Indice della stringa selezionata in una casella combinata con una proprietà del controllo.|
|`DDP_CBString`|Stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere del valore della proprietà, ma non deve corrispondere completamente.|
|`DDP_CBStringExact`|Stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|
|`DDP_Check`|Casella di controllo con una proprietà del controllo.|
|`DDP_LBIndex`|Indice della stringa selezionata in una casella di riepilogo con una proprietà del controllo.|
|`DDP_LBString`|Stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere del valore della proprietà, ma non deve corrispondere completamente.|
|`DDP_LBStringExact`|Stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|
|`DDP_Radio`|Pulsante di opzione con una proprietà del controllo.|
|`DDP_Text`|Testo con una proprietà del controllo.|

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Classe COlePropertyPage](reference/colepropertypage-class.md)
