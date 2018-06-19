---
title: 'Multithreading: Terminazione dei thread | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
f1_keywords:
- CREATE_SUSPENDED
dev_langs:
- C++
helpviewer_keywords:
- premature thread termination
- starting threads
- threading [MFC], terminating threads
- multithreading [C++], terminating threads
- threading [C++], stopping threads
- terminating threads
- stopping threads
- AfxEndThread method
ms.assetid: 4c0a8c6d-c02f-456d-bd02-0a8c8d006ecb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bdf9376e9f8c9e9d74d88d0bef40dc71fd43d51f
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689584"
---
# <a name="multithreading-terminating-threads"></a>Multithreading: terminazione dei thread
Due situazioni normale causano un'interruzione di thread: non termina la funzione di controllo o il thread non è consentito per l'esecuzione fino al completamento. Se un elaboratore di testo utilizzato un thread in background, la funzione di controllo termina normalmente stampa viene completata correttamente. Se l'utente decide di annullare la stampa, tuttavia, il thread in background stampa deve essere interrotto in modo anomalo. In questo argomento viene illustrato come implementare ogni situazione sia come ottenere il codice di uscita di un thread dopo la terminazione.  
  
-   [Chiusura di Thread normale](#_core_normal_thread_termination)  
  
-   [Chiusura anomala di Thread](#_core_premature_thread_termination)  
  
-   [Il recupero del codice di uscita di un Thread](#_core_retrieving_the_exit_code_of_a_thread)  
  
##  <a name="_core_normal_thread_termination"></a> Chiusura di Thread normale  
 Per un thread di lavoro, chiusura di thread normale è semplice: uscire dalla funzione di controllo e restituire un valore che indica il motivo della chiusura. È possibile utilizzare il [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) funzione o un `return` istruzione. In genere, 0 indica il completamento, ma che è responsabilità dell'utente.  
  
 Per un thread dell'interfaccia utente, il processo è semplice: dall'interno del thread dell'interfaccia utente, chiamare [PostQuitMessage](http://msdn.microsoft.com/library/windows/desktop/ms644945) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)]. L'unico parametro che **PostQuitMessage** è il codice di uscita del thread. Come per il thread di lavoro, 0 indica in genere il completamento.  
  
##  <a name="_core_premature_thread_termination"></a> Chiusura anomala di Thread  
 Terminazione di un thread in modo anomalo è semplice: chiamare [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) dall'interno del thread. Passare il codice di uscita desiderata come unico parametro. Questo arresta l'esecuzione del thread, dealloca lo stack del thread, disconnette tutte le DLL associate al thread e consente di eliminare l'oggetto thread dalla memoria.  
  
 `AfxEndThread` Deve essere chiamato dall'interno del thread da terminare. Se si desidera terminare un thread da un altro thread, è necessario configurare un metodo di comunicazione tra i due thread.  
  
##  <a name="_core_retrieving_the_exit_code_of_a_thread"></a> Il recupero del codice di uscita di un Thread  
 Per ottenere il codice di uscita del thread di lavoro o il thread dell'interfaccia utente, chiamare il [GetExitCodeThread](http://msdn.microsoft.com/library/windows/desktop/ms683190) (funzione). Per informazioni su questa funzione, vedere il [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)]. Questa funzione accetta l'handle per il thread (archiviati nel `m_hThread` membro dati di `CWinThread` oggetti) e l'indirizzo di un `DWORD`.  
  
 Se il thread è ancora attivo, **GetExitCodeThread** inserisce **viene posizionato da GetExitCodeThread** in fornito `DWORD` indirizzo; in caso contrario, il codice di uscita viene inserito nell'indirizzo.  
  
 Il recupero del codice di uscita di [CWinThread](../mfc/reference/cwinthread-class.md) oggetti richiede un passaggio aggiuntivo. Per impostazione predefinita, quando un `CWinThread` thread termina, l'oggetto thread viene eliminato. Non è possibile accedere il `m_hThread` (membro dati) poiché il `CWinThread` oggetto non esiste più. Per evitare questa situazione, effettuare una delle seguenti operazioni:  
  
-   Impostare il `m_bAutoDelete` un membro dati **FALSE**. In questo modo il `CWinThread` oggetto una volta terminato il thread. È quindi possibile accedere il `m_hThread` (membro dati) una volta terminato il thread. Se si utilizza questa tecnica, tuttavia, è responsabile per l'eliminazione permanente di `CWinThread` dell'oggetto poiché il framework non lo eliminerà automaticamente. Questo è il metodo preferito.  
  
-   Archiviare separatamente l'handle del thread. Dopo la creazione del thread, copiare il relativo `m_hThread` (membro dati) (mediante **:: DuplicateHandle**) a un'altra variabile e accedervi tramite la variabile. In questo modo l'oggetto viene eliminato automaticamente alla terminazione, è comunque possibile stabilire il motivo della terminazione. Assicurarsi che il thread termini prima che è possibile duplicare l'handle. Il modo più sicuro per eseguire questa operazione consiste nel passare **CREATE_SUSPENDED** a [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), archiviare l'handle e quindi riprendere il thread chiamando [ResumeThread](../mfc/reference/cwinthread-class.md#resumethread).  
  
 Dei metodi consente di determinare i motivi per cui un `CWinThread` oggetto terminato.  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)   
 [_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)   
 [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)   
 [ExitThread](http://msdn.microsoft.com/library/windows/desktop/ms682659)