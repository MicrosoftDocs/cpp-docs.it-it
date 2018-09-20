---
title: "Procedura: caricare una risorsa Ribbon da un'applicazione MFC | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ribbon resource [MFC], loading
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1643989a96a9003847fb53de624bff12cd51cd88
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434291"
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

