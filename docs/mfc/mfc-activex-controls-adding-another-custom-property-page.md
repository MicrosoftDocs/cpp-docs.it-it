---
title: "Controlli ActiveX MFC: Aggiunta di un'altra proprietà personalizzate pagina | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property pages [MFC], MFC ActiveX controls
- custom property pages [MFC]
- ActiveX controls [MFC], property pages
- MFC ActiveX controls [MFC], property pages
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9c3d9f4744ae01a7e251387bd342b77292d1c0d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931609"
---
# <a name="mfc-activex-controls-adding-another-custom-property-page"></a>Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata
In alcuni casi, un controllo ActiveX può avere più proprietà non può essere contenuta in un'unica pagina di proprietà. In questo caso, è possibile aggiungere le pagine delle proprietà per il controllo ActiveX per visualizzare queste proprietà.  
  
 In questo articolo viene illustrata l'aggiunta di nuove pagine delle proprietà a un controllo ActiveX che dispone già di almeno una pagina delle proprietà. Per ulteriori informazioni sull'aggiunta di proprietà predefinite delle pagine (tipo di carattere, immagine o colore), vedere l'articolo [controlli ActiveX MFC: utilizzo di pagine proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md).  
  
 Le procedure seguenti usano un framework di controllo ActiveX di esempio creato dalla creazione guidata controllo ActiveX. Pertanto, i nomi delle classi e gli identificatori sono univoci per questo esempio.  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)  
  
-   [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)  
  
    > [!NOTE]
    >  Si consiglia di utilizzare tale proprietà nuove pagine rispettino le dimensioni standard per le pagine delle proprietà controllo ActiveX. Le proprietà predefinite immagine e colore pagine unità di misura 250 x 62 finestra di dialogo (DLU). La pagina delle proprietà del tipo di carattere standard è 250 x 110 DLU. La pagina delle proprietà predefinito creata dalla creazione guidata controllo ActiveX utilizza lo standard di 250 x 62 DLU.  
  
### <a name="to-insert-a-new-property-page-template-into-your-project"></a>Per inserire un nuovo modello di pagina delle proprietà del progetto  
  
1.  Aprire il progetto di controllo, aprire Visualizzazione risorse nell'area di lavoro di progetto.  
  
2.  Fare doppio clic nella visualizzazione risorse aprire il menu di scelta rapida e fare clic su **Aggiungi risorsa**.  
  
3.  Espandere la **finestra di dialogo** nodo, quindi selezionare **IDD_OLE_PROPPAGE_SMALL**.  
  
4.  Fare clic su **New** per aggiungere la risorsa al progetto.  
  
5.  Selezionare il nuovo modello di pagina di proprietà per aggiornare la finestra Proprietà.  
  
6.  Immettere un nuovo valore per il **ID** proprietà. Questo esempio viene utilizzato **IDD_PROPPAGE_NEWPAGE**.  
  
7.  Fare clic su **salvare** sulla barra degli strumenti.  
  
### <a name="to-associate-the-new-template-with-a-class"></a>Per associare il nuovo modello con una classe  
  
1.  Aprire Visualizzazione classi.  
  
2.  Fare doppio clic nella visualizzazione di classi per aprire il menu di scelta rapida.  
  
3.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi classe**.  
  
     Verrà visualizzata la [Aggiungi classe](../ide/add-class-dialog-box.md) finestra di dialogo.  
  
4.  Fare doppio clic sui **classe MFC** modello.  
  
5.  Nel **nome della classe** casella il [Creazione guidata classe MFC](../mfc/reference/mfc-add-class-wizard.md), digitare un nome per la nuova classe di finestra di dialogo. (In questo esempio, `CAddtlPropPage`.)  
  
6.  Se si desidera modificare i nomi di file, fare clic su **modificare**. Digitare i nomi per i file di implementazione e l'intestazione o accettare i nomi predefiniti.  
  
7.  Nel **di una classe Base** , quindi selezionare `COlePropertyPage`.  
  
8.  Nel **ID di finestra di dialogo** , quindi selezionare **IDD_PROPPAGE_NEWPAGE**.  
  
9. Fare clic su **fine** per creare la classe.  
  
 Per consentire agli utenti del controllo di accesso a questa nuova pagina delle proprietà, apportare le modifiche seguenti alla sezione macro del controllo proprietà pagina ID (che si trova nel file di implementazione del controllo):  
  
 [!code-cpp[NVC_MFC_AxUI#32](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]  
  
 Si noti che è necessario aumentare il secondo parametro di macro BEGIN_PROPPAGEIDS (il conteggio delle pagine proprietà) da 1 a 2.  
  
 È inoltre necessario modificare il file di implementazione del controllo (. I file CPP) da includere l'intestazione (. H) file della nuova classe di pagina di proprietà.  
  
 Il passaggio successivo prevede la creazione di due nuove risorse di stringa che forniranno un nome di tipo e una didascalia per la nuova pagina delle proprietà.  
  
#### <a name="to-add-new-string-resources-to-a-property-page"></a>Per aggiungere nuove risorse di stringa a una pagina delle proprietà  
  
1.  Aprire il progetto di controllo, aprire Visualizzazione risorse.  
  
2.  Fare doppio clic sui **tabelle delle stringhe** cartella e quindi fare doppio clic a cui si desidera aggiungere una stringa di risorsa della tabella la stringa esistente.  
  
     Verrà visualizzata la tabella di stringhe in una finestra.  
  
3.  Selezionare la riga vuota alla fine della tabella di stringhe e digitare il testo o didascalia della stringa: ad esempio, "pagina aggiuntiva delle proprietà."  
  
     Verrà visualizzata una **le proprietà della stringa** pagina con **didascalia** e **ID** caselle. Il **didascalia** finestra contiene la stringa digitata.  
  
4.  Nel **ID** selezionare o digitare un ID per la stringa. Al termine, premere INVIO.  
  
     Questo esempio viene utilizzato **utilizzato IDS_SAMPLE_ADDPAGE** per il nome del tipo della nuova pagina delle proprietà.  
  
5.  Ripetere i passaggi 3 e 4 utilizzando **IDS_SAMPLE_ADDPPG_CAPTION** per l'ID e "Pagina proprietà aggiuntive" per la didascalia.  
  
6.  Nel. I file CPP della nuova classe pagina proprietà (in questo esempio, `CAddtlPropPage`) modificare il `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` in modo che utilizzato IDS_SAMPLE_ADDPAGE viene passato [AfxOleRegisterPropertyPageClass](../mfc/reference/registering-ole-controls.md#afxoleregisterpropertypageclass), come nell'esempio seguente:  
  
     [!code-cpp[NVC_MFC_AxUI#33](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]  
  
7.  Modificare il costruttore della `CAddtlPropPage` in modo che IDS_SAMPLE_ADDPPG_CAPTION per il `COlePropertyPage` costruttore, come indicato di seguito:  
  
     [!code-cpp[NVC_MFC_AxUI#34](../mfc/codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]  
  
 Dopo avere apportato le modifiche necessarie ricompilare il progetto e utilizzare Test Container per testare la nuova pagina delle proprietà. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

