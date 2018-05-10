---
title: Le funzioni della libreria di runtime C per il controllo di Thread | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- _beginthread function
- _endthread function
- threading [C++], controlling threads
- multithreading [C++], controlling threads
- _beginthreadex function
- _endthreadex function
ms.assetid: 39d0529c-c392-4c6f-94f5-105d1e8054e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a505bae156edba6798812b807d7ab5c6ea9e396
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="c-run-time-library-functions-for-thread-control"></a>Funzioni della libreria di runtime del linguaggio C per il controllo dei thread
Tutte le applicazioni Win32 dispongono di almeno un thread. Qualsiasi thread può creare thread aggiuntivi. Un thread è possibile completare rapidamente il proprio lavoro e quindi terminare o rimanere attivo per tutta la durata del programma.  
  
 Le librerie di runtime C LIBCMT e MSVCRT forniscono le seguenti funzioni per la creazione di thread e la terminazione: [beginthread, beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md) e [endthread, endthreadex](../c-runtime-library/reference/endthread-endthreadex.md).  
  
 Il `_beginthread` e `_beginthreadex` creano un nuovo thread e restituiscono un identificatore del thread se l'operazione ha esito positivo. Il thread viene terminato automaticamente al completamento dell'esecuzione o possa terminare se stessa con una chiamata a `_endthread` o `_endthreadex`.  
  
> [!NOTE]
>  Se si intende chiamare una routine di run-time C da un programma compilato con Libcmt.lib, è necessario avviare il thread con il `_beginthread` o `_beginthreadex` (funzione). Non utilizzare le funzioni Win32 `ExitThread` e `CreateThread`. Utilizzando `SuspendThread` può causare un deadlock quando più di un thread è bloccato in attesa del thread sospeso completare l'accesso a una struttura di dati di runtime C.  
  
##  <a name="_core_the__beginthread_function"></a> Le funzioni beginthread e beginthreadex  
 Il `_beginthread` e `_beginthreadex` creano un nuovo thread. Un thread condivide i segmenti di codice e i dati di un processo con altri thread nel processo, ma con valori di registro univoco, lo spazio dello stack e indirizzo dell'istruzione corrente. Il sistema fornisce il tempo di CPU per ogni thread, in modo che tutti i thread in un processo possono essere eseguite contemporaneamente.  
  
 `_beginthread` e `_beginthreadex` sono simili per il [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) funzione nell'API Win32, ma ha queste differenze:  
  
-   I costruttori inizializzano determinate variabili della libreria run-time C. Questo è importante solo se si utilizza la libreria di run-time C nei thread.  
  
-   `CreateThread` Consente di garantire controllare gli attributi di sicurezza. È possibile utilizzare questa funzione per avviare un thread in uno stato sospeso.  
  
 `_beginthread` e `_beginthreadex` Restituisci un handle per il nuovo thread se ha esito positivo o un codice di errore se si è verificato un errore.  
  
##  <a name="_core_the__endthread_function"></a> Le funzioni endthread e endthreadex  
 Il [endthread](../c-runtime-library/reference/endthread-endthreadex.md) funzione termina un thread creato da `_beginthread` (e in modo analogo, `_endthreadex` termina un thread creato da `_beginthreadex`). I thread vengono terminati automaticamente quando vengono completate. `_endthread` e `_endthreadex` sono utili per la terminazione condizionale dall'interno di un thread. Un thread dedicato all'elaborazione di comunicazioni, ad esempio, possa chiudere se non è possibile ottenere controllo della porta di comunicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)