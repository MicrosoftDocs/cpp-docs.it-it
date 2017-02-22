---
title: "Introduzione a COM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM"
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Introduzione a COM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

COM è "modello a oggetti" fondamentali sui controlli ActiveX e OLE sono compilati.  COM consente a un oggetto di esporre le proprie funzionalità ad altri componenti e ad applicazioni host.  Definisce sia come oggetto che si espone il funzionamento di questa esposizione nei processi e nelle reti.  COM nonché il ciclo di vita dell'oggetto.  
  
 La base a COM è questi concetti:  
  
-   [interfacce](../atl/interfaces-atl.md) — il meccanismo in cui un oggetto espone la funzionalità.  
  
-   [IUnknown](../atl/iunknown.md) — l'interfaccia di base in cui tutti gli altri sono basati.  Implementa il conteggio dei riferimenti e l'interfaccia che interroga i meccanismi che passano COM.  
  
-   [Conteggio dei riferimenti](../atl/reference-counting.md) alla tecnica che un oggetto o, sia obbligatorio, un'interfaccia\) decide se più in uso e non è pertanto disponibile da rimuovere se stesso.  
  
-   [QueryInterface](../atl/queryinterface.md) al metodo utilizzato per eseguire query su un oggetto per un'interfaccia specificata.  
  
-   [Il marshalling](../atl/marshaling.md) — il meccanismo che consente agli oggetti da utilizzare nel thread, il processo e i limiti di rete, conservandone consentiti l'indipendenza di posizione.  
  
-   [aggregazione](../atl/aggregation.md) — modo in cui l'oggetto può utilizzare un altro.  
  
## Vedere anche  
 [Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)   
 [The Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)