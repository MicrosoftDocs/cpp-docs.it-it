---
title: "2.6.2 critical Construct | Microsoft Docs"
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
ms.assetid: c46ecd00-b4a2-4a5e-ba92-288c329e773a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.2 critical Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**critico** la direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un singolo thread alla volta.  La sintassi di **critico** la direttiva è la seguente:  
  
```  
#pragma omp critical [(name)]  new-line  
   structured-block  
```  
  
 un facoltativo *nome* può essere utilizzato per identificare l'area critica.  Gli identificatori utilizzati per identificare un'area critica dispongono di collegamento esterno e sono in uno spazio dei nomi che è separato dagli spazi dei nomi utilizzati dalle etichette, i tag, dai membri e dagli identificatori comuni.  
  
 Resta in attesa di un thread all'inizio di un'area critica fino a nessun altro thread esegue un'area critica \(in qualsiasi punto del programma\) con lo stesso nome.  Qualsiasi senza nome **critico** le direttive eseguono il mapping allo stesso nome non specificato.