---
description: "Altre informazioni su: procedura dettagliata: creazione di un'applicazione Ribbon tramite MFC"
title: "Procedura dettagliata: creazione di un'applicazione barra multifunzione utilizzando MFC"
ms.date: 09/09/2019
helpviewer_keywords:
- ribbon application, creating (MFC)
- creating a ribbon application (MFC)
ms.assetid: e61393e2-1d6b-4594-a7ce-157d3d1b0d9f
ms.openlocfilehash: fa266900c52d7d8ca3460ca38b266571974d1563
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143065"
---
# <a name="walkthrough-creating-a-ribbon-application-by-using-mfc"></a>Procedura dettagliata: creazione di un'applicazione barra multifunzione utilizzando MFC

In questa procedura dettagliata viene illustrato come utilizzare la **creazione guidata applicazione MFC** per creare un'applicazione con una barra multifunzione per impostazione predefinita. È quindi possibile espandere la barra multifunzione aggiungendo una categoria della barra multifunzione **personalizzata** con un pannello della barra multifunzione **Preferiti** , quindi aggiungere alcuni comandi utilizzati di frequente al pannello.

## <a name="prerequisites"></a>Prerequisiti

In questa procedura dettagliata si presuppone che Visual Studio sia stato impostato per utilizzare **le impostazioni di sviluppo generali**. Se si usano impostazioni diverse, è possibile che alcuni elementi dell'interfaccia utente a cui si fa riferimento nelle istruzioni seguenti non vengano visualizzati.

### <a name="to-create-an-mfc-application-that-has-a-ribbon"></a>Per creare un'applicazione MFC con una barra multifunzione

1. Utilizzare la **creazione guidata applicazione MFC** per creare un'applicazione MFC con una barra multifunzione. Vedere [procedura dettagliata: uso dei nuovi controlli della shell MFC](walkthrough-using-the-new-mfc-shell-controls.md) per istruzioni su come aprire la procedura guidata per la versione di Visual Studio.

1. Impostare le opzioni seguenti nella **creazione guidata applicazione MFC**:

    1. Nella sezione **tipo di applicazione** , in **stile di visualizzazione e colori**, selezionare **Office 2007 (tema blu)**.

    1. Nella sezione **supporto documenti compositi** , assicurarsi che non sia selezionato **nessuno** .

    1. Nella sezione **Proprietà modello di documento** , nella casella **estensione file** , digitare un'estensione di file per i documenti creati dall'applicazione, ad esempio *mfcrbnapp*.

    1. Nella sezione **supporto database** (solo Visual Studio 2015) assicurarsi che non sia selezionato **nessuno** .

    1. Nella sezione **funzionalità interfaccia utente** verificare che sia selezionata l'opzione **Usa una barra multifunzione** .

    1. Per impostazione predefinita, la **creazione guidata applicazione MFC** aggiunge il supporto per diversi riquadri ancorati. Dal momento che questa procedura dettagliata fornisce informazioni unicamente sulla barra multifunzione, puoi rimuovere tali opzioni dall'applicazione. Nella sezione **Advanced Features** deselezionare all options.

1. Fare clic su **fine** per creare l'applicazione MFC.

1. Per verificare che l'applicazione sia stata creata correttamente, compilala ed eseguila. Per compilare l'applicazione, scegliere **Compila soluzione** dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal menu **debug** .

    La procedura guidata crea automaticamente una barra multifunzione con una categoria della barra multifunzione denominata **Home**. Questa barra multifunzione contiene tre pannelli della barra multifunzione, denominati **Appunti**, **Visualizza** e **finestra**.

### <a name="to-add-a-category-and-panel-to-the-ribbon"></a>Per aggiungere una categoria e un pannello alla barra multifunzione

1. Per aprire la risorsa della barra multifunzione creata dalla procedura guidata, scegliere **altre finestre** dal menu **Visualizza** , quindi fare clic su **visualizzazione risorse**. In **visualizzazione risorse** fare clic su **barra multifunzione** , quindi fare doppio clic su **IDR_RIBBON**.

