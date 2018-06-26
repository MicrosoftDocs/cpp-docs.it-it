---
title: 'Controlli ActiveX MFC: Utilizzo dei tipi di carattere | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- OnFontChanged
- HeadingFont
- InternalFont
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f5d1475412de736970d0ae36a39540121bfbc01
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930715"
---
# <a name="mfc-activex-controls-using-fonts"></a>Controlli ActiveX MFC: utilizzo dei tipi di carattere
Se il controllo ActiveX viene visualizzato il testo, è possibile consentire all'utente di controllo modificare l'aspetto del testo modificando una proprietà del tipo di carattere. Le proprietà del tipo di carattere vengono implementate come oggetti del tipo di carattere e può essere uno dei due tipi: predefinite o personalizzate. Proprietà del carattere predefinite sono preimplementate che è possibile aggiungere tramite l'aggiunta guidata proprietà. Proprietà personalizzate del tipo di carattere non sono preimplementate e lo sviluppatore di controllo determina il comportamento e l'utilizzo della proprietà.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Utilizzando la proprietà del tipo di carattere azionario](#_core_using_the_stock_font_property)  
  
-   [Utilizzo delle proprietà di tipo di carattere personalizzato nel controllo](#_core_implementing_a_custom_font_property)  
  
##  <a name="_core_using_the_stock_font_property"></a> Utilizzando la proprietà del carattere predefinite  
 Proprietà del carattere predefinite sono preimplementate dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Inoltre, una pagina delle proprietà del tipo di carattere standard è disponibile, consentendo all'utente di modificare diversi attributi dell'oggetto del tipo di carattere, ad esempio nome, dimensioni e stile.  
  
 Accedere all'oggetto del tipo di carattere tramite il [GetFont](../mfc/reference/colecontrol-class.md#getfont), [SetFont](../mfc/reference/colecontrol-class.md#setfont), e [InternalGetFont](../mfc/reference/colecontrol-class.md#internalgetfont) funzioni di `COleControl`. L'utente di controllo avrà accesso all'oggetto font tramite il `GetFont` e `SetFont` funzioni esattamente come qualsiasi altra proprietà Get/Set. Quando l'accesso all'oggetto del tipo di carattere è richiesto all'interno di un controllo, utilizzare il `InternalGetFont` (funzione).  
  
 Come descritto in [controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md), aggiunta di proprietà predefinite è facile con il [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md). Si sceglie la proprietà del tipo di carattere e l'aggiunta guidata proprietà inserisce automaticamente la voce del tipo di carattere azionario nella mappa di invio del controllo.  
  
#### <a name="to-add-the-stock-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà predefinita con l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà aperta l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** fare clic su **carattere**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe di controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_1.cpp)]  
  
 Inoltre, l'aggiunta guidata proprietà aggiunge la riga seguente al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxFont#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_2.idl)]  
  
 La proprietà predefinita Caption è riportato un esempio di una proprietà di testo che può essere disegnata usando le informazioni sulle proprietà del tipo di carattere azionari. Aggiunta di proprietà Caption predefinita per il controllo Usa passaggi analoghi a quelli utilizzati per la proprietà Font predefinita.  
  
#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà di didascalia predefinita mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà aperta l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** fare clic su **didascalia**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe di controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_3.cpp)]  
  
##  <a name="_core_modifying_the_ondraw_function"></a> Modifica della funzione OnDraw  
 L'implementazione predefinita di `OnDraw` utilizza il carattere di sistema di Windows per tutto il testo visualizzato nel controllo. Ciò significa che è necessario modificare il `OnDraw` codice selezionando l'oggetto del tipo di carattere nel contesto di dispositivo. A tale scopo, chiamare [COleControl:: SelectStockFont](../mfc/reference/colecontrol-class.md#selectstockfont) e passare il contesto di dispositivo del controllo, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_4.cpp)]  
  
 Dopo il `OnDraw` funzione è stata modificata per utilizzare l'oggetto del tipo di carattere, il testo all'interno del controllo viene visualizzato con caratteristiche dalla proprietà Font predefinita del controllo.  
  
##  <a name="_core_using_custom_font_properties_in_your_control"></a> Utilizzo delle proprietà di tipo di carattere personalizzato nel controllo  
 Oltre alle proprietà del tipo di carattere azionario, il controllo ActiveX può disporre di proprietà del tipo di carattere personalizzata. Per aggiungere una proprietà di tipo di carattere personalizzato, è necessario:  
  
-   Utilizzare l'aggiunta guidata proprietà per implementare la proprietà del tipo di carattere personalizzata.  
  
-   [Elaborazione delle notifiche di tipo di carattere](#_core_processing_font_notifications).  
  
-   [Implementazione di una nuova interfaccia di notifica di tipo di carattere](#_core_implementing_a_new_font_notification_interface).  
  
###  <a name="_core_implementing_a_custom_font_property"></a> Implementazione di una proprietà di tipo di carattere personalizzato  
 Per implementare una proprietà del tipo di carattere personalizzata, utilizzare l'aggiunta guidata proprietà aggiungere la proprietà e quindi apportare alcune modifiche al codice. Le sezioni seguenti descrivono come aggiungere l'oggetto personalizzato `HeadingFont` proprietà per il controllo di esempio.  
  
##### <a name="to-add-the-custom-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà del tipo di carattere personalizzata mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà aperta l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** , digitare un nome per la proprietà. Per questo esempio, utilizzare **HeadingFont**.  
  
6.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
7.  Nella casella **Tipo proprietà**, selezionare **IDispatch\*** come tipo di proprietà.  
  
8.  Scegliere **Fine**.  
  
 La procedura guidata Aggiungi proprietà crea il codice per aggiungere la `HeadingFont`proprietà personalizzata alla`CSampleCtrl` classe e al file SAMPLE.IDL. Poiché `HeadingFont` è un tipo di proprietà Get / Set, la procedura guidata Aggiungi proprietà modifica la mappa di invio della classe `CSampleCtrl` per includere una voce macro DISP_PROPERTY_EX_ID [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex):  
  
 [!code-cpp[NVC_MFC_AxFont#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_5.cpp)]  
  
 La macro DISP_PROPERTY_EX associa il nome della proprietà `HeadingFont` con i corrispondenti metodi Get e Set della classe `CSampleCtrl`, `GetHeadingFont` e `SetHeadingFont`. Aggiunte al File di intestazione  
  
 La procedura guidata Aggiungi proprietà aggiunge inoltre una dichiarazione nel file di intestazione del controllo (.H) per le funzioni `GetHeadingFont` e `SetHeadingFont` e aggiunge i relativi modelli di funzione nel file di implementazione del controllo (.CPP):  
  
 [!code-cpp[NVC_MFC_AxFont#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_6.cpp)]  
  
 Questo modo viene creata un'implementazione del `HeadingFont` interfaccia denominata .  
  
 [!code-cpp[NVC_MFC_AxFont#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_7.idl)]  
  
### <a name="modifications-to-the-control-code"></a>Questa nuova interfaccia contiene un metodo denominato .  
 Dopo aver aggiunto la proprietà `HeadingFont` al controllo, è necessario apportare alcune modifiche all'intestazione di controllo e ai file di implementazione per supportare completamente la nuova proprietà.  
  
 Nel codice che inizializza il tipo di carattere titolo (nel costruttore del controllo), modificare &m_xFontNotification a &m_xHeadingFontNotify.  
  
 [!code-cpp[NVC_MFC_AxFont#8](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_8.h)]  
  
 Quindi aggiungere il codice seguente:  
  
-   Il *e* metodi il  interfaccia tenere traccia del numero di riferimento per l'oggetto controllo ActiveX.  
  
     [!code-cpp[NVC_MFC_AxFont#9](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_9.cpp)]  
  
-   Quando il controllo ottiene accesso al puntatore a interfaccia, il controllo chiama  per incrementare il conteggio dei riferimenti.  
  
     [!code-cpp[NVC_MFC_AxFont#10](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_10.cpp)]  
  
-   Quando il controllo ha terminato con il puntatore, chiama `DoPropExchange`, nello stesso modo in cui `PX_Font` potrebbe essere chiamato per liberare un blocco di memoria globale. Quando il conteggio dei riferimenti per questa interfaccia va a zero, l'implementazione dell'interfaccia può essere liberato.  
  
     [!code-cpp[NVC_MFC_AxFont#11](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_11.cpp)]  
  
-   In questo esempio, il `GetHeadingFont` funzione restituisce un puntatore a un  interfaccia in un oggetto particolare.  
  
     [!code-cpp[NVC_MFC_AxFont#12](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_12.cpp)]  
  
-   In questo esempio, il `SetHeadingFont` funzione restituisce un puntatore a un  interfaccia in un oggetto particolare.  
  
     [!code-cpp[NVC_MFC_AxFont#13](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_13.cpp)]  
  
-   Modificare la funzione membro di controllo `OnDraw` per definire una variabile per contenere il carattere selezionato in precedenza.  
  
     [!code-cpp[NVC_MFC_AxFont#14](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_14.cpp)]  
  
-   Modificare la funzione membro di controllo `OnDraw` per selezionare il carattere personalizzato nel contesto del dispositivo aggiungendo la riga seguente ovunque si utilizzi il carattere.  
  
     [!code-cpp[NVC_MFC_AxFont#15](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_15.cpp)]  
  
-   Modificare la funzione membro di controllo `OnDraw` per selezionare il carattere precedente nel contesto del dispositivo aggiungendo la seguente riga dopo che il carattere è stato utilizzato.  
  
     [!code-cpp[NVC_MFC_AxFont#16](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_16.cpp)]  
  
 Dopo che la proprietà Font personalizzata è stata implementata, la pagina delle proprietà del tipo di carattere standard deve essere implementata, consentendo agli utenti di controllo di modifica tipo di carattere corrente del controllo. Per aggiungere l'ID di pagina di proprietà per la pagina delle proprietà del tipo di carattere standard, inserire la riga seguente dopo il BEGIN_PROPPAGEIDS (macro):  
  
 [!code-cpp[NVC_MFC_AxFont#17](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_17.cpp)]  
  
 È anche necessario incrementare il parametro del conteggio della macro BEGIN_PROPPAGEIDS da uno. Questa condizione è illustrata dalla riga seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#18](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_18.cpp)]  
  
 Dopo avere apportate queste modifiche, ricompilare l'intero progetto per incorporare la funzionalità aggiuntiva.  
  
###  <a name="_core_processing_font_notifications"></a> Elaborazione delle notifiche di tipo di carattere  
 Nella maggior parte dei casi il controllo deve sapere quando sono state modificate le caratteristiche dell'oggetto del tipo di carattere. Ogni oggetto del tipo di carattere è in grado di fornire notifiche in caso di modifiche chiamando una funzione membro del `IFontNotification` interfaccia implementata da `COleControl`.  
  
 Se il controllo Usa la proprietà predefinita, le notifiche sono gestite dal `OnFontChanged` funzione membro di `COleControl`. Quando si aggiungono proprietà tipo di carattere personalizzato, i componenti possono usare la stessa implementazione. Nell'esempio nella sezione precedente, questa operazione è stata eseguita passando &*m_xFontNotification* durante l'inizializzazione di *m_fontHeading* variabile membro.  
  
 ![Implementare più interfacce dell'oggetto del tipo di carattere](../mfc/media/vc373q1.gif "vc373q1")  
Implementazione di interfacce di oggetti con più tipi di carattere  
  
 Le linee continue nella figura precedente mostrano che entrambi gli oggetti del tipo di carattere siano utilizzando la stessa implementazione `IFontNotification`. Ciò può causare problemi se si desidera individuare quale tipo di carattere modificato.  
  
 Un modo per distinguere tra le notifiche degli oggetti del tipo di carattere del controllo consiste nel creare un'implementazione separata del `IFontNotification` interfaccia per ogni oggetto di tipo di carattere nel controllo. Questa tecnica consente di ottimizzare il codice di disegno aggiornando solo la stringa o le stringhe che utilizzano il tipo di carattere modificata di recente. Nelle sezioni seguenti illustrano i passaggi necessari per implementare le interfacce di notifica separata per una seconda proprietà Font. La seconda proprietà font presuppone che sia il `HeadingFont` proprietà che è stato aggiunto nella sezione precedente.  
  
###  <a name="_core_implementing_a_new_font_notification_interface"></a> Implementazione di una nuova interfaccia di notifica di tipo di carattere  
 Per distinguere tra le notifiche di due o più tipi di carattere, una nuova interfaccia di notifica deve essere implementata per ogni tipo di carattere usato nel controllo. Le sezioni seguenti descrivono come implementare una nuova interfaccia di notifica di tipo di carattere modificando i file di intestazione e nell'implementazione del controllo.  
  
### <a name="additions-to-the-header-file"></a>Aggiunte al File di intestazione  
 Nel file di intestazione di controllo (. H), aggiungere le righe seguenti alla dichiarazione di classe:  
  
 [!code-cpp[NVC_MFC_AxFont#19](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_19.h)]  
  
 Questo modo viene creata un'implementazione del `IPropertyNotifySink` interfaccia denominata `HeadingFontNotify`. Questa nuova interfaccia contiene un metodo denominato `OnChanged`.  
  
### <a name="additions-to-the-implementation-file"></a>Aggiunte al File di implementazione  
 Nel codice che inizializza il tipo di carattere titolo (nel costruttore del controllo), modificare &*m_xFontNotification* a &*m_xHeadingFontNotify*. Quindi aggiungere il codice seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#20](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_20.cpp)]  
  
 Il `AddRef` e `Release` metodi il `IPropertyNotifySink` interfaccia tenere traccia del numero di riferimento per l'oggetto controllo ActiveX. Quando il controllo ottiene accesso al puntatore a interfaccia, il controllo chiama `AddRef` per incrementare il conteggio dei riferimenti. Quando il controllo ha terminato con il puntatore, chiama `Release`, nello stesso modo in cui `GlobalFree` potrebbe essere chiamato per liberare un blocco di memoria globale. Quando il conteggio dei riferimenti per questa interfaccia va a zero, l'implementazione dell'interfaccia può essere liberato. In questo esempio, il `QueryInterface` funzione restituisce un puntatore a un `IPropertyNotifySink` interfaccia in un oggetto particolare. Questa funzione consente un controllo ActiveX per eseguire query su oggetto per determinare quali interfacce sono supportate.  
  
 Dopo avere apportate queste modifiche al progetto, ricompilare il progetto e utilizzare Test Container per testare l'interfaccia. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: Utilizzo di immagini in un controllo ActiveX](../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md)   
 [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)

