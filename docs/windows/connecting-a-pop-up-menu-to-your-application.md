---
title: La connessione di un Menu a comparsa all'applicazione C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- pop-up menus [C++], connecting to applications
- context menus [C++], connecting to applications
- menus [C++], pop-up
- shortcut menus [C++], connecting to applications
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f1ebb5e2151fe770e6a59210ac564237155fafd4
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412080"
---
# <a name="connecting-a-pop-up-menu-to-your-c-application"></a>La connessione di un Menu a comparsa all'applicazione C++

### <a name="to-connect-a-pop-up-menu-to-your-application"></a>Per connettere un menu a comparsa all'applicazione

1. Aggiungere un gestore di messaggi per WM_CONTEXTMENU (ad esempio). Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

2. Aggiungere al gestore messaggio il codice seguente:

    ```cpp
    CMenu menu;
    VERIFY(menu.LoadMenu(IDR_MENU1));
    CMenu* pPopup = menu.GetSubMenu(0);
    ASSERT(pPopup != NULL);
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());
    ```

   > [!NOTE]
   > Il [CPoint](../atl-mfc-shared/reference/cpoint-class.md) passato per il messaggio di gestore di è in coordinate dello schermo.

## <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[Creazione di menu di scelta rapida](../windows/creating-pop-up-menus.md)<br/>
[Editor dei menu](../windows/menu-editor.md)  