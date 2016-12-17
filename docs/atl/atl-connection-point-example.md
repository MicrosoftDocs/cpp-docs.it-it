---
title: "ATL Connection Point Example | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "punti di connessione [C++], esempi"
  - "examples [ATL]"
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Connection Point Example
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato un oggetto che supporti [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) come interfaccia di output:  
  
 [!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/CPP/atl-connection-point-example_1.h)]  
  
 In specificare `IPropertyNotifySink` come interfaccia in uscita, è possibile utilizzare la classe [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) anziché `IConnectionPointImpl`.  Di seguito è riportato un esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/CPP/atl-connection-point-example_2.h)]  
  
## Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)