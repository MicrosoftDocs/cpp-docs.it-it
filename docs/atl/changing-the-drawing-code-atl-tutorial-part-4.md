---
title: Modifica del codice del disegno (Esercitazione di ATL, parte 4)
ms.custom: get-started-article
ms.date: 09/26/2018
helpviewer_keywords:
- _ATL_MIN_CRT macro
ms.assetid: 08ff14e8-aa49-4139-a110-5d071939cf1e
ms.openlocfilehash: ce6492eb2e4da04b261c7a88154674d036bb578a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481419"
---
# <a name="changing-the-drawing-code-atl-tutorial-part-4"></a>Modifica del codice del disegno (Esercitazione di ATL, parte 4)

Per impostazione predefinita, codice di disegno del controllo Visualizza il testo e un quadrato **PolyCtl**. In questo passaggio si modificherà il codice per visualizzare un elemento più interessante. Le attività seguenti sono necessari:

- Modifica del File di intestazione

- Modifica il `OnDraw` (funzione)

- Aggiunta di un metodo per calcolare i punti del poligono

- Inizializzazione in corso il colore di riempimento

## <a name="modifying-the-header-file"></a>Modifica del File di intestazione

Iniziare aggiungendo il supporto per le funzioni matematiche `sin` e `cos`, che consentirà di calcolare i punti del poligono e creando una matrice per archiviare le posizioni.

### <a name="to-modify-the-header-file"></a>Per modificare il file di intestazione

