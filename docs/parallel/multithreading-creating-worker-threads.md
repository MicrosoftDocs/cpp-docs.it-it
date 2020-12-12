---
description: 'Altre informazioni su: multithreading: creazione di thread di lavoro in MFC'
title: 'Multithreading: creazione di thread di lavoro in MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- multithreading [C++], worker threads
- background tasks [C++]
- threading [C++], worker threads
- worker threads [C++]
- threading [C++], creating threads
- threading [MFC], worker threads
- threading [C++], user input not required
ms.assetid: 670adbfe-041c-4450-a3ed-be14aab15234
ms.openlocfilehash: 75fa3122518f6fc342fe53a3df9fb9e5a78e2483
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149955"
---
# <a name="multithreading-creating-worker-threads-in-mfc"></a>Multithreading: creazione di thread di lavoro in MFC

Un thread di lavoro viene comunemente usato per gestire le attività in background che l'utente non deve attendere per continuare a usare l'applicazione. Attività come il ricalcolo e la stampa in background sono ottimi esempi di thread di lavoro. In questo argomento vengono illustrati i passaggi necessari per creare un thread di lavoro. Gli argomenti includono:

- [Avvio del thread](#_core_starting_the_thread)

- [Implementazione della funzione di controllo](#_core_implementing_the_controlling_function)

- [Esempio](#_core_controlling_function_example)

La creazione di un thread di lavoro è un'attività relativamente semplice. Per l'esecuzione del thread sono necessari solo due passaggi: l'implementazione della funzione di controllo e l'avvio del thread. Non è necessario derivare una classe da [CWinThread](../mfc/reference/cwinthread-class.md). È possibile derivare una classe se è necessaria una versione speciale di `CWinThread` , ma non è necessaria per la maggior parte dei thread di lavoro semplici. È possibile utilizzare `CWinThread` senza modifiche.

## <a name="starting-the-thread"></a><a name="_core_starting_the_thread"></a> Avvio del thread

Sono disponibili due versioni di overload di `AfxBeginThread` : una che può creare solo thread di lavoro e una che può creare thread di lavoro e thread dell'interfaccia utente. Per avviare l'esecuzione del thread di lavoro utilizzando il primo overload, chiamare [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:

- Indirizzo della funzione di controllo.

- Parametro da passare alla funzione di controllo.

- Opzionale Priorità desiderata per il thread. Il valore predefinito è la priorità normale. Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

- Opzionale Dimensioni dello stack desiderate per il thread. Il valore predefinito è lo stesso stack di dimensioni del thread di creazione.

- Opzionale CREATE_SUSPENDED se si desidera che il thread venga creato in uno stato sospeso. Il valore predefinito è 0 o il thread viene avviato normalmente.

- Opzionale Attributi di sicurezza desiderati. Il valore predefinito è lo stesso accesso del thread padre. Per ulteriori informazioni sul formato delle informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) nel Windows SDK.

`AfxBeginThread` Crea e Inizializza un `CWinThread` oggetto per l'utente, lo avvia e ne restituisce l'indirizzo in modo che sia possibile farvi riferimento in un secondo momento. Per assicurarsi che tutti gli oggetti vengano deallocati correttamente, tutte le parti della creazione hanno esito negativo.

## <a name="implementing-the-controlling-function"></a><a name="_core_implementing_the_controlling_function"></a> Implementazione della funzione di controllo

La funzione di controllo definisce il thread. Quando questa funzione viene immessa, il thread viene avviato e quando si chiude, il thread termina. Questa funzione deve avere il seguente prototipo:

```cpp
UINT MyControllingFunction( LPVOID pParam );
```

Il parametro è un valore singolo. Il valore che la funzione riceve in questo parametro è il valore passato al costruttore al momento della creazione dell'oggetto thread. La funzione di controllo può interpretare questo valore in qualsiasi modo scelto. Può essere considerato come un valore scalare o un puntatore a una struttura contenente più parametri oppure può essere ignorato. Se il parametro fa riferimento a una struttura, la struttura può essere usata non solo per passare dati dal chiamante al thread, ma anche per passare i dati dal thread al chiamante. Se si usa tale struttura per passare i dati al chiamante, il thread deve inviare una notifica al chiamante quando i risultati sono pronti. Per informazioni sulla comunicazione tra il thread di lavoro e il chiamante, vedere [multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).

Quando la funzione termina, deve restituire un valore UINT che indica il motivo della terminazione. In genere, questo codice di uscita è 0 per indicare l'esito positivo con altri valori che indicano tipi diversi di errori. Si tratta di un'implementazione puramente dipendente. Alcuni thread possono mantenere i conteggi di utilizzo degli oggetti e restituire il numero corrente di utilizzi dell'oggetto. Per vedere in che modo le applicazioni possono recuperare questo valore, vedere [multithreading: terminazione di thread](multithreading-terminating-threads.md).

Esistono alcune limitazioni relative alle operazioni che è possibile eseguire in un programma multithread scritto con la libreria MFC. Per le descrizioni di queste restrizioni e altri suggerimenti sull'uso dei thread, vedere [multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).

## <a name="controlling-function-example"></a><a name="_core_controlling_function_example"></a> Esempio di funzione di controllo

Nell'esempio seguente viene illustrato come definire una funzione di controllo e utilizzarla da un'altra parte del programma.

```cpp
UINT MyThreadProc( LPVOID pParam )
{
    CMyObject* pObject = (CMyObject*)pParam;

    if (pObject == NULL ||
        !pObject->IsKindOf(RUNTIME_CLASS(CMyObject)))
    return 1;   // if pObject is not valid

    // do something with 'pObject'

    return 0;   // thread completed successfully
}

// inside a different function in the program
.
.
.
pNewObject = new CMyObject;
AfxBeginThread(MyThreadProc, pNewObject);
.
.
.
```

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Multithreading: creazione di thread di User-Interface](multithreading-creating-user-interface-threads.md)

## <a name="see-also"></a>Vedi anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
