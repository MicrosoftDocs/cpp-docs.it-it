---
title: "Connecting a Pop-up Menu to Your Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pop-up menus, connecting to applications"
  - "context menus, connecting to applications"
  - "menus, pop-up"
  - "shortcut menus, connecting to applications"
ms.assetid: 295cbf0e-6416-478e-bc3d-472fb98e0e52
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Connecting a Pop-up Menu to Your Application
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

### Per connettere un menu a comparsa all'applicazione  
  
1.  Aggiungere un gestore messaggi per [WM\_CONTEXTMENU](_win32_WM_CONTEXTMENU) \(ad esempio\).  Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
2.  Aggiungere al gestore messaggio il codice seguente:  
  
    ```  
    CMenu menu;  
    VERIFY(menu.LoadMenu(IDR_MENU1));  
    CMenu* pPopup = menu.GetSubMenu(0);  
    ASSERT(pPopup != NULL);  
    pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, AfxGetMainWnd());  
    ```  
  
    > [!NOTE]
    >  [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  **passato dal gestore messaggi è presente nelle coordinate dello schermo.**  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 MFC  
  
## Vedere anche  
 [Creating Pop\-up Menus](../windows/creating-pop-up-menus.md)   
 [Menu Editor](../mfc/menu-editor.md)   
 [Menu](_win32_Menus)