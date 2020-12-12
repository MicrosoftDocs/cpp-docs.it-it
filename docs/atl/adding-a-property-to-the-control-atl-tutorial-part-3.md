---
description: 'Altre informazioni su: aggiunta di una proprietà al controllo (esercitazione di ATL, parte 3)'
title: Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)
ms.custom: get-started-article
ms.date: 09/26/2018
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
ms.openlocfilehash: 22a44b6878afd6d51fb396d8f02a60e93436cf05
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166330"
---
# <a name="adding-a-property-to-the-control-atl-tutorial-part-3"></a>Aggiunta di una proprietà al controllo (Esercitazione di ATL, parte 3)

`IPolyCtl` è l'interfaccia che contiene le proprietà e i metodi personalizzati del controllo e si aggiungerà una proprietà.

### <a name="to-add-the-property-definitions-to-your-project"></a>Per aggiungere le definizioni di proprietà al progetto

1. In **Visualizzazione classi** espandere il `Polygon` ramo.

1. Fare clic con il pulsante destro del mouse `IPolyCtl` .

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**. Verrà visualizzata l' **Aggiunta guidata proprietà** .

1. Digitare `Sides` come **nome della proprietà**.

1. Nell'elenco a discesa del tipo di **Proprietà** selezionare **`short`** .

1. Fare clic su **OK** per completare l'aggiunta della proprietà.

1. Da **Esplora soluzioni** aprire Polygon. idl e sostituire le righe seguenti alla fine dell' `IPolyCtl : IDispatch` interfaccia:

    ```cpp
    short get_Sides();
    void set_Sides(short value);
    ```

    con

    ```cpp
    [propget, id(1), helpstring("property Sides")] HRESULT Sides([out, retval] short *pVal);
    [propput, id(1), helpstring("property Sides")] HRESULT Sides([in] short newVal);
    ```

1. Da **Esplora soluzioni** aprire PolyCtl. h e aggiungere le righe seguenti dopo la definizione di `m_clrFillColor` :

    [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]

Sebbene ora siano disponibili funzioni di ossatura per impostare e recuperare la proprietà e una variabile per archiviare la proprietà, è necessario implementare le funzioni di conseguenza.

### <a name="to-update-the-get-and-put-methods"></a>Per aggiornare i metodi get e put

1. Impostare il valore predefinito di `m_nSides` . Rendere la forma predefinita un triangolo aggiungendo una riga al costruttore in PolyCtl. h:

    [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]

1. Implementare i `Get` `Put` metodi e. Le `get_Sides` `put_Sides` dichiarazioni di funzione e sono state aggiunte a PolyCtl. h. A questo punto aggiungere il codice per `get_Sides` e `put_Sides` a PolyCtl. cpp con quanto segue:

    [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]

Il `get_Sides` metodo restituisce il valore corrente della `Sides` proprietà tramite il `pVal` puntatore. Nel `put_Sides` metodo, il codice assicura che l'utente stia impostando la `Sides` proprietà su un valore accettabile. Il valore minimo deve essere 3 e, poiché viene usata una matrice di punti per ogni lato, 100 è un limite ragionevole per un valore massimo.

A questo punto è disponibile una proprietà denominata `Sides` . Nel passaggio successivo verrà modificato il codice di disegno per usarlo.

[Tornare al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; al [passaggio 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)

## <a name="see-also"></a>Vedi anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
