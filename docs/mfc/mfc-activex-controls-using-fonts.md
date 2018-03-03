---
title: 'Controlli ActiveX MFC: Utilizzo di tipi di carattere | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a788285aed8e8b7483e13c954ee193aca69d1100
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-using-fonts"></a>Controlli ActiveX MFC: utilizzo dei tipi di carattere
Se il controllo ActiveX viene visualizzato il testo, è possibile consentire all'utente di controllo modificare l'aspetto del testo modificando una proprietà di tipo di carattere. Le proprietà del carattere vengono implementate come oggetti di tipo di carattere e può essere uno dei due tipi: predefinite o personalizzate. Le proprietà Font sono preimplementate che è possibile aggiungere tramite l'aggiunta guidata proprietà. Proprietà Font personalizzate non sono preimplementate e lo sviluppatore del controllo determina il comportamento e l'utilizzo della proprietà.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Utilizzo di Stock Font (proprietà)](#_core_using_the_stock_font_property)  
  
-   [Utilizzando le proprietà di tipo di carattere personalizzato nel controllo](#_core_implementing_a_custom_font_property)  
  
##  <a name="_core_using_the_stock_font_property"></a>Utilizzando la proprietà del carattere predefinite  
 Le proprietà Font sono preimplementate dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Inoltre, è anche disponibile, consentendo all'utente di modificare diversi attributi dell'oggetto tipo di carattere, ad esempio nome, dimensioni e stile di una pagina delle proprietà del carattere standard.  
  
 Accedere all'oggetto di tipo di carattere tramite il [GetFont](../mfc/reference/colecontrol-class.md#getfont), [SetFont](../mfc/reference/colecontrol-class.md#setfont), e [InternalGetFont](../mfc/reference/colecontrol-class.md#internalgetfont) funzioni di `COleControl`. L'utente di controllo avrà accesso all'oggetto font tramite il `GetFont` e `SetFont` funzioni esattamente come qualsiasi altra proprietà Get/Set. Quando è necessario all'interno di un controllo di accesso per l'oggetto di tipo di carattere, utilizzare il `InternalGetFont` (funzione).  
  
 Come descritto in [controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md), aggiunta di proprietà predefinite è facile con il [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md). Si sceglie la proprietà del carattere e l'aggiunta guidata proprietà inserisce automaticamente la voce predefinita Font nella mappa di invio del controllo.  
  
#### <a name="to-add-the-stock-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà predefinita con l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** fare clic su **carattere**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe di controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#1](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_1.cpp)]  
  
 Inoltre, l'aggiunta guidata proprietà aggiunge la riga seguente al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxFont#2](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_2.idl)]  
  
 La proprietà predefinita Caption è un esempio di una proprietà di testo che può essere disegnata usando le informazioni sulle proprietà di tipo di carattere predefiniti. Aggiunta di proprietà Caption predefinita per il controllo utilizza passaggi analoghi a quelli utilizzati per la proprietà Font predefinita.  
  
#### <a name="to-add-the-stock-caption-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà di didascalia predefinita mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** fare clic su **didascalia**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiunge la riga seguente alla mappa di invio del controllo, che si trova nel file di implementazione della classe di controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#3](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_3.cpp)]  
  
##  <a name="_core_modifying_the_ondraw_function"></a>Modifica della funzione OnDraw  
 L'implementazione predefinita di `OnDraw` utilizza il carattere di sistema di Windows per tutto il testo visualizzato nel controllo. Ciò significa che è necessario modificare il `OnDraw` codice selezionando l'oggetto di tipo di carattere nel contesto di dispositivo. A tale scopo, chiamare [COleControl:: SelectStockFont](../mfc/reference/colecontrol-class.md#selectstockfont) e passare il contesto di dispositivo del controllo, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#4](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_4.cpp)]  
  
 Dopo il `OnDraw` funzione è stata modificata per utilizzare l'oggetto di tipo di carattere, viene visualizzato il testo all'interno del controllo con caratteristiche dalla proprietà Font predefinita del controllo.  
  
##  <a name="_core_using_custom_font_properties_in_your_control"></a>Utilizzando le proprietà di tipo di carattere personalizzato nel controllo  
 Oltre alle proprietà Font predefinita, il controllo ActiveX può disporre di proprietà di tipo di carattere personalizzata. Per aggiungere una proprietà di tipo di carattere personalizzato, è necessario:  
  
-   Utilizzare l'aggiunta guidata proprietà per implementare la proprietà Font personalizzata.  
  
-   [Elaborazione delle notifiche di tipo di carattere](#_core_processing_font_notifications).  
  
-   [Implementazione di una nuova interfaccia di notifica di tipo di carattere](#_core_implementing_a_new_font_notification_interface).  
  
###  <a name="_core_implementing_a_custom_font_property"></a>Implementazione di una proprietà di tipo di carattere personalizzato  
 Per implementare una proprietà di tipo di carattere personalizzata, utilizzare l'aggiunta guidata proprietà aggiungere la proprietà e quindi apportare alcune modifiche al codice. Nelle sezioni seguenti viene descritto come aggiungere personalizzata `HeadingFont` proprietà per il controllo di esempio.  
  
##### <a name="to-add-the-custom-font-property-using-the-add-property-wizard"></a>Per aggiungere la proprietà Font personalizzata mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
     Verrà visualizzata l'aggiunta guidata proprietà.  
  
5.  Nel **nome della proprietà** , digitare un nome per la proprietà. Per questo esempio, utilizzare **HeadingFont**.  
  
6.  Per **Tipo di implementazione**, fare clic su **Metodi Get/Set**.  
  
7.  Nel **tipo di proprietà** , quindi selezionare **IDispatch\***  per il tipo della proprietà.  
  
8.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà crea il codice per aggiungere il `HeadingFont` proprietà personalizzata per la `CSampleCtrl` classe e il codice di esempio. File IDL. Poiché `HeadingFont` è un tipo di proprietà Get/Set, l'aggiunta guidata proprietà modifica il `CSampleCtrl` mappa di invio della classe per includere un `DISP_PROPERTY_EX_ID` [DISP_PROPERTY_EX](../mfc/reference/dispatch-maps.md#disp_property_ex) immissione macro:  
  
 [!code-cpp[NVC_MFC_AxFont#5](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_5.cpp)]  
  
 Il `DISP_PROPERTY_EX` macro associa il `HeadingFont` nome della proprietà con il corrispondente `CSampleCtrl` classe metodi Get e Set, `GetHeadingFont` e `SetHeadingFont`. Il tipo del valore della proprietà viene anche specificato; In questo caso, **VT_FONT**.  
  
 L'aggiunta guidata proprietà aggiunge anche una dichiarazione nel file di intestazione di controllo (. H) per il `GetHeadingFont` e `SetHeadingFont` funzioni e aggiunge i propri modelli di funzione nel file di implementazione del controllo (. CPP):  
  
 [!code-cpp[NVC_MFC_AxFont#6](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_6.cpp)]  
  
 Infine, l'aggiunta guidata proprietà modifica il controllo. Il file IDL aggiungendo una voce per il `HeadingFont` proprietà:  
  
 [!code-cpp[NVC_MFC_AxFont#7](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_7.idl)]  
  
### <a name="modifications-to-the-control-code"></a>Modifiche al codice del controllo  
 Dopo aver aggiunto la `HeadingFont` proprietà al controllo, è necessario apportare alcune modifiche ai file di intestazione e di implementazione di controllo per supportare completamente la nuova proprietà.  
  
 Nel file di intestazione di controllo (. H), aggiungere la seguente dichiarazione di una variabile membro protetto:  
  
 [!code-cpp[NVC_MFC_AxFont#8](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_8.h)]  
  
 Nel file di implementazione del controllo (. CPP), eseguire le operazioni seguenti:  
  
-   Inizializzare `m_fontHeading` nel costruttore del controllo.  
  
     [!code-cpp[NVC_MFC_AxFont#9](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_9.cpp)]  
  
-   Dichiarare un valore statico **FONTDESC** struttura che contiene gli attributi predefiniti del tipo di carattere.  
  
     [!code-cpp[NVC_MFC_AxFont#10](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_10.cpp)]  
  
-   Nel controllo `DoPropExchange` membro funzione, aggiungere una chiamata al `PX_Font` (funzione). Consente l'inizializzazione e la persistenza per la proprietà del tipo di carattere personalizzata.  
  
     [!code-cpp[NVC_MFC_AxFont#11](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_11.cpp)]  
  
-   Completare l'implementazione del controllo `GetHeadingFont` funzione membro.  
  
     [!code-cpp[NVC_MFC_AxFont#12](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_12.cpp)]  
  
-   Completare l'implementazione del controllo `SetHeadingFont` funzione membro.  
  
     [!code-cpp[NVC_MFC_AxFont#13](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_13.cpp)]  
  
-   Modificare il controllo `OnDraw` funzione membro per definire una variabile per contenere il tipo di carattere selezionato in precedenza.  
  
     [!code-cpp[NVC_MFC_AxFont#14](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_14.cpp)]  
  
-   Modificare il controllo `OnDraw` funzione membro per selezionare il tipo di carattere personalizzato nel contesto di dispositivo aggiungendo la riga seguente ogni volta che viene utilizzato il tipo di carattere.  
  
     [!code-cpp[NVC_MFC_AxFont#15](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_15.cpp)]  
  
-   Modificare il controllo `OnDraw` funzione membro per selezionare il tipo di carattere precedente nel contesto di dispositivo, aggiungendo la riga seguente dopo aver utilizzato il tipo di carattere.  
  
     [!code-cpp[NVC_MFC_AxFont#16](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_16.cpp)]  
  
 Dopo che è stata implementata la proprietà Font personalizzata, la pagina delle proprietà del carattere standard deve essere implementata, consentendo agli utenti di controllo di modifica tipo di carattere corrente del controllo. Per aggiungere l'ID di pagina di proprietà per la pagina delle proprietà del carattere standard, inserire la riga seguente dopo il `BEGIN_PROPPAGEIDS` macro:  
  
 [!code-cpp[NVC_MFC_AxFont#17](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_17.cpp)]  
  
 È anche necessario incrementare di uno il parametro del conteggio di una macro `BEGIN_PROPPAGEIDS` . Questa condizione è illustrata dalla riga seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#18](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_18.cpp)]  
  
 Dopo avere apportate queste modifiche, ricompilare l'intero progetto per incorporare la funzionalità aggiuntiva.  
  
###  <a name="_core_processing_font_notifications"></a>Elaborazione delle notifiche di tipo di carattere  
 Nella maggior parte dei casi il controllo deve sapere quando sono state modificate le caratteristiche dell'oggetto tipo di carattere. È in grado di fornire notifiche in caso di modifiche chiamando una funzione membro di ogni oggetto di tipo di carattere di **IFontNotification** interfaccia implementata da `COleControl`.  
  
 Se il controllo utilizza la proprietà predefinita, le notifiche sono gestite dal `OnFontChanged` funzione membro di `COleControl`. Quando si aggiunge una proprietà di tipo di carattere personalizzato, è possibile impostare loro la stessa implementazione. Nell'esempio nella sezione precedente, questa operazione è stata eseguita passando &**m_xFontNotification** durante l'inizializzazione di **m_fontHeading** variabile membro.  
  
 ![Implementare più interfacce dell'oggetto di tipo di carattere](../mfc/media/vc373q1.gif "vc373q1")  
Implementazione di interfacce di oggetti con più tipi di carattere  
  
 Le linee continue nella figura precedente mostrano che utilizza la stessa implementazione di entrambi gli oggetti di tipo di carattere **IFontNotification**. Questo può causare problemi se si desidera individuare quale tipo di carattere.  
  
 Un modo per distinguere tra le notifiche degli oggetti di tipo di carattere del controllo consiste nel creare un'implementazione separata del **IFontNotification** interfaccia per ogni oggetto di tipo di carattere nel controllo. Questa tecnica consente di ottimizzare il codice di disegno aggiornando solo la stringa o le stringhe che utilizzano il tipo di carattere modificata di recente. Nelle sezioni seguenti illustrano i passaggi necessari per implementare le interfacce di notifica separata per una seconda proprietà Font. La seconda proprietà font si presuppone che sia il `HeadingFont` proprietà che è stato aggiunto nella sezione precedente.  
  
###  <a name="_core_implementing_a_new_font_notification_interface"></a>Implementazione di una nuova interfaccia di notifica di tipo di carattere  
 Per distinguere tra le notifiche di due o più tipi di carattere, una nuova interfaccia di notifica deve essere implementata per ogni tipo di carattere utilizzato nel controllo. Le sezioni seguenti descrivono come implementare una nuova interfaccia di notifica di tipo di carattere modificando i file di intestazione e di implementazione del controllo.  
  
### <a name="additions-to-the-header-file"></a>Aggiunte al File di intestazione  
 Nel file di intestazione di controllo (. H), aggiungere le righe seguenti alla dichiarazione di classe:  
  
 [!code-cpp[NVC_MFC_AxFont#19](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_19.h)]  
  
 Crea un'implementazione del `IPropertyNotifySink` interfaccia denominata `HeadingFontNotify`. Questa nuova interfaccia contiene un metodo denominato `OnChanged`.  
  
### <a name="additions-to-the-implementation-file"></a>Aggiunte al File di implementazione  
 Nel codice che inizializza il tipo di carattere titolo (nel costruttore del controllo), modificare `&m_xFontNotification` a `&m_xHeadingFontNotify`. Quindi aggiungere il codice seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#20](../mfc/codesnippet/cpp/mfc-activex-controls-using-fonts_20.cpp)]  
  
 Il `AddRef` e `Release` metodi di `IPropertyNotifySink` interfaccia tenere traccia del conteggio dei riferimenti per l'oggetto controllo ActiveX. Quando il controllo ottiene accesso al puntatore a interfaccia, il controllo chiama `AddRef` per incrementare il conteggio dei riferimenti. Quando il controllo è terminato con il puntatore, chiama `Release`, nello stesso modo in cui **GlobalFree** potrebbe essere chiamato per liberare un blocco di memoria globale. Quando il conteggio dei riferimenti per questa interfaccia va a zero, l'implementazione dell'interfaccia da liberare. In questo esempio, il `QueryInterface` funzione restituisce un puntatore a un `IPropertyNotifySink` interfaccia in un oggetto particolare. Questa funzione consente un controllo ActiveX query in un oggetto per determinare quali interfacce sono supportate.  
  
 Dopo avere apportate queste modifiche al progetto, ricompilare il progetto e utilizzare Test Container per testare l'interfaccia. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: Utilizzo di immagini in un controllo ActiveX](../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md)   
 [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)

