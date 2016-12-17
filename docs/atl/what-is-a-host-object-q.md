---
title: "What Is a Host Object? | Microsoft Docs"
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
  - "host objects"
ms.assetid: 4f8da992-b27e-45e8-b5e0-c8b1dcae4fac
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# What Is a Host Object?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto host è un oggetto COM che rappresenta il contenitore di controlli ActiveX fornito da ATL per una particolare finestra.  Le sottoclassi dell'oggetto host la finestra in modo da poter visualizzare i messaggi al controllo, contenitore fornisce le interfacce necessarie contenitore da utilizzare con il controllo ed espone le interfacce [IAxWinAmbientDispatch](../atl/reference/iaxwinambientdispatch-interface.md) e [IAxWinHostWindow](../atl/reference/iaxwinhostwindow-interface.md) per consentire di configurare l'ambiente del controllo.  
  
 È possibile utilizzare l'oggetto host per impostare le proprietà di ambiente del contenitore.  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)