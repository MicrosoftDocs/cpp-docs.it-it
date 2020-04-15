---
title: "Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata"
ms.date: 11/04/2016
helpviewer_keywords:
- property pages [MFC], MFC ActiveX controls
- custom property pages [MFC]
- ActiveX controls [MFC], property pages
- MFC ActiveX controls [MFC], property pages
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
ms.openlocfilehash: 02c87c2c5283b7293c2a7ab028ec9a2abbba2b33
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364734"
---
# <a name="mfc-activex-controls-adding-another-custom-property-page"></a>Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata

In alcuni casi, un controllo ActiveX avrà più proprietà di quelle che possono ragionevolmente essere contenute in una pagina delle proprietà. In questo caso, è possibile aggiungere pagine delle proprietà al controllo ActiveX per visualizzare queste proprietà.

In questo articolo viene illustrata l'aggiunta di nuove pagine delle proprietà a un controllo ActiveX che dispone già di almeno una pagina delle proprietà. Per ulteriori informazioni sull'aggiunta di pagine delle proprietà predefinite (tipo di carattere, immagine o colore), vedere l'articolo [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md).

Nelle procedure seguenti viene utilizzato un framework di controllo ActiveX di esempio creato dalla Creazione guidata controllo ActiveX. Pertanto, i nomi delle classi e gli identificatori sono univoci per questo esempio.

Per altre informazioni sull'uso delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:For more information on using property pages in an ActiveX control, see the following articles:

- [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)

    > [!NOTE]
    >  È consigliabile che le nuove pagine delle proprietà aderiscano allo standard di dimensioni per le pagine delle proprietà dei controlli ActiveX. Le pagine delle proprietà delle immagini e dei colori delle immagini stock misurano 250x62 unità di dialogo (DLU). La pagina delle proprietà del tipo di carattere standard è 250x110 DLUs. La pagina delle proprietà predefinita creata dalla Creazione guidata controllo ActiveX utilizza lo standard DLU 250x62.

### <a name="to-insert-a-new-property-page-template-into-your-project"></a>Per inserire un nuovo modello di pagina delle proprietà nel progettoTo insert a new property page template into your project

1. Con il progetto di controllo aperto, aprire Visualizzazione risorse nell'area di lavoro del progetto.

1. Fare clic con il pulsante destro del mouse in Visualizzazione risorse per aprire il menu di scelta rapida e scegliere **Aggiungi risorsa**.

1. Espandere il nodo **Finestra di dialogo** e selezionare **IDD_OLE_PROPPAGE_SMALL**.

1. Fare clic su **Nuovo** per aggiungere la risorsa al progetto.

1. Selezionare il nuovo modello di pagina delle proprietà per aggiornare la finestra **Proprietà** (in **Visualizzazione risorse).**

1. Immettere un nuovo valore per la proprietà **ID.** In questo esempio **viene utilizzato IDD_PROPPAGE_NEWPAGE .**

1. Fare clic su **Save** sulla barra degli strumenti.

### <a name="to-associate-the-new-template-with-a-class"></a>Per associare il nuovo modello a una classeTo associate the new template with a class

1. Aprire Visualizzazione classi.

1. Fare clic con il pulsante destro del mouse in Visualizzazione classi per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

   Verrà visualizzata la finestra di dialogo [Aggiungi classe.](../ide/add-class-dialog-box.md)

1. Fare doppio clic sul modello **Classe MFC.**

1. Nella casella **Nome classe** della Creazione guidata [classe MFC](../mfc/reference/mfc-add-class-wizard.md)digitare un nome per la nuova classe finestra di dialogo. (In questo `CAddtlPropPage`esempio, .)

1. Se si desidera modificare i nomi dei file, fare clic su **Cambia**. Digitare i nomi per i file di implementazione e di intestazione oppure accettare i nomi predefiniti.

1. Nella casella **Classe** base `COlePropertyPage`selezionare .

1. Nella casella ID finestra di **dialogo** selezionare **IDD_PROPPAGE_NEWPAGE**.

1. Fare clic su **Fine** per creare la classe.

Per consentire agli utenti del controllo di accedere a questa nuova pagina delle proprietà, apportare le modifiche seguenti alla sezione macro ID pagina delle proprietà del controllo (situata nel file di implementazione del controllo):

[!code-cpp[NVC_MFC_AxUI#32](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]

Si noti che è necessario aumentare il secondo parametro della macro BEGIN_PROPPAGEIDS (conteggio delle pagine delle proprietà) da 1 a 2.

È inoltre necessario modificare il file di implementazione del controllo (. CPP) per includere l'intestazione (. H) della nuova classe della pagina delle proprietà.

Il passaggio successivo prevede la creazione di due nuove risorse stringa che forniranno un nome di tipo e una didascalia per la nuova pagina delle proprietà.

#### <a name="to-add-new-string-resources-to-a-property-page"></a>Per aggiungere nuove risorse stringa a una pagina delle proprietàTo add new string resources to a property page

1. Con il progetto di controllo aperto, aprire Visualizzazione risorse.

1. Fare doppio clic sulla cartella **Tabella stringhe** e quindi fare doppio clic sulla risorsa tabella di stringhe esistente a cui si desidera aggiungere una stringa.

   Verrà aperta la tabella di stringhe in una finestra.

1. Selezionare la riga vuota alla fine della tabella di stringhe e digitare il testo, o didascalia, della stringa, ad esempio "Pagina delle proprietà aggiuntive".

   Verrà visualizzata una pagina **Proprietà stringa** con le **caselle Didascalia** e **ID.** La casella **Didascalia** contiene la stringa digitata.

1. Nella casella **ID** selezionare o digitare un ID per la stringa. Al termine, premere INVIO.

   In questo esempio **viene utilizzato IDS_SAMPLE_ADDPAGE** per il nome del tipo della nuova pagina delle proprietà.

1. Ripetere i passaggi 3 e 4 utilizzando **IDS_SAMPLE_ADDPPG_CAPTION** per l'ID e "Pagina delle proprietà aggiuntive" per la didascalia.

1. Nel. Il file CPP della nuova classe della `CAddtlPropPage`pagina `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` delle proprietà (in questo esempio, ) modifica l'oggetto in modo che IDS_SAMPLE_ADDPAGE venga passata da [AfxOleRegisterPropertyPageClass](../mfc/reference/registering-ole-controls.md#afxoleregisterpropertypageclass), come nell'esempio seguente:

   [!code-cpp[NVC_MFC_AxUI#33](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]

1. Modificare il `CAddtlPropPage` costruttore di in `COlePropertyPage` modo che IDS_SAMPLE_ADDPPG_CAPTION venga passato al costruttore, come indicato di seguito:

   [!code-cpp[NVC_MFC_AxUI#34](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]

Dopo aver apportato le modifiche necessarie ricompilare il progetto e utilizzare Test Container per testare la nuova pagina delle proprietà. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
