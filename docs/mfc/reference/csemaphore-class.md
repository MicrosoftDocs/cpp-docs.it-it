---
title: "CSemaphore Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSemaphore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSemaphore class"
  - "semafori"
  - "synchronization objects, semafori"
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CSemaphore Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un oggetto di classe `CSemaphore` "rappresenta un semaforo" — un oggetto di sincronizzazione che consente a un numero limitato di thread in uno o più processi accedere a un oggetto gestisce un conteggio del numero di thread attualmente che accedono a una risorsa specificata.  
  
## Sintassi  
  
```  
class CSemaphore : public CSyncObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSemaphore::CSemaphore](../Topic/CSemaphore::CSemaphore.md)|Costruisce un oggetto `CSemaphore`.|  
  
## Note  
 I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti.  Il conteggio corrente dell'oggetto `CSemaphore` è il numero di utenti aggiuntivi consentiti.  Quando il conteggio raggiunge lo zero, qualsiasi tentativo di utilizzare la risorsa controllata dall'oggetto **CSemaphore** verranno inseriti in una coda e di attesa del sistema finché non scadano o il conteggio aumentare superiore a 0.  Numero massimo di utenti che possono accedere alla risorsa controllata contemporaneamente viene specificato durante la costruzione dell'oggetto `CSemaphore`.  
  
 Per utilizzare un oggetto **CSemaphore** , costruire l'oggetto `CSemaphore` quando necessario.  Specificare il nome del semaforo che si desidera attendere su e che l'applicazione deve inizialmente possederla.  È quindi possibile accedere al semaforo al completamento del costruttore.  Chiamare [CSyncObject::Unlock](../Topic/CSyncObject::Unlock.md) al termine di accedere alla risorsa controllata.  
  
 Un metodo alternativo per gli oggetti `CSemaphore` è possibile aggiungere una variabile di tipo `CSemaphore` come un membro dati alla classe che si desidera controllare.  Durante la costruzione dell'oggetto selezionato, chiamare il costruttore del membro dati `CSemaphore` che specifica il numero di accesso iniziale, il massimo conteggio di accesso, il nome del semaforo \(se verrà utilizzato oltre i limiti dei processi\) e gli attributi di sicurezza desiderati.  
  
 Per accedere alle risorse controllate dagli oggetti `CSemaphore` in questo modo, prima di creare una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o per immettere [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso delle risorse.  Chiamare la funzione membro `Lock` dell'oggetto di blocco \(ad esempio, [CSingleLock::Lock](../Topic/CSingleLock::Lock.md)\).  In questa fase, il thread accederà alla risorsa, attendere che la risorsa da rilasciare e accederà, o attenderà la risorsa da rilasciare e scaduto, non completate per accedere alla risorsa.  Tuttavia, la risorsa è stata accedere in modo thread\-safe.  Per rilasciare la risorsa, utilizzare la funzione membro `Unlock` dell'oggetto di blocco \(ad esempio, [CSingleLock::Unlock](../Topic/CSingleLock::Unlock.md)\), o consentire all'oggetto del blocco alla UIambito.  
  
 In alternativa, è possibile creare un oggetto **CSemaphore** autonomo e lo si accede in modo esplicito prima di tentare di accedere alla risorsa controllata.  Questo metodo, mentre pulita che qualcuno che legge il codice sorgente, è ad errori più soggetto.  
  
 Per ulteriori informazioni su come utilizzare gli oggetti **CSemaphore** , vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CSemaphore`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)