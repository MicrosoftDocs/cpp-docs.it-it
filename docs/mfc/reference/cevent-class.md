---
title: "CEvent Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CEvent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEvent class"
  - "classi di sincronizzazione, CEvent class"
  - "synchronization objects, event"
ms.assetid: df676042-ce27-4702-800a-e73ff4f44395
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 29
---
# CEvent Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un evento, un oggetto di sincronizzazione che consente a un thread per notificare a un altro che un evento.  
  
## Sintassi  
  
```  
class CEvent : public CSyncObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEvent::CEvent](../Topic/CEvent::CEvent.md)|Costruisce un oggetto `CEvent`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEvent::PulseEvent](../Topic/CEvent::PulseEvent.md)|Imposta l'evento su disponibile \(segnalato\), le versioni thread in attesa e imposta l'evento su non disponibile \(non segnalato\).|  
|[CEvent::ResetEvent](../Topic/CEvent::ResetEvent.md)|Imposta l'evento su non disponibile \(non segnalato\).|  
|[CEvent::SetEvent](../Topic/CEvent::SetEvent.md)|Imposta l'evento su disponibile \(segnalato\) e versioni tutti i thread in attesa.|  
|[CEvent::Unlock](../Topic/CEvent::Unlock.md)|Rilascia l'oggetto evento.|  
  
## Note  
 Gli eventi sono utili quando un thread deve sapere quando eseguire la relativa attività.  Ad esempio, un thread che copia dei dati a un archivio dati deve ricevere una notifica quando i nuovi dati disponibili.  Utilizzando un oggetto `CEvent` per notificare alla copia thread quando i nuovi dati sono disponibili, il thread può eseguire la relativa attività il prima possibile.  
  
 Gli oggetti di`CEvent` dispongono di due tipi: manuale e automatico.  
  
 Restituisce automatici di un oggetto `CEvent` automaticamente a uno stato non disponibile\) non segnalato almeno un thread viene rilasciato.  Per impostazione predefinita, un oggetto `CEvent` è automatico a meno che non venga passato `TRUE` per il parametro `bManualReset` durante la costruzione.  
  
 Un oggetto `CEvent` manuali rimane nello stato impostato da [SetEvent](../Topic/CEvent::SetEvent.md) o da [ResetEvent](../Topic/CEvent::ResetEvent.md) fino a chiamare un'altra funzione.  Per creare un oggetto manuale `CEvent`, passare `TRUE` per il parametro `bManualReset` durante la costruzione.  
  
 Per utilizzare un oggetto `CEvent`, costruire l'oggetto `CEvent` quando necessario.  Specificare il nome dell'evento che si desidera attendere su e specificare che l'applicazione deve inizialmente possederla.  È quindi possibile accedere all'evento al completamento del costruttore.  Chiamare [SetEvent](../Topic/CEvent::SetEvent.md) per segnalare \(rendere\) l'oggetto evento e quindi chiamare [Sblocca](../Topic/CEvent::Unlock.md) al termine di accedere alla risorsa controllata.  
  
 Un metodo alternativo per gli oggetti `CEvent` è possibile aggiungere una variabile di tipo `CEvent` come un membro dati alla classe che si desidera controllare.  Durante la costruzione dell'oggetto selezionato, chiamare il costruttore del membro dati `CEvent` e specificare se l'evento è inizialmente segnalato nonché tipo di specifythe di oggetto evento desiderato, il nome dell'evento \(se verrà utilizzato oltre i limiti dei processi\) e di tutti gli attributi di sicurezza desiderate.  
  
 Per accedere a una risorsa controllata da un oggetto `CEvent` in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o digitare [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso alla risorsa.  Chiamare il metodo `Lock` dell'oggetto di blocco \(ad esempio, [CMultiLock::Lock](../Topic/CMultiLock::Lock.md)\).  In questa fase, il thread o accederà alla risorsa, attendere che la risorsa da rilasciare e accederà, o attendere che la risorsa da rilasciare, è scaduto e non riesce ad accedere alla risorsa.  Tuttavia, la risorsa è stata accedere in modo thread\-safe.  Per rilasciare la risorsa, chiamare `SetEvent` per segnalare l'oggetto evento e quindi il metodo `Unlock` dell'oggetto di blocco \(ad esempio, [CMultiLock::Unlock](../Topic/CMultiLock::Unlock.md), oppure lasciare il blocco nella UIambito.  
  
 Per ulteriori informazioni su come utilizzare gli oggetti `CEvent`, vedere [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Esempio  
 [!code-cpp[NVC_MFC_Utilities#45](../../mfc/codesnippet/CPP/cevent-class_1.cpp)]  
  
 [!code-cpp[NVC_MFC_Utilities#46](../../mfc/codesnippet/CPP/cevent-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CEvent`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)