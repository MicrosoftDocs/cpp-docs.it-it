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
ms.openlocfilehash: 02c52d2544afdc9d13fc3ec67ad9eed757a3f277
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499695"
---
# <a name="mfc-activex-controls-using-fonts"></a>Controlli ActiveX MFC: utilizzo dei tipi di carattere

Se il controllo ActiveX Visualizza testo, è possibile consentire all'utente del controllo di modificare l'aspetto del testo modificando una proprietà del tipo di carattere. Le proprietà del tipo di carattere vengono implementate come oggetti Font e possono essere di uno dei due tipi seguenti: stock o Custom. Le proprietà del tipo di carattere predefinite sono proprietà del tipo di carattere preimplementate che è possibile aggiungere utilizzando l'aggiunta guidata proprietà. Le proprietà del tipo di carattere personalizzate non vengono preimplementate e lo sviluppatore del controllo determina il comportamento e l'utilizzo della proprietà.

Questo articolo include gli argomenti seguenti:

- [Uso della proprietà del tipo di carattere Stock](#_core_using_the_stock_font_property)

- [Uso delle proprietà dei tipi di carattere personalizzate nel controllo](#_core_implementing_a_custom_font_property)

## <a name="using-the-stock-font-property"></a><a name="_core_using_the_stock_font_property"></a> Uso della proprietà del tipo di carattere Stock

Le proprietà del tipo di carattere predefinite sono preimplementate dalla classe [COleControl](reference/colecontrol-class.md). Inoltre, è disponibile anche una pagina delle proprietà del tipo di carattere standard, che consente all'utente di modificare vari attributi dell'oggetto tipo di carattere, ad esempio il nome, la dimensione e lo stile.

Accedere all'oggetto tipo di carattere tramite le funzioni [GetFont](reference/colecontrol-class.md#getfont), [sefont](reference/colecontrol-class.md#setfont)e [InternalGetFont](reference/colecontrol-class.md#internalgetfont) di `COleControl` . L'utente del controllo accederà all'oggetto del tipo di carattere tramite le `GetFont` funzioni e allo `SetFont` stesso modo di qualsiasi altra proprietà get/set. Quando è richiesto l'accesso all'oggetto tipo di carattere dall'interno di un controllo, usare la `InternalGetFont` funzione.

Come descritto in [controlli ActiveX MFC: Proprietà](mfc-activex-controls-properties.md), l'aggiunta di proprietà predefinite è facile con l' [Aggiunta guidata proprietà](../ide/adding-a-property-visual-cpp.md#names-add-property-wizard). Si sceglie la proprietà font e l'aggiunta guidata proprietà inserisce automaticamente la voce del tipo di carattere di magazzino nella mappa di invio del controllo.

#### <a name="to-add-the-stock-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà stock font utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l'aggiunta guidata proprietà.

1. Nella casella **nome proprietà** fare clic su **tipo di carattere**.

1. Fare clic su **Fine**.

L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:

[!code-cpp[NVC_MFC_AxFont#1](codesnippet/cpp/mfc-activex-controls-using-fonts_1.cpp)]

Inoltre, l'aggiunta guidata proprietà aggiunge la riga seguente al controllo. File IDL:

[!code-cpp[NVC_MFC_AxFont#2](codesnippet/cpp/mfc-activex-controls-using-fonts_2.idl)]

La proprietà titolo Stock è un esempio di una proprietà di testo che può essere disegnata usando le informazioni sulle proprietà del tipo di carattere predefinite. L'aggiunta della proprietà della didascalia azionaria al controllo Usa passaggi simili a quelli usati per la proprietà del tipo di carattere del titolo.

#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà titolo stock utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l'aggiunta guidata proprietà.

1. Nella casella **nome proprietà** fare clic su **didascalia**.

1. Fare clic su **Fine**.

L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:

[!code-cpp[NVC_MFC_AxFont#3](codesnippet/cpp/mfc-activex-controls-using-fonts_3.cpp)]

## <a name="modifying-the-ondraw-function"></a><a name="_core_modifying_the_ondraw_function"></a> Modifica della funzione onpare

L'implementazione predefinita di `OnDraw` Usa il tipo di carattere di sistema Windows per tutto il testo visualizzato nel controllo. Ciò significa che è necessario modificare il `OnDraw` codice selezionando l'oggetto del tipo di carattere nel contesto di dispositivo. A tale scopo, chiamare [COleControl:: SelectStockFont](reference/colecontrol-class.md#selectstockfont) e passare il contesto di dispositivo del controllo, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFC_AxFont#4](codesnippet/cpp/mfc-activex-controls-using-fonts_4.cpp)]

Dopo che la `OnDraw` funzione è stata modificata per l'utilizzo dell'oggetto tipo di carattere, qualsiasi testo all'interno del controllo viene visualizzato con le caratteristiche della proprietà del tipo di carattere azionario del controllo.

## <a name="using-custom-font-properties-in-your-control"></a><a name="_core_using_custom_font_properties_in_your_control"></a> Uso delle proprietà dei tipi di carattere personalizzate nel controllo

Oltre alla proprietà stock font, il controllo ActiveX può includere proprietà del tipo di carattere personalizzate. Per aggiungere una proprietà del tipo di carattere personalizzata è necessario:

- Utilizzare l'aggiunta guidata proprietà per implementare la proprietà del tipo di carattere personalizzata.

- [Elaborazione delle notifiche dei tipi di carattere](#_core_processing_font_notifications).

- [Implementazione di una nuova interfaccia di notifica dei tipi di carattere](#_core_implementing_a_new_font_notification_interface).

### <a name="implementing-a-custom-font-property"></a><a name="_core_implementing_a_custom_font_property"></a> Implementazione di una proprietà Font personalizzata

Per implementare una proprietà del tipo di carattere personalizzata, utilizzare l'aggiunta guidata proprietà per aggiungere la proprietà, quindi apportare alcune modifiche al codice. Nelle sezioni seguenti viene descritto come aggiungere la `HeadingFont` proprietà personalizzata al controllo di esempio.

##### <a name="to-add-the-custom-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà del tipo di carattere personalizzato utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

   Verrà visualizzata l'aggiunta guidata proprietà.

1. Nella casella **nome proprietà** Digitare un nome per la proprietà. Per questo esempio, usare **HeadingFont**.

1. Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.

1. Nella casella **tipo proprietà** selezionare **IDispatch** <strong>\*</strong> per il tipo della proprietà.

1. Fare clic su **Fine**.

L'aggiunta guidata proprietà crea il codice per aggiungere la `HeadingFont` proprietà personalizzata alla `CSampleCtrl` classe e all'esempio. File IDL. Poiché `HeadingFont` è un tipo di proprietà get/set, l'aggiunta guidata proprietà modifica la `CSampleCtrl` mappa dispatch della classe per includere un DISP_PROPERTY_EX_ID[DISP_PROPERTY_EX](reference/dispatch-maps.md#disp_property_ex) voce della macro:

[!code-cpp[NVC_MFC_AxFont#5](codesnippet/cpp/mfc-activex-controls-using-fonts_5.cpp)]

La macro DISP_PROPERTY_EX associa il `HeadingFont` nome della proprietà ai `CSampleCtrl` metodi get e set della classe corrispondenti, `GetHeadingFont` e `SetHeadingFont` . Viene specificato anche il tipo del valore della proprietà. in questo caso, VT_FONT.

L'aggiunta guidata proprietà aggiunge anche una dichiarazione nel file di intestazione del controllo (. H) per le `GetHeadingFont` `SetHeadingFont` funzioni e e aggiunge i modelli di funzione nel file di implementazione del controllo (. CPP):

[!code-cpp[NVC_MFC_AxFont#6](codesnippet/cpp/mfc-activex-controls-using-fonts_6.cpp)]

Infine, la procedura guidata Aggiungi proprietà consente di modificare il controllo. File IDL mediante l'aggiunta di una voce per la `HeadingFont` proprietà:

[!code-cpp[NVC_MFC_AxFont#7](codesnippet/cpp/mfc-activex-controls-using-fonts_7.idl)]

### <a name="modifications-to-the-control-code"></a>Modifiche al codice di controllo

Ora che è stata aggiunta la `HeadingFont` proprietà al controllo, è necessario apportare alcune modifiche all'intestazione e ai file di implementazione del controllo per supportare completamente la nuova proprietà.

Nel file di intestazione del controllo (. H) aggiungere la seguente dichiarazione di una variabile membro protetta:

[!code-cpp[NVC_MFC_AxFont#8](codesnippet/cpp/mfc-activex-controls-using-fonts_8.h)]

Nel file di implementazione del controllo (. CPP), eseguire le operazioni seguenti:

- Inizializzare *m_fontHeading* nel costruttore del controllo.

   [!code-cpp[NVC_MFC_AxFont#9](codesnippet/cpp/mfc-activex-controls-using-fonts_9.cpp)]

- Dichiarare una struttura FONTDESC statica contenente gli attributi predefiniti del tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#10](codesnippet/cpp/mfc-activex-controls-using-fonts_10.cpp)]

- Nella `DoPropExchange` funzione membro del controllo aggiungere una chiamata alla `PX_Font` funzione. Ciò fornisce l'inizializzazione e la persistenza per la proprietà del tipo di carattere personalizzata.

   [!code-cpp[NVC_MFC_AxFont#11](codesnippet/cpp/mfc-activex-controls-using-fonts_11.cpp)]

- Terminare l'implementazione della `GetHeadingFont` funzione membro del controllo.

   [!code-cpp[NVC_MFC_AxFont#12](codesnippet/cpp/mfc-activex-controls-using-fonts_12.cpp)]

- Terminare l'implementazione della `SetHeadingFont` funzione membro del controllo.

   [!code-cpp[NVC_MFC_AxFont#13](codesnippet/cpp/mfc-activex-controls-using-fonts_13.cpp)]

- Modificare la `OnDraw` funzione membro di controllo per definire una variabile che contenga il tipo di carattere selezionato in precedenza.

   [!code-cpp[NVC_MFC_AxFont#14](codesnippet/cpp/mfc-activex-controls-using-fonts_14.cpp)]

- Modificare la `OnDraw` funzione membro di controllo per selezionare il tipo di carattere personalizzato nel contesto di dispositivo aggiungendo la riga seguente quando viene usato il tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#15](codesnippet/cpp/mfc-activex-controls-using-fonts_15.cpp)]

- Modificare la `OnDraw` funzione membro di controllo per selezionare nuovamente il tipo di carattere precedente nel contesto di dispositivo aggiungendo la riga seguente dopo l'utilizzo del tipo di carattere.

   [!code-cpp[NVC_MFC_AxFont#16](codesnippet/cpp/mfc-activex-controls-using-fonts_16.cpp)]

Dopo che la proprietà del tipo di carattere personalizzata è stata implementata, è necessario implementare la pagina delle proprietà del tipo di carattere standard, consentendo agli utenti di controllare di modificare il tipo di carattere corrente. Per aggiungere l'ID della pagina delle proprietà del tipo di carattere standard, inserire la riga seguente dopo la macro BEGIN_PROPPAGEIDS:

[!code-cpp[NVC_MFC_AxFont#17](codesnippet/cpp/mfc-activex-controls-using-fonts_17.cpp)]

È anche necessario incrementare di uno il parametro count della macro BEGIN_PROPPAGEIDS. Questa condizione è illustrata dalla riga seguente:

[!code-cpp[NVC_MFC_AxFont#18](codesnippet/cpp/mfc-activex-controls-using-fonts_18.cpp)]

Dopo aver apportato queste modifiche, ricompilare l'intero progetto per incorporare le funzionalità aggiuntive.

### <a name="processing-font-notifications"></a><a name="_core_processing_font_notifications"></a> Elaborazione delle notifiche dei tipi di carattere

Nella maggior parte dei casi è necessario che il controllo conosca quando le caratteristiche dell'oggetto tipo di carattere sono state modificate. Ogni oggetto del tipo di carattere è in grado di fornire notifiche quando viene modificato chiamando una funzione membro dell' `IFontNotification` interfaccia implementata da `COleControl` .

Se il controllo Usa la proprietà del tipo di carattere Stock, le notifiche vengono gestite dalla `OnFontChanged` funzione membro di `COleControl` . Quando si aggiungono proprietà dei tipi di carattere personalizzate, è possibile fare in modo che utilizzino la stessa implementazione. Nell'esempio della sezione precedente questa operazione è stata eseguita passando &*m_xFontNotification* durante l'inizializzazione della variabile membro *m_fontHeading* .

![Implementazione di più interfacce oggetto del tipo di carattere](../mfc/media/vc373q1.gif "Implementazione di più interfacce dell'oggetto tipo di carattere") <br/>
Implementazione di interfacce di oggetti con più tipi di carattere

Le linee continue nella figura precedente mostrano che entrambi gli oggetti Font utilizzano la stessa implementazione di `IFontNotification` . Questo può causare problemi se si vuole distinguere il tipo di carattere modificato.

Un modo per distinguere tra le notifiche degli oggetti del tipo di carattere del controllo consiste nel creare un'implementazione separata dell' `IFontNotification` interfaccia per ogni oggetto del tipo di carattere nel controllo. Questa tecnica consente di ottimizzare il codice di disegno aggiornando solo la stringa o le stringhe che usano il tipo di carattere modificato di recente. Nelle sezioni seguenti vengono illustrati i passaggi necessari per implementare interfacce di notifica separate per una seconda proprietà del tipo di carattere. Si presuppone che la seconda proprietà del tipo di carattere sia la `HeadingFont` proprietà aggiunta nella sezione precedente.

### <a name="implementing-a-new-font-notification-interface"></a><a name="_core_implementing_a_new_font_notification_interface"></a> Implementazione di una nuova interfaccia di notifica dei tipi di carattere

Per distinguere tra le notifiche di due o più tipi di carattere, è necessario implementare una nuova interfaccia di notifica per ogni tipo di carattere utilizzato nel controllo. Le sezioni seguenti descrivono come implementare una nuova interfaccia di notifica dei tipi di carattere modificando l'intestazione e i file di implementazione del controllo.

### <a name="additions-to-the-header-file"></a>Aggiunte al file di intestazione

Nel file di intestazione del controllo (. H) aggiungere le righe seguenti alla dichiarazione della classe:

[!code-cpp[NVC_MFC_AxFont#19](codesnippet/cpp/mfc-activex-controls-using-fonts_19.h)]

In questo modo viene creata un'implementazione dell' `IPropertyNotifySink` interfaccia denominata `HeadingFontNotify` . Questa nuova interfaccia contiene un metodo denominato `OnChanged` .

### <a name="additions-to-the-implementation-file"></a>Aggiunte al file di implementazione

Nel codice che inizializza il tipo di carattere dell'intestazione (nel costruttore del controllo) modificare &*m_xFontNotification* &*m_xHeadingFontNotify*. Aggiungere quindi il codice seguente:

[!code-cpp[NVC_MFC_AxFont#20](codesnippet/cpp/mfc-activex-controls-using-fonts_20.cpp)]

I `AddRef` `Release` metodi e nell' `IPropertyNotifySink` interfaccia tengono traccia del conteggio dei riferimenti per l'oggetto controllo ActiveX. Quando il controllo ottiene l'accesso al puntatore di interfaccia, il controllo chiama `AddRef` per incrementare il conteggio dei riferimenti. Quando il controllo viene terminato con il puntatore, chiama `Release` , nello stesso modo in cui `GlobalFree` può essere chiamato per liberare un blocco di memoria globale. Quando il conteggio dei riferimenti per questa interfaccia va a zero, l'implementazione dell'interfaccia può essere liberata. In questo esempio, la `QueryInterface` funzione restituisce un puntatore a un' `IPropertyNotifySink` interfaccia su un oggetto specifico. Questa funzione consente a un controllo ActiveX di eseguire una query su un oggetto per determinare quali interfacce sono supportate.

Dopo aver apportato queste modifiche al progetto, ricompilare il progetto e usare test container per testare l'interfaccia. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX](mfc-activex-controls-using-pictures-in-an-activex-control.md)<br/>
[Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](mfc-activex-controls-using-stock-property-pages.md)
