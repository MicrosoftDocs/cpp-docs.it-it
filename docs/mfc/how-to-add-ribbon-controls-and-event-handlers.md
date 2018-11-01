---
title: 'Procedura: aggiungere controlli Ribbon e gestori eventi'
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [MFC], adding
- ribbon controls [MFC], adding
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
ms.openlocfilehash: 7f5b85fad181dba147c2135784d237bccdceb422
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637996"
---
# <a name="how-to-add-ribbon-controls-and-event-handlers"></a>Procedura: aggiungere controlli Ribbon e gestori eventi

Controlli della barra multifunzione sono elementi, quali pulsanti e caselle combinate, che aggiungono ai pannelli. I pannelli sono aree della barra multifunzione che consentono di visualizzare un gruppo di controlli correlati.

In questo argomento, si verrà aprire la finestra di progettazione della barra multifunzione, aggiungere un pulsante e quindi collegare un evento che viene visualizzato "Hello World".

### <a name="to-open-the-ribbon-designer"></a>Per aprire la finestra di progettazione della barra multifunzione

1. In Visual Studio sul **View** menu, fare clic su **visualizzazione risorse**.

1. Nelle **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

### <a name="to-add-a-button-and-an-event-handler"></a>Per aggiungere un pulsante e un gestore eventi

1. Dal **sulla barra degli strumenti**, fare clic su **pulsante** e trascinarlo nell'area di progettazione un pannello.

1. Fare doppio clic sul pulsante e fare clic su **Aggiungi gestore**.

1. Nel **Creazione guidata gestore eventi**confermare le impostazioni predefinite e fare clic su **aggiungere e modificare**. Per altre informazioni, vedere [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).

1. Nell'editor del codice, aggiungere il codice seguente alla funzione di gestore:

```
    MessageBox((LPCTSTR)L"Hello World");

```

## <a name="see-also"></a>Vedere anche

[Esempio RibbonGadgets: Applicazione gadget della barra multifunzione](../visual-cpp-samples.md)<br/>
[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

