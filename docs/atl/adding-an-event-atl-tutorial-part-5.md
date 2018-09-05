---
title: Aggiunta di un evento (ATL dell'esercitazione, parte 5) | Microsoft Docs
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1bb72babcc4bf425e4ea588e4e2a155b077c47cc
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43754878"
---
# <a name="adding-an-event-atl-tutorial-part-5"></a>Aggiunta di un evento (Esercitazione di ATL, parte 5)

In questo passaggio si aggiungerà un `ClickIn` e un `ClickOut` eventi al controllo ATL. Genererà il `ClickIn` evento se l'utente fa clic all'interno di polygon e fire `ClickOut` se l'utente fa clic all'esterno. Come indicato di seguito sono riportate le attività per aggiungere un evento:

- Aggiungere il `ClickIn` e `ClickOut` metodi

- Generazione della libreria dei tipi

- Implementare le interfacce di punto di connessione

## <a name="adding-the-clickin-and-clickout-methods"></a>Aggiunta di metodi ClickIn e ClickOut

Durante la creazione del controllo ATL nel passaggio 2, è stata selezionata la **punti di connessione** casella di controllo. Si è creato il `_IPolyCtlEvents` interfaccia nel file di Polygon. idl. Si noti che il nome dell'interfaccia inizia con un carattere di sottolineatura. Questa è una convenzione per indicare che l'interfaccia è un'interfaccia interna. Di conseguenza, i programmi che consentono di visualizzare gli oggetti COM è possono scegliere di non visualizzare l'interfaccia per l'utente. Si noti anche che se si seleziona **punti di connessione** aggiungere la riga seguente nel file di Polygon. idl per indicare che `_IPolyCtlEvents` è l'interfaccia di origine predefinita:

`[default, source] dispinterface _IPolyCtlEvents;`

L'attributo di origine indica che il controllo è l'origine delle notifiche, in modo che chiamerà questa interfaccia per il contenitore.

A questo punto aggiungere il `ClickIn` e `ClickOut` metodi per il `_IPolyCtlEvents` interfaccia.

#### <a name="to-add-the-clickin-and-clickout-methods"></a>Per aggiungere i metodi ClickIn e ClickOut

1. In visualizzazione classi espandere poligono e PolygonLib per visualizzare IPolyCtlEvents.

2. Fare doppio clic su IPolyCtlEvents. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi metodo**.

3. Selezionare una **il tipo restituito** di `void`.

4. Immettere *ClickIn* nel **il nome di metodo** casella.

5. Sotto **attributi dei parametri**, selezionare la **in** casella.

6. Selezionare una **tipo di parametro** di `LONG`.

7. Tipo di *x* come la **nome del parametro**, fare clic su **Add**.

8. Ripetere i passaggi da 5 a 7, questa volta per un **nome del parametro** dei *y*.

9. Scegliere **Avanti**.

10. Tipo di `method ClickIn` come il **helpstring**.

11. Scegliere **Fine**.

12. Ripetere i passaggi precedenti per definire un `ClickOut` metodo con lo stesso `LONG` parametri *x* e *y*, lo stesso **gli attributi di parametro** e lo stesso `void` il tipo restituito.

Controllare il file Polygon. idl per verificare che sia stato aggiunto il codice per il `_IPolyCtlEvents` interfaccia dispatch.

Il `_IPolyCtlEvents` dispinterface nel file di Polygon. idl a questo punto dovrebbe essere simile al seguente:

[!code-cpp[NVC_ATL_Windowing#56](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_1.idl)]

Il `ClickIn` e `ClickOut` metodi accettano x e y coordinate del punto selezionato come parametri.

## <a name="generating-the-type-library"></a>Generazione della libreria dei tipi

Generare la libreria dei tipi a questo punto, poiché la creazione guidata punto di connessione verrà utilizzato per ottenere le informazioni necessarie per creare un'interfaccia di punto di connessione e un'interfaccia di contenitore del punto di connessione per il controllo.

#### <a name="to-generate-the-type-library"></a>Per generare la libreria dei tipi

1. Ricompilare il progetto.

     oppure

2. Fare doppio clic su file Polygon. idl in Esplora soluzioni e fare clic su **Compile** menu di scelta rapida.

Questo creerà il file Polygon, ovvero la libreria dei tipi. Il file Polygon non è visibile da Esplora soluzioni, perché non è un file binario e può essere visualizzato o modificato direttamente.

## <a name="implementing-the-connection-point-interfaces"></a>Implementare le interfacce di punto di connessione

Implementare un'interfaccia di punto di connessione e un'interfaccia di contenitore del punto di connessione per il controllo. In COM, gli eventi vengono implementati tramite il meccanismo di punti di connessione. Per ricevere eventi da un oggetto COM, un contenitore consente di stabilire una connessione consultiva al punto di connessione che implementa l'oggetto COM. Poiché un oggetto COM può avere più punti di connessione, l'oggetto COM implementi anche un'interfaccia di contenitore del punto di connessione. Tramite questa interfaccia, il contenitore può determinare quali punti di connessione sono supportati.

L'interfaccia che implementa un punto di connessione è detta `IConnectionPoint`, e l'interfaccia che implementa un contenitore del punto di connessione è detta `IConnectionPointContainer`.

Per facilitare l'implementazione `IConnectionPoint`, si userà l'implementazione guidata punto di connessione. Questa procedura guidata genera il `IConnectionPoint` interfaccia leggendo la libreria dei tipi e implementando una funzione per ogni evento che può essere attivato.

#### <a name="to-use-the-implement-connection-point-wizard"></a>Usare l'implementazione guidata punto di connessione

1. In visualizzazione classi, fare doppio clic la classe di implementazione del controllo `CPolyCtl`.

2. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi punto di connessione**.

3. Selezionare `_IPolyCtlEvents` dal **interfacce di origine** elenco e fare doppio clic su esso per aggiungerlo al **implementano i punti di connessione** colonna. Scegliere **Fine**. Generata una classe proxy del punto di connessione sarà possibile, in questo caso, `CProxy_IPolyCtlEvents`.

Se si esamina il file IPolyCtlEvents_CP. h generato in Esplora soluzioni, si noterà che disponga di una classe denominata `CProxy_IPolyCtlEvents` che deriva da `IConnectionPointImpl`. IPolyCtlEvents_CP. h definisce anche i due metodi `Fire_ClickIn` e `Fire_ClickOut`, che accettano due parametri di coordinate. Questi metodi vengono chiamati quando si desidera generare un evento dal controllo.

La procedura guidata anche aggiunta `CProxy_PolyEvents` e `IConnectionPointContainerImpl` per elenco di ereditarietà multipla del controllo. La procedura guidata esposta anche `IConnectionPointContainer` per l'utente aggiungendo le voci appropriate alla mappa COM.

Si è completata l'implementazione del codice per supportare gli eventi. A questo punto, aggiungere il codice per generare gli eventi nel momento appropriato. Tenere presente che si desidera generare una `ClickIn` o `ClickOut` evento quando l'utente fa clic sul pulsante sinistro del mouse nel controllo. Per verificare se l'utente fa clic sul pulsante, aggiungere un gestore per il `WM_LBUTTONDOWN` messaggio.

#### <a name="to-add-a-handler-for-the-wmlbuttondown-message"></a>Per aggiungere un gestore per il messaggio WM_LBUTTONDOWN

1. In visualizzazione classi, fare doppio clic la classe CPolyCtl e fare clic su **proprietà** menu di scelta rapida.

2. Nel **delle proprietà** finestra, fare clic sul **messaggi** icona e quindi fare clic su `WM_LBUTTONDOWN` dall'elenco a sinistra.

3. Dall'elenco a discesa visualizzato, scegliere  **\<Aggiungi > OnLButtonDown**. Il `OnLButtonDown` dichiarazione del gestore verrà aggiunto al PolyCtl. H e l'implementazione del gestore verrà aggiunto al PolyCtl.

Successivamente, modificare il gestore.

#### <a name="to-modify-the-onlbuttondown-method"></a>Per modificare il OnLButtonDown (metodo)

1. Modificare il codice che include il `OnLButtonDown` metodo in PolyCtl. (l'eliminazione di qualsiasi codice inserito dalla procedura guidata) in modo che risulti simile al seguente:

     [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_2.cpp)]

In questo modo si codice utilizzati i punti di calcolati i `OnDraw` per creare un'area che rileva un clic del mouse dell'utente con la chiamata alla funzione `PtInRegion`.

Il *uMsg* parametro è l'ID del messaggio di Windows da gestire. In questo modo, è necessario disporre di una funzione che gestisce un intervallo di messaggi. Il *wParam* e il *lParam* i parametri sono i valori standard per il messaggio da gestire. Il parametro bHandled consente di specificare se la funzione gestita il messaggio o meno. Per impostazione predefinita, il valore è impostato su TRUE per indicare che la funzione il messaggio è stato gestito, ma è possibile impostarlo su FALSE. Ciò causerà ATL continuare cercando un'altra funzione di gestore di messaggi a cui inviare il messaggio.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Ora provare gli eventi. Compilare il controllo e avviare di nuovo il controllo ActiveX Test Container. Questa volta, visualizzare la finestra Registro eventi. Per instradare gli eventi nella finestra di output, fare clic su **Logging** dalle **opzioni** menu e selezionare **Log alla finestra di output**. Inserire il controllo e provare a fare clic nella finestra. Si noti che `ClickIn` viene generato se si fa clic all'interno del poligono pieno e `ClickOut` viene generato quando si fa clic all'esterno di esso.

Successivamente, si aggiungerà una pagina delle proprietà.

[Tornare al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; [al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)

