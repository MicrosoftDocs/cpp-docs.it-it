---
title: "Controlli ActiveX MFC: utilizzo dei tipi di carattere | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnFontChanged"
  - "HeadingFont"
  - "InternalFont"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di carattere, controlli ActiveX"
  - "GetFont (metodo)"
  - "HeadingFont (proprietà)"
  - "InternalFont (metodo)"
  - "IPropertyNotifySink (classe)"
  - "MFC (controlli ActiveX), tipi di carattere"
  - "notifiche, tipi di carattere per controlli ActiveX MFC"
  - "OnDraw (metodo), controlli ActiveX MFC"
  - "OnFontChanged (metodo)"
  - "SelectStockFont (metodo)"
  - "SetFont (metodo)"
  - "Stock Font (proprietà)"
ms.assetid: 7c51d602-3f5a-481d-84d1-a5d8a3a71761
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: utilizzo dei tipi di carattere
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se le visualizzazioni del controllo ActiveX testo to, è possibile consentire all'utente di modificare l'aspetto del testo modifica una proprietà del carattere.  Le proprietà predefinite vengono implementate come oggetti font e possono essere di due tipi: azione o personalizzato.  Le proprietà Font predefinite sono proprietà del carattere preimplemented che è possibile aggiungere tramite Aggiunta guidata proprietà.  Le proprietà Font personalizzate non preimplemented e lo sviluppatore del controllo determina il comportamento e l'utilizzo della proprietà.  
  
 Questo articolo vengono trattati i seguenti argomenti:  
  
