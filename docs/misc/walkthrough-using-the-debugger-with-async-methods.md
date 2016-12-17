---
title: "Procedura dettagliata: utilizzo del debugger con metodi Async | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "FSharp"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "async (funzionalità), utilizzo del debugger"
  - "await (operatore), utilizzo del debugger"
  - "Esegui istruzione (comando), at await (operatore)"
  - "Esci da istruzione/routine (comando), within async (metodo)"
  - "Esegui istruzione/routine (comando), at await (operatore)"
ms.assetid: 5adb2531-3f09-4b7e-8baa-29de80abee6e
caps.latest.revision: 23
caps.handback.revision: 23
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# Procedura dettagliata: utilizzo del debugger con metodi Async
Tramite la funzionalità Async, è possibile chiamare i metodi asincroni senza utilizzare callback o suddividere il codice in più metodi o espressioni lambda.  Per rendere asincrono il codice sincrono, chiamare un metodo asincrono anziché un metodo sincrono e aggiungere alcune parole chiave al codice.  Per ulteriori informazioni, vedere [Programmazione asincrona con Async e Await](../Topic/Asynchronous%20Programming%20with%20Async%20and%20Await%20\(C%23%20and%20Visual%20Basic\).md).  
  
 Nel debugger di Visual Studio, è possibile utilizzare i comandi **Esegui istruzione**, **Esegui istruzione\/routine** ed **Esci da istruzione\/routine** con la funzionalità `Async`.  È inoltre possibile continuare a utilizzare i punti di interruzione, in particolare per visualizzare il flusso di controllo in corrispondenza di un'istruzione che contiene un operatore await.  In questa procedura dettagliata, si completeranno le seguenti attività, che possono essere effettuate in qualsiasi ordine.  
  
-   Illustrare il flusso di controllo in corrispondenza di un'istruzione await utilizzando i punti di interruzione.  
  
-   Comprendere il comportamento dei comandi **Esegui istruzione** ed **Esegui istruzione\/routine** nelle istruzioni che contengono un operatore await.  
  
-   Comprendere il comportamento del comando **Esci da istruzione\/routine** quando viene utilizzato dall'interno di un metodo async.  
  
