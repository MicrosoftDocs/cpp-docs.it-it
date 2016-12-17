---
title: "Attribuzione della non creabilit&#224; a un oggetto ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.objects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), oggetti non creabili"
  - "oggetti ATL non creabili"
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attribuzione della non creabilit&#224; a un oggetto ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile modificare gli attributi di un oggetto COM basato su ATL in modo che non possa essere creato direttamente da un client.  In questo caso, anziché essere creato direttamente, l'oggetto può essere restituito mediante una chiamata di metodo su un altro oggetto.  
  
### Per attribuire la non creabilità a un oggetto  
  
1.  Rimuovere [OBJECT\_ENTRY\_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) per l'oggetto.  Se si desidera rendere l'oggetto non creabile consentendo tuttavia la registrazione del controllo, è possibile sostituire OBJECT\_ENTRY\_AUTO con [OBJECT\_ENTRY\_NON\_CREATEABLE\_EX\_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md).  
  
2.  Aggiungere l'attributo [noncreatable](../../windows/noncreatable.md) alla coclasse nel file IDL.  Ad esempio:  
  
    ```  
    [  
       uuid(A1992E3D-3CF0-11D0-826F-00A0C90F2851),  
       helpstring("MyObject"),  
      noncreatable  
    ]  
    coclass MyObject  
    {  
       [default] interface IMyInterface;  
    }  
    ```  
  
## Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)