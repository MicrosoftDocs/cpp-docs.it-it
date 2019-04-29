---
title: 'Procedura: Aggiungere controlli Ribbon e gestori di eventi'
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [MFC], adding
- ribbon controls [MFC], adding
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
ms.openlocfilehash: c21e8b86962ebf37ca1a06bae056d09b9a9dbb2f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62389515"
---
# <a name="how-to-add-ribbon-controls-and-event-handlers"></a>Procedura: Aggiungere controlli Ribbon e gestori di eventi

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

[Esempio RibbonGadgets: Applicazione gadget della barra multifunzione](../overview/visual-cpp-samples.md)<br/>
[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)
