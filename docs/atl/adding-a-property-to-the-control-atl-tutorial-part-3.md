---
title: Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)
ms.custom: get-started-article
ms.date: 09/26/2018
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
ms.openlocfilehash: b5f9f9c8fde44dd67a9a05aeae0f91fb7b5f2f4d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252606"
---
# <a name="adding-a-property-to-the-control-atl-tutorial-part-3"></a>Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)

`IPolyCtl` l'interfaccia che contiene i metodi di controllo personalizzato e le proprietà e verrà aggiunta una proprietà.

### <a name="to-add-the-property-definitions-to-your-project"></a>Per aggiungere le definizioni di proprietà al progetto

1. Nelle **Visualizzazione classi**, espandere il `Polygon` ramo.

1. Fare doppio clic su `IPolyCtl`.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi proprietà**. Il **Aggiungi proprietà** procedura guidata verrà visualizzata.

1. Tipo di `Sides` come il **nome proprietà**.

1. Nell'elenco di riepilogo a discesa **tipo di proprietà**, selezionare `short`.

1. Fare clic su **OK** per completare l'aggiunta della proprietà.

1. Dal **Esplora soluzioni**aprire Polygon. idl e sostituire le righe seguenti alla fine del `IPolyCtl : IDispatch` interfaccia:

    ```cpp
    short get_Sides();
    void set_Sides(short value);
    ```

    con

    ```cpp
    [propget, id(1), helpstring("property Sides")] HRESULT Sides([out, retval] short *pVal);
    [propput, id(1), helpstring("property Sides")] HRESULT Sides([in] short newVal);
    ```

1. Dal **Esplora soluzioni**aprire PolyCtl. H e aggiungere le righe seguenti dopo la definizione di `m_clrFillColor`:

    [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]

Anche se ora si dispone di funzioni di base per impostare e recuperare proprietà e una variabile per archiviare la proprietà, è necessario implementare le funzioni di conseguenza.

### <a name="to-update-the-get-and-put-methods"></a>Per aggiornare get e put metodi

1. Impostare il valore predefinito di `m_nSides`. Impostare come predefinito un triangolo come forma mediante l'aggiunta di una riga del costruttore in PolyCtl. H:

    [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]

1. Implementare il `Get` e `Put` metodi. Il `get_Sides` e `put_Sides` dichiarazioni di funzione sono stati aggiunti a PolyCtl. H. A questo punto aggiungere il codice per `get_Sides` e `put_Sides` a PolyCtl. cpp con il codice seguente:

    [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]

Il `get_Sides` metodo viene restituito il valore corrente del `Sides` proprietà tramite la `pVal` puntatore. Nel `put_Sides` metodo, il codice verifica l'impostazione di `Sides` proprietà su un valore accettabile. Il valore minimo deve essere 3, e poiché verrà utilizzata una matrice di punti per ogni lato, 100 è un ragionevole limite per un valore massimo.

Ora è una proprietà denominata `Sides`. Nel passaggio successivo, si modificherà il codice di disegno per usarlo.

[Tornare al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [al passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
