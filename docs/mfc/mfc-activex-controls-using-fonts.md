---
title: 'Controlli ActiveX MFC: utilizzo dei tipi di carattere'
ms.date: 11/19/2018
f1_keywords:
- OnFontChanged
- HeadingFont
- InternalFont
helpviewer_keywords:
- notifications [MFC], MFC ActiveX controls fonts
- OnDraw method, MFC ActiveX controls
- InternalFont method [MFC]
- SetFont method [MFC]
- OnFontChanged method [MFC]
- IPropertyNotifySink class [MFC]
- MFC ActiveX controls [MFC], fonts
- Stock Font property [MFC]
- HeadingFont property [MFC]
- GetFont method [MFC]
- SelectStockFont method [MFC]
- fonts [MFC], ActiveX controls
ms.assetid: 7c51d602-3f5a-481d-84d1-a5d8a3a71761
ms.openlocfilehash: c336ec6c29b5478655ca8f19f71378a2b446ac64
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358263"
---
# <a name="mfc-activex-controls-using-fonts"></a>Controlli ActiveX MFC: utilizzo dei tipi di carattere

Se il controllo ActiveX visualizza testo, è possibile consentire all'utente del controllo di modificare l'aspetto del testo modificando una proprietà del tipo di carattere. Le proprietà del tipo di carattere vengono implementate come oggetti tipo di carattere e possono essere di due tipi: predefinite o personalizzate. Le proprietà predefinite del tipo di carattere sono proprietà del tipo di carattere preimplementate che è possibile aggiungere mediante l'Aggiunta guidata proprietà. Le proprietà Font personalizzate non sono preimplementate e lo sviluppatore del controllo determina il comportamento e l'utilizzo della proprietà.

Questo articolo include gli argomenti seguenti:

