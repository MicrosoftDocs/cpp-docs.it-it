---
title: "Procedura: caricare una risorsa Ribbon da un'applicazione MFC | Documenti Microsoft"
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
ms.openlocfilehash: b014e1725ae6c5043c051242a74e29338c3ef2d6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-load-a-ribbon-resource-from-an-mfc-application"></a>Procedura: caricare una risorsa Ribbon da un'applicazione MFC
Per utilizzare la risorsa Ribbon nell'applicazione, modificare l'applicazione per caricare la risorsa Ribbon.  
  
### <a name="to-load-a-ribbon-resource"></a>Per caricare una risorsa Ribbon  
  
1.  Dichiarare l'oggetto `Ribbon Control` nella classe `CMainFrame`.  
  
 ```  
    CMFCRibbonBar m_wndRibbonBar;   
 ```  
  
2.  In `CMainFrame::OnCreate` creare e inizializzare il controllo Barra multifunzione.  
  
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