-   [Utilizzando la proprietà Font predefinita](#_core_using_the_stock_font_property)  
  
-   [Utilizzando le proprietà Font personalizzate del controllo](#_core_implementing_a_custom_font_property)  
  
##  <a name="_core_using_the_stock_font_property"></a> Utilizzando la proprietà Font predefinita  
 Le proprietà Font predefinite preimplemented dalla classe [COleControl](../mfc/reference/colecontrol-class.md).  Inoltre, una pagina standard della proprietà Font è anche disponibile, consentendo l'utente ai vari attributi di modifica dell'oggetto del tipo di carattere, quali il nome, la dimensione e stile.  
  
 Accedere all'oggetto del tipo di carattere con [GetFont](../Topic/COleControl::GetFont.md), [SetFont](../Topic/COleControl::SetFont.md) e le funzioni di [InternalGetFont](../Topic/COleControl::InternalGetFont.md) di `COleControl`.  L'utente del controllo utilizzerà l'oggetto di carattere tramite `GetFont` e `SetFont` funziona in modo analogo come qualsiasi altra ottiene o imposta la proprietà.  Quando l'accesso all'oggetto del tipo di carattere è richiesto dall'interno di un controllo, utilizzare la funzione di `InternalGetFont`.  
  
 Come illustrato in [Controlli ActiveX MFC: Proprietà](../mfc/mfc-activex-controls-properties.md), aggiungere le proprietà predefinite andarci piano a [Aggiunta guidata proprietà](../ide/names-add-property-wizard.md).  Si sceglie la proprietà Font e l'aggiunta guidata proprietà imposta automaticamente la voce predefinita del carattere nella mappa di invio del controllo.  
  
#### Per aggiungere la proprietà Font predefinita mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà avviata l'aggiunta guidata proprietà.  
  
5.  Nella casella di **Nome proprietà**, fare clic **Carattere**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiungere la seguente riga alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#1](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_1.cpp)]  
  
 Inoltre, l'aggiunta guidata proprietà aggiungere la seguente riga al file del controllo .IDL:  
  
 [!code-cpp[NVC_MFC_AxFont#2](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_2.idl)]  
  
 La proprietà predefinita della barra del titolo è un esempio di proprietà Text che è possibile disegnare utilizzando le informazioni predefinite delle proprietà dei tipi.  Aggiungendo la proprietà predefinita della barra del titolo al controllo utilizza i passaggi simili a quelli utilizzati per la proprietà Font predefinita.  
  
#### Per aggiungere la proprietà predefinita della barra del titolo mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà avviata l'aggiunta guidata proprietà.  
  
5.  Nella casella di **Nome proprietà**, fare clic **Titolo**.  
  
6.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà aggiungere la seguente riga alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo:  
  
 [!code-cpp[NVC_MFC_AxFont#3](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_3.cpp)]  
  
##  <a name="_core_modifying_the_ondraw_function"></a> Modificare la funzione di OnDraw  
 L'implementazione predefinita di `OnDraw` utilizza il tipo di sistema di Windows per tutto il testo visualizzato nel controllo.  Ciò significa che è necessario modificare il codice di `OnDraw` selezionando l'oggetto di carattere nel contesto di dispositivo.  A tale scopo, chiamare [COleControl::SelectStockFont](../Topic/COleControl::SelectStockFont.md) e passare il contesto di dispositivo del controllo, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFC_AxFont#4](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_4.cpp)]  
  
 Dopo che la funzione di `OnDraw` è cambiata per utilizzare l'oggetto font, tutto il testo nel controllo viene visualizzato con le caratteristiche della proprietà Font di azione del controllo.  
  
##  <a name="_core_using_custom_font_properties_in_your_control"></a> Utilizzando le proprietà Font personalizzate del controllo  
 Oltre alla proprietà Font predefinita, il controllo ActiveX può presentare proprietà Font personalizzate.  Per aggiungere una proprietà del carattere personalizzata è necessario:  
  
-   Utilizzare l'aggiunta guidata proprietà per implementare la proprietà Font personalizzata.  
  
-   [Notifiche dei tipi di elaborazione](#_core_processing_font_notifications).  
  
-   [Implementare una nuova interfaccia di notifica di carattere](#_core_implementing_a_new_font_notification_interface).  
  
###  <a name="_core_implementing_a_custom_font_property"></a> Implementare una proprietà Font personalizzata  
 Per implementare una proprietà Font personalizzata, utilizzare l'aggiunta guidata proprietà per aggiungere la proprietà e quindi apportare alcune modifiche al codice.  Nelle sezioni seguenti viene descritto come aggiungere la proprietà personalizzata di `HeadingFont` al controllo di esempio.  
  
##### Per aggiungere la proprietà Font personalizzata mediante l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
     Verrà avviata l'aggiunta guidata proprietà.  
  
5.  Nella casella di **Nome proprietà**, digitare un nome per la proprietà.  Per questo esempio, utilizzare **HeadingFont**.  
  
6.  Per **Implementation Type**, fare clic **Metodi Get\/Set**.  
  
7.  Nella casella di **Tipo proprietà**, **IDispatch\*** selezionato per il tipo della proprietà.  
  
8.  Scegliere **Fine**.  
  
 L'aggiunta guidata proprietà crea il codice per aggiungere una proprietà personalizzata di `HeadingFont` alla classe di `CSampleCtrl` e nel file di SAMPLE.IDL.  Poiché `HeadingFont` è un tipo di proprietà set\/get, l'aggiunta guidata proprietà viene modificata la mappa di invio della classe di `CSampleCtrl` per includere una macro voce di `DISP_PROPERTY_EX_ID`[DISP\_PROPERTY\_EX](../Topic/DISP_PROPERTY_EX.md) :  
  
 [!code-cpp[NVC_MFC_AxFont#5](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_5.cpp)]  
  
 La macro di `DISP_PROPERTY_EX` associa il nome della proprietà di `HeadingFont` con la relativa classe corrispondente di `CSampleCtrl` ottiene e imposta i metodi, `GetHeadingFont` e `SetHeadingFont`.  Il tipo del valore della proprietà viene specificato; in questo caso, **VT\_FONT**.  
  
 L'aggiunta guidata proprietà aggiunge una dichiarazione nel file di intestazione del controllo \(. H\) per `GetHeadingFont` e `SetHeadingFont` viene eseguito e aggiunge i propri modelli di funzione nel file di implementazione del controllo \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxFont#6](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_6.cpp)]  
  
 Infine, l'aggiunta guidata proprietà modificare il file del controllo .IDL aggiungendo una voce per la proprietà di `HeadingFont` :  
  
 [!code-cpp[NVC_MFC_AxFont#7](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_7.idl)]  
  
### Modifiche al codice del controllo  
 Dopo aver aggiunto la proprietà di `HeadingFont` al controllo, è necessario apportare modifiche all'intestazione e ai file di implementazione del controllo completamente per supportare la nuova proprietà.  
  
 Nel file di intestazione del controllo \(. H\), aggiungere la seguente dichiarazione di una variabile membro protetto:  
  
 [!code-cpp[NVC_MFC_AxFont#8](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_8.h)]  
  
 Nel file di implementazione del controllo \(.CPP\), effettuare le operazioni seguenti:  
  
-   Inizializzare `m_fontHeading` nel costruttore del controllo.  
  
     [!code-cpp[NVC_MFC_AxFont#9](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_9.cpp)]  
  
-   Dichiarare una struttura statica di **FONTDESC** che contiene gli attributi predefiniti di carattere.  
  
     [!code-cpp[NVC_MFC_AxFont#10](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_10.cpp)]  
  
-   Nella funzione membro di `DoPropExchange` del controllo, aggiungere una chiamata alla funzione di `PX_Font`.  Ciò fornisce l'inizializzazione e la persistenza per la proprietà Font personalizzata.  
  
     [!code-cpp[NVC_MFC_AxFont#11](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_11.cpp)]  
  
-   Fine che implementa la funzione membro di `GetHeadingFont` del controllo.  
  
     [!code-cpp[NVC_MFC_AxFont#12](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_12.cpp)]  
  
-   Fine che implementa la funzione membro di `SetHeadingFont` del controllo.  
  
     [!code-cpp[NVC_MFC_AxFont#13](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_13.cpp)]  
  
-   Modificare la funzione membro di `OnDraw` dei controlli per definire una variabile per utilizzare il tipo di carattere selezionata in precedenza.  
  
     [!code-cpp[NVC_MFC_AxFont#14](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_14.cpp)]  
  
-   Modificare la funzione membro di `OnDraw` del controllo per selezionare il tipo di carattere personalizzato nel contesto di dispositivo aggiungendo la seguente riga nel tipo deve essere utilizzata.  
  
     [!code-cpp[NVC_MFC_AxFont#15](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_15.cpp)]  
  
-   Modificare la funzione membro di `OnDraw` del controllo per selezionare il tipo di carattere precedente nel contesto di dispositivo aggiungendo la seguente riga dopo il tipo è stata utilizzata.  
  
     [!code-cpp[NVC_MFC_AxFont#16](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_16.cpp)]  
  
 Dopo la proprietà Font personalizzata è stata implementata, la pagina standard delle proprietà dei tipi deve essere implementata, consentendo agli utenti del controllo del tipo corrente del controllo.  Per aggiungere la pagina delle proprietà ID per la pagina standard le proprietà predefinite, inserire la seguente riga dopo la macro di `BEGIN_PROPPAGEIDS` :  
  
 [!code-cpp[NVC_MFC_AxFont#17](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_17.cpp)]  
  
 È inoltre necessario incrementare il parametro count della macro di `BEGIN_PROPPAGEIDS` da una.  La riga seguente viene illustrata questa:  
  
 [!code-cpp[NVC_MFC_AxFont#18](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_18.cpp)]  
  
 Dopo che tali modifiche apportate, ricompilare l'intero progetto includere funzionalità aggiuntive.  
  
###  <a name="_core_processing_font_notifications"></a> Notifiche dei tipi di elaborazione  
 Nella maggior parte dei casi le esigenze di controllo di sapere quando le caratteristiche dell'oggetto del tipo di carattere sono state modificate.  Ogni oggetto font è in grado di invio di notifiche quando viene modificata una chiamata a una funzione membro di interfaccia di **IFontNotification**, implementato da `COleControl`.  
  
 Se il controllo utilizza la proprietà Font predefinita, le notifiche vengono gestite dalla funzione membro di `OnFontChanged` di `COleControl`.  Quando si aggiunge le proprietà del carattere personalizzate, è possibile farli utilizzare la stessa implementazione.  Nell'esempio nella sezione precedente, questo è stato compiuto passando &**m\_xFontNotification** quando si inizializza la variabile membro di **m\_fontHeading**.  
  
 ![Implementazione di più interfacce dell'oggetto tipo di carattere](../mfc/media/vc373q1.png "vc373Q1")  
Implementazione di interfacce di oggetti con più tipi di carattere  
  
 Le linee continue nella figura precedente viene mostrato che entrambi gli oggetti font utilizzano la stessa implementazione di **IFontNotification**.  Ciò potrebbe causare problemi se si desidera distinguere che il tipo è stato modificato.  
  
 Un modo per distinguere tra le notifiche dell'oggetto del tipo di controllo è possibile creare un'implementazione separata dell'interfaccia di **IFontNotification** per ogni oggetto di carattere nel controllo.  Questa tecnica consente di ottimizzare il codice di disegno aggiornamento solo la stringa, o le stringhe, utilizzando il tipo di recente modificata.  Nelle sezioni seguenti vengono descritti i passaggi necessari per implementare interfacce di notifica separate per una seconda proprietà Font.  La seconda proprietà del carattere costituisca la proprietà di `HeadingFont` che è stata aggiunta la sezione precedente.  
  
###  <a name="_core_implementing_a_new_font_notification_interface"></a> Implementare una nuova interfaccia di notifica di carattere  
 Per distinguere tra le notifiche due o più tipi di carattere, una nuova interfaccia di notifica deve essere implementata per ogni tipo di carattere utilizzato nel controllo.  Nelle sezioni seguenti viene descritto come implementare una nuova interfaccia di notifica di carattere modificare l'intestazione e il file di implementazione del controllo.  
  
### Aggiunte al file di intestazione  
 Nel file di intestazione del controllo \(. H\), aggiungere le righe seguenti alla dichiarazione di classe:  
  
 [!code-cpp[NVC_MFC_AxFont#19](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_19.h)]  
  
 Ciò crea un'implementazione dell'interfaccia di `IPropertyNotifySink` chiamata `HeadingFontNotify`.  Questa nuova interfaccia contiene un metodo denominato `OnChanged`.  
  
### Aggiunta del file di implementazione  
 Nel codice che inizializza il tipo di intestazione \(nel costruttore del controllo\), `&m_xFontNotification` di modifica a `&m_xHeadingFontNotify`.  Aggiungere il seguente codice:  
  
 [!code-cpp[NVC_MFC_AxFont#20](../mfc/codesnippet/CPP/mfc-activex-controls-using-fonts_20.cpp)]  
  
 I metodi di `Release` e di `AddRef` nell'interfaccia di `IPropertyNotifySink` tengono traccia del conteggio dei riferimenti per l'oggetto del controllo ActiveX.  Quando il controllo ottenga l'accesso al puntatore a interfaccia, viene chiamato `AddRef` per incrementare il conteggio dei riferimenti.  Quando il controllo viene completato con il puntatore, chiama `Release`, nello stesso modo in cui **GlobalFree** può essere chiamato per liberare un blocco di memoria globale.  Quando il conteggio dei riferimenti per l'interfaccia vai a zero, l'implementazione di interfaccia può essere liberata.  In questo esempio, la funzione di `QueryInterface` restituisce un puntatore a un'interfaccia di `IPropertyNotifySink` su un oggetto specifico.  Questa funzione consente a un controllo ActiveX eseguire una query su un oggetto per determinare le interfacce supporta.  
  
 Dopo che tali modifiche apportate al progetto, ricompilare il progetto e utilizzare il contenitore di test per testare l'interfaccia.  Per ulteriori informazioni sulla modalità di accesso a Test Container, vedere [Verifica di proprietà ed eventi tramite Test Container](../mfc/testing-properties-and-events-with-test-container.md).  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX](../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md)   
 [Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)