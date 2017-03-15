---
title: "Creating an Aggregated Object | Microsoft Docs"
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
  - "aggregate objects [C++], creazione"
  - "aggregation [C++], creating aggregated objects"
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Creating an Aggregated Object
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'aggregazione delega le chiamate **IUnknown**, fornendo un puntatore a **IUnknown** esterno dell'oggetto interno.  
  
### Per creare un oggetto aggregato  
  
1.  Aggiungere un puntatore **IUnknown** all'oggetto di classe e inizializzarlo a **NULL** nel costruttore.  
  
2.  Override [FinalConstruct](../Topic/CComObjectRootEx::FinalConstruct.md) per creare aggregato.  
  
3.  Posizionare il puntatore **IUnknown**, definito nel passaggio 1, come secondo parametro per le macro [COM\_INTERFACE\_ENTRY\_AGGREGATE](../Topic/COM_INTERFACE_ENTRY_AGGREGATE.md).  
  
4.  Override [FinalRelease](../Topic/CComObjectRootEx::FinalRelease.md) per rilasciare il puntatore **IUnknown**.  
  
> [!NOTE]
>  Se si utilizza e rilasciate un'interfaccia dall'oggetto aggregato durante `FinalConstruct`, è necessario aggiungere la macro [DECLARE\_PROTECT\_FINAL\_CONSTRUCT](../Topic/DECLARE_PROTECT_FINAL_CONSTRUCT.md) alla definizione dell'oggetto di classe.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)