---
title: 'Multithreading: Creazione di thread di lavoro | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- multithreading [C++], worker threads
- background tasks [C++]
- threading [C++], worker threads
- worker threads [C++]
- threading [C++], creating threads
- threading [MFC], worker threads
- threading [C++], user input not required
ms.assetid: 670adbfe-041c-4450-a3ed-be14aab15234
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 175fc018ddba436f9a331f861a492dcd43e1ec1e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689272"
---
# <a name="multithreading-creating-worker-threads"></a>Multithreading: creazione di thread di lavoro
Un thread di lavoro viene comunemente utilizzato per gestire le attività in background che l'utente non dovrebbe essere in attesa per continuare a utilizzare l'applicazione. Attività, ad esempio il ricalcolo e la stampa in background sono i buoni esempi di thread di lavoro. In questo argomento illustra in dettaglio i passaggi necessari per creare un thread di lavoro. Gli argomenti trattati includono:  
  
-   [Avvio del thread](#_core_starting_the_thread)  
  
-   [Implementazione della funzione di controllo](#_core_implementing_the_controlling_function)  
  
-   [Esempio](#_core_controlling_function_example)  
  
 Creazione di un thread di lavoro è un'operazione relativamente semplice. Sono necessari solo due passaggi per l'esecuzione del thread: implementazione della funzione di controllo e avviare il thread. Non è necessario derivare una classe da [CWinThread](../mfc/reference/cwinthread-class.md). È possibile derivare una classe, se occorre una versione speciale del `CWinThread`, ma non è necessaria per la maggior parte dei thread di lavoro semplice. È possibile utilizzare `CWinThread` senza alcuna modifica.  
  
##  <a name="_core_starting_the_thread"></a> Avvio del Thread  
 Esistono due versioni di overload `AfxBeginThread`: uno che è possibile creare solo thread di lavoro e uno che è possibile creare sia i thread di lavoro e i thread dell'interfaccia utente. Per avviare l'esecuzione del thread di lavoro utilizzando il primo overload, chiamare [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:  
  
-   L'indirizzo della funzione di controllo.  
  
-   Il parametro deve essere passato alla funzione di controllo.  
  
-   (Facoltativo) La priorità desiderata del thread. Il valore predefinito è la priorità normale. Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
-   (Facoltativo) Dimensione stack desiderato per il thread. Il valore predefinito è il dimensione stack del thread di creazione.  
  
-   (Facoltativo) **CREATE_SUSPENDED** se si desidera che il thread deve essere creato in uno stato sospeso. Il valore predefinito è 0 o avvia normalmente il thread.  
  
-   (Facoltativo) Gli attributi di sicurezza desiderato. Il valore predefinito è lo stesso accesso del thread padre. Per ulteriori informazioni sul formato di queste informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 `AfxBeginThread` Crea e Inizializza un `CWinThread` oggetto, avvia e restituisce il relativo indirizzo in modo che è possibile farvi riferimento in un secondo momento. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati correttamente deve avere esito negativo qualsiasi parte della creazione.  
  
##  <a name="_core_implementing_the_controlling_function"></a> Implementazione della funzione di controllo  
 La funzione di controllo definisce il thread. Quando questa funzione viene immessa, il thread viene avviato e quando viene chiusa, termina il thread. Questa funzione deve avere il seguente prototipo:  
  
```  
UINT MyControllingFunction( LPVOID pParam );  
```  
  
 Il parametro è un singolo valore. Il valore ricevuto dalla funzione in questo parametro è il valore passato al costruttore quando l'oggetto thread è stato creato. La funzione di controllo può interpretare questo valore in qualsiasi modo desiderato. Può essere gestita come un valore scalare o un puntatore a una struttura che contiene più parametri oppure può essere ignorato. Se il parametro fa riferimento a una struttura, la struttura consente non solo per passare i dati dal chiamante al thread, ma anche per passare i dati dal thread chiamante. Se si utilizza questa struttura per passare i dati di nuovo al chiamante, il thread deve notificare al chiamante quando i risultati sono pronti. Per informazioni sulla comunicazione tra il thread di lavoro al chiamante, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).  
  
 Quando la funzione termina, deve restituire un **UINT** valore che indica il motivo della terminazione. In genere, questo codice di uscita è 0 per indicare l'esito positivo con altri valori indicano diversi tipi di errori. Si tratta esclusivamente di implementazione dipendenti. Alcuni thread potrebbe mantenere il conteggio di utilizzo degli oggetti e restituire il numero di utilizzi dell'oggetto corrente. Per vedere come applicazioni possono recuperare questo valore, vedere [Multithreading: terminazione dei thread](../parallel/multithreading-terminating-threads.md).  
  
 Esistono alcune restrizioni alle operazioni eseguite in un programma multithread scritto con la libreria MFC. Per una descrizione di queste restrizioni e suggerimenti sull'utilizzo dei thread, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).  
  
##  <a name="_core_controlling_function_example"></a> Controllo dell'esempio di funzione  
 Nell'esempio seguente viene illustrato come definire una funzione di controllo e utilizzarlo in un'altra parte del programma.  
  
```  
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
  
-   [Multithreading: creazione di thread dell'interfaccia utente](../parallel/multithreading-creating-user-interface-threads.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)