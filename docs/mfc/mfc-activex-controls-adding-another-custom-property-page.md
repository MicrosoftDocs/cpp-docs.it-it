---
title: "Controlli ActiveX MFC: aggiunta di un&#39;altra pagina delle propriet&#224; personalizzata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], proprietà (pagine)"
  - "pagine delle proprietà personalizzate"
  - "controlli ActiveX MFC [C++], proprietà (pagine)"
  - "pagine delle proprietà [C++], controlli ActiveX MFC"
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: aggiunta di un&#39;altra pagina delle propriet&#224; personalizzata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Talvolta, un controllo ActiveX avrà più proprietà che potrà accedere adattarsi a una pagina delle proprietà.  In questo caso, è possibile aggiungere pagine delle proprietà al controllo ActiveX per visualizzare queste proprietà.  
  
 In questo articolo viene illustrato aggiungere nuove pagine delle proprietà a un controllo ActiveX che già dispone di almeno una pagina delle proprietà.  Per ulteriori informazioni sulle pagine delle proprietà di azione \(tipo di carattere, immagini, o color\), vedere l'articolo [Controlli ActiveX MFC: Utilizzando pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md).  
  
 Le procedure riportate di seguito viene utilizzato un framework di controlli ActiveX di esempio creato dalla Creazione guidata controllo ActiveX.  Pertanto, i nomi delle classi e gli identificatori siano univoci a questo esempio.  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: Pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)  
  
-   [Controlli ActiveX MFC: Utilizzando pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)  
  
    > [!NOTE]
    >  Si consiglia delle nuove pagine delle proprietà sono conformi allo standard di dimensioni per le pagine delle proprietà del controllo ActiveX.  Le pagine delle proprietà predefinite e colore dell'immagine misurano le unità della finestra di dialogo \(DLU 250x62\).  La pagina standard di proprietà del tipo di carattere è 250x110 DLU.  La pagina delle proprietà predefinita creata dalla Creazione guidata controllo ActiveX utilizza lo standard di 250x62 DLU.  
  
### Per inserire un nuovo modello della pagina proprietà del progetto  
  
1.  Con il progetto di controllo, aprire visualizzazione risorse nell'area di lavoro del progetto.  
  
2.  Fare clic con il pulsante destro del mouse in visualizzazione risorse per aprire il menu di scelta rapida e scegliere **Aggiungi risorsa**.  
  
3.  Espandere il nodo di **Finestra di dialogo** e selezionare **IDD\_OLE\_PROPPAGE\_SMALL**.  
  
4.  Fare clic `New` per aggiungere la risorsa al progetto.  
  
5.  Selezionare il nuovo modello della pagina delle proprietà per aggiornare la Finestra Proprietà.  
  
6.  Immettere un nuovo valore per la proprietà di **ID**.  In questo esempio viene utilizzato **IDD\_PROPPAGE\_NEWPAGE**.  
  
7.  Fare clic su **Salva** sulla barra degli strumenti.  
  
### Per associare il nuovo modello con una classe  
  
1.  Aprire Visualizzazione classi.  
  
2.  Fare clic con il pulsante destro del mouse in Visualizzazione classi per aprire il menu di scelta rapida.  
  
3.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
     Verrà visualizzata la finestra di dialogo [Aggiungere la classe](../ide/add-class-dialog-box.md).  
  
4.  Fare doppio clic sul modello di **Classe MFC**.  
  
5.  Nella casella di **Nome classe** in [Creazione guidata classe MFC](../mfc/reference/mfc-add-class-wizard.md), digitare un nome per la nuova classe della finestra di dialogo. In questo esempio, `CAddtlPropPage`\).  
  
6.  Se si desidera modificare i nomi di file, fare clic **Modifica**.  Digitare i nomi dell'implementazione e file di intestazione, o accettare i nomi predefiniti.  
  
7.  Nella casella di **Classe base** , `COlePropertyPage`selezionato.  
  
8.  Nella casella di **ID finestra di dialogo** , **IDD\_PROPPAGE\_NEWPAGE**selezionato.  
  
9. Scegliere **Fine** per creare la classe.  
  
 Per consentire agli utenti di accedere alla nuova pagina delle proprietà, apportare le seguenti modifiche sezione della pagina delle proprietà ID del controllo alla macro \(trovi nel file di implementazione del controllo\):  
  
 [!code-cpp[NVC_MFC_AxUI#32](../mfc/codesnippet/CPP/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]  
  
 Si noti che è necessario aumentare il secondo parametro di una macro di `BEGIN_PROPPAGEIDS` \(conteggio\) della pagina delle proprietà da 1 a 2.  
  
 È inoltre necessario modificare il file di implementazione di controllo \(.CPP\) per includere l'intestazione \(. H\) file della classe della pagina delle proprietà.  
  
 Il passaggio successivo consiste nel creare due risorse di tipo stringa che forniranno un nome di tipo e una didascalia per la nuova pagina delle proprietà.  
  
#### Per aggiungere nuove risorse di tipo stringa in una pagina delle proprietà  
  
1.  Con il progetto di controllo, aprire visualizzazione risorse.  
  
2.  Fare doppio clic su cartella **Tabella di stringhe** quindi fare doppio clic sulla risorsa esistente della tabella di stringhe a cui si desidera aggiungere una stringa.  
  
     Verrà visualizzata la tabella di stringhe in una finestra.  
  
3.  Selezionare la riga vuota alla fine della tabella di stringhe e digitare il testo, o la barra del titolo, della stringa: ad esempio, "pagina delle proprietà aggiuntive."  
  
     Viene visualizzata una pagina di **Proprietà stringhe** che mostra **Titolo** e le caselle di **ID**.  La casella di **Titolo** contiene la stringa digitata.  
  
4.  Nella casella di **ID**, selezionare o immettere l'id della stringa.  Premere invio in al termine.  
  
     In questo esempio viene utilizzato **IDS\_SAMPLE\_ADDPAGE** per il nome del tipo di una nuova pagina delle proprietà.  
  
5.  Ripetere i passaggi 3 e 4 utilizzando **IDS\_SAMPLE\_ADDPPG\_CAPTION** per l'id e "la pagina delle proprietà aggiuntive" per caption.  
  
6.  Nel file di .CPP della nuova classe della pagina delle proprietà \(in questo esempio, `CAddtlPropPage`\) modificare `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` in modo che IDS\_SAMPLE\_ADDPAGE venga passato da [AfxOleRegisterPropertyPageClass](../Topic/AfxOleRegisterPropertyPageClass.md), come nel seguente esempio:  
  
     [!code-cpp[NVC_MFC_AxUI#33](../mfc/codesnippet/CPP/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]  
  
7.  Modificare il costruttore di `CAddtlPropPage` in modo da passare **IDS\_SAMPLE\_ADDPPG\_CAPTION** al costruttore di `COlePropertyPage`, come segue:  
  
     [!code-cpp[NVC_MFC_AxUI#34](../mfc/codesnippet/CPP/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]  
  
 Dopo aver effettuato la ricompilazione necessaria di modifiche il progetto e utilizzare tale test container per testare la nuova pagina delle proprietà.  Per ulteriori informazioni sulla modalità di accesso a Test Container, vedere [Verifica di proprietà ed eventi tramite Test Container](../mfc/testing-properties-and-events-with-test-container.md).  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)