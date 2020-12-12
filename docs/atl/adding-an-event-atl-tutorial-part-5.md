---
description: 'Altre informazioni su: aggiunta di un evento (esercitazione di ATL, parte 5)'
title: Aggiunta di un evento (Esercitazione di ATL, parte 5)
ms.custom: get-started-article
ms.date: 09/27/2018
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
ms.openlocfilehash: 70c3b570eefa274d2cab9e31420729949d4c7974
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166252"
---
# <a name="adding-an-event-atl-tutorial-part-5"></a>Aggiunta di un evento (Esercitazione di ATL, parte 5)

In questo passaggio si aggiungeranno un `ClickIn` evento e un `ClickOut` evento al controllo ATL. L'evento viene generato `ClickIn` se l'utente fa clic all'interno del poligono e viene attivato `ClickOut` se l'utente fa clic all'esterno. Di seguito sono riportate le attività per l'aggiunta di un evento:

- Aggiunta dei `ClickIn` `ClickOut` metodi e

- Generazione della libreria dei tipi

- Implementazione delle interfacce del punto di connessione

## <a name="adding-the-clickin-and-clickout-methods"></a>Aggiunta dei metodi ClickIn e click out

Quando il controllo ATL è stato creato nel passaggio 2, è stata selezionata la casella di controllo **punti di connessione** . Questa operazione ha creato l' `_IPolyCtlEvents` interfaccia nel file Polygon. idl. Si noti che il nome dell'interfaccia inizia con un carattere di sottolineatura. Si tratta di una convenzione che indica che l'interfaccia è un'interfaccia interna. Pertanto, i programmi che consentono di esplorare gli oggetti COM possono scegliere di non visualizzare l'interfaccia per l'utente. Si noti inoltre che la selezione di **punti di connessione** ha aggiunto la riga seguente nel file Polygon. idl per indicare che `_IPolyCtlEvents` è l'interfaccia di origine predefinita:

`[default, source] dispinterface _IPolyCtlEvents;`

L'attributo di origine indica che il controllo è l'origine delle notifiche, quindi chiamerà questa interfaccia sul contenitore.

Aggiungere ora i `ClickIn` `ClickOut` metodi e all' `_IPolyCtlEvents` interfaccia.

### <a name="to-add-the-clickin-and-clickout-methods"></a>Per aggiungere i metodi ClickIn e click out

1. In **Esplora soluzioni** aprire Polygon. idl e aggiungere il codice seguente `methods:` nella `dispInterface_IPolyCtlEvents` dichiarazione della libreria PolygonLib:

    ```cpp
   [id(1), helpstring("method ClickIn")] void ClickIn([in] LONG x,[in] LONG y);
   [id(2), helpstring("method ClickOut")] void ClickOut([in] LONG x,[in] LONG y);
    ```

I `ClickIn` `ClickOut` metodi e accettano le coordinate x e y del punto selezionato come parametri.

## <a name="generating-the-type-library"></a>Generazione della libreria dei tipi

Generare la libreria dei tipi in questa fase, perché verrà utilizzata dal progetto per ottenere le informazioni necessarie per creare un'interfaccia del punto di connessione e un'interfaccia del contenitore del punto di connessione per il controllo.

### <a name="to-generate-the-type-library"></a>Per generare la libreria dei tipi

1. Ricompilare il progetto.

     -oppure-

1. Fare clic con il pulsante destro del mouse sul file Polygon. idl in **Esplora soluzioni** e scegliere **Compila** dal menu di scelta rapida.

Verrà creato il file Polygon. tlb, ovvero la libreria dei tipi. Il file Polygon. tlb non è visibile dal **Esplora soluzioni**, perché è un file binario e non può essere visualizzato o modificato direttamente.

## <a name="implementing-the-connection-point-interfaces"></a>Implementazione delle interfacce del punto di connessione

Implementare un'interfaccia del punto di connessione e un'interfaccia del contenitore del punto di connessione per il controllo. In COM gli eventi vengono implementati tramite il meccanismo dei punti di connessione. Per ricevere eventi da un oggetto COM, un contenitore stabilisce una connessione consultiva al punto di connessione implementato dall'oggetto COM. Poiché un oggetto COM può avere più punti di connessione, l'oggetto COM implementa anche un'interfaccia del contenitore del punto di connessione. Tramite questa interfaccia, il contenitore può determinare quali punti di connessione sono supportati.

Viene chiamata l'interfaccia che implementa un punto di connessione `IConnectionPoint` e viene chiamata l'interfaccia che implementa un contenitore del punto di connessione `IConnectionPointContainer` .

Per semplificare l'implementazione di `IConnectionPoint` , si utilizzerà la procedura guidata implementa punto di connessione. Questa procedura guidata genera l' `IConnectionPoint` interfaccia leggendo la libreria dei tipi e implementando una funzione per ogni evento che può essere attivato.

### <a name="to-implement-the-connection-points"></a>Per implementare i punti di connessione

