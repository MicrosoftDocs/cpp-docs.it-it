---
title: 'Multithreading: terminazione di thread in MFC'
ms.date: 08/27/2018
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
ms.openlocfilehash: 0625be0a628a6ae991acd2fa1f7118a4deabccda
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217870"
---
# <a name="multithreading-terminating-threads-in-mfc"></a>Multithreading: terminazione di thread in MFC

Due situazioni normali comportano la terminazione di un thread, ovvero la funzione di controllo si chiude oppure il thread non può essere eseguito fino al completamento. Se un elaboratore di testo usava un thread per la stampa in background, la funzione di controllo verrebbe terminata normalmente se la stampa è stata completata correttamente. Se l'utente desidera annullare la stampa, tuttavia, il thread di stampa in background deve terminare in modo anomalo. In questo argomento viene illustrato come implementare ogni situazione e come ottenere il codice di uscita di un thread dopo che è stato terminato.

- [Terminazione del thread normale](#_core_normal_thread_termination)

- [Terminazione del thread prematura](#_core_premature_thread_termination)

- [Recupero del codice di uscita di un thread](#_core_retrieving_the_exit_code_of_a_thread)

## <a name="normal-thread-termination"></a><a name="_core_normal_thread_termination"></a>Terminazione del thread normale

Per un thread di lavoro, la terminazione normale dei thread è semplice: uscire dalla funzione di controllo e restituire un valore che indica il motivo della terminazione. È possibile usare la funzione [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) o un' **`return`** istruzione. In genere, 0 indica il completamento corretto, ma spetta all'utente.

Per un thread dell'interfaccia utente, il processo è altrettanto semplice: dall'interno del thread dell'interfaccia utente, chiamare [PostQuitMessage](/windows/win32/api/winuser/nf-winuser-postquitmessage) nel Windows SDK. L'unico parametro che `PostQuitMessage` accetta è il codice di uscita del thread. Per quanto riguarda i thread di lavoro, 0 indica in genere il completamento corretto.

## <a name="premature-thread-termination"></a><a name="_core_premature_thread_termination"></a>Terminazione del thread prematura

La terminazione di un thread in modo anomalo è quasi semplice: chiamare [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) dall'interno del thread. Passare il codice di uscita desiderato come unico parametro. Arresta l'esecuzione del thread, dealloca lo stack del thread, disconnette tutte le DLL collegate al thread ed Elimina l'oggetto thread dalla memoria.

`AfxEndThread`deve essere chiamato dall'interno del thread da terminare. Se si desidera terminare un thread da un altro thread, è necessario configurare un metodo di comunicazione tra i due thread.

## <a name="retrieving-the-exit-code-of-a-thread"></a><a name="_core_retrieving_the_exit_code_of_a_thread"></a>Recupero del codice di uscita di un thread

Per ottenere il codice di uscita del thread di lavoro o dell'interfaccia utente, chiamare la funzione [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread) . Per informazioni su questa funzione, vedere la Windows SDK. Questa funzione accetta l'handle per il thread (archiviato nel `m_hThread` membro dati degli `CWinThread` oggetti) e l'indirizzo di un valore DWORD.

Se il thread è ancora attivo, `GetExitCodeThread` inserisce STILL_ACTIVE nell'indirizzo DWORD fornito; in caso contrario, il codice di uscita viene inserito in questo indirizzo.

Il recupero del codice di uscita degli oggetti [CWinThread](../mfc/reference/cwinthread-class.md) richiede un passaggio aggiuntivo. Per impostazione predefinita, quando un `CWinThread` thread termina, l'oggetto thread viene eliminato. Ciò significa che non è possibile accedere al `m_hThread` membro dati perché l' `CWinThread` oggetto non esiste più. Per evitare questa situazione, eseguire una delle operazioni seguenti:

- Impostare il `m_bAutoDelete` membro dati su false. Ciò consente all' `CWinThread` oggetto di sopravvivere dopo che il thread è stato terminato. È quindi possibile accedere al `m_hThread` membro dati dopo che il thread è stato terminato. Se si utilizza questa tecnica, tuttavia, si è responsabili dell'eliminazione dell' `CWinThread` oggetto perché il Framework non lo eliminerà automaticamente. Questo è il metodo preferito.

- Archiviare separatamente l'handle del thread. Dopo aver creato il thread, copiarne il `m_hThread` membro dati (usando `::DuplicateHandle` ) in un'altra variabile e accedervi tramite tale variabile. In questo modo l'oggetto viene eliminato automaticamente quando si verifica la terminazione ed è comunque possibile scoprire perché il thread è stato terminato. Assicurarsi che il thread non venga terminato prima che sia possibile duplicare l'handle. Il modo più sicuro per eseguire questa operazione è passare CREATE_SUSPENDED a [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), archiviare l'handle e quindi riprendere il thread chiamando [ResumeThread](../mfc/reference/cwinthread-class.md#resumethread).

Entrambi i metodi consentono di determinare il motivo per cui un oggetto è stato `CWinThread` terminato.

## <a name="see-also"></a>Vedere anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)<br/>
[_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[ExitThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread)
