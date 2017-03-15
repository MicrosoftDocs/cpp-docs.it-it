---
title: "Using a Template Library | Microsoft Docs"
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
  - "template libraries"
ms.assetid: 5e80ec6e-a61c-41ce-b34b-9a6252c46265
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Using a Template Library
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un modello è come una macro.  Come con una macro, richiamare un modello determina per espandere \(con la sostituzione dei parametri appropriata\) per creano impiegati.  Tuttavia, un modello va ulteriormente di questo consentire la creazione di nuove classi basate su tipi passati come parametri.  Queste nuove classi implementano le modalità indipendente dai tipi di eseguire l'operazione espressa nel codice del modello.  
  
 Le librerie del modello come ATL differiscono dalle librerie di classi tradizionali C\+\+ in che in genere vengono fornite solo come codice sorgente \(o come codice sorgente con un massimo, runtime di supporto\) e non sono implicitamente o necessariamente gerarchiche di natura.  Anziché derivazione da una classe per la creazione della funzionalità desidera, è possibile creare un'istanza di una classe da un modello.  
  
## Vedere anche  
 [Introduzione a ATL](../atl/introduction-to-atl.md)