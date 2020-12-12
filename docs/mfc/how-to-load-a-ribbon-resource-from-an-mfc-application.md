---
description: "Altre informazioni su: procedura: caricare una risorsa Ribbon da un'applicazione MFC"
title: "Procedura: caricare una risorsa Ribbon da un'applicazione MFC"
ms.date: 11/04/2016
helpviewer_keywords:
- ribbon resource [MFC], loading
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
ms.openlocfilehash: 231acbd475bf84b2623eb44f9a3500ab94145d06
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330188"
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

## <a name="see-also"></a>Vedi anche

[Finestra di progettazione della barra multifunzione (MFC)](ribbon-designer-mfc.md)
