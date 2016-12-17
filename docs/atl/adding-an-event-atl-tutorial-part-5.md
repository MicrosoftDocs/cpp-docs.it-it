---
title: "Aggiunta di un evento (Esercitazione di ATL, parte 5) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di un evento (Esercitazione di ATL, parte 5)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo passaggio, verrà aggiunto `ClickIn` e un evento `ClickOut` al controllo ATL.  Genererà l'evento `ClickIn` se l'utente fa clic all'interno del poligono e la generazione `ClickOut` se l'utente fa clic all'esterno.  Le attività aggiungere un evento sono:  
  
-   Aggiunta di metodi `ClickOut` e `ClickIn`  
  
-   Generare una libreria dei tipi  
  
-   Implementare le interfacce dei punti di connessione  
  
## Aggiunta di metodi di ClickOut e di ClickIn  
 Dopo aver creato il controllo ATL nel passaggio 2, selezionata la casella di controllo **Punti di connessione**.  Ciò ha creato l'interfaccia `_IPolyCtlEvents` nel file di Polygon.idl.  Si noti che il nome dell'interfaccia inizia con un carattere di sottolineatura.  Questa è una convenzione per indicare che l'interfaccia è un'interfaccia interna.  Pertanto, i programmi che consentono agli oggetti COM di navigazione è possibile visualizzare l'interfaccia all'utente.  Si noti inoltre che seleziona **Punti di connessione** aggiunta la riga seguente nel file di Polygon.idl per indicare che `_IPolyCtlEvents` è impostata in modo predefinito l'interfaccia di origine:  
  
 `[default, source] dispinterface _IPolyCtlEvents;`  
  
 L'attributo di origine indica che il controllo è l'origine delle notifiche, pertanto chiamerà questa interfaccia nel contenitore.  
  
 Aggiungere ora `ClickIn` e i metodi `ClickOut` a `_IPolyCtlEvents` collegamento.  
  
#### Per aggiungere metodi di ClickOut e di ClickIn  
  
1.  In Visualizzazione classi espandere, il poligono e PolygonLib per visualizzare i \_IPolyCtlEvents.  
  
2.  Fare clic con il pulsante destro del mouse sui \_IPolyCtlEvents.  Dal menu di scelta rapida scegliere **Aggiungi**, quindi **Aggiungi metodo**.  
  
3.  Selezionare **Tipo restituito**`void`.  
  
4.  Immettere `ClickIn` nella casella **Nome metodo**.  
  
5.  In **Attributi dei parametri**, selezionare la casella **in**.  
  
6.  Selezionare **Tipo parametro**`LONG`.  
  
7.  Digitare `x` come **Nome parametro**e fare clic **Aggiungi**.  
  
8.  Ripetere i passaggi da 5 a 7, questa volta per **Nome parametro** di Y.  
  
9. Scegliere **Avanti**.  
  
10. Tipo `metodo ClickIn` come **helpstring**.  
  
11. Fare clic su **Fine**.  
  
