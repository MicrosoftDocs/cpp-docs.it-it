---
title: Modifica del codice del disegno (Esercitazione di ATL, parte 4)
ms.custom: get-started-article
ms.date: 09/26/2018
helpviewer_keywords:
- _ATL_MIN_CRT macro
ms.assetid: 08ff14e8-aa49-4139-a110-5d071939cf1e
ms.openlocfilehash: 319a27b55c394349de751546457b0741c0799cfc
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82167643"
---
# <a name="changing-the-drawing-code-atl-tutorial-part-4"></a>Modifica del codice del disegno (Esercitazione di ATL, parte 4)

Per impostazione predefinita, il codice di disegno del controllo Visualizza un quadrato e il testo **PolyCtl**. In questo passaggio il codice verrà modificato per visualizzare un elemento più interessante. Sono incluse le attività seguenti:

- Modifica del file di intestazione

- Modifica della `OnDraw` funzione

- Aggiunta di un metodo per calcolare i punti del poligono

- Inizializzazione del colore di riempimento

## <a name="modifying-the-header-file"></a>Modifica del file di intestazione

Per iniziare, aggiungere il supporto per le `sin` funzioni `cos`matematiche e, che verranno usate per calcolare i punti del poligono e creando una matrice per archiviare le posizioni.

### <a name="to-modify-the-header-file"></a>Per modificare il file di intestazione

