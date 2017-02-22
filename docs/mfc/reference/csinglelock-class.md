---
title: "CSingleLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSingleLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSingleLock class"
  - "synchronization objects, controllo dell'accesso"
  - "threading [MFC], controllo dell'accesso"
  - "threading [MFC], sincronizzazione"
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CSingleLock Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso a una risorsa di un programma multithread.  
  
## Sintassi  
  
```  
  
class CSingleLock  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSingleLock::CSingleLock](../Topic/CSingleLock::CSingleLock.md)|Costruisce un oggetto `CSingleLock`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSingleLock::IsLocked](../Topic/CSingleLock::IsLocked.md)|Determina se l'oggetto è bloccato.|  
|[CSingleLock::Lock](../Topic/CSingleLock::Lock.md)|Attende su un oggetto di sincronizzazione.|  
|[CSingleLock::Unlock](../Topic/CSingleLock::Unlock.md)|Rilascia un oggetto di sincronizzazione.|  
  
## Note  
 `CSingleLock` non dispone di una classe base.  
  
 Per utilizzare le classi [CSemaphore](../../mfc/reference/csemaphore-class.md)di sincronizzazione, [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è necessario creare `CSingleLock` o l'oggetto [CMultiLock](../../mfc/reference/cmultilock-class.md) all'attesa e rilasciare l'oggetto di sincronizzazione.  Utilizzare `CSingleLock` solo quando è necessario attendere su un oggetto alla volta.  Utilizzare **CMultiLock** quando sono presenti più oggetti utilizzabili in un determinato momento.  
  
 Per utilizzare un oggetto `CSingleLock`, chiamare il costruttore in una funzione membro nella classe delle risorse archiviate.  Chiamare la funzione membro [IsLocked](../Topic/CSingleLock::IsLocked.md) per determinare se la risorsa è disponibile.  Se è, procedere con il resto della funzione membro.  Se la risorsa non è disponibile, attendere una quantità di tempo specificato per la risorsa venga rilasciato, o errore di ritorno.  La dalla risorsa è completa, qualsiasi chiamata la funzione [Sblocca](../Topic/CSingleLock::Unlock.md) se l'oggetto `CSingleLock` deve essere riutilizzato, o modo l'oggetto `CSingleLock` da eliminato.  
  
 Gli oggetti di`CSingleLock` richiedono la presenza di un oggetto derivato da [CSyncObject](../../mfc/reference/csyncobject-class.md).  Questo rappresenta in genere un membro dati di una classe di risorse archiviate.  Per ulteriori informazioni su come utilizzare gli oggetti `CSingleLock`, vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 `CSingleLock`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMultiLock Class](../../mfc/reference/cmultilock-class.md)