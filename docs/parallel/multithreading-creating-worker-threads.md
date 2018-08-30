---
title: 'Multithreading: Creazione di thread di lavoro in MFC | Microsoft Docs'
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
ms.openlocfilehash: 90e0af6a1b11b114e56e6c1d87cb293ab83dd768
ms.sourcegitcommit: f7703076b850c717c33d72fb0755fbb2215c5ddc
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2018
ms.locfileid: "43131189"
---
# <a name="multithreading-creating-worker-threads-in-mfc"></a>Multithreading: Creazione di thread di lavoro in MFC
Un thread di lavoro viene comunemente utilizzato per gestire le attività in background che l'utente non può attendere per continuare a usare l'applicazione. Le attività come il ricalcolo e stampa in background sono ottimi esempi di thread di lavoro. In questo argomento illustra in dettaglio i passaggi necessari per creare un thread di lavoro. Gli argomenti trattati includono:  
  
- [Avvio del thread](#_core_starting_the_thread)  
  
- [Implementazione della funzione di controllo](#_core_implementing_the_controlling_function)  
  
- [Esempio](#_core_controlling_function_example)  
  
La creazione di un thread di lavoro è un'attività relativamente semplice. Per l'esecuzione del thread sono necessari solo due passaggi: implementazione della funzione di controllo e avvio del thread. Non è necessario derivare una classe dalla classe [CWinThread](../mfc/reference/cwinthread-class.md). È possibile derivare una classe se occorre una versione speciale di `CWinThread`, ma non è necessaria per la maggior parte dei thread di lavoro semplice. È possibile usare `CWinThread` senza alcuna modifica.  
  
##  <a name="_core_starting_the_thread"></a> Avvio del Thread  
 
Esistono due versioni di overload di `AfxBeginThread`: uno che può creare solo thread di lavoro e una che può creare thread dell'interfaccia utente sia thread di lavoro. Per avviare l'esecuzione del thread di lavoro utilizzando il primo overload, chiamare [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:  
  
- L'indirizzo della funzione di controllo.  
  
- Il parametro deve essere passato alla funzione di controllo.  
  
- (Facoltativo) La priorità desiderata del thread. Il valore predefinito è la priorità normale. Per altre informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) nel SDK di Windows.  
  
- (Facoltativo) La dimensione dello stack desiderata per il thread. Il valore predefinito è il dimensione stack del thread di creazione.  
  
- (Facoltativo) CREATE_SUSPENDED se si desidera che il thread deve essere creato in uno stato sospeso. Il valore predefinito è 0, o avvia normalmente il thread.  
  
- (Facoltativo) Gli attributi di sicurezza desiderato. Il valore predefinito è lo stesso accesso del thread padre. Per altre informazioni sul formato di queste informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel SDK di Windows.  
  
`AfxBeginThread` Crea e Inizializza un `CWinThread` oggetto, viene avviata e restituisce il relativo indirizzo in modo che sia possibile farvi riferimento in un secondo momento. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati in modo corretto deve avere esito negativo qualsiasi parte della creazione.  
  
##  <a name="_core_implementing_the_controlling_function"></a> Implementazione della funzione di controllo  
 
La funzione di controllo consente di definire il thread. Quando si accede a questa funzione, il thread inizia e termina all'uscita, il thread. Questa funzione deve avere il seguente prototipo:  
  
```  
UINT MyControllingFunction( LPVOID pParam );  
```  
  
Il parametro è un singolo valore. Il valore ricevuto dalla funzione in questo parametro è il valore passato al costruttore quando l'oggetto thread è stato creato. La funzione di controllo può interpretare questo valore in qualunque modo. Ma può essere trattato come un valore scalare o un puntatore a una struttura contenente più parametri oppure può essere ignorato. Se il parametro fa riferimento a una struttura, la struttura è utilizzabile non solo per passare i dati dal computer chiamante al thread, ma anche per passare i dati dal thread al chiamante. Se si usa tale struttura per passare dati al chiamante, il thread dovrà notificare al chiamante quando i risultati sono pronti. Per informazioni sulla comunicazione tra il thread di lavoro al chiamante, vedere [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).  
  
Quando la funzione termina, deve restituire un valore UINT che indica il motivo della terminazione. In genere, questo codice di uscita è 0 per indicare l'esito positivo con altri valori indicano diversi tipi di errori. Si tratta esclusivamente dall'implementazione dipendenti. Alcuni thread potrebbero gestire conteggi dell'utilizzo di oggetti e restituisce il numero corrente di utilizzi dell'oggetto. Per informazioni su come le applicazioni possono recuperare questo valore, vedere [Multithreading: terminazione dei thread](multithreading-terminating-threads.md).  
  
Esistono alcune restrizioni sulle operazioni che è possibile eseguire in un programma multithread scritto con la libreria MFC. Per una descrizione di queste restrizioni e per altri suggerimenti sull'uso dei thread, vedere [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md).  
  
##  <a name="_core_controlling_function_example"></a> Controllo di esempio (funzione)  
 
Nell'esempio seguente viene illustrato come definire una funzione di controllo e usarlo in un'altra parte del programma.  
  
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
  
- [Multithreading: creazione di thread dell'interfaccia utente](multithreading-creating-user-interface-threads.md)  
  
## <a name="see-also"></a>Vedere anche  
 
[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)