---
title: "Multithreading: Creazione di thread dell'interfaccia utente MFC"
ms.date: 08/27/2018
f1_keywords:
- CREATE_SUSPENDED
- SECURITY_ATTRIBUTES
helpviewer_keywords:
- multithreading [C++], user interface threads
- threading [C++], creating threads
- threading [C++], user interface threads
- user interface threads [C++]
- threading [MFC], user interface threads
ms.assetid: 446925c1-db59-46ea-ae5b-d5ae5d5b91d8
ms.openlocfilehash: 1cd28a848f9be223f43412c3e0f3961cef9db6c7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69512084"
---
# <a name="multithreading-creating-mfc-user-interface-threads"></a>Multithreading: Creazione di thread dell'interfaccia utente MFC

Un thread dell'interfaccia utente viene comunemente usato per gestire l'input dell'utente e rispondere agli eventi utente indipendentemente dai thread che eseguono altre parti dell'applicazione. Il thread principale dell'applicazione, fornito nella `CWinApp`classe derivata da, è già stato creato e avviato automaticamente. In questo argomento vengono descritti i passaggi necessari per creare thread aggiuntivi dell'interfaccia utente.

La prima cosa da fare quando si crea un thread dell'interfaccia utente è derivare una classe da [CWinThread](../mfc/reference/cwinthread-class.md). È necessario dichiarare e implementare questa classe usando le macro [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](../mfc/reference/run-time-object-model-services.md#implement_dyncreate) . Questa classe deve eseguire l'override di alcune funzioni e può eseguire l'override di altre. Queste funzioni e le operazioni da eseguire sono illustrate nella tabella seguente.

### <a name="functions-to-override-when-creating-a-user-interface-thread"></a>Funzioni di cui eseguire l'override durante la creazione di un thread dell'interfaccia utente

|Funzione|Scopo|
|--------------|-------------|
|[ExitInstance](../mfc/reference/cwinthread-class.md#exitinstance)|Eseguire la pulizia quando il thread termina. Generalmente sottoposto a override.|
|[InitInstance](../mfc/reference/cwinthread-class.md#initinstance)|Eseguire l'inizializzazione dell'istanza del thread. Deve essere sottoposto a override.|
|[OnIdle](../mfc/reference/cwinthread-class.md#onidle)|Eseguire l'elaborazione del tempo di inattività specifico del thread. Non è in genere sottoposto a override.|
|[PreTranslateMessage](../mfc/reference/cwinthread-class.md#pretranslatemessage)|Filtrare i messaggi prima che vengano inviati a `TranslateMessage` e. `DispatchMessage` Non è in genere sottoposto a override.|
|[ProcessWndProcException](../mfc/reference/cwinthread-class.md#processwndprocexception)|Intercettare le eccezioni non gestite generate dai gestori di messaggi e comandi del thread. Non è in genere sottoposto a override.|
|[Run](../mfc/reference/cwinthread-class.md#run)|Controllo della funzione per il thread. Contiene il message pump. Raramente sottoposto a override.|

MFC fornisce due versioni di `AfxBeginThread` tramite l'overload di parametri: una che può creare solo thread di lavoro e una che può creare thread di lavoro o thread di interfaccia utente. Per avviare il thread dell'interfaccia utente, chiamare il secondo overload di [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:

- [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) della classe derivata da `CWinThread`.

- Opzionale Livello di priorità desiderato. Il valore predefinito è la priorità normale. Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

- Opzionale Dimensioni dello stack desiderate per il thread. Il valore predefinito è lo stesso stack di dimensioni del thread di creazione.

- Opzionale CREATE_SUSPENDED se si desidera che il thread venga creato in uno stato sospeso. Il valore predefinito è 0 o il thread viene avviato normalmente.

- Opzionale Attributi di sicurezza desiderati. Il valore predefinito è lo stesso accesso del thread padre. Per ulteriori informazioni sul formato di queste informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) nel Windows SDK.

`AfxBeginThread`esegue la maggior parte delle operazioni. Crea un nuovo oggetto della classe, lo inizializza con le informazioni fornite e chiama [CWinThread:: CreateThread](../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread. Per assicurarsi che tutti gli oggetti vengano deallocati correttamente, tutte le parti della creazione hanno esito negativo.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Multithreading: terminazione di thread](multithreading-terminating-threads.md)

- [Multithreading: creazione di thread di lavoro](multithreading-creating-worker-threads.md)

- [Processi e thread](/windows/win32/ProcThread/processes-and-threads)

## <a name="see-also"></a>Vedere anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