1. Per prima cosa, aggiungere una categoria personalizzata alla barra multifunzione facendo doppio clic su **Category** nella **casella degli strumenti**.

    Viene creata una categoria con la didascalia **Categoria1** . Per impostazione predefinita, la categoria contiene un pannello.

    Fare clic con il pulsante destro del mouse su **Categoria1** e quindi scegliere **Proprietà**. Nella finestra **Proprietà** modificare **didascalia** in *personalizzata*.

    Le proprietà **large images** e **small images** specificano le bitmap utilizzate come icone per gli elementi della barra multifunzione di questa categoria. La creazione di bitmap personalizzate non rientra nell'ambito di questa procedura dettagliata, pertanto riutilizza le bitmap create dalla procedura guidata. Le bitmap piccole sono 16 x 16 pixel. Per le immagini di piccole dimensioni, usare le bitmap a cui si accede tramite l' `IDB_FILESMALL` ID di risorsa. Le bitmap grandi sono 32 x 32 pixel. Per le immagini di grandi dimensioni, usare le bitmap a cui si accede tramite l' `IDB_FILELARGE` ID di risorsa.

    > [!NOTE]
    > Sugli schermi HDPI, vengono usate automaticamente le versioni HDPI delle immagini.

1. Successivamente, personalizza il pannello. I pannelli vengono utilizzati per raggruppare gli elementi logicamente correlati gli uni agli altri. Nella scheda **Home** dell'applicazione, ad esempio, i comandi **taglia**, **copia** e **Incolla** si trovano tutti nel pannello degli **Appunti** . Per personalizzare il pannello, fare clic con il pulsante destro del mouse su **Panel1** e quindi scegliere **Proprietà**. Nella finestra **Proprietà** modificare **didascalia** in *Preferiti*.

    È possibile specificare l' **indice dell'immagine** per il pannello. Questo numero specifica l'icona visualizzata se il pannello della barra multifunzione viene aggiunto alla **barra di accesso rapido**. L'icona non viene visualizzata sul pannello della barra multifunzione.

1. Per verificare che la categoria della barra multifunzione e il pannello siano stati creati correttamente, visualizza in anteprima il controllo della barra multifunzione. Sulla **barra degli strumenti Editor della barra multifunzione** fare clic sul pulsante **test della barra multifunzione** . Sulla barra multifunzione devono essere visualizzati una scheda **personalizzata** e un pannello **Preferiti** .

### <a name="to-add-elements-to-the-ribbon-panels"></a>Per aggiungere elementi ai pannelli della barra multifunzione

1. Per aggiungere elementi al pannello creato nella procedura precedente, trascinare i controlli dalla sezione **Editor barra multifunzione** della **casella degli strumenti** al pannello nella visualizzazione progettazione.

1. Per prima cosa, aggiungere un pulsante **stampa** . Il pulsante **stampa** disporrà di un sottomenu contenente un comando di **stampa veloce** che stampa utilizzando la stampante predefinita. Entrambi i comandi sono già definiti per l'applicazione. Si trovano nel menu dell'applicazione.

    Per creare il pulsante **stampa** , trascinare uno strumento pulsante sul pannello.

    Nella finestra **Proprietà** modificare la proprietà **ID** in **ID_FILE_PRINT**, che dovrebbe essere già definito. Modificare la **didascalia** in *stampa*. Modificare l' **indice dell'immagine** in *4*.

    Per creare il pulsante **Stampa rapida** , fare clic sulla colonna valore proprietà accanto a **voci di menu**, quindi fare clic sui puntini di sospensione (**...**). **Nell'Editor elementi** fare clic sul pulsante **Aggiungi** senza etichetta per creare una voce di menu. Nella finestra **Proprietà** impostare **didascalia** su *stampa rapida*, **ID** su *ID_FILE_PRINT_DIRECT* e **immagine** su *5*. La proprietà Image specifica l'icona di **Stampa rapida** nella `IDB_FILESMALL` risorsa bitmap.

1. Per verificare che i pulsanti siano stati aggiunti al pannello della barra multifunzione, compila l'applicazione ed eseguila. Per compilare l'applicazione, scegliere **Compila soluzione** dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguire l'applicazione scegliendo **Avvia debug** dal menu **debug** . Verranno visualizzati il pulsante **stampa** e la casella combinata nel pannello **Preferiti** della scheda **personalizzata** sulla barra multifunzione.

## <a name="next-steps"></a>Passaggi successivi

[Procedura: personalizzare la barra di accesso rapido](../mfc/how-to-customize-the-quick-access-toolbar.md)

[Procedura: personalizzare il pulsante dell'applicazione](../mfc/how-to-customize-the-application-button.md)

Per esempi end-to-end, vedere [esempi (MFC Feature Pack)](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedi anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)<br/>
[Esempi (MFC Feature Pack)](../overview/visual-cpp-samples.md)
