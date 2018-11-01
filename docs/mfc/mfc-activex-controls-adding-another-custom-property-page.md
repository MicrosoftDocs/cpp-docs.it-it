---
title: "Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata"
ms.date: 11/04/2016
helpviewer_keywords:
- property pages [MFC], MFC ActiveX controls
- custom property pages [MFC]
- ActiveX controls [MFC], property pages
- MFC ActiveX controls [MFC], property pages
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
ms.openlocfilehash: ac72258e881d10723a02b5103c602ac5cec6a1f5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465312"
---
# <a name="mfc-activex-controls-adding-another-custom-property-page"></a>Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata

In alcuni casi, un controllo ActiveX può avere più proprietà non può essere contenuta in un'unica pagina di proprietà. In questo caso, è possibile aggiungere le pagine delle proprietà del controllo ActiveX per visualizzare queste proprietà.

Questo articolo illustra l'aggiunta di nuove pagine delle proprietà a un controllo ActiveX che dispone già di almeno una pagina delle proprietà. Per altre informazioni sull'aggiunta di proprietà predefinite pagine (tipo di carattere, immagine o colore), vedere l'articolo [controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md).

Le procedure seguenti usano un framework di controllo di ActiveX di esempio creato dalla creazione guidata controllo ActiveX. Di conseguenza, i nomi delle classi e gli identificatori sono univoci per questo esempio.

Per altre informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)

    > [!NOTE]
    >  Si consiglia di utilizzare tale proprietà nuove pagine di rispettano la dimensione standard per pagine proprietà del controllo ActiveX. La proprietà di colori e immagini predefinita delle pagine unità di misura 250 x 62 finestra di dialogo (DLU). La pagina delle proprietà standard del tipo di carattere è 250 x 110 DLU. La pagina delle proprietà predefinite creata dalla creazione guidata controllo ActiveX utilizza lo standard DLU 250 x 62.

### <a name="to-insert-a-new-property-page-template-into-your-project"></a>Per inserire un nuovo modello di pagina di proprietà nel progetto

1. Aprire il progetto di controllo, aprire Visualizzazione risorse nell'area di lavoro di progetto.

1. Fare doppio clic nella visualizzazione di risorse per aprire il menu di scelta rapida e fare clic su **Aggiungi risorsa**.

1. Espandere la **finestra di dialogo** nodo e selezionare **IDD_OLE_PROPPAGE_SMALL**.

1. Fare clic su **New** per aggiungere la risorsa al progetto.

1. Selezionare il nuovo modello di pagina delle proprietà per aggiornare la finestra Proprietà.

1. Immettere un nuovo valore per il **ID** proprietà. Questo esempio viene usato **IDD_PROPPAGE_NEWPAGE**.

1. Fare clic su **salvare** sulla barra degli strumenti.

### <a name="to-associate-the-new-template-with-a-class"></a>Per associare il nuovo modello con una classe

1. Aprire Visualizzazione classi.

1. Fare doppio clic nella visualizzazione di classi per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi classe**.

   Verrà visualizzata la [Aggiungi classe](../ide/add-class-dialog-box.md) nella finestra di dialogo.

1. Fare doppio clic il **classe MFC** modello.

1. Nel **nome della classe** nella casella il [Creazione guidata classe MFC](../mfc/reference/mfc-add-class-wizard.md), digitare un nome per la nuova classe di finestra di dialogo. (In questo esempio `CAddtlPropPage`.)

1. Se si desidera modificare i nomi di file, fare clic su **modificare**. Digitare i nomi per i file di implementazione e l'intestazione, o accettare i nomi predefiniti.

1. Nel **classe di base** , quindi selezionare `COlePropertyPage`.

1. Nel **ID finestra di dialogo** , quindi selezionare **IDD_PROPPAGE_NEWPAGE**.

9. Fare clic su **fine** per creare la classe.

Per consentire agli utenti del controllo di accesso a questa nuova pagina delle proprietà, apportare le modifiche seguenti alla sezione macro del controllo proprietà pagina ID (che si trova nel file di implementazione del controllo):

[!code-cpp[NVC_MFC_AxUI#32](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]

Si noti che è necessario aumentare il secondo parametro della macro BEGIN_PROPPAGEIDS (il numero di pagine di proprietà) da 1 a 2.

È inoltre necessario modificare il file di implementazione del controllo (. File CPP) da includere l'intestazione (. H) file della nuova classe pagina delle proprietà.

Il passaggio successivo prevede la creazione di due nuove risorse di stringa che forniranno un nome di tipo e una didascalia per la nuova pagina delle proprietà.

#### <a name="to-add-new-string-resources-to-a-property-page"></a>Per aggiungere nuove risorse di stringa a una pagina delle proprietà

1. Aprire il progetto di controllo, aprire Visualizzazione risorse.

1. Fare doppio clic il **tabella di stringhe** cartella e quindi fare doppio clic a cui si desidera aggiungere una stringa di risorsa della tabella stringa esistente.

   Verrà visualizzata la tabella di stringhe in una finestra.

1. Selezionare la riga vuota alla fine della tabella di stringhe e digitare il testo o il titolo della stringa: ad esempio, "proprietà pagina aggiuntiva."

   Verrà visualizzata una **le proprietà della stringa** che Mostra pagina **didascalia** e **ID** caselle. Il **didascalia** casella contiene la stringa digitata.

1. Nel **ID** selezionare o digitare un ID per la stringa. Al termine, premere INVIO.

   Questo esempio viene usato **utilizzato IDS_SAMPLE_ADDPAGE** per il nome del tipo della nuova pagina delle proprietà.

1. Ripetere i passaggi 3 e 4 utilizzando **IDS_SAMPLE_ADDPPG_CAPTION** l'ID e una "Pagina proprietà aggiuntive" per la didascalia.

1. Nel. File CPP della nuova classe pagina delle proprietà (in questo esempio `CAddtlPropPage`) modificare il `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` in modo che utilizzato IDS_SAMPLE_ADDPAGE viene passato dal [AfxOleRegisterPropertyPageClass](../mfc/reference/registering-ole-controls.md#afxoleregisterpropertypageclass), come illustrato nell'esempio seguente:

   [!code-cpp[NVC_MFC_AxUI#33](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]

1. Modificare il costruttore della `CAddtlPropPage` in modo che IDS_SAMPLE_ADDPPG_CAPTION al `COlePropertyPage` costruttore, come indicato di seguito:

   [!code-cpp[NVC_MFC_AxUI#34](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]

Dopo avere apportato le modifiche necessarie ricompilare il progetto e usare Test Container per testare la nuova pagina delle proprietà. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

