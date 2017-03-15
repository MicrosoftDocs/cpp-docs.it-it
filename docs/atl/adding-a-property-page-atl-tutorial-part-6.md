---
title: "Aggiunta di una pagina di propriet&#224; (Esercitazione di ATL, parte 6) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: df80d255-e7ea-49d9-b940-3f012e90cf9b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Aggiunta di una pagina di propriet&#224; (Esercitazione di ATL, parte 6)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà vengono implementate come oggetti COM separati, che ne consentono di condividere su richiesta.  In questo passaggio, effettuate le seguenti attività aggiungere una pagina delle proprietà al controllo:  
  
-   Creare la risorsa della pagina delle proprietà  
  
-   Aggiunta di codice per creare e gestire la pagina delle proprietà  
  
-   Aggiungendo la pagina delle proprietà del controllo  
  
## Creare la risorsa della pagina delle proprietà  
 Per aggiungere una pagina delle proprietà al controllo, utilizzare ATL aggiunge la procedura guidata classe.  
  
#### Per aggiungere una pagina delle proprietà  
  
1.  In Esplora soluzioni, fare clic con il pulsante destro del mouse sul poligono.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
3.  Nell'elenco di modelli, **Pagina delle proprietà ATL** selezionare e fare clic **Aggiungi**.  
  
4.  Quando la procedura guidata della pagina delle proprietà ATL, immettere `PolyProp` come nome **short**.  
  
5.  Fare clic **stringhe** per aprire la pagina **stringhe** e per immettere **&Polygon** come **Titolo**.  
  
     **Titolo** Della pagina delle proprietà è la stringa che verrà visualizzato nella scheda della pagina.  **Stringa del documento** È una descrizione che una finestra proprietà utilizza per inserire in una riga o una descrizione comandi di stato.  Si noti che la finestra proprietà standard attualmente non utilizza questa stringa, pertanto può lasciarlo con contenuto predefinito.  Non si **File della Guida** al momento, in modo da eliminare la voce nella casella di testo.  
  
6.  Fare clic **Fine**e l'oggetto della pagina delle proprietà verrà creato.  
  
 Di seguito vengono creati tre file:  
  
|File|Descrizione|  
|----------|-----------------|  
|PolyProp.h|Contiene la classe `CPolyProp`C\+\+, che implementa la pagina delle proprietà.|  
|PolyProp.cpp|Include il file di PolyProp.h.|  
|PolyProp.rgs|Lo script del Registro di sistema che registra l'oggetto della pagina delle proprietà.|  
  
 Le seguenti modifiche al codice vengono effettuate:  
  
-   La nuova pagina delle proprietà viene aggiunto alla voce dell'oggetto in Polygon.cpp.  
  
-   La classe `PolyProp` viene aggiunto al file di Polygon.idl.  
  
-   Il nuovo file di script PolyProp.rgs del Registro di sistema viene aggiunto alla risorsa di progetto.  
  
-   Un modello di finestra di dialogo viene aggiunta alla risorsa di progetto per la pagina delle proprietà.  
  
-   Le stringhe della proprietà specificate vengono aggiunte alla tabella di stringhe di risorsa.  
  
 Aggiungere i campi che si desidera visualizzare nella pagina delle proprietà.  
  
#### Per aggiungere campi alla pagina delle proprietà  
  
1.  In Esplora soluzioni, fare doppio clic sul file di risorse di Polygon.rc.  Verrà aperta la Visualizzazione risorse.  
  
2.  In Visualizzazione risorse, espandere il nodo della finestra di dialogo e fare doppio clic IDD\_POLYPROP.  Si noti che la finestra di dialogo è vuota a eccezione di un'etichetta che indica di inserire i controlli di seguito.  
  
3.  Selezionare tale etichetta e modificarla per leggere `lati:` modifica del testo **Barra del titolo** nella finestra **Proprietà**.  
  
4.  Ridimensionare la casella dell'etichetta in modo che appropriati la dimensione del testo.  
  
5.  Trascinare un controllo di modifica dalla casella degli strumenti a destra dell'etichetta.  
  
6.  Infine, modificare **ID** del controllo di modifica a `IDC_SIDES` utilizzando la Finestra Proprietà.  
  
 Ciò consente di eseguire il processo di creazione della risorsa della pagina delle proprietà.  
  
## Aggiunta di codice per creare e gestire la pagina delle proprietà  
 Dopo avere creato la risorsa della pagina delle proprietà, è necessario scrivere il codice di implementazione.  
  
 Innanzitutto, abilitare la classe `CPolyProp` per impostare il numero di lati dell'oggetto quando il pulsante **Applicare** premuto.  
  
#### Per modificare l'aspetto di applicare funzioni per impostare il numero di lati  
  
