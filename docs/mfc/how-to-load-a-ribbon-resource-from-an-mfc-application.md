---
title: "Procedura: Caricare una risorsa Ribbon da un'applicazione MFC"
ms.date: 11/04/2016
helpviewer_keywords:
- ribbon resource [MFC], loading
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
ms.openlocfilehash: b7691d4168101209b0e2d2500012a2b4a8e47788
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160328"
---
# <a name="how-to-load-a-ribbon-resource-from-an-mfc-application"></a>Procedura: Caricare una risorsa Ribbon da un'applicazione MFC

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
