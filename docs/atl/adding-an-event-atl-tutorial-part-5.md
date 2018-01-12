---
title: Aggiunta di un evento (ATL Tutorial, parte 5) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c42befe57bdc7a01da31bd6c4e010458e1d3ba7e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-an-event-atl-tutorial-part-5"></a>Aggiunta di un evento (Esercitazione di ATL, parte 5)
In questo passaggio si aggiungerà un `ClickIn` e `ClickOut` evento al controllo ATL. Verrà generato il `ClickIn` evento se l'utente fa clic all'interno di poligono e spegnimento incendi `ClickOut` se l'utente fa clic all'esterno. Come indicato di seguito sono riportate le attività per aggiungere un evento:  
  
-   Aggiunta di `ClickIn` e `ClickOut` metodi  
  
-   Generazione della libreria dei tipi  
  
-   Implementa le interfacce dei punti di connessione  
  
## <a name="adding-the-clickin-and-clickout-methods"></a>Aggiunta di metodi ClickIn e ClickOut  
 Quando il controllo ATL creato nel passaggio 2, è selezionato il **punti di connessione** casella di controllo. Si è creato il `_IPolyCtlEvents` interfaccia nel file Polygon. Si noti che il nome dell'interfaccia inizia con un carattere di sottolineatura. Questa è una convenzione per indicare che l'interfaccia è un'interfaccia interna. Di conseguenza, i programmi che consentono di visualizzare gli oggetti COM è possono scegliere per non visualizzare l'interfaccia per l'utente. Si noti inoltre che la selezione di **punti di connessione** aggiunta la seguente riga nel file Polygon per indicare che `_IPolyCtlEvents` è l'interfaccia di origine predefinito:  
  
 `[default, source] dispinterface _IPolyCtlEvents;`  
  
 L'attributo di origine indica che il controllo è l'origine delle notifiche, in modo chiamerà questa interfaccia per il contenitore.  
  
 A questo punto aggiungere il `ClickIn` e `ClickOut` metodi per il `_IPolyCtlEvents` interfaccia.  
  
#### <a name="to-add-the-clickin-and-clickout-methods"></a>Per aggiungere i metodi ClickIn e ClickOut  
  
1.  In visualizzazione classi, espandere poligono e PolygonLib per visualizzare IPolyCtlEvents.  
  
2.  Fare doppio clic su IPolyCtlEvents. Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi metodo**.  
  
3.  Selezionare un **tipo restituito** di `void`.  
  
4.  Immettere `ClickIn` nel **nome del metodo** casella.  
  
5.  In **gli attributi di parametro**, selezionare il **in** casella.  
  
6.  Selezionare un **tipo di parametro** di `LONG`.  
  
7.  Tipo `x` come il **nome del parametro**, fare clic su **Aggiungi**.  
  
8.  Ripetere i passaggi da 5 a 7, questa volta per un **nome del parametro** di `y`.  
  
9. Scegliere **Avanti**.  
  
10. Tipo `method ClickIn` come il **helpstring**.  
  
11. Scegliere **Fine**.  
  
12. Ripetere i passaggi precedenti per definire un `ClickOut` metodo con lo stesso `LONG` parametri `x` e `y`, lo stesso **gli attributi di parametro** e lo stesso `void` tipo restituito.  
  
 Controllare il file Polygon per vedere che è stato aggiunto il codice per il `_IPolyCtlEvents` interfaccia dispatch.  
  
 Il `_IPolyCtlEvents` dispinterface nel file Polygon dovrebbe essere simile al seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#56](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_1.idl)]  
  
 Il `ClickIn` e `ClickOut` metodi accettano x e y coordinate del punto selezionato come parametri.  
  
## <a name="generating-the-type-library"></a>Generazione della libreria dei tipi  
 Generare la libreria dei tipi a questo punto, poiché la creazione guidata punto di connessione verrà utilizzato per ottenere le informazioni necessarie per creare un'interfaccia di punto di connessione e un'interfaccia contenitore del punto di connessione per il controllo.  
  
#### <a name="to-generate-the-type-library"></a>Per generare la libreria dei tipi  
  
1.  Ricompilare il progetto.  
  
     oppure  
  
2.  Il file Polygon in Esplora soluzioni e fare clic su **compilare** nel menu di scelta rapida.  
  
 Verrà creato il file Polygon, ovvero la libreria dei tipi. Il file Polygon non è visibile in Esplora soluzioni, perché non è un file binario e può essere visualizzata o modificata direttamente.  
  
