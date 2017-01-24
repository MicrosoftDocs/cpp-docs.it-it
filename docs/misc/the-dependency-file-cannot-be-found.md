---
title: "The dependency &#39;file&#39; cannot be found | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.supdepnotfound"
ms.assetid: a0e6e658-c723-40da-8275-fa212165bd7d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The dependency &#39;file&#39; cannot be found
Uno dei riferimenti del progetto contiene un riferimento \(dipendenza\) che non è stato possibile individuare.  
  
 Durante l'inserimento in un progetto incluso nel controllo del codice sorgente, è possibile che alcune dipendenze non vengano risolte nel computer  in quanto la proprietà del percorso dei riferimenti è una proprietà specifica del computer e non è quindi inclusa nel controllo del codice sorgente.  
  
### Per correggere l'errore  
  
1.  Individuare sul disco il riferimento all'assembly indicato e modificare la proprietà del percorso dei riferimenti.  
  
2.  Se non si riesce a individuare il file di assembly sul disco, sarà necessario reinstallare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o eventuali controlli personalizzati di terze parti nel caso in cui sia impossibile individuare le dipendenze dell'assembly sul disco.  Inoltre, durante l'inserimento in un progetto incluso nel controllo del codice sorgente, sarà necessario installare eventuali controlli di terze parti richiesti dal progetto.  
  
 L'errore non impedirà la compilazione del progetto.  È possibile tuttavia che durante l'esecuzione dell'applicazione venga generata un'eccezione TypeLoadException.  La dipendenza interessata inoltre non verrà fornita nel processo di distribuzione.  
  
 È possibile visualizzare i riferimenti del progetto nel nodo **Riferimenti** di Esplora soluzioni.  
  
## Vedere anche  
 [NIB: Reference Paths Dialog Box \(Visual Basic\)](http://msdn.microsoft.com/it-it/8e549b39-7256-456a-8fd7-089b23facf9c)