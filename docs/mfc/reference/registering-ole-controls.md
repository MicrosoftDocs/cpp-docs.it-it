---
title: "Registrazione di controlli OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE (controlli), registrazione"
  - "registrazione di controlli OLE"
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Registrazione di controlli OLE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I controlli OLE, come gli altri server OLE oggetti, possono essere utilizzati da altre applicazioni con OLE.  A tale scopo registrazione della libreria dei tipi e la classe del controllo.  
  
 Le seguenti funzioni consentono di aggiungere e rimuovere la classe del controllo, pagine delle proprietà e la libreria dei tipi nel database di registrazione di windows:  
  
### Registrazione di controlli OLE  
  
|||  
|-|-|  
|[AfxOleRegisterControlClass](../Topic/AfxOleRegisterControlClass.md)|Aggiungere la classe del controllo al database di registrazione.|  
|[AfxOleRegisterPropertyPageClass](../Topic/AfxOleRegisterPropertyPageClass.md)|Aggiungere una pagina delle proprietà del controllo al database di registrazione.|  
|[AfxOleRegisterTypeLib](../Topic/AfxOleRegisterTypeLib.md)|Aggiunge la libreria dei tipi di controllo al database di registrazione.|  
|[AfxOleUnregisterClass](../Topic/AfxOleUnregisterClass.md)|Rimuove una classe del controllo o una classe della pagina delle proprietà del database di registrazione.|  
|[AfxOleUnregisterTypeLib](../Topic/AfxOleUnregisterTypeLib.md)|Rimuove la libreria dei tipi di controlli dal database di registrazione.|  
  
 `AfxOleRegisterTypeLib` in genere viene chiamato nell'implementazione di una DLL del controllo di `DllRegisterServer`.  Analogamente, `AfxOleUnregisterTypeLib` viene chiamato da `DllUnregisterServer`.  `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass` e `AfxOleUnregisterClass` in genere vengono chiamati dalla funzione membro di `UpdateRegistry` di class factory o della pagina delle proprietà di un controllo.  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)