12. Ripetere i passaggi precedenti per definire un metodo `ClickOut` con gli stessi parametri `x` e `y`, stesso **Attributi dei parametri**`LONG` e lo stesso tipo restituito `void`.  
  
 Controllare il file di Polygon.idl per verificare che il codice sia stato aggiunto all'interfaccia dispatch `_IPolyCtlEvents`.  
  
 L'interfaccia dispatch `_IPolyCtlEvents` nel file di Polygon.idl dovrebbe ora essere:  
  
 [!code-cpp[NVC_ATL_Windowing#56](../atl/codesnippet/CPP/adding-an-event-atl-tutorial-part-5_1.idl)]  
  
 I metodi `ClickOut` e `ClickIn` accettano le coordinate x e y del punto scelto come parametri.  
  
## Generare una libreria dei tipi  
 Generare una libreria dei tipi in questa fase, poiché la procedura guidata punto di connessione la utilizzerà per ottenere le informazioni necessarie per creare un'interfaccia del punto di connessione e un'interfaccia del contenitore del punto di connessione per il controllo.  
  
#### Per generare la libreria dei tipi  
  
1.  Ricompilare il progetto.  
  
     In alternativa  
  
2.  Fare clic con il pulsante destro del mouse sul file in Esplora Risorse di Polygon.idl e fare clic **Compilazione** il menu di scelta rapida.  
  
 Verrà creato il file di Polygon.tlb, ovvero la libreria dei tipi.  Il file di Polygon.tlb non è visibile in Esplora soluzioni, perché è un file binario e non può essere visualizzato o modificato direttamente.  
  
## Implementare le interfacce dei punti di connessione  
 Implementare un'interfaccia del punto di connessione e un'interfaccia del contenitore del punto di connessione per il controllo.  In COM, gli eventi vengono implementati mediante il meccanismo dei punti di connessione.  Per ricevere eventi da un oggetto COM, un contenitore stabilisce una connessione consultiva al punto di connessione che l'oggetto COM.  Poiché un oggetto COM può disporre di più punti di connessione, l'oggetto COM implementa anche l'interfaccia di un contenitore del punto di connessione.  Tramite questa interfaccia, il contenitore può determinare i punti di connessione sono supportati.  
  
 L'interfaccia che implementa un punto di connessione viene chiamata `IConnectionPoint`e l'interfaccia che implementa un contenitore del punto di connessione viene chiamata `IConnectionPointContainer`.  
  
 Per informazioni sulla distribuzione `IConnectionPoint`, utilizzare la procedura guidata punto di connessione di implementazione.  Questa procedura guidata genera l'interfaccia `IConnectionPoint` leggendo la libreria dei tipi e implementando una funzione per ogni evento che può essere generato.  
  
#### Per utilizzare la procedura guidata punto di connessione di utilizzo  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe `CPolyCtl`dell'implementazione del controllo.  
  
2.  Scegliere dal menu di scelta rapida, fare clic **Aggiungi**quindi scegliere **Aggiungi punto di connessione**.  
  
3.  Selezionare `_IPolyCtlEvents` dall'elenco **Interfacce di origine** e fare doppio clic su per aggiungerlo alla colonna **Implementa punti di connessione**.  Fare clic su **Fine**.  Una classe proxy per il punto di connessione verrà generata un'eccezione, in questo caso, `CProxy_IPolyCtlEvents`.  
  
 Se si esamina il file generato in Esplora soluzioni \_IPolyCtlEvents\_CP.h, si noterà che ha chiamato `CProxy_IPolyCtlEvents` classe che deriva da `IConnectionPointImpl`.  \_IPolyCtlEvents\_CP.h definisce anche i due metodi `Fire_ClickIn` e `Fire_ClickOut`, che accettano due parametri di coordinate.  Chiamare questi metodi quando si desidera generare un evento dal controllo.  
  
 La procedura guidata vengono inoltre aggiunto `CProxy_PolyEvents` e `IConnectionPointContainerImpl`elenco di ereditarietà multipla del controllo.  La procedura guidata `IConnectionPointContainer` anche esposta automaticamente aggiungendo voci appropriate alla mappa COM.  
  
 Aver distribuito il codice per supportare eventi.  A questo punto, aggiungere codice per fare di generare eventi nel momento appropriato.  Ricordare, si utilizzeranno generare un evento `ClickOut` o `ClickIn` quando l'utente fa clic sul pulsante sinistro del mouse sul controllo.  Per scoprire quando l'utente fa clic sul pulsante, aggiungere un gestore per il messaggio `WM_LBUTTONDOWN`.  
  
#### Per aggiungere un gestore per il messaggio di WM\_LBUTTONDOWN  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe di CPolyCtl e fare clic **Proprietà** il menu di scelta rapida.  
  
2.  Nella finestra **Proprietà**, fare clic sull'icona **Messaggi** quindi scegliere `WM_LBUTTONDOWN` dall'elenco a sinistra.  
  
3.  Nell'elenco a discesa visualizzata, scegliere **\<Add\> OnLButtonDown**.  La dichiarazione del gestore `OnLButtonDown` verrà aggiunto a PolyCtl.h e l'implementazione del gestore verrà aggiunto a PolyCtl.cpp.  
  
 Successivamente, modificare il gestore.  
  
#### Per modificare il metodo di OnLButtonDown  
  
1.  Modificare il codice che include il metodo `OnLButtonDown` in PolyCtl.cpp \(che elimina tutto il codice inserito dalla procedura guidata\) nel modo seguente:  
  
     [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/CPP/adding-an-event-atl-tutorial-part-5_2.cpp)]  
  
 Questo codice utilizza i punti calcolati nella funzione `OnDraw` per creare un'area che rileva i clic del mouse sull'utente con la chiamata a `PtInRegion`.  
  
 Il parametro `uMsg` è l'id del messaggio di Windows che viene gestito.  Questo consente di avere una funzione che gestisce un intervallo dei messaggi.  `wParam` e i parametri `lParam` sono i valori standard per il messaggio che viene gestito.  Il parametro bHandled consente di specificare se la funzione non gestito il messaggio o meno.  Per impostazione predefinita, il valore viene impostato su `TRUE` per indicare che la funzione il messaggio è stato gestito, ma è possibile impostarlo a `FALSE`.  In questo modo ATL per continuare la ricerca un'altra funzione di gestore messaggi per inviare il messaggio a.  
  
## Compilazione e test il controllo  
 Provare ora gli eventi.  Compilare il controllo e avviare il controllo ActiveX control Test Container nuovamente.  Questa volta, visualizza la finestra del log eventi.  Per rispondere agli eventi nella finestra di output, fare clic **Registrazione** dal menu **Opzioni** e selezionare **Registra nella finestra di output**.  Inserire il controllo e provare a fare clic nella finestra.  Si noti che `ClickIn` viene generato se si fa clic all'interno del poligono riempito e `ClickOut` viene generato quando si fa clic all'esterno.  
  
 Successivamente, si aggiungerà una pagina delle proprietà.  
  
 [Per tornare al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; [Nel passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)