---
title: "CWinThread Class | Microsoft Docs"
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
  - "CWinThread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CwinThread (classe)"
  - "threading [MFC], creazione di thread"
  - "threading [MFC], protezione"
  - "thread di lavoro"
ms.assetid: 10cdc294-4057-4e76-ac7c-a8967a89af0b
caps.latest.revision: 24
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWinThread Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un thread di esecuzione all'interno di un'applicazione.  
  
## Sintassi  
  
```  
class CWinThread : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::CWinThread](../Topic/CWinThread::CWinThread.md)|Costruisce un oggetto `CWinThread`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::CreateThread](../Topic/CWinThread::CreateThread.md)|Avvia l'esecuzione di un oggetto `CWinThread`.|  
|[CWinThread::ExitInstance](../Topic/CWinThread::ExitInstance.md)|Override da liberare quando il thread termina.|  
|[CWinThread::GetMainWnd](../Topic/CWinThread::GetMainWnd.md)|Recupera un puntatore alla finestra principale del thread.|  
|[CWinThread::GetThreadPriority](../Topic/CWinThread::GetThreadPriority.md)|Ottiene la priorità del thread corrente.|  
|[CWinThread::InitInstance](../Topic/CWinThread::InitInstance.md)|Override per eseguire l'inizializzazione dell'istanza del thread.|  
|[CWinThread::IsIdleMessage](../Topic/CWinThread::IsIdleMessage.md)|Controlla i messaggi speciali.|  
|[CWinThread::OnIdle](../Topic/CWinThread::OnIdle.md)|Override per eseguire l'elaborazione in fase di inattività specifica di.|  
|[CWinThread::PostThreadMessage](../Topic/CWinThread::PostThreadMessage.md)|Invia un messaggio a un altro oggetto `CWinThread`.|  
|[CWinThread::PreTranslateMessage](../Topic/CWinThread::PreTranslateMessage.md)|Filtri dei messaggi prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CWinThread::ProcessMessageFilter](../Topic/CWinThread::ProcessMessageFilter.md)|Alcuni messaggi di interruzione prima che raggiungano l'applicazione.|  
|[CWinThread::ProcessWndProcException](../Topic/CWinThread::ProcessWndProcException.md)|Intercetti tutte le eccezioni non gestite generate dal messaggio e i gestori comandi del thread.|  
|[CWinThread::PumpMessage](../Topic/CWinThread::PumpMessage.md)|Contiene il ciclo di messaggi di thread.|  
|[CWinThread::ResumeThread](../Topic/CWinThread::ResumeThread.md)|Decrementa il conteggio di sospensione di un thread.|  
|[CWinThread::Run](../Topic/CWinThread::Run.md)|Funzione di controllo per i thread con un message pump.  Override per personalizzare il ciclo di messaggi predefinito.|  
|[CWinThread::SetThreadPriority](../Topic/CWinThread::SetThreadPriority.md)|Stabilire la priorità del thread corrente.|  
|[CWinThread::SuspendThread](../Topic/CWinThread::SuspendThread.md)|Incrementa il conteggio di sospensione di un thread.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::operator HANDLE](../Topic/CWinThread::operator%20HANDLE.md)|Recupera l'handle dell'oggetto `CWinThread`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::m\_bAutoDelete](../Topic/CWinThread::m_bAutoDelete.md)|Specifica se eliminare l'oggetto alla chiusura del thread.|  
|[CWinThread::m\_hThread](../Topic/CWinThread::m_hThread.md)|Handle per il thread corrente.|  
|[CWinThread::m\_nThreadID](../Topic/CWinThread::m_nThreadID.md)|ID del thread corrente.|  
|[CWinThread::m\_pActiveWnd](../Topic/CWinThread::m_pActiveWnd.md)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|  
|[CWinThread::m\_pMainWnd](../Topic/CWinThread::m_pMainWnd.md)|Contiene un puntatore alla finestra principale dell'applicazione.|  
  
## Note  
 Il thread di esecuzione principale in genere fornito da un oggetto derivato da `CWinApp`; `CWinApp` è derivato da `CWinThread`.  Gli oggetti aggiuntivi `CWinThread` consentono più thread all'interno di un'applicazione specificata.  
  
 Esistono due tipi di carattere generale su thread che `CWinThread` supporta: thread di lavoro e thread di interfaccia utente.  I thread di lavoro non hanno message pump: ad esempio, un thread che esegue calcoli in background in un'applicazione del foglio di lavoro.  I thread dell'interfaccia utente hanno messaggi di processo e di un message pump ricevuti dal sistema.  [CWinApp](../../mfc/reference/cwinapp-class.md) e le classi derivate da sono esempi di thread di interfaccia utente.  Altri thread dell'interfaccia utente possono essere derivati direttamente da `CWinThread`.  
  
 Gli oggetti di classe `CWinThread` in genere disponibili per la durata del thread.  Se si desidera modificare questo comportamento, impostare [m\_bAutoDelete](../Topic/CWinThread::m_bAutoDelete.md) a **FALSE**.  
  
 La classe `CWinThread` è necessaria per rendere il codice e MFC completamente thread\-safe.  I dati di thread locali utilizzati dal framework per gestire le informazioni specifiche dei thread vengono gestiti dagli oggetti `CWinThread`.  A causa di questa dipendenza da `CWinThread` per gestire i dati di thread locale, un thread che utilizza MFC deve essere creato da MFC.  Ad esempio, un thread creato dalla funzione in esecuzione [\_beginthread, \_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) non può utilizzare qualsiasi MFC API.  
  
 Per creare un thread, chiamare [AfxBeginThread](../Topic/AfxBeginThread.md).  Esistono due form, come se si desidera che un thread di lavoro o un thread di interfaccia utente.  Se si desidera che un thread dell'interfaccia utente, passare a `AfxBeginThread` un puntatore a `CRuntimeClass` del `CWinThread`classe derivata da.  Se si desidera creare un thread di lavoro, passare a `AfxBeginThread` un puntatore alla funzione di controllo e il parametro della funzione di controllo.  Per entrambi i thread di lavoro e thread dell'interfaccia utente, è possibile specificare i parametri facoltativi che modificano la priorità, la dimensione dello stack, i flag di creazione e gli attributi di sicurezza.  `AfxBeginThread` restituirà un puntatore al nuovo oggetto `CWinThread`.  
  
 Anziché chiamare `AfxBeginThread`, è possibile costruire `CWinThread`oggetto derivato da e quindi chiamare `CreateThread`.  Questo metodo in due fasi della costruzione è utile se si desidera riutilizzare l'oggetto `CWinThread` tra la creazione e le chiusure successive di esecuzione del thread.  
  
 Per ulteriori informazioni su `CWinThread`, vedere gli articoli [Multithreading con C\+\+ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md), [multithreading: Creare i thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md), [multithreading: Creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)e [multithreading: Utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CWinThread`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)