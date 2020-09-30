---
title: 'Procedura: aggiungere controlli Ribbon e gestori eventi'
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [MFC], adding
- ribbon controls [MFC], adding
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
ms.openlocfilehash: d6382c8ebf73fe7a26b3950cc1965b229c22dbb7
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91501223"
---
# <a name="how-to-add-ribbon-controls-and-event-handlers"></a>Procedura: aggiungere controlli Ribbon e gestori eventi

I controlli della barra multifunzione sono elementi, ad esempio pulsanti e caselle combinate, aggiunti ai pannelli. I pannelli sono aree della barra multifunzione che visualizzano un gruppo di controlli correlati.

In questo argomento viene aperta la finestra di progettazione della barra multifunzione, viene aggiunto un pulsante, quindi viene collegato un evento che Visualizza "Hello World".

### <a name="to-open-the-ribbon-designer"></a>Per aprire la finestra di progettazione della barra multifunzione

1. In Visual Studio scegliere **visualizzazione risorse**dal menu **Visualizza** .

1. In **visualizzazione risorse**fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

### <a name="to-add-a-button-and-an-event-handler"></a>Per aggiungere un pulsante e un gestore eventi

1. Sulla **barra degli strumenti**fare clic sul **pulsante** e trascinarlo su un pannello nell'area di progettazione.

1. Fare clic con il pulsante destro del mouse sul pulsante e scegliere **Aggiungi gestore eventi**.

1. Nella **creazione guidata gestore eventi**, confermare le impostazioni predefinite e fare clic su **Aggiungi e modifica**. Per ulteriori informazioni, vedere [creazione guidata gestore eventi](../ide/adding-an-event-handler-visual-cpp.md#event-handler-wizard).

1. Nell'editor di codice aggiungere il codice seguente nella funzione del gestore:

```
    MessageBox((LPCTSTR)L"Hello World");
```

## <a name="see-also"></a>Vedere anche

[Esempio RibbonGadgets: applicazione di gadget della barra multifunzione](../overview/visual-cpp-samples.md)<br/>
[Finestra di progettazione della barra multifunzione (MFC)](ribbon-designer-mfc.md)
