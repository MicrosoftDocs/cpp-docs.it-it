---
title: "Procedura: caricare una risorsa Ribbon da un'applicazione MFC"
ms.date: 11/04/2016
helpviewer_keywords:
- ribbon resource [MFC], loading
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
ms.openlocfilehash: 14ba37952d6f8849c51b36901a6bc17404f938e2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50515154"
---
# <a name="how-to-load-a-ribbon-resource-from-an-mfc-application"></a>Procedura: caricare una risorsa Ribbon da un'applicazione MFC

Per utilizzare la risorsa Ribbon nell'applicazione, modificare l'applicazione per caricare la risorsa Ribbon.

### <a name="to-load-a-ribbon-resource"></a>Per caricare una risorsa Ribbon

1. Dichiarare l'oggetto `Ribbon Control` nella classe `CMainFrame`.

```
    CMFCRibbonBar m_wndRibbonBar;
```

1. In `CMainFrame::OnCreate` creare e inizializzare il controllo Barra multifunzione.

```
    if (!m_wndRibbonBar.Create (this))
{
    return -1;
}

    if (!m_wndRibbonBar.LoadFromResource(IDR_RIBBON))
{
    return -1;
}
```

## <a name="see-also"></a>Vedere anche

[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

