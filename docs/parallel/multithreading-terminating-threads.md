---
title: 'Multithreading: Terminazione dei thread in MFC'
ms.date: 08/27/2018
f1_keywords:
- CREATE_SUSPENDED
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
ms.openlocfilehash: c92d95bc2aa63d78c98d10e25de79344fe1ee0f0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484019"
---
# <a name="multithreading-terminating-threads-in-mfc"></a>Multithreading: Terminazione dei thread in MFC

Normalmente in due situazioni causano un thread venga terminato: termina la funzione di controllo o il thread non è consentito per l'esecuzione fino al completamento. Se un elaboratore di testo utilizzato un thread per la stampa in background, la funzione di controllo termina normalmente stampa viene completata correttamente. Se l'utente desidera annullare la stampa, tuttavia, il thread di stampa in background deve essere terminato prematuramente. Questo argomento viene illustrato come implementare ogni situazione sia come ottenere il codice di uscita di un thread dopo la terminazione.

- [Normale terminazione](#_core_normal_thread_termination)

- [Chiusura anomala di Thread](#_core_premature_thread_termination)

- [Il recupero del codice di uscita di un Thread](#_core_retrieving_the_exit_code_of_a_thread)

##  <a name="_core_normal_thread_termination"></a> Normale terminazione

Per un thread di lavoro, la terminazione normale di un thread è semplice: uscire dalla funzione di controllo e restituiscono un valore che indica il motivo della terminazione. È possibile usare la [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) funzione o una **restituire** istruzione. In genere, 0 indica il completamento, ma che è responsabilità dell'utente.

Per un thread dell'interfaccia utente, il processo è semplice: dall'interno del thread dell'interfaccia utente, chiamare [PostQuitMessage](https://msdn.microsoft.com/library/windows/desktop/ms644945) nel SDK di Windows. L'unico parametro che `PostQuitMessage` accetta sia il codice di uscita del thread. Come per il thread di lavoro, 0 indica in genere il corretto completamento.

##  <a name="_core_premature_thread_termination"></a> Chiusura anomala di Thread

Terminazione di un thread in modo anomalo è semplice quasi come: chiamare [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) dall'interno del thread. Passare il codice di uscita desiderato come unico parametro. Questo arresta l'esecuzione del thread, dealloca lo stack del thread, disconnette tutte le DLL associate al thread e consente di eliminare l'oggetto thread dalla memoria.

`AfxEndThread` Deve essere chiamato dall'interno del thread da terminare. Se si desidera terminare un thread da un altro thread, è necessario configurare un metodo di comunicazione tra i due thread.

##  <a name="_core_retrieving_the_exit_code_of_a_thread"></a> Il recupero del codice di uscita di un Thread

Per ottenere il codice di uscita del ruolo di lavoro o il thread dell'interfaccia utente, chiamare il [GetExitCodeThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getexitcodethread) (funzione). Per informazioni su questa funzione, vedere il SDK di Windows. Questa funzione accetta l'handle nel thread (archiviati nel `m_hThread` membro dati di `CWinThread` oggetti) e l'indirizzo di un valore DWORD.

Se il thread è ancora attivo, `GetExitCodeThread` inserisce STILL_ACTIVE nell'indirizzo del valore DWORD specificato; in caso contrario, il codice di uscita viene inserito in questo indirizzo.

Il codice di uscita di recupero [CWinThread](../mfc/reference/cwinthread-class.md) oggetti richiede un passaggio aggiuntivo. Per impostazione predefinita, quando un `CWinThread` thread termina, l'oggetto thread viene eliminato. Ciò significa che non è possibile accedere la `m_hThread` membro dati perché il `CWinThread` oggetto non esiste più. Per evitare questa situazione, effettuare una delle operazioni seguenti:

- Impostare il `m_bAutoDelete` membro dati su FALSE. In questo modo il `CWinThread` oggetto dopo che il thread è stato terminato. È quindi possibile accedere la `m_hThread` membro dati dopo che il thread è stato terminato. Se si usa questa tecnica, tuttavia, si è responsabile dell'eliminazione definitiva di `CWinThread` dell'oggetto poiché il framework non lo eliminerà automaticamente. Questo è il metodo preferito.

- Store separatamente l'handle del thread. Dopo la creazione del thread, copiare relativi `m_hThread` membro dati (tramite `::DuplicateHandle`) a un'altra variabile e accedervi tramite la variabile. In questo modo l'oggetto viene eliminato automaticamente alla terminazione, è comunque possibile stabilire il motivo della terminazione. Prestare attenzione che il thread non termini prima della duplicazione handle. Il modo più sicuro per eseguire questa operazione consiste nel passare a CREATE_SUSPENDED [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread)memorizzare l'handle e quindi riprendere il thread chiamando [ResumeThread](../mfc/reference/cwinthread-class.md#resumethread).

Uno dei due metodi consente di determinare il motivo un `CWinThread` terminata dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)<br/>
[_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[ExitThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-exitthread)