## <a name="implementing-the-connection-point-interfaces"></a>Implementa le interfacce dei punti di connessione  
 Implementare un'interfaccia di punto di connessione e un'interfaccia contenitore del punto di connessione per il controllo. In COM, gli eventi vengono implementati tramite il meccanismo di punti di connessione. Per ricevere eventi da un oggetto COM, un contenitore stabilisce una connessione consultiva al punto di connessione che implementa l'oggetto COM. Poiché un oggetto COM può avere più punti di connessione, l'oggetto COM implementa inoltre un'interfaccia contenitore del punto di connessione. Tramite questa interfaccia, il contenitore di determinare quali punti di connessione sono supportati.  
  
 L'interfaccia che implementa un punto di connessione è detta `IConnectionPoint`, e l'interfaccia che implementa un contenitore del punto di connessione è detta `IConnectionPointContainer`.  
  
 Per facilitare l'implementazione `IConnectionPoint`, si utilizzerà l'implementazione guidata punto di connessione. Questa procedura guidata genera il `IConnectionPoint` interfaccia leggendo la libreria dei tipi e l'implementazione di una funzione per ogni evento che può essere attivato.  
  
#### <a name="to-use-the-implement-connection-point-wizard"></a>Per utilizzare l'implementazione guidata punto di connessione  
  
1.  In visualizzazione classi, fare clic sulla classe di implementazione del controllo `CPolyCtl`.  
  
2.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi punto di connessione**.  
  
3.  Selezionare `_IPolyCtlEvents` dal **interfacce di origine** elenco e fare doppio clic per aggiungere il **implementare i punti di connessione** colonna. Scegliere **Fine**. Una classe proxy per il punto di connessione verrà generata in questo caso, `CProxy_IPolyCtlEvents`.  
  
 Se si esamina il file generato IPolyCtlEvents_CP. h in Esplora soluzioni, si noterà che dispone di una classe denominata `CProxy_IPolyCtlEvents` che deriva da `IConnectionPointImpl`. IPolyCtlEvents_CP. h definisce inoltre i due metodi `Fire_ClickIn` e `Fire_ClickOut`, che accettano due parametri di coordinate. Questi metodi vengono chiamati quando si desidera generare un evento dal controllo.  
  
 Verrà inoltre aggiunto `CProxy_PolyEvents` e `IConnectionPointContainerImpl` all'elenco di ereditarietà più del controllo. La procedura guidata esposta anche `IConnectionPointContainer` automaticamente mediante l'aggiunta di voci appropriate per la mappa COM.  
  
 Non si desidera implementare il codice per supportare gli eventi. A questo punto, aggiungere il codice per generare gli eventi al momento appropriato. Tenere presente che si desidera generare un `ClickIn` o `ClickOut` evento quando l'utente sceglie il pulsante sinistro del mouse sul controllo. Per verificare se l'utente fa clic sul pulsante, aggiungere un gestore per il `WM_LBUTTONDOWN` messaggio.  
  
#### <a name="to-add-a-handler-for-the-wmlbuttondown-message"></a>Per aggiungere un gestore per il messaggio WM_LBUTTONDOWN  
  
1.  In visualizzazione classi, fare doppio clic su classe CPolyCtl e fare clic su **proprietà** nel menu di scelta rapida.  
  
2.  Nel **proprietà** finestra, fare clic su di **messaggi** icona e quindi fare clic su `WM_LBUTTONDOWN` dall'elenco a sinistra.  
  
3.  Dall'elenco di riepilogo a discesa che viene visualizzato, fare clic su  **\<Aggiungi > OnLButtonDown**. Il `OnLButtonDown` dichiarazione del gestore verrà aggiunto al PolyCtl e l'implementazione del gestore verrà aggiunto al PolyCtl.  
  
 Successivamente, modificare il gestore.  
  
#### <a name="to-modify-the-onlbuttondown-method"></a>Per modificare il OnLButtonDown (metodo)  
  
1.  Modificare il codice che comprende il `OnLButtonDown` metodo PolyCtl (eliminazione di qualsiasi codice inserito dalla procedura guidata) in modo che risulti simile al seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_2.cpp)]  
  
 In questo modo codice utilizzati i punti calcolati nel `OnDraw` funzione per creare un'area che rileva un clic del mouse dell'utente con la chiamata a `PtInRegion`.  
  
 Il `uMsg` parametro è l'ID del messaggio di Windows gestito. In questo modo, è necessario disporre di una funzione che gestisce un intervallo di messaggi. Il `wParam` e `lParam` i parametri sono i valori standard per il messaggio viene gestito. Il parametro bHandled consente di specificare se la funzione gestita il messaggio o meno. Per impostazione predefinita, il valore è impostato su `TRUE` per indicare che il messaggio è stato gestito la funzione, ma è possibile impostare `FALSE`. In questo modo ATL continuare la ricerca di un'altra funzione di gestione a cui inviare il messaggio.  
  
## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo  
 Provare ora gli eventi. Compilare il controllo e avviare di nuovo di ActiveX Control Test Container. Questa volta, visualizzare la finestra del registro eventi. Per inviare gli eventi nella finestra di output, fare clic su **registrazione** dal **opzioni** dal menu **Log alla finestra di output**. Inserire il controllo e fare clic nella finestra. Si noti che `ClickIn` viene generato se si fa clic all'interno di poligono, e `ClickOut` viene generato quando si fa clic all'esterno.  
  
 Successivamente, si aggiungerà una pagina delle proprietà.  
  
 [Torna al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; [Al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