1. In **Esplora soluzioni** aprire _IPolyCtlEvents_CP. h e aggiungere il codice seguente nell'istruzione della `public:` `CProxy_IPolyCtlEvents` classe:

    ```cpp
    VOID Fire_ClickIn(LONG x, LONG y)
    {
        T* pT = static_cast<T*>(this);
        int nConnectionIndex;
        CComVariant* pvars = new CComVariant[2];
        int nConnections = m_vec.GetSize();

        for (nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++)
        {
            pT->Lock();
            CComPtr<IUnknown> sp = m_vec.GetAt(nConnectionIndex);
            pT->Unlock();
            IDispatch* pDispatch = reinterpret_cast<IDispatch*>(sp.p);
            if (pDispatch != NULL)
            {
                pvars[1].vt = VT_I4;
                pvars[1].lVal = x;
                pvars[0].vt = VT_I4;
                pvars[0].lVal = y;
                DISPPARAMS disp = { pvars, NULL, 2, 0 };
                pDispatch->Invoke(0x1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
            }
        }
        delete[] pvars;

    }
    VOID Fire_ClickOut(LONG x, LONG y)
    {
        T* pT = static_cast<T*>(this);
        int nConnectionIndex;
        CComVariant* pvars = new CComVariant[2];
        int nConnections = m_vec.GetSize();

        for (nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++)
        {
            pT->Lock();
            CComPtr<IUnknown> sp = m_vec.GetAt(nConnectionIndex);
            pT->Unlock();
            IDispatch* pDispatch = reinterpret_cast<IDispatch*>(sp.p);
            if (pDispatch != NULL)
            {
                pvars[1].vt = VT_I4;
                pvars[1].lVal = x;
                pvars[0].vt = VT_I4;
                pvars[0].lVal = y;
                DISPPARAMS disp = { pvars, NULL, 2, 0 };
                pDispatch->Invoke(0x2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
            }
        }
        delete[] pvars;

    }
    ```

Si noterà che questo file contiene una classe denominata `CProxy_IPolyCtlEvents` che deriva da `IConnectionPointImpl` . _IPolyCtlEvents_CP. h definisce ora i due metodi `Fire_ClickIn` e `Fire_ClickOut` , che accettano i due parametri delle coordinate. Questi metodi vengono chiamati quando si desidera generare un evento dal controllo.

Creando il controllo con l'opzione **punti di connessione** selezionata, il file _IPolyCtlEvents_CP. h è stato generato automaticamente. È stato inoltre aggiunto `CProxy_PolyEvents` e `IConnectionPointContainerImpl` all'elenco di ereditarietà multiplo del controllo ed è stato esposto `IConnectionPointContainer` per l'utente aggiungendo le voci appropriate alla mappa com.

È stata completata l'implementazione del codice per supportare gli eventi. A questo punto, aggiungere il codice per attivare gli eventi nel momento appropriato. Tenere presente che verrà generato un `ClickIn` `ClickOut` evento o quando l'utente fa clic con il pulsante sinistro del mouse nel controllo. Per individuare quando l'utente fa clic sul pulsante, aggiungere un gestore per il `WM_LBUTTONDOWN` messaggio.

### <a name="to-add-a-handler-for-the-wm_lbuttondown-message"></a>Per aggiungere un gestore per il messaggio di WM_LBUTTONDOWN

1. In **Visualizzazione classi** fare clic con il pulsante destro del mouse sulla `CPolyCtl` classe e scegliere **proprietà** dal menu di scelta rapida.

1. Nella finestra **Proprietà** fare clic sull'icona **messaggi** e quindi fare clic nell' `WM_LBUTTONDOWN` elenco a sinistra.

1. Nell'elenco a discesa che viene visualizzato fare clic su **\<Add> OnLButtonDown**. La `OnLButtonDown` dichiarazione del gestore verrà aggiunta a PolyCtl. h e l'implementazione del gestore verrà aggiunta a PolyCtl. cpp.

Modificare quindi il gestore.

### <a name="to-modify-the-onlbuttondown-method"></a>Per modificare il metodo OnLButtonDown

1. Modificare il codice che include il `OnLButtonDown` metodo in PolyCtl. cpp (eliminando il codice inserito dalla procedura guidata) in modo che abbia un aspetto simile al seguente:

    [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_2.cpp)]

Questo codice usa i punti calcolati nella `OnDraw` funzione per creare un'area che rileva i clic del mouse dell'utente con la chiamata a `PtInRegion` .

Il parametro *uMsg* è l'ID del messaggio di Windows gestito. In questo modo è possibile disporre di una funzione che gestisce un intervallo di messaggi. I parametri *wParam* e *lParam* sono i valori standard per il messaggio gestito. Il parametro *bHandled* consente di specificare se la funzione ha gestito o meno il messaggio. Per impostazione predefinita, il valore è impostato su TRUE per indicare che la funzione ha gestito il messaggio, ma è possibile impostarlo su FALSE. In questo modo ATL continuerà a cercare un'altra funzione di gestione dei messaggi a cui inviare il messaggio.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

A questo punto, provare gli eventi. Compilare il controllo e avviare di nuovo il contenitore di test del controllo ActiveX. Questa volta, visualizzare la finestra log eventi. Per indirizzare gli eventi alla finestra output, fare clic su **registrazione** dal menu **Opzioni** e selezionare **registra nella finestra output**. Inserire il controllo e provare a fare clic nella finestra. Si noti che `ClickIn` viene generato se si fa clic all'interno del poligono pieno e `ClickOut` viene generato quando si fa clic all'esterno.

Successivamente, verrà aggiunta una pagina delle proprietà.

[Tornare al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; al [passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## <a name="see-also"></a>Vedi anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