1. Aggiungere la riga `#include <math.h>` all'inizio del PolyCtl. H. L'inizio del file dovrebbe essere simile al seguente:

    [!code-cpp[NVC_ATL_Windowing#47](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_1.cpp)]

1. Implementare il `IProvideClassInfo` interfaccia per fornire informazioni sul metodo per il controllo, aggiungendo il codice seguente al PolyCtl. H. Nel `CPolyCtl` classe, sostituire riga:

    ```cpp
    public CComControl<CPolyCtl>
    ```

    con

    ```cpp
    public CComControl<CPolyCtl>,
    public IProvideClassInfo2Impl<&CLSID_PolyCtl, &DIID__IPolyCtlEvents, &LIBID_PolygonLib>
    ```

    e in `BEGIN_COM_MAP(CPolyCtl)`, aggiungere le righe:

    ```cpp
    COM_INTERFACE_ENTRY(IProvideClassInfo)
    COM_INTERFACE_ENTRY(IProvideClassInfo2)
    ```

1. Una volta che vengono calcolati i punti del poligono, essi verranno archiviati in una matrice di tipo `POINT`, quindi aggiungere la matrice dopo l'istruzione di definizione `short m_nSides;` in PolyCtl. H:

    [!code-cpp[NVC_ATL_Windowing#48](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_2.h)]

## <a name="modifying-the-ondraw-method"></a>Se si modifica il metodo OnDraw

A questo punto è necessario modificare il `OnDraw` metodo in PolyCtl. H. Il codice si aggiungerà una nuova penna e un pennello con cui disegnare il poligono e quindi chiama il `Ellipse` e `Polygon` funzioni API Win32 per eseguire il disegno effettivo.

### <a name="to-modify-the-ondraw-function"></a>Per modificare la funzione OnDraw

1. Sostituire il `OnDraw` metodo in PolyCtl. H con il codice seguente:

    [!code-cpp[NVC_ATL_Windowing#49](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_3.cpp)]

## <a name="adding-a-method-to-calculate-the-polygon-points"></a>Aggiunta di un metodo per calcolare i punti del poligono

Aggiungere un metodo, denominato `CalcPoints`, che calcola le coordinate dei punti che compongono il perimetro del poligono. Questi calcoli si baseranno sulla variabile RECT che viene passata alla funzione.

### <a name="to-add-the-calcpoints-method"></a>Per aggiungere il metodo CalcPoints

1. Aggiungere la dichiarazione della `CalcPoints` per il `IPolyCtl` sezione pubblica del `CPolyCtl` classe in PolyCtl. H:

    [!code-cpp[NVC_ATL_Windowing#50](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_4.h)]

    L'ultima parte della sezione pubblica del `CPolyCtl` classe avrà un aspetto simile al seguente:

    [!code-cpp[NVC_ATL_Windowing#51](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_5.h)]

1. Aggiungere questa implementazione del `CalcPoints` funzione alla fine della PolyCtl:

    [!code-cpp[NVC_ATL_Windowing#52](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_6.cpp)]

## <a name="initializing-the-fill-color"></a>Inizializzazione in corso il colore di riempimento

Inizializzare `m_clrFillColor` con un colore predefinito.

### <a name="to-initialize-the-fill-color"></a>Per inizializzare il colore di riempimento

1. Utilizzare il verde come colore predefinito aggiungendo questa riga per il `CPolyCtl` costruttore in PolyCtl. H:

    [!code-cpp[NVC_ATL_Windowing#53](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_7.h)]

Il costruttore sarà simile al seguente:

[!code-cpp[NVC_ATL_Windowing#54](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_8.h)]

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Ricompilare il controllo. Assicurarsi che il file PolyCtl viene chiuso se è ancora aperta e quindi fare clic su **poligono compilare** nel **compilazione** menu. È stato possibile visualizzare il controllo ancora una volta dalla pagina PolyCtl. htm, ma questa volta usare il controllo ActiveX Test Container.

### <a name="to-use-the-activex-control-test-container"></a>Usare il controllo ActiveX Test Container

1. Compilare e avviare il controllo ActiveX Test Container. Il [esempio TSTCON: ActiveX Control Test Container](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/ole/TstCon) sono disponibili su GitHub.

    > [!NOTE]
    > Per gli errori che interessano `ATL::CW2AEX`, in Script.Cpp, sostituire riga `TRACE( "XActiveScriptSite::GetItemInfo( %s )\n", pszNameT );` con `TRACE( "XActiveScriptSite::GetItemInfo( %s )\n", pszNameT.m_psz );`e di riga `TRACE( "Source Text: %s\n", COLE2CT( bstrSourceLineText ) );` con `TRACE( "Source Text: %s\n", bstrSourceLineText );`.<br/>
    > Per gli errori che interessano `HMONITOR`, aprire stdafx. H nel `TCProps` del progetto e sostituire:
    > ```
    > #ifndef WINVER
    > #define WINVER 0x0400
    > #endif
    > ```
    > con
    > ```
    > #ifndef WINVER
    > #define WINVER 0x0500
    > #define _WIN32_WINNT 0x0500
    > #endif
    > ```

1. Nelle **Test Container**via il **modificare** dal menu fare clic su **Inserisci nuovo controllo**.

1. Individuare il controllo, che verrà chiamato `PolyCtl class`, fare clic su **OK**. Si noterà un triangolo verde all'interno di un cerchio.

Provare a modificare il numero di lati seguendo la procedura successiva. Per modificare le proprietà in un'interfaccia duale dall'interno **Test Container**, usare **richiama metodi**.

### <a name="to-modify-a-controls-property-from-within-the-test-container"></a>Per modificare una proprietà del controllo all'interno del contenitore di Test

1. Nella **Test Container**, fare clic su **richiama metodi** sul **controllo** menu.

    Il **Richiama metodo** verrà visualizzata la finestra di dialogo.

1. Selezionare il **PropPut** versione del **i lati** proprietà dal **nome del metodo** casella di riepilogo a discesa.

1. Tipo di `5` nella **valore del parametro** fare clic su **Imposta valore**, fare clic su **Invoke**.

Si noti che il controllo non cambiano. Anche se è stato modificato il numero di lati internamente impostando il `m_nSides` variabili, ciò non produceva ridisegnare il controllo. Se si passa a un'altra applicazione e quindi tornare a **Test Container**, si noterà che il controllo stato ridisegnato e presenta il numero corretto di lati.

Per risolvere questo problema, aggiungere una chiamata per il `FireViewChange` funzione definita in `IViewObjectExImpl`, dopo aver impostato il numero di lati. Se il controllo è in esecuzione nella propria finestra `FireViewChange` chiamerà il `InvalidateRect` direttamente al metodo. Se il controllo è in esecuzione senza finestra, il `InvalidateRect` metodo verrà chiamato sull'interfaccia del sito del contenitore. In tal modo il controllo a ridisegnarsi.

### <a name="to-add-a-call-to-fireviewchange"></a>Per aggiungere una chiamata a FireViewChange

1. Aggiornare PolyCtl aggiungendo la chiamata a `FireViewChange` per il `put_Sides` (metodo). Al termine, il `put_Sides` metodo sarà simile al seguente:

    [!code-cpp[NVC_ATL_Windowing#55](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_9.cpp)]

Dopo aver aggiunto `FireViewChange`, ricompilare e provare di nuovo il controllo di ActiveX Control Test Container. Questo tempo quando si modifica il numero di lati e fare clic su `Invoke`, si dovrebbe essere modificare immediatamente il controllo.

Nel passaggio successivo, si aggiungerà un evento.

[Tornare al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md) &#124; [al passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)<br/>
[Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md)
