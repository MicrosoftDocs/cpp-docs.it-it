---
title: "Impossibile connettere l&#39;applicazione a istanza singola con l&#39;istanza originale | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrAppModel_SingleInstanceCantConnect"
ms.assetid: 7c2c0cee-02a1-4157-be03-39d18e18408f
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile connettere l&#39;applicazione a istanza singola con l&#39;istanza originale
Impossibile connettere l'applicazione a istanza singola con l'istanza originale. Alcune possibili cause di questo problema sono le seguenti:  
  
-   L'istanza originale attualmente non risponde.  
  
-   L'applicazione non dispone di autorizzazioni per la creazione di oggetti del kernel. Per altre informazioni sugli oggetti kernel, vedere [Mutexes](../Topic/Mutexes.md).  
  
     Il nome base degli oggetti del kernel deriva dalla concatenazione del GUID dell'assembly, del numero di versione principale e del numero di versione secondario. Il nome base ad esempio potrebbe essere `3639f15d-9547-43da-8145-60da347829915.1`.  
  
### Per correggere questo errore quando si sviluppa l'applicazione  
  
1.  Verificare che l'applicazione non passi allo stato di non reattività.  
  
2.  Verificare che l'applicazione abbia autorizzazioni sufficienti per creare oggetti kernel.  
  
3.  Riavviare l'istanza originale dell'applicazione.  
  
4.  Riavviare il computer per cancellare i processi che stanno usando la risorsa necessaria per la connessione all'istanza originale.  
  
5.  Prendere nota delle circostanze in cui si è verificato l'errore e chiamare il Servizio supporto tecnico Microsoft.  
  
## Vedere anche  
 [NIB Procedura: Specificare il comportamento della creazione di istanze per un'applicazione \(Visual Basic\)](http://msdn.microsoft.com/it-it/48539ad8-d960-4210-beab-ee65f6c6dc6e)   
 [Nozioni di base sul debugger](../Topic/Debugger%20Basics.md)   
 [PAVEOVER Supporto tecnico e accessibilità](http://msdn.microsoft.com/it-it/14e1d293-7b6d-40a6-bf3e-a92f8ee6c88c)