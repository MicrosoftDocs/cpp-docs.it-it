---
title: "CMultiLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiLock class"
  - "synchronization objects, controllo dell'accesso"
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CMultiLock Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta il meccanismo di controllo di accesso utilizzato per controllare l'accesso alle risorse di un programma multithread.  
  
## Sintassi  
  
```  
class CMultiLock  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiLock::CMultiLock](../Topic/CMultiLock::CMultiLock.md)|Costruisce un oggetto `CMultiLock`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiLock::IsLocked](../Topic/CMultiLock::IsLocked.md)|Determina se un oggetto di sincronizzazione specifico della matrice è bloccato.|  
|[CMultiLock::Lock](../Topic/CMultiLock::Lock.md)|Attende la matrice di oggetti di sincronizzazione.|  
|[CMultiLock::Unlock](../Topic/CMultiLock::Unlock.md)|Rilascia tutti gli oggetti di sincronizzazione di proprietà.|  
  
## Note  
 `CMultiLock` non dispone di una classe base.  
  
 Per utilizzare le classi [CSemaphore](../../mfc/reference/csemaphore-class.md)di sincronizzazione, [CMutex](../../mfc/reference/cmutex-class.md)e [CEvent](../../mfc/reference/cevent-class.md), è possibile creare un oggetto [CSingleLock](../../mfc/reference/csinglelock-class.md) o **CMultiLock** all'attesa e rilasciare l'oggetto di sincronizzazione.  Utilizzare **CMultiLock** quando sono presenti più oggetti utilizzabili in un determinato momento.  Utilizzare `CSingleLock` solo quando è necessario attendere su un oggetto alla volta.  
  
 Per utilizzare un oggetto **CMultiLock** , creare innanzitutto una matrice di oggetti di sincronizzazione che si desidera attesa.  Successivamente, chiamare il costruttore dell'oggetto **CMultiLock** in una funzione membro nella classe delle risorse archiviate.  Chiamare la funzione membro [blocco](../Topic/CMultiLock::Lock.md) per determinare se una risorsa è disponibile \(segnalato\).  Se una proprietà è, procedere con il resto della funzione membro.  Se non esiste alcuna risorsa disponibile, aspetti una quantità di tempo specificato per una risorsa vengano rilasciati, o restituire l'errore.  Dalla di una risorsa è completa, qualsiasi chiamata la funzione [Sblocca](../Topic/CMultiLock::Unlock.md) se l'oggetto **CMultiLock** deve essere riutilizzato, o modo l'oggetto **CMultiLock** da eliminato.  
  
 Gli oggetti di**CMultiLock** sono particolarmente utili quando un thread dispone di un numero elevato di oggetti `CEvent` può rispondere.  Creare una matrice che contiene tutti i puntatori `CEvent` e chiamare `Lock`.  In questo modo il thread in attesa finché non viene segnalato uno degli eventi.  
  
 Per ulteriori informazioni su come utilizzare gli oggetti **CMultiLock** , vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 `CMultiLock`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)