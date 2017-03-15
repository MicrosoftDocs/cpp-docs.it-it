---
title: "Multithreading: creazione di thread di lavoro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attività in background [C++]"
  - "multithreading [C++], thread di lavoro"
  - "threading [C++], creazione di thread"
  - "threading [C++], input utente non richiesto"
  - "threading [C++], thread di lavoro"
  - "threading [MFC], thread di lavoro"
  - "thread di lavoro [C++]"
ms.assetid: 670adbfe-041c-4450-a3ed-be14aab15234
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Multithreading: creazione di thread di lavoro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I thread di lavoro vengono in genere utilizzati per gestire attività in background delle quali l'utente non deve attendere il completamento per di continuare a utilizzare l'applicazione.  Attività come il ricalcolo e la stampa in background sono tipici esempi di thread di lavoro.  In questo argomento vengono descritti i passaggi necessari per la creazione di thread di lavoro.  Gli argomenti trattati includono  
  
-   [Avvio del thread](#_core_starting_the_thread)  
  
-   [Implementazione della funzione di controllo](#_core_implementing_the_controlling_function)  
  
-   [Esempio](#_core_controlling_function_example)  
  
 La creazione di un thread di lavoro è un'attività relativamente semplice.  Per l'esecuzione del thread sono necessari solo due passaggi: l'implementazione della funzione di controllo e l'avvio del thread.  Non è necessario derivare una classe da [CWinThread](../mfc/reference/cwinthread-class.md).  È possibile eseguire questa operazione se è necessaria una versione speciale di `CWinThread`, ma per la maggior parte dei thread di lavoro più semplici non è richiesta.  È possibile utilizzare `CWinThread` senza alcuna modifica.  
  
##  <a name="_core_starting_the_thread"></a> Avvio del thread  
 Esistono due versioni in overload di `AfxBeginThread`: una che può creare solo thread di lavoro e una che può creare sia thread di lavoro che thread di interfaccia utente.  Per avviare l'esecuzione del thread di lavoro utilizzando il primo overload, chiamare [AfxBeginThread](../Topic/AfxBeginThread.md), specificando le informazioni indicate di seguito:  
  
-   L'indirizzo della funzione di controllo.  
  
-   Il parametro da passare alla funzione di controllo.  
  
-   La priorità desiderata per il thread \(facoltativo\).  Il livello di priorità predefinito è normale.  Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
-   La dimensione dello stack desiderata per il thread \(facoltativo\).  Il valore predefinito corrisponde alla dimensione dello stack del thread di creazione.  
  
-   **CREATE\_SUSPENDED**, se si desidera che il thread sia creato in uno stato sospeso \(facoltativo\).  Il valore predefinito è 0, che corrisponde all'avvio normale del thread.  
  
-   Gli attributi di sicurezza desiderati \(facoltativo\).  L'accesso predefinito è identico a quello del thread padre.  Per ulteriori informazioni sul formato di queste informazioni sulla sicurezza, vedere [SECURITY\_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Con `AfxBeginThread` viene creato e inizializzato automaticamente un oggetto `CWinThread`, viene avviato e ne viene restituito l'indirizzo, in modo che sia possibile farvi riferimento successivamente.  Nel corso della routine vengono effettuati controlli per assicurare che tutti gli oggetti siano resi disponibili in modo corretto, nell'eventualità che una parte della creazione non riuscisse.  
  
##  <a name="_core_implementing_the_controlling_function"></a> Implementazione della funzione di controllo  
 La funzione di controllo consente di definire il thread.  Quando la funzione viene inserita, il thread viene avviato e termina all'uscita dalla funzione.  La funzione deve avere il seguente prototipo:  
  
```  
UINT MyControllingFunction( LPVOID pParam );  
```  
  
 Il parametro è un valore singolo.  Il valore ricevuto dalla funzione in questo parametro è quello passato al costruttore al momento della creazione dell'oggetto thread.  Il valore può essere interpretato dalla funzione di controllo in qualunque modo.  Può essere considerato come un valore scalare, come un puntatore a una struttura contenente più parametri oppure può essere ignorato.  Se il parametro fa riferimento a una struttura, questa può essere utilizzata per il passaggio di dati non solo dal chiamante al thread, ma anche dal thread al chiamante.  Se si utilizza questa struttura per passare dati al chiamante, il thread dovrà notificare al chiamante quando i risultati sono disponibili.  Per informazioni sulla comunicazione tra il thread di lavoro e il chiamante, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).  
  
 Quando la funzione termina, deve essere restituito un valore **UINT** che indica il motivo della terminazione.  Il codice di uscita in genere è 0 per indicare un esito positivo, mentre altri valori indicano diversi tipi di errori.  Questo aspetto dipende esclusivamente dall'implementazione.  Con alcuni thread è possibile mantenere il conteggio degli utilizzi degli oggetti e ottenere il numero corrente di utilizzi dell'oggetto.  Per una dimostrazione del recupero di questo valore da parte delle applicazioni, vedere [Multithreading: terminazione dei thread](../parallel/multithreading-terminating-threads.md).  
  
 Esistono alcuni limiti per le operazioni possibili in un programma multithread scritto con la libreria MFC.  Per una descrizione di questi limiti e per altri suggerimenti sull'utilizzo dei thread, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).  
  
##  <a name="_core_controlling_function_example"></a> Esempio di funzione di controllo  
 Nell'esempio riportato di seguito viene illustrato come definire una funzione di controllo e come utilizzarla in un'altra parte del programma.  
  
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
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Multithreading: creazione di thread dell'interfaccia utente](../parallel/multithreading-creating-user-interface-threads.md)  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)