## Punti di interruzione per mostrare il flusso di controllo  
 Se si contrassegna un metodo con il modificatore [Async](../Topic/Async%20\(Visual%20Basic\).md) \(Visual Basic\) o [async](../Topic/async%20\(C%23%20Reference\).md) \(C\#\), è possibile utilizzare l'operatore [Await](../Topic/Async%20\(Visual%20Basic\).md) \(Visual Basic\) o [await](../Topic/await%20\(C%23%20Reference\).md) \(C\#\) nel metodo.  Per creare un'espressione await, associare l'operatore await con un'attività.  Quando un'espressione await viene chiamata per l'attività, il metodo corrente termina immediatamente e restituisce un'attività diversa.  Quando l'attività associata all'operatore await finisce, l'esecuzione riprende nello stesso metodo.  Per ulteriori informazioni, vedere [Flusso di controllo in programmi asincroni](../Topic/Control%20Flow%20in%20Async%20Programs%20\(C%23%20and%20Visual%20Basic\).md).  
  
> [!NOTE]
>  Un metodo async viene restituito al chiamante quando rileva il primo oggetto atteso che non è ancora completo o raggiunge la fine del metodo async, qualunque si verifichi prima.  
  
> [!NOTE]
>  Nelle applicazioni console di questi esempi viene utilizzato il metodo <xref:System.Threading.Tasks.Task.Wait%2A> per impedire che l'applicazione termini in `Main`.  Non utilizzare il metodo <xref:System.Threading.Tasks.Task.Wait%2A> all'esterno delle applicazioni console per evitare un'eventuale situazione di deadlock.  
  
 Nella procedura seguente vengono impostati i punti di interruzione per illustrare ciò che accade quando l'applicazione raggiunge un'istruzione await.  È anche possibile illustrare il flusso di controllo aggiungendo istruzioni `Debug.WriteLine`.  
  
1.  Creare un'applicazione console, quindi incollarvi il codice riportato di seguito:  
  
     [!code-cs[csAsyncDebugging#1](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_1.cs)]
     [!code-vb[csAsyncDebugging#1](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_1.vb)]  
  
2.  Impostare punti di interruzione di debug nelle tre righe che terminano con un commento "set breakpoint".  
  
3.  Premere F5 oppure scegliere **Debug**, **Avvia debug** nella barra dei menu per eseguire l'applicazione.  
  
     L'applicazione passa al metodo `ProcessAsync` e l'esecuzione viene interrotta alla riga che contiene l'operatore await.  
  
4.  Premere nuovamente F5.  
  
     Poiché è stata arrestate in un'istruzione che contiene un operatore await, l'applicazione termina immediatamente il metodo async e restituisce un'attività.  Di conseguenza, l'applicazione termina il metodo `ProcessAsync` e si interrompe in corrispondenza del punto di interruzione nel metodo di chiamata \(`Main`\).  
  
5.  Premere nuovamente F5.  
  
     Al completamento del metodo `DoSomethingAsync`, il codice riprende dopo l'istruzione await nel metodo di chiamata.  L'applicazione, pertanto, si interrompe in corrispondenza del punto di interruzione nel metodo `ProcessAsync`.  
  
     Inizialmente, quando `DoSomethingAsync` era atteso, il metodo `ProcessAsync` è stato chiuso e ha restituito un'attività.  Al completamento del metodo `DoSomethingAsync` atteso, la valutazione dell'istruzione await ha prodotto il valore restituito di `DoSomethingAsync`.  Il metodo `DoSomethingAsync` viene definito per restituire `Task (Of Integer)` in Visual Basic o `Task<int>` in C\#, pertanto il valore nella relativa istruzione return è un Integer.  Per ulteriori informazioni, vedere [Tipi restituiti asincroni](../Topic/Async%20Return%20Types%20\(C%23%20and%20Visual%20Basic\).md).  
  
### Ottenere e attendere un'attività  
 Nel metodo `ProcessAsync` l'istruzione `Dim result = Await DoSomethingAsync()` \(Visual Basic\) o `var result = await DoSomethingAsync();` \(C\#\) è una contrazione delle due istruzioni seguenti:  
  
 [!code-cs[csAsyncDebugging#2](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_2.cs)]
 [!code-vb[csAsyncDebugging#2](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_2.vb)]  
  
 La prima riga di codice chiama il metodo async e restituisce un'attività.  L'attività viene associata all'operatore await nella riga di codice successiva.  L'istruzione await termina il metodo \(`ProcessAsync`\) e restituisce un'altra attività.  Al completamento dell'attività associata all'operatore await, il codice riprende nel metodo \(`ProcessAsync`\) dopo l'istruzione await.  
  
 Quando l'istruzione await restituisce immediatamente un'altra attività, questa è l'argomento restituito del metodo async che contiene l'operatore await \(`ProcessAsync`\).  L'attività restituita dall'istruzione await include l'esecuzione di codice che avviene dopo await nello stesso metodo, pertanto tale attività è diversa dall'attività associata all'istruzione await.  
  
## Eseguire istruzioni e routine  
 Il comando **Esegui istruzione** esegue un'istruzione in un metodo, ma il comando **Esegui istruzione\/routine** esegue la chiamata al metodo, quindi si interrompe nella riga successiva del metodo di chiamata.  Per ulteriori informazioni, vedere [Eseguire istruzione, istruzione/routine o uscire da istruzione/routine del codice](../Topic/Navigating%20through%20Code%20with%20the%20Debugger.md#BKMK_Step_into__over__or_out_of_the_code).  
  
 Nella procedura riportata di seguito viene illustrato ciò che si verifica quando si sceglie il comando **Esegui istruzione** o **Esegui istruzione\/routine** in un'istruzione await.  
  
1.  Sostituire il codice nell'applicazione console con il codice seguente.  
  
     [!code-cs[csAsyncDebugging#3](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_3.cs)]
     [!code-vb[csAsyncDebugging#3](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_3.vb)]  
  
2.  Premere F11 oppure scegliere **Debug**, **Esegui istruzione** nella barra dei menu per avviare una dimostrazione del comando `Step Into` in un'istruzione che contiene un operatore await.  
  
     L'applicazione viene avviata e interrotta alla prima riga, ovvero `Sub Main()` in Visual Basic o la parentesi graffa di apertura del metodo `Main` in C\#.  
  
3.  Premere F11 altre tre volte.  
  
     A questo punto, l'applicazione dovrebbe trovarsi in corrispondenza dell'istruzione await nel metodo `ProcessAsync`.  
  
4.  Premere F11.  
  
     L'applicazione passa al metodo `DoSomethingAsync` e si interrompe alla prima riga.  Questo comportamento si verifica anche se, in corrispondenza dell'istruzione `await`, l'applicazione torna immediatamente al metodo di chiamata \(`Main`\).  
  
5.  Continuare a premere F11 finché l'applicazione torna all'istruzione await nel metodo `ProcessAsync`.  
  
6.  Premere F11.  
  
     L'applicazione si interrompe alla riga che segue l'istruzione await.  
  
7.  Nella barra dei menu scegliere **Debug**, **Interrompi debug** per arrestare l'esecuzione dell'applicazione.  
  
     Nei passaggi seguenti viene illustrato il comando **Esegui istruzione\/routine** in un'istruzione await.  
  
8.  Premere F11 quattro volte oppure scegliere quattro volte **Debug**, **Esegui istruzione** nella barra dei menu.  
  
     A questo punto, l'applicazione dovrebbe trovarsi in corrispondenza dell'istruzione await nel metodo `ProcessAsync`.  
  
9. Premere F10 oppure scegliere **Debug**, **Esegui istruzione\/routine** nella barra dei menu.  
  
     L'esecuzione si interrompe alla riga che segue l'istruzione await.  Questo comportamento si verifica anche se l'applicazione torna immediatamente al metodo di chiamata \(`Main`\) in corrispondenza dell'istruzione await.  Il comando `Step Over` inoltre esegue le istruzioni\/routine dell'esecuzione del metodo `DoSomethingAsync`, come previsto.  
  
10. Nella barra dei menu scegliere **Debug**, **Interrompi debug** per arrestare l'esecuzione dell'applicazione.  
  
     Come illustrato nei passaggi riportati di seguito, il comportamento dei comandi **Esegui istruzione** ed **Esegui istruzione\/routine** si differenzia leggermente quando l'operatore await si trova in una riga diversa dalla chiamata al metodo async.  
  
11. Nel metodo `ProcessAsync` sostituire l'istruzione await con il codice seguente.  L'istruzione await originale è una contrazione delle due istruzioni seguenti.  
  
     [!code-cs[csAsyncDebugging#2](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_2.cs)]
     [!code-vb[csAsyncDebugging#2](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_2.vb)]  
  
12. Premere F11 o scegliere **Debug**, **Esegui istruzione** più volte nella barra dei menu per avviare l'esecuzione ed eseguire il codice un'istruzione alla volta.  
  
     Alla chiamata a `DoSomethingAsync`, il comando **Esegui istruzione** interrompe il metodo `DoSomethingAsync`, mentre il comando **Esegui istruzione\/routine** passa all'istruzione successiva, come previsto.  All'istruzione await entrambi i comandi si interrompono in corrispondenza dell'istruzione successiva ad await.  
  
## Esci da istruzione\/routine  
 Nei metodi non async, il comando **Esci da istruzione\/routine** interrompe il metodo di chiamata del codice che segue la chiamata al metodo.  Per i metodi async, la logica in base alla quale l'esecuzione interrompe il metodo di chiamata è più complessa e varia a seconda che il comando **Esci da istruzione\/routine** si trovi nella prima riga del metodo async.  
  
1.  Sostituire il codice nell'applicazione console con il codice seguente.  
  
     [!code-cs[csAsyncDebugging#4](../misc/codesnippet/CSharp/walkthrough-using-the-debugger-with-async-methods_4.cs)]
     [!code-vb[csAsyncDebugging#4](../misc/codesnippet/VisualBasic/walkthrough-using-the-debugger-with-async-methods_4.vb)]  
  
2.  Impostare un punto di interruzione nella riga `Debug.WriteLine("before")` nel metodo `DoSomethingAsync`.  
  
     Ciò illustra il comportamento del comando **Esci da istruzione\/routine** da una riga di un metodo async diversa dalla prima.  
  
3.  Premere F5 oppure scegliere **Debug**, **Avvia debug** nella barra dei menu per avviare l'applicazione.  
  
     Il codice si interrompe in `Debug.WriteLine("before")` nel metodo `DoSomethingAsync`.  
  
4.  Premere MAIUSC\+F11 oppure scegliere **Debug**, **Esci da istruzione\/routine** nella barra dei menu.  
  
     L'applicazione interrompe il metodo di chiamata in corrispondenza dell'istruzione await per l'attività associata al metodo corrente.  A questo punto, l'applicazione si interrompe all'istruzione await nel metodo `ProcessAsync`.  L'applicazione non si interrompe in `Dim z = 0` \(Visual Basic\) o `int z = 0;` \(C\#\), ovvero il codice che segue la chiamata al metodo `DoSomethingAsync`.  
  
5.  Nella barra dei menu scegliere **Debug**, **Interrompi debug** per arrestare l'esecuzione dell'applicazione.  
  
     Nei passaggi seguenti viene illustrato ciò che accade quando si sceglie **Esci da istruzione\/routine** dalla prima riga di un metodo async.  
  
6.  Rimuovere il punto di interruzione esistente e aggiungere un punto di interruzione nella prima riga del metodo `DoSomethingAsync`.  
  
     In C\# aggiungere il punto di interruzione in corrispondenza della parentesi graffa di apertura del metodo `DoSomethingAsync`.  In Visual Basic aggiungere il punto di interruzione sulla riga che contiene `Async Function DoSomethingAsync() As Task(Of Integer)`.  
  
7.  Premere F5 per avviare l'applicazione.  
  
     Il codice si interrompe alla prima riga del metodo `DoSomethingAsync`.  
  
8.  Nella barra dei menu scegliere **Debug**, **Windows**, **Output**.  
  
     Verrà aperta la finestra **Output**.  
  
9. Premere MAIUSC\+F11 oppure scegliere **Debug**, **Esci da istruzione\/routine** nella barra dei menu.  
  
     L'applicazione riprende finché il metodo async non raggiunge la prima istruzione await, quindi l'applicazione si interrompe all'istruzione di chiamata.  Di conseguenza, l'applicazione si interrompe in `Dim the Task = DoSomethingAsync()` \(Visual Basic\) o `var theTask = DoSomethingAsync();` \(C\#\).  Il messaggio "before" è stato visualizzato nella finestra Output, a differenza del messaggio "after".  
  
10. Premere F5 per continuare a eseguire l'applicazione.  
  
     L'applicazione continua con l'istruzione che segue l'istruzione await nella funzione async chiamata \(`DoSomethingAsync`\).  Nella finestra Output viene visualizzato il messaggio "after".  
  
## Vedere anche  
 [Spostarsi nel codice con il Debugger](../Topic/Navigating%20through%20Code%20with%20the%20Debugger.md)