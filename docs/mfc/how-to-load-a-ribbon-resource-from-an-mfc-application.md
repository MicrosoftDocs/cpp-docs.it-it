---
title: "Procedura: caricare una risorsa Ribbon da un&#39;applicazione MFC | Microsoft Docs"
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
  - "barra multifunzione (risorsa), caricamento"
ms.assetid: 1c76bb8f-6345-414a-9f3f-128815ceadc5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Procedura: caricare una risorsa Ribbon da un&#39;applicazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare la risorsa della barra multifunzione nell'applicazione, modificare l'applicazione per caricare le risorse della barra multifunzione.  
  
### Per caricare una risorsa barra multifunzione  
  
1.  Dichiarare l'oggetto `Ribbon Control` nella classe `CMainFrame`.  
  
    ```  
    CMFCRibbonBar m_wndRibbonBar;   
    ```  
  
2.  In `CMainFrame::OnCreate`, creare e inizializzare il controllo della barra multifunzione.  
  
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
  
## Vedere anche  
 [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md)