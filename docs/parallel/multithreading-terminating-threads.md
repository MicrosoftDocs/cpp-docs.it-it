---
title: "Multithreading: terminazione dei thread | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CREATE_SUSPENDED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxEndThread (metodo)"
  - "multithreading [C++], chiusura di thread"
  - "chiusura anomala di thread"
  - "avvio di thread"
  - "arresto di thread"
  - "chiusura di thread"
  - "threading [C++], arresto di thread"
  - "threading [MFC], chiusura di thread"
ms.assetid: 4c0a8c6d-c02f-456d-bd02-0a8c8d006ecb
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading: terminazione dei thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La terminazione di un thread avviene normalmente in due situazioni: all'uscita dalla funzione di controllo o nell'impossibilità di eseguire il thread fino al suo completamento.  Se in un programma di elaborazione di testi è stato utilizzato un thread per la stampa in background e la stampa viene completata correttamente, la funzione di controllo termina normalmente.  Se l'utente desidera annullare la stampa, tuttavia, il thread di stampa in background deve essere terminato in anticipo.  In questo argomento vengono fornite informazioni sull'implementazione delle diverse situazioni e su come ottenere il codice di uscita di un thread dopo la terminazione.  
  
-   [Terminazione normale di un thread](#_core_normal_thread_termination)  
  
-   [Terminazione anticipata di un thread](#_core_premature_thread_termination)  
  
-   [Recupero del codice di uscita di un thread](#_core_retrieving_the_exit_code_of_a_thread)  
  
##  <a name="_core_normal_thread_termination"></a> Terminazione normale di un thread  
 La normale terminazione di un thread di lavoro è semplice, in quanto consiste nell'uscita dalla funzione di controllo e nella restituzione di un valore che indica il motivo della terminazione.  È possibile utilizzare la funzione [AfxEndThread](../Topic/AfxEndThread.md) oppure un'istruzione `return`.  Generalmente 0 indica il completamento, ma l'impostazione del valore viene decisa dal programmatore.  
  
 Altrettanto semplice è il processo per un thread dell'interfaccia utente: dall'interno del thread, chiamare [PostQuitMessage](http://msdn.microsoft.com/library/windows/desktop/ms644945), come descritto in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  L'unico parametro accettato da **PostQuitMessage** è il codice di uscita del thread.  Come per i thread di lavoro, 0 indica in genere il completamento.  
  
##  <a name="_core_premature_thread_termination"></a> Terminazione anticipata di un thread  
 La terminazione anticipata di un thread è relativamente semplice: è sufficiente chiamare [AfxEndThread](../Topic/AfxEndThread.md) dall'interno del thread.  Passare il codice di uscita desiderato come unico parametro.  Questa operazione arresta l'esecuzione del thread, rende disponibile il relativo stack, disconnette tutte le DLL collegate al thread ed elimina l'oggetto thread dalla memoria.  
  
 È necessario chiamare `AfxEndThread` dall'interno del thread da terminare.  Se si desidera terminare un thread da un altro thread, è necessario impostare un metodo di comunicazione tra i due thread.  
  
##  <a name="_core_retrieving_the_exit_code_of_a_thread"></a> Recupero del codice di uscita di un thread  
 Per ottenere il codice di uscita di un thread di lavoro o dell'interfaccia utente, chiamare la funzione [GetExitCodeThread](http://msdn.microsoft.com/library/windows/desktop/ms683190).  Per informazioni su questa funzione, vedere [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  Nella funzione viene utilizzato l'handle per il thread, memorizzato nel membro dati `m_hThread` degli oggetti `CWinThread`, e l'indirizzo di un valore `DWORD`.  
  
 Se il thread è ancora attivo, **STILL\_ACTIVE** viene posizionato da **GetExitCodeThread** nell'indirizzo del valore `DWORD` fornito. In caso contrario, il codice di uscita viene posizionato all'interno di questo indirizzo.  
  
 Il recupero del codice di uscita degli oggetti [CWinThread](../mfc/reference/cwinthread-class.md) richiede un passaggio aggiuntivo.  In base all'impostazione predefinita, quando un thread `CWinThread` termina, l'oggetto thread viene eliminato.  Non è quindi possibile accedere al membro dati `m_hThread`, perché l'oggetto `CWinThread` non esiste più.  Per ovviare a questa situazione, effettuare una delle seguenti operazioni:  
  
-   Impostare il membro dati `m_bAutoDelete` su **FALSE**.  Questa operazione impedisce l'eliminazione dell'oggetto `CWinThread` dopo la terminazione del thread.  A questo punto è possibile accedere al membro dati `m_hThread` dopo la terminazione del thread.  Se si utilizza questa tecnica, tuttavia, è necessario provvedere all'eliminazione dell'oggetto `CWinThread`, poiché il framework non lo eliminerà automaticamente.  Si tratta del metodo consigliato.  
  
-   Memorizzare separatamente l'handle del thread.  Dopo la creazione del thread, copiare il relativo membro dati `m_hThread` mediante **::DuplicateHandle** in un'altra variabile e accedervi tramite la variabile stessa.  In questo modo l'oggetto viene eliminato automaticamente alla terminazione, ma è comunque possibile stabilire il motivo della terminazione.  Prestare attenzione affinché il thread non termini prima della duplicazione dell'handle.  La soluzione più sicura per eseguire questa operazione è passare **CREATE\_SUSPENDED** a [AfxBeginThread](../Topic/AfxBeginThread.md), memorizzare l'handle, quindi riprendere il thread chiamando [ResumeThread](../Topic/CWinThread::ResumeThread.md).  
  
 Entrambi i metodi consentono di determinare il motivo della terminazione dell'oggetto `CWinThread`.  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)   
 [\_endthread, \_endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)   
 [\_beginthread, \_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)   
 [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659)