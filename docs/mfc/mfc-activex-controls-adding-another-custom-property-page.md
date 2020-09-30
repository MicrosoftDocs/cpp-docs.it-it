---
title: "Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata"
ms.date: 11/04/2016
helpviewer_keywords:
- property pages [MFC], MFC ActiveX controls
- custom property pages [MFC]
- ActiveX controls [MFC], property pages
- MFC ActiveX controls [MFC], property pages
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
ms.openlocfilehash: a749c5d8d676ac85c3c2085eb041328aff599ab8
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508877"
---
# <a name="mfc-activex-controls-adding-another-custom-property-page"></a>Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata

Occasionalmente, un controllo ActiveX avrà più proprietà di quelle che possono ragionevolmente adattarsi a una pagina delle proprietà. In questo caso, è possibile aggiungere pagine di proprietà al controllo ActiveX per visualizzare queste proprietà.

In questo articolo viene illustrata l'aggiunta di nuove pagine di proprietà a un controllo ActiveX in cui è già presente almeno una pagina delle proprietà. Per ulteriori informazioni sull'aggiunta di pagine delle proprietà predefinite (carattere, immagine o colore), vedere l'articolo [controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](mfc-activex-controls-using-stock-property-pages.md).

Nelle procedure riportate di seguito viene utilizzato un Framework di controllo ActiveX di esempio creato dalla creazione guidata controllo ActiveX. Pertanto, i nomi e gli identificatori della classe sono univoci per questo esempio.

Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: pagine delle proprietà](mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](mfc-activex-controls-using-stock-property-pages.md)

    > [!NOTE]
    >  Si consiglia vivamente che le nuove pagine delle proprietà siano conformi alle dimensioni standard per le pagine delle proprietà del controllo ActiveX. Le pagine delle proprietà dei colori e delle immagini predefinite misurano le unità della finestra di dialogo 250x62 (DLU). La pagina delle proprietà del tipo di carattere standard è 250x110 DLU. La pagina delle proprietà predefinita creata mediante la creazione guidata controllo ActiveX usa lo standard 250x62 DLU.

### <a name="to-insert-a-new-property-page-template-into-your-project"></a>Per inserire un nuovo modello di pagina delle proprietà nel progetto

1. Con il progetto di controllo aperto, aprire Visualizzazione risorse nell'area di lavoro progetto.

1. Fare clic con il pulsante destro del mouse su Visualizzazione risorse per aprire il menu di scelta rapida e scegliere **Aggiungi risorsa**.

1. Espandere il nodo **finestra di dialogo** e selezionare **IDD_OLE_PROPPAGE_SMALL**.

1. Fare clic su **nuovo** per aggiungere la risorsa al progetto.

1. Selezionare il nuovo modello di pagina delle proprietà per aggiornare la finestra **Proprietà** (in **visualizzazione risorse**).

1. Immettere un nuovo valore per la proprietà **ID** . In questo esempio viene usato **IDD_PROPPAGE_NEWPAGE**.

1. Fare clic su **Save** sulla barra degli strumenti.

### <a name="to-associate-the-new-template-with-a-class"></a>Per associare il nuovo modello a una classe

1. Aprire Visualizzazione classi.

1. Fare clic con il pulsante destro del mouse su Visualizzazione classi per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

   Verrà visualizzata la finestra di dialogo [Aggiungi classe](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) .

1. Fare doppio clic sul modello di **classe MFC** .

1. Nella casella **nome classe** della [creazione guidata classe MFC](reference/mfc-add-class-wizard.md)digitare un nome per la nuova classe di finestra di dialogo. (In questo esempio `CAddtlPropPage` ).

1. Se si desidera modificare i nomi dei file, fare clic su **Cambia**. Digitare i nomi dei file di implementazione e di intestazione oppure accettare i nomi predefiniti.

1. Nella casella **classe base** selezionare `COlePropertyPage` .

1. Nella casella **ID finestra di dialogo** selezionare **IDD_PROPPAGE_NEWPAGE**.

1. Fare clic su **fine** per creare la classe.

Per consentire agli utenti del controllo di accedere alla nuova pagina delle proprietà, apportare le modifiche seguenti alla sezione della macro ID pagina delle proprietà del controllo (che si trova nel file di implementazione del controllo):

[!code-cpp[NVC_MFC_AxUI#32](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]

Si noti che è necessario aumentare il secondo parametro della macro BEGIN_PROPPAGEIDS (il conteggio delle pagine delle proprietà) da 1 a 2.

È inoltre necessario modificare il file di implementazione del controllo (. CPP) per includere l'intestazione. H) file della nuova classe di pagine delle proprietà.

Il passaggio successivo prevede la creazione di due nuove risorse stringa che forniranno un nome di tipo e una didascalia per la nuova pagina delle proprietà.

#### <a name="to-add-new-string-resources-to-a-property-page"></a>Per aggiungere nuove risorse di stringa a una pagina delle proprietà

1. Con il progetto di controllo aperto, aprire Visualizzazione risorse.

1. Fare doppio clic sulla cartella della **tabella di stringhe** , quindi fare doppio clic sulla risorsa della tabella di stringhe esistente a cui si desidera aggiungere una stringa.

   Verrà visualizzata la tabella delle stringhe in una finestra.

1. Selezionare la riga vuota alla fine della tabella delle stringhe e digitare il testo, o didascalia, della stringa: ad esempio, "pagina delle proprietà aggiuntiva".

   Verrà visualizzata una pagina delle **proprietà stringa** che mostra le caselle **didascalia** e **ID** . La casella **didascalia** contiene la stringa digitata.

1. Nella casella **ID** selezionare o digitare un ID per la stringa. Al termine, premere INVIO.

   In questo esempio viene usato **IDS_SAMPLE_ADDPAGE** per il nome del tipo della nuova pagina delle proprietà.

1. Ripetere i passaggi 3 e 4 usando **IDS_SAMPLE_ADDPPG_CAPTION** per l'ID e la "pagina delle proprietà aggiuntiva" per la didascalia.

1. Nel. File CPP della nuova classe di pagine delle proprietà (in questo esempio, `CAddtlPropPage` ) modificare in `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` modo che IDS_SAMPLE_ADDPAGE venga passato da [AfxOleRegisterPropertyPageClass](reference/registering-ole-controls.md#afxoleregisterpropertypageclass), come nell'esempio seguente:

   [!code-cpp[NVC_MFC_AxUI#33](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]

1. Modificare il costruttore di `CAddtlPropPage` in modo che IDS_SAMPLE_ADDPPG_CAPTION venga passato al `COlePropertyPage` costruttore, come indicato di seguito:

   [!code-cpp[NVC_MFC_AxUI#34](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]

Dopo aver apportato le modifiche necessarie, ricompilare il progetto e usare test container per testare la nuova pagina delle proprietà. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
