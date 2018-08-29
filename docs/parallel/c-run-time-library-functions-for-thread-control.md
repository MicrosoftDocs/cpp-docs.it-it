---
title: Funzioni di libreria Run-Time di C per il Thread di controllo | Microsoft Docs
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
ms.openlocfilehash: 2eaa1a0589cb001658b18144e06956eebd302287
ms.sourcegitcommit: f7703076b850c717c33d72fb0755fbb2215c5ddc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2018
ms.locfileid: "43131854"
---
# <a name="c-run-time-library-functions-for-thread-control"></a>Funzioni della libreria di runtime del linguaggio C per il controllo dei thread
Tutte le applicazioni Win32 con almeno un thread. Qualsiasi thread può creare thread aggiuntivi. Un thread può completare rapidamente il proprio lavoro e quindi termina o rimanere attivo per l'intera durata del programma.  
  
Le librerie di runtime C LIBCMT e MSVCRT forniscono le funzioni seguenti per la creazione del thread e la terminazione: [beginthread, beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md) e [endthread, endthreadex](../c-runtime-library/reference/endthread-endthreadex.md).  
  
Il `_beginthread` e `_beginthreadex` funzioni crea un nuovo thread e restituire un identificatore del thread se l'operazione ha esito positivo. Il thread viene terminato automaticamente al completamento dell'esecuzione o possa terminare se stessa con una chiamata a `_endthread` o `_endthreadex`.  
  
> [!NOTE]
> Se si intende chiamare routine di runtime di C da un programma compilato con LIBCMT. lib, è necessario avviare il thread con il `_beginthread` o `_beginthreadex` (funzione). Non usare le funzioni Win32 `ExitThread` e `CreateThread`. Usando `SuspendThread` può causare un deadlock quando più di un thread è bloccato in attesa per il thread sospeso completare l'accesso a una struttura di dati di runtime C.  
  
##  <a name="_core_the__beginthread_function"></a> Le funzioni beginthread e beginthreadex  
 
Il `_beginthread` e `_beginthreadex` funzioni creano un nuovo thread. Condivide i segmenti di codice e i dati di un processo con altri thread nel processo di un thread, ma ha un proprio dei valori di registro univoche, lo spazio dello stack e indirizzo dell'istruzione corrente. Il sistema offre il tempo di CPU per ogni thread, in modo che tutti i thread in un processo possono essere eseguite contemporaneamente.  
  
`_beginthread` e `_beginthreadex` sono simili per il [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) funzione nell'API Win32 ma ha queste differenze:  
  
- I costruttori inizializzano determinate variabili libreria run-time di C. Questo è importante solo se si usa la libreria di runtime C nei thread.  
  
- `CreateThread` Consente di garantire controllare gli attributi di sicurezza. È possibile utilizzare questa funzione per avviare un thread in uno stato sospeso.  
  
 `_beginthread` e `_beginthreadex` restituisce un handle per il nuovo thread se ha esito positivo o un codice di errore se si è verificato un errore.  
  
##  <a name="_core_the__endthread_function"></a> Le funzioni endthread e endthreadex  
 
Il [endthread](../c-runtime-library/reference/endthread-endthreadex.md) funzione termina un thread creato da `_beginthread` (e, analogamente `_endthreadex` termina un thread creato da `_beginthreadex`). I thread vengono terminati automaticamente quando vengono completate. `_endthread` e `_endthreadex` sono utili per la terminazione condizionale da all'interno di un thread. Un thread dedicato all'elaborazione di comunicazioni, ad esempio, può chiudere se non è possibile ottenere il controllo della porta di comunicazione.  
  
## <a name="see-also"></a>Vedere anche  
 
[Multithreading con C e Win32](multithreading-with-c-and-win32.md)