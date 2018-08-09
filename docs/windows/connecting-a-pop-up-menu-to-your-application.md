---
title: La connessione di un Menu a comparsa all'applicazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- pop-up menus, connecting to applications
- context menus, connecting to applications
- menus, pop-up
- shortcut menus, connecting to applications
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5bfe5c4dba3dc8e86eb9a47a6e163af94872b933
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641262"
---
# <a name="connecting-a-pop-up-menu-to-your-application"></a>Connessione di un menu di scelta rapida all'applicazione
### <a name="to-connect-a-pop-up-menu-to-your-application"></a>Per connettere un menu a comparsa all'applicazione  
  
1.  Aggiungere un gestore di messaggi per WM_CONTEXTMENU (ad esempio). Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
2.  Aggiungere al gestore messaggio il codice seguente:  
  
    ```cpp  
    CMenu menu;  
    VERIFY(menu.LoadMenu(IDR_MENU1));  
    CMenu* pPopup = menu.GetSubMenu(0);  
    ASSERT(pPopup != NULL);  
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());  
    ```  
  
    > [!NOTE]
    >  Il [CPoint](../atl-mfc-shared/reference/cpoint-class.md) passato per il messaggio di gestore di è in coordinate dello schermo.  
  
## <a name="requirements"></a>Requisiti  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di menu a comparsa](../windows/creating-pop-up-menus.md)   
 [Editor dei menu](../windows/menu-editor.md)   