1. Aggiungere la riga `#include <math.h>` all'inizio di PolyCtl. h. La parte superiore del file dovrebbe essere simile alla seguente:

    [!code-cpp[NVC_ATL_Windowing#47](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_1.cpp)]

1. Implementare l' `IProvideClassInfo` interfaccia per fornire informazioni sul metodo per il controllo, aggiungendo il codice seguente a PolyCtl. h. Nella `CPolyCtl` classe sostituire riga:

    ```cpp
    public CComControl<CPolyCtl>
    ```

    con

    ```cpp
    public CComControl<CPolyCtl>,
    public IProvideClassInfo2Impl<&CLSID_PolyCtl, &DIID__IPolyCtlEvents, &LIBID_PolygonLib>
    ```

    e in `BEGIN_COM_MAP(CPolyCtl)`aggiungere le righe:

    ```cpp
    COM_INTERFACE_ENTRY(IProvideClassInfo)
    COM_INTERFACE_ENTRY(IProvideClassInfo2)
    ```

1. Una volta calcolati i punti del poligono, essi verranno archiviati in una matrice `POINT`di tipo, quindi aggiungere la matrice dopo l' `short m_nSides;` istruzione di definizione in PolyCtl. h:

    [!code-cpp[NVC_ATL_Windowing#48](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_2.h)]

## <a name="modifying-the-ondraw-method"></a>Modifica del metodo onpare

A questo punto è necessario `OnDraw` modificare il metodo in PolyCtl. h. Il codice che verrà aggiunto crea una nuova penna e un pennello con cui disegnare il poligono e quindi chiama le `Ellipse` funzioni `Polygon` dell'API Win32 e per eseguire il disegno effettivo.

### <a name="to-modify-the-ondraw-function"></a>Per modificare la funzione onpare

1. Sostituire il metodo `OnDraw` esistente in PolyCtl. h con il codice seguente:

    [!code-cpp[NVC_ATL_Windowing#49](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_3.cpp)]

## <a name="adding-a-method-to-calculate-the-polygon-points"></a>Aggiunta di un metodo per calcolare i punti del poligono

Aggiungere un metodo denominato `CalcPoints`, che calcolerà le coordinate dei punti che compongono il perimetro del poligono. Questi calcoli saranno basati sulla variabile RECT passata nella funzione.

### <a name="to-add-the-calcpoints-method"></a>Per aggiungere il metodo CalcPoints

1. Aggiungere la dichiarazione di `CalcPoints` alla sezione `IPolyCtl` public della `CPolyCtl` classe in PolyCtl. h:

    [!code-cpp[NVC_ATL_Windowing#50](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_4.h)]

    L'ultima parte della sezione public della `CPolyCtl` classe sarà simile alla seguente:

    [!code-cpp[NVC_ATL_Windowing#51](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_5.h)]

1. Aggiungere questa implementazione della `CalcPoints` funzione alla fine di PolyCtl. cpp:

    [!code-cpp[NVC_ATL_Windowing#52](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_6.cpp)]

## <a name="initializing-the-fill-color"></a>Inizializzazione del colore di riempimento

Inizializzare `m_clrFillColor` con un colore predefinito.

### <a name="to-initialize-the-fill-color"></a>Per inizializzare il colore di riempimento

1. Usare verde come colore predefinito aggiungendo questa riga al `CPolyCtl` costruttore in PolyCtl. h:

    [!code-cpp[NVC_ATL_Windowing#53](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_7.h)]

Il costruttore ha ora un aspetto simile al seguente:

[!code-cpp[NVC_ATL_Windowing#54](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_8.h)]

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Ricompilare il controllo. Verificare che il file PolyCtl. htm sia chiuso, se è ancora aperto, quindi fare clic su **Compila poligono** nel menu **Compila** . È possibile visualizzare di nuovo il controllo dalla pagina PolyCtl. htm, ma questa volta usare il contenitore di test del controllo ActiveX.

### <a name="to-use-the-activex-control-test-container"></a>Per utilizzare il contenitore di test del controllo ActiveX

1. Compilare e avviare il contenitore di test del controllo ActiveX. [Esempio TSTCON: il contenitore di test del controllo ActiveX](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/ole/TstCon) è disponibile in GitHub.

    > [!NOTE]
    > Per gli errori che `ATL::CW2AEX`coinvolgono, in script. cpp, sostituire `TRACE( "XActiveScriptSite::GetItemInfo( %s )\n", pszNameT );` riga `TRACE( "XActiveScriptSite::GetItemInfo( %s )\n", pszNameT.m_psz );`con e riga `TRACE( "Source Text: %s\n", COLE2CT( bstrSourceLineText ) );` con `TRACE( "Source Text: %s\n", bstrSourceLineText );`.<br/>
    > Per gli `TCProps` errori che `HMONITOR`coinvolgono, aprire stdafx. h nel progetto e sostituire:
    >
    > ```cpp
    > #ifndef WINVER
    > #define WINVER 0x0400
    > #endif
    > ```
    >
    > con
    >
    > ```cpp
    > #ifndef WINVER
    > #define WINVER 0x0500
    > #define _WIN32_WINNT 0x0500
    > #endif
    > ```

1. In **test container**scegliere **Inserisci nuovo controllo**dal menu **modifica** .

1. Individuare il controllo, che verrà chiamato `PolyCtl class`, quindi fare clic su **OK**. Viene visualizzato un triangolo verde all'interno di un cerchio.

Provare a modificare il numero di lati attenendosi alla procedura successiva. Per modificare le proprietà di un'interfaccia duale dall'interno di un **contenitore di test**, usare i **metodi Invoke**.

### <a name="to-modify-a-controls-property-from-within-the-test-container"></a>Per modificare la proprietà di un controllo dall'interno del contenitore di test

1. In **test container**fare clic su **richiama metodi** dal menu di **controllo** .

    Verrà visualizzata la finestra di dialogo **Richiama metodo** .

1. Selezionare la versione **propput** della proprietà **lati** dalla casella di riepilogo a discesa **nome metodo** .

1. Digitare `5` nella casella **valore parametro** , fare clic su **Imposta valore**, quindi fare clic su **richiama**.

Si noti che il controllo non cambia. Sebbene sia stato modificato il numero di lati internamente impostando la `m_nSides` variabile, questo non ha causato il ridisegno del controllo. Se si passa a un'altra applicazione e quindi si torna a **test container**, si noterà che il controllo è stato ridisegnato e ha il numero corretto di lati.

Per risolvere il problema, aggiungere una chiamata alla `FireViewChange` funzione, definita in `IViewObjectExImpl`, dopo aver impostato il numero di lati. Se il controllo è in esecuzione nella propria finestra, `FireViewChange` chiamerà direttamente il `InvalidateRect` metodo. Se il controllo viene eseguito senza finestra, il `InvalidateRect` metodo verrà chiamato sull'interfaccia del sito del contenitore. Questa operazione impone al controllo di ridisegnare se stesso.

### <a name="to-add-a-call-to-fireviewchange"></a>Per aggiungere una chiamata a FireViewChange

1. Aggiornare PolyCtl. cpp aggiungendo la chiamata al `FireViewChange` `put_Sides` metodo. Al termine, il metodo avrà `put_Sides` un aspetto simile al seguente:

    [!code-cpp[NVC_ATL_Windowing#55](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_9.cpp)]

Dopo l' `FireViewChange`aggiunta, ricompilare e riprovare il controllo nel contenitore di test del controllo ActiveX. Questa volta, quando si modifica il numero di lati e `Invoke`si fa clic su, il controllo verrà immediatamente visualizzato.

Nel passaggio successivo verrà aggiunto un evento.

[Tornare al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md) &#124; al [passaggio 5](../atl/adding-an-event-atl-tutorial-part-5.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)<br/>
[Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md)
