---
title: "CCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCriticalSection class"
  - "critical sections"
  - "classi di sincronizzazione, CCriticalSection class"
  - "synchronization objects, critical section"
ms.assetid: f776f74b-5b0b-4f32-9c13-2b8e4a0d7b2b
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una sezione critica" — un oggetto di sincronizzazione che consente a un thread per volta l'accesso a una risorsa o una sezione di codice.  
  
## Sintassi  
  
```  
class CCriticalSection : public CSyncObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::CCriticalSection](../Topic/CCriticalSection::CCriticalSection.md)|Costruisce un oggetto `CCriticalSection`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::Lock](../Topic/CCriticalSection::Lock.md)|Utilizzare per accedere all'oggetto `CCriticalSection`.|  
|[CCriticalSection::Unlock](../Topic/CCriticalSection::Unlock.md)|Rilascia l'oggetto `CCriticalSection`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::operator CRITICAL\_SECTION\*](../Topic/CCriticalSection::operator%20CRITICAL_SECTION*.md)|Recupera un puntatore all'interno **CRITICAL\_SECTION**.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCriticalSection::m\_sect](../Topic/CCriticalSection::m_sect.md)|Un oggetto **CRITICAL\_SECTION**.|  
  
## Note  
 Le sezioni critiche sono utili quando un solo thread alla volta può essere consentito modificare i dati o un'altra risorsa controllata.  Ad esempio, aggiungere nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta.  Utilizzando un oggetto `CCriticalSection` per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.  
  
> [!NOTE]
>  La funzionalità di classe `CCriticalSection` viene fornita da un oggetto effettivo di Win32 **CRITICAL\_SECTION**.  
  
 Le sezioni critiche vengono utilizzate anziché i mutex \(vedere\) [CMutex](../../mfc/reference/cmutex-class.md)quando la velocità è critico e la risorsa non verrà utilizzata nei limiti dei processi.  
  
 Esistono due metodi per l'utilizzo di un oggetto `CCriticalSection` : autonomo e incorporato in una classe.  
  
-   Il metodo autonomo per utilizzare un oggetto autonomo `CCriticalSection`, costruire l'oggetto `CCriticalSection` quando necessario.  Dopo che una corrispondenza ritorno dal costruttore, in modo esplicito blocca l'oggetto con una chiamata a [blocco](../Topic/CCriticalSection::Lock.md).  Chiamare [Sblocca](../Topic/CCriticalSection::Unlock.md) al termine di accedere alla sezione critica.  Questo metodo, mentre pulita che qualcuno che legge il codice sorgente, è ad errori più soggetto ad esempio è necessario ricordare bloccare e sbloccare la sezione critica prima e dopo l'accesso.  
  
     Un metodo più congeniale è utilizzare la classe [CSingleLock](../../mfc/reference/csinglelock-class.md).  È inoltre disponibile un metodo `Unlock` e `Lock`, ma non è necessario preoccuparsi per sbloccare la risorsa se si verifica un'eccezione.  
  
-   Metodo incorporato è inoltre possibile condividere una classe con più thread aggiungendo un membro dati tipo `CCriticalSection`alla classe e bloccando il membro dati quando necessario.  
  
 Per ulteriori informazioni sull'utilizzo degli oggetti `CCriticalSection`, vedere l'articolo [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CCriticalSection`  
  
## Requisiti  
 **Header:** afxmt.h  
  
## Vedere anche  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMutex Class](../../mfc/reference/cmutex-class.md)