---
title: "IUnknown | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IUnknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (interfacce), base interface"
  - "IUnknown interface"
ms.assetid: e6b85472-e54b-4b8c-b19f-4454d6c05a8f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# IUnknown
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) è l'interfaccia di base di qualsiasi altra interfaccia COM.  Questa interfaccia definisce tre metodi: [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521), [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317).  [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) consente a un utente dell'interfaccia di richiedere all'oggetto un puntatore a un'altra delle interfacce.  [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) implementano il conteggio dei riferimenti sull'interfaccia.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [IUnknown and Interface Inheritance](http://msdn.microsoft.com/library/windows/desktop/ms692713)