1.  Sostituire la funzione `Apply` in PolyProp.h con il codice seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#58](../atl/codesnippet/CPP/adding-a-property-page-atl-tutorial-part-6_1.h)]  
  
 Una pagina delle proprietà può avere più client connesso alla volta, in modo dai cicli di funzione `Apply` intorno e chiama `put_Sides` su ciascun client con il valore recuperato dalla casella di modifica.  Si utilizza la classe [CComQIPtr](../atl/reference/ccomqiptr-class.md), che esegue `QueryInterface` per ogni oggetto per ottenere l'interfaccia `IPolyCtl` dall'interfaccia **IUnknown** \(archiviata nella matrice `m_ppUnk` \).  
  
 Di codice i controlli ora che l'impostazione della proprietà `Sides` realtà eseguito.  Se non riesce, il codice visualizza una finestra di messaggio che visualizza dettagli di errore dall'interfaccia **IErrorInfo**.  In genere, un contenitore è un oggetto l'interfaccia **ISupportErrorInfo** e chiama `InterfaceSupportsErrorInfo` innanzitutto, determinare se l'oggetto supporta le informazioni di errore di selezione.  È possibile ignorare questa attività.  
  
 [CComPtr](../atl/reference/ccomptr-class.md) consente di gestire automaticamente il conteggio dei riferimenti, non occorre chiamare `Release`interfaccia.  `CComBSTR` consente a `BSTR` sviluppati, pertanto non è necessario eseguire la chiamata finale `SysFreeString`.  È anche possibile utilizzare una delle classi di conversione di stringhe, pertanto è possibile convertire `BSTR` se necessario \(perché la macro `USES_CONVERSION` è all'inizio della funzione.  
  
 È inoltre necessario impostare il flag modificato della pagina delle proprietà per indicare che il pulsante **Applicare** deve essere abilitato.  Ciò si verifica quando l'utente modifica il valore nella casella di modifica **lati**.  
  
#### Per gestire il pulsante di applicare  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse CPolyProp e fare clic **Proprietà** il menu di scelta rapida.  
  
2.  Nella Finestra Proprietà, fare clic sull'icona **Eventi**.  
  
3.  Espandere l'elenco del nodo `IDC_SIDES` di.  
  
4.  `EN_CHANGE`selezionare e scegliere dal menu a discesa a destra, scegliere **\<Add\> OnEnChangeSides**.  La dichiarazione del gestore `OnEnChangeSides` verrà aggiunto a Polyprop.h e all'implementazione del gestore a Polyprop.cpp.  
  
 A questo punto, verrà modificato il gestore.  
  
#### Per modificare il metodo di OnEnChangeSides  
  
1.  Aggiungere il codice seguente in Polyprop.cpp al metodo `OnEnChangeSides` \(che elimina qualsiasi codice che la procedura guidata inserita in\):  
  
     [!code-cpp[NVC_ATL_Windowing#59](../atl/codesnippet/CPP/adding-a-property-page-atl-tutorial-part-6_2.cpp)]  
  
 `OnEnChangeSides` verrà chiamato quando un messaggio **WM\_COMMAND** viene inviato con la notifica **EN\_CHANGE** per il controllo `IDC_SIDES`.  `OnEnChangeSides` chiama quindi `SetDirty` e passa `TRUE` per indicare la pagina delle proprietà viene modificato e il pulsante **Applicare** deve essere abilitato.  
  
## Aggiungendo la pagina delle proprietà del controllo  
 ATL aggiunge la procedura guidata classe e la procedura guidata della pagina delle proprietà ATL non aggiunge la pagina delle proprietà al controllo automaticamente, poiché è possibile che più controlli nel progetto.  Sarà necessario aggiungere una voce al mapping di proprietà del controllo.  
  
#### Per aggiungere la pagina delle proprietà  
  
1.  Aprire PolyCtl.h e aggiungere la riga seguente al mapping di proprietà:  
  
     [!code-cpp[NVC_ATL_Windowing#60](../atl/codesnippet/CPP/adding-a-property-page-atl-tutorial-part-6_3.h)]  
  
 Gli aspetti del mapping di proprietà del controllo sarà la seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#61](../atl/codesnippet/CPP/adding-a-property-page-atl-tutorial-part-6_4.h)]  
  
 È possibile aggiungere una macro `PROP_PAGE` con il CLSID della pagina delle proprietà, ma se si utilizza la macro `PROP_ENTRY` illustrata, il valore della proprietà `Sides` viene salvato quando il controllo viene salvato.  
  
 I tre parametri alla macro sono la descrizione della proprietà, il DISPID della proprietà e il CLSID della pagina delle proprietà con la proprietà.  Ciò è utile se, ad esempio, caricare il controllo in Visual Basic e impostare il numero di lati in fase di progettazione.  Poiché il numero di lati viene salvato, quando si ricarica il progetto di Visual Basic., il numero di lati verrà ripristinato.  
  
## Compilazione e test il controllo  
 Ora compilare il controllo e inserirlo in ActiveX control Test Container.  In Test Container, scegliere dal menu **Modifica**, scegliere **Oggetto classe di PolyCtl**.  La pagina delle proprietà è visualizzata, fare clic sulla scheda **Poligono**.  
  
 Il pulsante **Applicare** inizialmente è disabilitato.  Iniziare a digitare un valore nella casella **lati** e il pulsante **Applicare** risulterà attivato.  Dopo avere completato fornire il valore, fare clic sul pulsante **Applicare**.  Le modifiche del controllo e il pulsante **Applicare** è disabilitata di nuovo.  Provare a immettere un valore non valido.  Verrà visualizzata una finestra di messaggio contenente la descrizione di errore che non si imposti dalla funzione `put_Sides`.  
  
 Successivamente, si inserirà il controllo in una pagina Web.  
  
 [Per tornare al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md) &#124; [Nel passaggio 7](../atl/putting-the-control-on-a-web-page-atl-tutorial-part-7.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)