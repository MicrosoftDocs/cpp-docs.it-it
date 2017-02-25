---
title: "Implementing CComObjectRootEx | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CComObjectRootEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectRoot class, implementazione"
  - "CComObjectRootEx class"
ms.assetid: 79630c44-f2df-4e9e-b730-400a0ebfbd2b
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Implementing CComObjectRootEx
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) è essenziale; tutti gli oggetti ATL devono avere un'istanza di `CComObjectRootEx` o [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) nell'ereditarietà.  `CComObjectRootEx` fornisce il meccanismo `QueryInterface` predefinito basato sulle voci della mappa COM.  
  
 Tramite la mappa COM, le interfacce di un oggetto vengono esposte a un client quando quest'ultimo esegue una query per un'interfaccia.  La query viene eseguita mediante `CComObjectRootEx::InternalQueryInterface`.  `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM.  
  
 È possibile immettere le interfacce nella tabella di mappe COM con la macro [COM\_INTERFACE\_ENTRY](../Topic/COM_INTERFACE_ENTRY%20\(ATL\).md) o una delle relative varianti.  Ad esempio, il codice seguente inserisce le interfacce `IDispatch`, `IBeeper` e `ISupportErrorInfo` nella tabella di mappe COM:  
  
 [!code-cpp[NVC_ATL_COM#1](../atl/codesnippet/CPP/implementing-ccomobjectrootex_1.h)]  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)   
 [COM Map Macros](../atl/reference/com-map-macros.md)