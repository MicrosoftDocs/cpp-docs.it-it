---
title: "CMutex Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "Mutex"
  - "CMutex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMutex class"
  - "mutex"
  - "classi di sincronizzazione, CMutex class"
  - "synchronization objects, mutex"
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMutex Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta "un'esclusione reciproca" — un oggetto di sincronizzazione che consente a un thread \- accesso esclusivo a una risorsa.  
  
## Sintassi  
  
```  
class CMutex : public CSyncObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMutex::CMutex](../Topic/CMutex::CMutex.md)|Costruisce un oggetto `CMutex`.|  
  
## Note  
 Mutex è utile quando un solo thread alla volta può essere consentito modificare i dati o un'altra risorsa controllata.  Ad esempio, aggiungere nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta.  Utilizzando un oggetto `CMutex` per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.  
  
 Per utilizzare un oggetto `CMutex`, costruire l'oggetto `CMutex` quando necessario.  Specificare il nome del mutex che si desidera attendere su e che l'applicazione deve inizialmente possederla.  È quindi possibile accedere al mutex al completamento del costruttore.  Chiamare [CSyncObject::Unlock](../Topic/CSyncObject::Unlock.md) al termine di accedere alla risorsa controllata.  
  
 Un metodo alternativo per gli oggetti `CMutex` è possibile aggiungere una variabile di tipo `CMutex` come un membro dati alla classe che si desidera controllare.  Durante la costruzione dell'oggetto selezionato, chiamare il costruttore specificare il membro dati `CMutex` se l'esclusione reciproca è inizialmente posseduta, il nome del mutex \(se verrà utilizzato oltre i limiti dei processi\) e gli attributi di sicurezza desiderati.  
  
 Per accedere alle risorse controllate dagli oggetti `CMutex` in questo modo, prima di creare una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o per immettere [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso delle risorse.  Chiamare la funzione membro `Lock` dell'oggetto di blocco \(ad esempio, [CSingleLock::Lock](../Topic/CSingleLock::Lock.md)\).  In questa fase, il thread accederà alla risorsa, attendere che la risorsa da rilasciare e accederà, o attenderà la risorsa da rilasciare e scaduto, non completate per accedere alla risorsa.  Tuttavia, la risorsa è stata accedere in modo thread\-safe.  Per rilasciare la risorsa, utilizzare la funzione membro `Unlock` dell'oggetto di blocco \(ad esempio, [CSingleLock::Unlock](../Topic/CSingleLock::Unlock.md)\), o consentire all'oggetto del blocco alla UIambito.  
  
 Per ulteriori informazioni sull'utilizzo degli oggetti `CMutex`, vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CMutex`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)