- [Utilizzo della proprietà Stock Font](#_core_using_the_stock_font_property)

- [Utilizzo di proprietà personalizzate del tipo di carattere nel controllo](#_core_implementing_a_custom_font_property)

## <a name="using-the-stock-font-property"></a><a name="_core_using_the_stock_font_property"></a>Utilizzo della proprietà Stock Font

Le proprietà Stock Font sono preimplementate dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Inoltre, è disponibile anche una pagina delle proprietà Font standard, che consente all'utente di modificare vari attributi dell'oggetto font, ad esempio il nome, la dimensione e lo stile.

Accedere all'oggetto tipo di carattere tramite le `COleControl`funzioni [GetFont](../mfc/reference/colecontrol-class.md#getfont), [SetFont](../mfc/reference/colecontrol-class.md#setfont)e [InternalGetFont](../mfc/reference/colecontrol-class.md#internalgetfont) di . L'utente del controllo accederà `GetFont` `SetFont` all'oggetto tipo di carattere tramite le funzioni e nello stesso modo di qualsiasi altra proprietà Get/Set. Quando l'accesso all'oggetto font è richiesto `InternalGetFont` dall'interno di un controllo, utilizzare la funzione.

Come descritto in [Controlli ActiveX MFC: Proprietà](../mfc/mfc-activex-controls-properties.md), l'aggiunta di proprietà predefinite è semplice con l'Aggiunta [guidata proprietà](../ide/names-add-property-wizard.md). Si sceglie il Font proprietà e l'Aggiunta guidata proprietà inserisce automaticamente la voce Font stock nella mappa di invio del controllo.

#### <a name="to-add-the-stock-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà Font predefinita mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata l'Aggiunta guidata proprietà.

1. Nella casella **Nome proprietà** fare clic su **Carattere**.

1. Fare clic su **Fine**.

L'Aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:

[!code-cpp[NVC_MFC_AxFont#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_1.cpp)]

Inoltre, l'Aggiunta guidata proprietà aggiunge la riga seguente al controllo . File IDL:

[!code-cpp[NVC_MFC_AxFont#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_2.idl)]

La proprietà predefinita Caption è un esempio di proprietà text che può essere disegnata utilizzando le informazioni sulla proprietà Font predefinita. L'aggiunta della proprietà predefinita Caption al controllo utilizza passaggi simili a quelli utilizzati per la proprietà Font predefinita.

#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà predefinita Caption mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata l'Aggiunta guidata proprietà.

1. Nella casella **Nome proprietà** fare clic su **Didascalia**.

1. Fare clic su **Fine**.

L'Aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:

[!code-cpp[NVC_MFC_AxFont#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_3.cpp)]

## <a name="modifying-the-ondraw-function"></a><a name="_core_modifying_the_ondraw_function"></a>Modifica della funzione OnDraw

L'implementazione `OnDraw` predefinita di utilizza il tipo di carattere di sistema di Windows per tutto il testo visualizzato nel controllo. Ciò significa che `OnDraw` è necessario modificare il codice selezionando l'oggetto tipo di carattere nel contesto di dispositivo. A tale scopo, chiamare COleControl::SelectStockFont e passare il contesto di periferica del controllo, come illustrato nell'esempio seguente:To do this, call [COleControl::SelectStockFont](../mfc/reference/colecontrol-class.md#selectstockfont) and pass the control's device context, as shown in the following example:

[!code-cpp[NVC_MFC_AxFont#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_4.cpp)]

Dopo `OnDraw` che la funzione è stata modificata per utilizzare l'oggetto font, viene visualizzato qualsiasi testo all'interno del controllo con le caratteristiche della proprietà Font predefinita del controllo.

## <a name="using-custom-font-properties-in-your-control"></a><a name="_core_using_custom_font_properties_in_your_control"></a>Utilizzo di proprietà personalizzate del tipo di carattere nel controllo

Oltre alla proprietà Font predefinita, il controllo ActiveX può avere proprietà Font personalizzate. Per aggiungere una proprietà del tipo di carattere personalizzata è necessario:To add a custom font property you must:

- Utilizzare l'Aggiunta guidata proprietà per implementare la proprietà Font personalizzata.

- [Elaborazione delle notifiche dei caratteri](#_core_processing_font_notifications).

- [Implementazione di una nuova interfaccia](#_core_implementing_a_new_font_notification_interface)di notifica dei tipi di carattere .

### <a name="implementing-a-custom-font-property"></a><a name="_core_implementing_a_custom_font_property"></a>Implementazione di una proprietà del tipo di carattere personalizzataImplementing a Custom Font Property

Per implementare una proprietà Font personalizzata, utilizzare l'Aggiunta guidata proprietà per aggiungere la proprietà e quindi apportare alcune modifiche al codice. Nelle sezioni seguenti viene descritto `HeadingFont` come aggiungere la proprietà personalizzata al controllo Sample.

##### <a name="to-add-the-custom-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà Font personalizzata mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

   Verrà visualizzata l'Aggiunta guidata proprietà.

1. Nella casella **Nome proprietà** digitare un nome per la proprietà. Per questo esempio, utilizzare **HeadingFont**.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **Tipo di proprietà** selezionare **IDispatch** <strong>\*</strong> per il tipo di proprietà.

1. Fare clic su **Fine**.

L'Aggiunta guidata proprietà crea `HeadingFont` il codice `CSampleCtrl` per aggiungere la proprietà personalizzata alla classe e il SAMPLE. File IDL. Poiché `HeadingFont` è un tipo di proprietà Get/Set, `CSampleCtrl` l'Aggiunta guidata proprietà modifica la mappa di invio della classe per includere una DISP_PROPERTY_EX_ID[DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex) voce di macro:

[!code-cpp[NVC_MFC_AxFont#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_5.cpp)]

La macro DISP_PROPERTY_EX `HeadingFont` associa il nome `CSampleCtrl` della proprietà ai `SetHeadingFont`metodi Get e Set corrispondenti e `GetHeadingFont` . Viene inoltre specificato il tipo del valore della proprietà; in questo caso, VT_FONT.

L'Aggiunta guidata proprietà aggiunge anche una dichiarazione nel file di intestazione del controllo (. H) per `GetHeadingFont` `SetHeadingFont` le funzioni e aggiunge i relativi modelli di funzione nel file di implementazione del controllo (. CPP):

[!code-cpp[NVC_MFC_AxFont#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_6.cpp)]

Infine, l'Aggiunta guidata proprietà modifica il controllo . IDL aggiungendo una voce `HeadingFont` per la proprietà:

[!code-cpp[NVC_MFC_AxFont#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_7.idl)]

### <a name="modifications-to-the-control-code"></a>Modifiche al codice di controllo

Dopo aver aggiunto `HeadingFont` la proprietà al controllo, è necessario apportare alcune modifiche all'intestazione del controllo e ai file di implementazione per supportare completamente la nuova proprietà.

Nel file di intestazione del controllo (. H), aggiungere la seguente dichiarazione di una variabile membro protetta:

[!code-cpp[NVC_MFC_AxFont#8](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_8.h)]

Nel file di implementazione del controllo (. CPP), procedere come segue:

- Inizializzare *m_fontHeading* nel costruttore del controllo.

   [!code-cpp[NVC_MFC_AxFont#9](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_9.cpp)]

- Dichiarare una struttura FONTDESC statica contenente gli attributi predefiniti del tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#10](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_10.cpp)]

- Nella funzione `DoPropExchange` membro del controllo, `PX_Font` aggiungere una chiamata alla funzione. Ciò fornisce l'inizializzazione e la persistenza per la proprietà Font personalizzata.

   [!code-cpp[NVC_MFC_AxFont#11](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_11.cpp)]

- Completare l'implementazione della funzione membro del controllo. `GetHeadingFont`

   [!code-cpp[NVC_MFC_AxFont#12](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_12.cpp)]

- Completare l'implementazione della funzione membro del controllo. `SetHeadingFont`

   [!code-cpp[NVC_MFC_AxFont#13](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_13.cpp)]

- Modificare la `OnDraw` funzione membro del controllo per definire una variabile per contenere il tipo di carattere selezionato in precedenza.

   [!code-cpp[NVC_MFC_AxFont#14](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_14.cpp)]

- Modificare la `OnDraw` funzione membro del controllo per selezionare il tipo di carattere personalizzato nel contesto di dispositivo aggiungendo la riga seguente ovunque venga utilizzato il tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#15](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_15.cpp)]

- Modificare la `OnDraw` funzione membro del controllo per selezionare nuovamente il tipo di carattere precedente nel contesto di dispositivo aggiungendo la riga seguente dopo l'utilizzo del tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#16](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_16.cpp)]

Dopo l'implementazione della proprietà Font personalizzata, è necessario implementare la pagina delle proprietà Font standard, che consente agli utenti del controllo di modificare il tipo di carattere corrente del controllo. Per aggiungere l'ID della pagina delle proprietà per la pagina delle proprietà Font standard, inserire la riga seguente dopo la macro BEGIN_PROPPAGEIDS:

[!code-cpp[NVC_MFC_AxFont#17](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_17.cpp)]

È inoltre necessario incrementare di uno il parametro count della macro BEGIN_PROPPAGEIDS. Questa condizione è illustrata dalla riga seguente:

[!code-cpp[NVC_MFC_AxFont#18](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_18.cpp)]

Dopo aver apportato queste modifiche, ricompilare l'intero progetto per incorporare le funzionalità aggiuntive.

### <a name="processing-font-notifications"></a><a name="_core_processing_font_notifications"></a>Elaborazione delle notifiche dei caratteriProcessing Font Notifications

Nella maggior parte dei casi il controllo deve sapere quando sono state modificate le caratteristiche dell'oggetto tipo di carattere. Ogni oggetto font è in grado di fornire notifiche `IFontNotification` quando cambia `COleControl`chiamando una funzione membro dell'interfaccia, implementata da .

Se il controllo utilizza la proprietà Stock, le `OnFontChanged` notifiche `COleControl`vengono gestite dalla funzione membro di . Quando si aggiungono proprietà del tipo di carattere personalizzate, è possibile fare in modo che utilizzino la stessa implementazione. Nell'esempio della sezione precedente, questa operazione è stata eseguita passando &*m_xFontNotification* durante l'inizializzazione della variabile membro *m_fontHeading.*

![Implementazione di più interfacce di oggetti tipo di carattereImplementing multiple font object interfaces](../mfc/media/vc373q1.gif "Implementazione di più interfacce dell'oggetto tipo di carattere") <br/>
Implementazione di interfacce di oggetti con più tipi di carattere

Le linee continue nella figura precedente mostrano che entrambi `IFontNotification`gli oggetti tipo di carattere utilizzano la stessa implementazione di . Ciò potrebbe causare problemi se si desidera distinguere quale tipo di carattere è cambiato.

Un modo per distinguere tra le notifiche dell'oggetto tipo `IFontNotification` di carattere del controllo consiste nel creare un'implementazione separata dell'interfaccia per ogni oggetto tipo di carattere nel controllo. Questa tecnica consente di ottimizzare il codice di disegno aggiornando solo la stringa, o stringhe, che utilizzano il tipo di carattere modificato di recente. Nelle sezioni seguenti vengono illustrati i passaggi necessari per implementare interfacce di notifica separate per una seconda proprietà Font.The following sections demonstrate the steps necessary to implement separate notification interfaces for a second Font property. Si presuppone che la seconda `HeadingFont` proprietà del tipo di carattere sia la proprietà aggiunta nella sezione precedente.

### <a name="implementing-a-new-font-notification-interface"></a><a name="_core_implementing_a_new_font_notification_interface"></a>Implementazione di una nuova interfaccia di notifica dei tipi di carattereImplementing a New Font Notification Interface

Per distinguere tra le notifiche di due o più tipi di carattere, è necessario implementare una nuova interfaccia di notifica per ogni tipo di carattere utilizzato nel controllo. Nelle sezioni seguenti viene descritto come implementare una nuova interfaccia di notifica dei tipi di carattere modificando l'intestazione del controllo e i file di implementazione.

### <a name="additions-to-the-header-file"></a>Aggiunte al file di intestazione

Nel file di intestazione del controllo (. H), aggiungere le seguenti righe alla dichiarazione di classe:

[!code-cpp[NVC_MFC_AxFont#19](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_19.h)]

Verrà creata un'implementazione dell'interfaccia `IPropertyNotifySink` denominata `HeadingFontNotify`. Questa nuova interfaccia contiene `OnChanged`un metodo denominato .

### <a name="additions-to-the-implementation-file"></a>Aggiunte al file di implementazioneAdditions to the Implementation File

Nel codice che inizializza il tipo di carattere dell'intestazione (nel costruttore del controllo), modificare &*m_xFontNotification* in &*m_xHeadingFontNotify*. Aggiungere quindi il codice seguente:

[!code-cpp[NVC_MFC_AxFont#20](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_20.cpp)]

I `AddRef` `Release` metodi e `IPropertyNotifySink` nell'interfaccia tengono traccia del conteggio dei riferimenti per l'oggetto controllo ActiveX. Quando il controllo ottiene l'accesso al `AddRef` puntatore a interfaccia, il controllo chiama per incrementare il conteggio dei riferimenti. Quando il controllo è terminato `Release`con il puntatore `GlobalFree` , chiama molto nello stesso modo che potrebbe essere chiamato per liberare un blocco di memoria globale. Quando il conteggio dei riferimenti per questa interfaccia è pari a zero, l'implementazione dell'interfaccia può essere liberata. In questo esempio, la `QueryInterface` funzione `IPropertyNotifySink` restituisce un puntatore a un'interfaccia su un oggetto specifico. Questa funzione consente a un controllo ActiveX di eseguire una query su un oggetto per determinare le interfacce supportate.

Dopo aver apportato queste modifiche al progetto, ricompilare il progetto e utilizzare Test Container per testare l'interfaccia. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: uso di immagini in un controllo ActiveX](../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md)<br/>
[Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)
