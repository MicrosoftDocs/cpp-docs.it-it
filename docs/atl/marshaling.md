---
title: "Marshaling | Microsoft Docs"
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
  - "COM (interfacce), marshalling"
  - "marshalling"
  - "marshalling, interoperabilità COM"
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Marshaling
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tecnica COM di marshalling consente le interfacce esposte da un oggetto in un processo da utilizzare in un altro processo.  In, il marshalling COM fornisce il codice o utilizzato codice fornito da implementor interface\) sia per comprimere i parametri di un metodo in un formato che può essere spostato tra processi \(nonché, il responsabile i processi in esecuzione su altri computer\) e decomprimere i parametri collocata.  Inoltre, COM deve eseguire queste stesse operazioni a dopo la chiamata.  
  
> [!NOTE]
>  Il marshalling non è necessario in genere quando un'interfaccia fornita da un oggetto utilizzato nello stesso processo dell'oggetto.  Tuttavia, il marshalling può essere necessaria tra i thread.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Marshaling Details](http://msdn.microsoft.com/library/windows/desktop/ms692621)