---
title: "Risoluzione dei problemi relativi alle eccezioni: System.InvalidOperationException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "InvalidOperationException (classe)"
ms.assetid: db3400e5-62d7-4d65-897d-387e7edcb7cf
caps.latest.revision: 33
caps.handback.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.InvalidOperationException
Un'eccezione <xref:System.InvalidOperationException?displayProperty=fullName> viene generata quando viene chiamato un metodo di un oggetto, se lo stato dell'oggetto non può supportare la chiamata al metodo. L'eccezione viene generata anche quando un metodo tenta di modificare l'interfaccia utente da un thread che non è il thread principale o il thread dell'interfaccia utente.  
  
> [!IMPORTANT]
>  Poiché le eccezioni <xref:System.InvalidOperationException> possono essere generate in una serie infinita di circostanze, è importante leggere e comprendere il messaggio <xref:System.Exception.Message%2A> visualizzato nelle Informazioni sulle eccezioni.  
  
##  <a name="BKMK_In_this_article"></a> Contenuto dell'articolo  
 [Un metodo in esecuzione su un thread non dell'interfaccia utente aggiorna l'interfaccia utente](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
 [Un'istruzione in un blocco foreach (For Each in Visual Basic) modifica la raccolta durante lo scorrimento](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
 [Viene eseguito il cast a T di un oggetto Nullable&lt;T&gt; null](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
 [Un metodo System.Linq.Enumerable viene chiamato su una raccolta vuota](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
 [Articoli correlati](#BKMK_Related_articles)  
  
 Gli esempi di codice in questo articolo illustrano come alcune eccezioni <xref:System.InvalidOperationException> comuni possono verificarsi nell'app. Il modo in cui vengono gestiti i problemi dipende dalla situazione specifica. Se l'eccezione è irreversibile per la funzionalità dell'app, è possibile usare un costrutto [try … catch](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) \([Try .. Catch](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md) in Visual Basic\) per acquisire l'eccezione e pulire lo stato dell'app prima di uscire. Altre eccezioni <xref:System.InvalidOperationException> possono però essere previste ed evitate. Gli esempi dei metodi rivisti illustrano alcune di queste tecniche.  
  
##  <a name="BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI"></a> Un metodo in esecuzione su un thread non dell'interfaccia utente aggiorna l'interfaccia utente  
 [Generazione di un'eccezione InvalidOperationException con un aggiornamento dell'interfaccia utente da un thread non dell'interfaccia utente](#BKMK_Causing_an_InvalidOperationException_with_a_UI_update_from_a_non_UI_thread)  **&#124;**  [Evitare le eccezioni InvalidOperationException su thread non dell'interfaccia utente](#BKMK_Avoiding_InvalidOperationExceptions_on_non_UI_threads)  
  
 La maggior parte dei framework delle app per la GUI \(interfaccia grafica utente\) .NET, ad esempio Windows Form e Windows Presentation Foundation \(WPF\), consente di accedere agli oggetti della GUI solo dal thread che crea e gestisce l'interfaccia utente, ovvero dal thread **principale** o dell'**interfaccia utente**. Un'eccezione <xref:System.InvalidOperationException> viene generata quando si tenta di accedere a un elemento dell'interfaccia utente da un thread non dell'interfaccia utente.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_a_UI_update_from_a_non_UI_thread"></a> Generazione di un'eccezione InvalidOperationException con un aggiornamento dell'interfaccia utente da un thread non dell'interfaccia utente  
  
> [!NOTE]
>  Gli esempi seguenti usano il [Task\-based Asynchronous Pattern \(TAP\)](../Topic/Task-based%20Asynchronous%20Pattern%20\(TAP\).md) per creare thread non dell'interfaccia utente. Tuttavia, gli esempi riguardano anche tutti i [Asynchronous Programming Patterns](../Topic/Asynchronous%20Programming%20Patterns.md) .NET.  
  
 In questi esempi, il gestore eventi `ThreadsExampleBtn_Click` chiama il metodo `DoSomeWork` due volte. La prima chiamata al metodo \(`DoSomeWork(20);`\) viene eseguita in modo sincrono e completata con esito positivo. Tuttavia, la seconda chiamata \(`Task.Run( () => { DoSomeWork(1000);});`\) viene eseguita in un thread nel [pool di thread](http://msdn.microsoft.com/en-us/library/system.threading.threadpool.aspx) dell'app. Poiché questa chiamata tenta di aggiornare l'interfaccia utente da un thread non dell'interfaccia utente, l'istruzione genera un'eccezione <xref:System.InvalidOperationException>.  
  
 **App Store e WPF**  
  
> [!NOTE]
>  Nelle app di Store Phone, viene generata un'eccezione <xref:System.Exception> anziché l'eccezione <xref:System.InvalidOperationException> più specifica.  
  
 **Messaggi di eccezione:**  
  
|||  
|-|-|  
|App WPF|Altre informazioni: Impossibile accedere all'oggetto dal thread chiamante perché tale oggetto è di proprietà di un altro thread.|  
|Applicazioni Windows Store|Altre informazioni: L'applicazione ha chiamato un'interfaccia su cui era stato eseguito il marshalling per un thread differente. \(Eccezione da HRESULT: 0x8001010E \(RPC\_E\_WRONG\_THREAD\)\)|  
  
```c#  
private async void ThreadsExampleBtn_Click(object sender, RoutedEventArgs e) { TextBox1.Text = String.Empty; TextBox1.Text = "Simulating work on UI thread.\n"; DoSomeWork(20); TextBox1.Text += "Simulating work on non-UI thread.\n"; await Task.Run(() => DoSomeWork(1000)); TextBox1.Text += "ThreadsExampleBtn_Click completes. "; } private void DoSomeWork(int msOfWork) { // simulate work var endTime = DateTime.Now.AddMilliseconds(msOfWork); while (DateTime.Now < endTime) { // spin }; // report completion var msg = String.Format("Some work completed in {0} ms on UI thread. \n", msOfWork); TextBox1.Text += msg; }  
```  
  
 **App di Windows Form**  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: Operazione cross\-thread non valida: è stato eseguito l'accesso al controllo 'TextBox1' da un thread diverso da quello da cui è stata eseguita la creazione.  
  
```c#  
private async void ThreadsExampleBtn_Click(object sender, EventArgs e) { TextBox1.Text = String.Empty; var tbLinesList = new List<string>() {"Simulating work on UI thread."}; TextBox1.Lines = tbLinesList.ToArray(); DoSomeWork(20, tbLinesList); tbLinesList.Add("Simulating work on non-UI thread."); TextBox1.Lines = tbLinesList.ToArray(); await Task.Run(() => DoSomeWork(1000, tbLinesList)); tbLinesList.Add("ThreadsExampleBtn_Click completes."); TextBox1.Lines = tbLinesList.ToArray(); } private void DoSomeWork(int msOfWork, List<string> tbLinesList) { // simulate work var endTime = DateTime.Now.AddMilliseconds(msOfWork); while (DateTime.Now < endTime) { }; { // spin }; // report completion var msg = String.Format("Some work completed in {0} ms on UI thread. \n", msOfWork); tbLinesList.Add(msg); TextBox1.Lines = tbLinesList.ToArray(); }  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un metodo in esecuzione su un thread non dell'interfaccia utente aggiorna l'interfaccia utente](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
###  <a name="BKMK_Avoiding_InvalidOperationExceptions_on_non_UI_threads"></a> Evitare le eccezioni InvalidOperationException su thread non dell'interfaccia utente  
 I framework dell'interfaccia utente di Windows implementano un modello *dispatcher* che include un metodo per verificare se una chiamata a un membro di un elemento dell'interfaccia utente viene eseguita sul thread dell'interfaccia utente e altri metodi per pianificare la chiamata sul thread dell'interfaccia utente.  
  
 **App WPF**  
  
 Nelle app WPF usare uno dei metodi <xref:System.Windows.Threading.Dispatcher.Invoke%2A?displayProperty=fullName> per eseguire un delegato sul thread dell'interfaccia utente. Se necessario, usare il metodo <xref:System.Windows.Threading.Dispatcher.CheckAccess%2A?displayProperty=fullName> per determinare se un metodo è in esecuzione su un thread non dell'interfaccia utente.  
  
```c#  
private void DoSomeWork(int msOfWork) { var endTime = DateTime.Now.AddMilliseconds(msOfWork); while (DateTime.Now < endTime) { // spin }; // report completion var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n"; var msg = String.Empty; if (TextBox1.Dispatcher.CheckAccess()) { msg = String.Format(msgFormat, msOfWork, String.Empty); TextBox1.Text += msg; } else { msg = String.Format(msgFormat, msOfWork, "non-"); Action act = ()=> {TextBox1.Text += msg;}; TextBox1.Dispatcher.Invoke(act); } }  
  
```  
  
 **App di Windows Form**  
  
 Nelle app di Windows Form usare il metodo <xref:System.Windows.Forms.Control.Invoke%2A?displayProperty=fullName> per eseguire un delegato che aggiorna il thread dell'interfaccia utente. Se necessario, usare la proprietà <xref:System.Windows.Forms.Control.InvokeRequired%2A?displayProperty=fullName> per determinare se un metodo è in esecuzione su un thread non dell'interfaccia utente.  
  
```c#  
private void DoSomeWork(int msOfWork, List<string> tbLinesList) { // simulate work var endTime = DateTime.Now.AddMilliseconds(msOfWork); while (DateTime.Now < endTime) { // spin }; // report completion var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n"; var msg = String.Empty; if (TextBox1.InvokeRequired) { msg = String.Format(msgFormat, msOfWork, "non-"); tbLinesList.Add(msg); Action act = () => TextBox1.Lines = tbLinesList.ToArray(); TextBox1.Invoke( act ); } else { msg = String.Format(msgFormat, msOfWork, String.Empty); tbLinesList.Add(msg); TextBox1.Lines = tbLinesList.ToArray(); } }  
```  
  
 **Applicazioni Windows Store**  
  
 Nelle app dello Store usare il metodo <xref:Windows.UI.Core.CoreDispatcher.RunAsync%2A?displayProperty=fullName> per eseguire un delegato che aggiorna il thread dell'interfaccia utente. Se necessario, usare la proprietà <xref:Windows.UI.Core.CoreDispatcher.HasThreadAccess%2A> per determinare se un metodo è in esecuzione su un thread non dell'interfaccia utente.  
  
```c#  
private void DoSomeWork(int msOfWork) { // simulate work var endTime = DateTime.Now.AddMilliseconds(msOfWork); while (DateTime.Now < endTime) { // spin }; // report completion var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n"; var msg = String.Empty; if (TextBox1.Dispatcher.HasThreadAccess) { msg = String.Format(msgFormat, msOfWork, String.Empty); TextBox1.Text += msg; } else { msg = String.Format(msgFormat, msOfWork, "non-"); TextBox1.Dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal,()=> {TextBox1.Text += msg;}); } }  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un metodo in esecuzione su un thread non dell'interfaccia utente aggiorna l'interfaccia utente](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
##  <a name="BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating"></a> Un'istruzione in un blocco foreach \(For Each in Visual Basic\) modifica la raccolta durante lo scorrimento  
 [Generazione di un'eccezione InvalidOperationException con foreach](#BKMK_Causing_an_InvalidOperationException_with_foreach)  **&#124;**  [Evitare le eccezioni InvalidOperationException nei cicli](#BKMK_Avoiding_InvalidOperationExceptions_in_loops)  
  
 Un'istruzione [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md) \([For Each](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md) in Visual Basic\) ripete un gruppo di istruzioni incorporate per ogni elemento in una matrice o una raccolta che implementa l'interfaccia <xref:System.Collections.IEnumerable?displayProperty=fullName> o <xref:System.Collections.Generic.IEnumerable%601?displayProperty=fullName>. L'istruzione `foreach` viene usata per scorrere la raccolta per leggere e modificare gli elementi, ma non può essere usata per aggiungere o rimuovere elementi dalla raccolta. Un'eccezione <xref:System.InvalidOperationException> viene generata se si aggiungono o rimuovono elementi dalla raccolta di origine in un'istruzione foreach.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_foreach"></a> Generazione di un'eccezione InvalidOperationException con foreach  
 In questo esempio, un'eccezione <xref:System.InvalidOperationException> viene generata quando l'istruzione `numList.Add(5);` tenta di modificare l'elenco nel blocco foreach.  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: Raccolta modificata. Impossibile eseguire l'operazione di enumerazione.  
  
<CodeContentPlaceHolder>5</CodeContentPlaceHolder>  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un'istruzione in un blocco foreach (For Each in Visual Basic) modifica la raccolta durante lo scorrimento](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
###  <a name="BKMK_Avoiding_InvalidOperationExceptions_in_loops"></a> Evitare le eccezioni InvalidOperationException nei cicli  
  
> [!IMPORTANT]
>  L'aggiunta o la rimozione di elementi in un elenco durante lo scorrimento della raccolta può avere effetti collaterali imprevisti e difficili da prevedere. Se possibile, è consigliabile spostare l'operazione al di fuori dello scorrimento.  
  
<CodeContentPlaceHolder>6</CodeContentPlaceHolder>  
 Se è necessario aggiungere o rimuovere elementi in un elenco durante lo scorrimento di una raccolta, usare un ciclo [for](../Topic/for%20\(C%23%20Reference\).md) \([For](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md) in Visual Basic\):  
  
<CodeContentPlaceHolder>7</CodeContentPlaceHolder>  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un'istruzione in un blocco foreach (For Each in Visual Basic) modifica la raccolta durante lo scorrimento](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
##  <a name="BKMK_A_Nullable_T_that_is_null_is_cast_to_T"></a> Viene eseguito il cast a T di un oggetto Nullable\<T\> null  
 [Generazione di un'eccezione InvalidOperationException con un cast non valido](#BKMK_Causing_an_InvalidOperationException_with_an_invalid_cast)  **&#124;**  [Evitare l'eccezione InvalidOperationException da un cast non valido](#BKMK_Avoiding_InvalidOperationException_from_a_bad_cast)  
  
 Se si esegue il cast di una struttura <xref:System.Nullable%601>`null` \(`Nothing` in Visual Basic\) al relativo tipo sottostante, viene generata un'eccezione <xref:System.InvalidOperationException>.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_an_invalid_cast"></a> Generazione di un'eccezione InvalidOperationException con un cast non valido  
 In questo metodo, un'eccezione <xref:System.InvalidOperationException> viene generata quando il metodo Select esegue il cast di un elemento null di dbQueryResults a un int.  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: L'oggetto nullable deve avere un valore.  
  
```c#  
private void MapQueryResults() { var dbQueryResults = new int?[] { 1, 2, null, 4 }; var ormMap = dbQueryResults.Select(nullableInt => (int)nullableInt); //display map list foreach (var num in ormMap) { Console.Write("{0} ", num); } Console.WriteLine(); }  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Viene eseguito il cast a T di un oggetto Nullable&lt;T&gt; null](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
###  <a name="BKMK_Avoiding_InvalidOperationException_from_a_bad_cast"></a> Evitare l'eccezione InvalidOperationException da un cast non valido  
 Per evitare <xref:System.InvalidOperationException>:  
  
-   Usare la proprietà <xref:System.Nullable%601.HasValue%2A?displayProperty=fullName> per selezionare solo gli elementi che non sono null.  
  
-   Usare uno dei metodi <xref:System.Nullable%601.GetValueOrDefault%2A?displayProperty=fullName> di overload per fornire un valore predefinito per un elemento null.  
  
 **Esempio Nullable\<T\>.HasValue**  
  
```c#  
private void MapQueryResults() { var dbQueryResults = new int?[] { 1, 2, null, 4 }; var ormMap = dbQueryResults .Where(nulllableInt => nulllableInt.HasValue) .Select(num => (int)num); //display map list foreach (var num in ormMap) { Console.Write("{0} ", num); } Console.WriteLine(); // handle nulls Console.WriteLine("{0} nulls encountered in dbQueryResults", dbQueryResults.Where(nullableInt => !nullableInt.HasValue).Count()); }  
```  
  
 **Esempio Nullable\<T\>.GetValueOrDefault**  
  
 In questo esempio, viene usato <xref:System.Nullable%601.GetValueOrDefault%28%600%29> per specificare un valore predefinito all'esterno dei valori previsti restituiti da `dbQueryResults`.  
  
```c#  
private void MapQueryResults() { var dbQueryResults = new int?[] { 1, 2, null, 4 }; var nullFlag = int.MinValue; var ormMap = dbQueryResults.Select(nullableInt => nullableInt.GetValueOrDefault(nullFlag)); // handle nulls Console.WriteLine("'{0}' indicates a null database value.", nullFlag); foreach (var num in ormMap) { Console.Write("{0} ", num); } Console.WriteLine(); }  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Viene eseguito il cast a T di un oggetto Nullable&lt;T&gt; null](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
##  <a name="BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection"></a> Un metodo System.Linq.Enumerable viene chiamato su una raccolta vuota  
 I metodi di <xref:System.Linq.Enumerable><xref:System.Linq.Enumerable.Aggregate%2A>, <xref:System.Linq.Enumerable.Average%2A>, <xref:System.Linq.Enumerable.Last%2A>, <xref:System.Linq.Enumerable.Max%2A>, <xref:System.Linq.Enumerable.Min%2A>, <xref:System.Linq.Enumerable.First%2A>, <xref:System.Linq.Enumerable.Single%2A> e <xref:System.Linq.Enumerable.SingleOrDefault%2A> eseguono operazioni in una sequenza e restituiscono un singolo risultato.  
  
 Alcuni overload di questi metodi generano un'eccezione <xref:System.InvalidOperationException> quando la sequenza è vuota \(altri overload restituiscono `null` \(`Nothing` in Visual Basic\).<xref:System.Linq.Enumerable.SingleOrDefault%2A> genera <xref:System.InvalidOperationException> anche quando la sequenza contiene più di un elemento.  
  
> [!TIP]
>  La maggior parte dei metodi <xref:System.Linq.Enumerable> illustrati in questa sezione è in overload. Assicurarsi di comprendere il comportamento dell'overload scelto.  
  
 **Messaggi di eccezione:**  
  
 [Metodi Aggregate, Average, Last, Max e Min](#BKMK_Aggregate_Average_Last_Max_and_Min_methods)  **&#124;**  [Metodi First e FirstOrDefault](#BKMK_First_and_FirstOrDefault_methods)  **&#124;**  [Metodi Single e SingleOrDefault](#BKMK_Single_and_SingleOrDefault_methods)  
  
###  <a name="BKMK_Aggregate_Average_Last_Max_and_Min_methods"></a> Metodi Aggregate, Average, Last, Max e Min  
  
-   Altre informazioni: La sequenza non contiene elementi  
  
 **Generazione di un'eccezione InvalidOperationException con Average**  
  
 In questo esempio, il metodo seguente genera un'eccezione <xref:System.InvalidOperationException> quando chiama il metodo <xref:System.Linq.Enumerable.Average%2A> perché l'espressione Linq restituisce una sequenza che non contiene elementi maggiori di 4.  
  
```c#  
private void FindAverageOfNumbersGreaterThan4() { var dbQueryResults = new[] { 1, 2, 3, 4 }; var avg = dbQueryResults.Where(num => num > 4).Average(); Console.WriteLine("The average value numbers greater than 4 in the returned records is {0}", avg); }  
```  
  
 Quando si usa uno di questi metodi senza verificare la presenza di una sequenza vuota, si presuppone implicitamente che la sequenza non sia vuota e che una sequenza vuota sia un'occorrenza imprevista. La generazione o il rilevamento dell'eccezione è appropriato quando si presuppone che la sequenza non sarà vuota.  
  
 **Evitare un'eccezione InvalidOperationException causata da una sequenza vuota**  
  
 Usare uno dei metodi <xref:System.Linq.Enumerable.Any%2A?displayProperty=fullName> per verificare se la sequenza è vuota.  
  
> [!TIP]
>  L'uso di <xref:System.Linq.Enumerable.Any%2A> può migliorare le prestazioni della verifica se la sequenza di cui calcolare la media può contenere un numero elevato di elementi o se l'operazione che genera la sequenza è onerosa.  
  
```c#  
private void FindAverageOfNumbersGreaterThan4() { var dbQueryResults = new[] { 1, 2, 3, 4 }; var moreThan4 = dbQueryResults.Where(num => num > 4); if(moreThan4.Any()) { var msgFormat = "The average value numbers greater than 4 in the returned records is {0}"; Console.WriteLine(msgFormat, moreThan4.Average()); } else { // handle empty collection Console.WriteLine("There are no values greater than 4 in the ecords."); } }  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un metodo System.Linq.Enumerable viene chiamato su una raccolta vuota](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
###  <a name="BKMK_First_and_FirstOrDefault_methods"></a> Metodi First e FirstOrDefault  
 <xref:System.Linq.Enumerable.First%2A> restituisce il primo elemento di una sequenza o genera un'eccezione <xref:System.InvalidOperationException> se la sequenza è vuota.  È possibile chiamare il metodo <xref:System.Linq.Enumerable.FirstOrDefault%2A> anziché <xref:System.Linq.Enumerable.First%2A> per restituire un valore specificato o predefinito anziché generare l'eccezione.  
  
> [!NOTE]
>  In .NET Framework i tipi hanno un concetto di valori predefiniti. Ad esempio, per i tipi di riferimento il valore predefinito è null, mentre per un tipo Integer è zero. Vedere [Tabella dei valori predefiniti](../Topic/Default%20Values%20Table%20\(C%23%20Reference\).md)  
  
 **Generazione di un'eccezione InvalidOperationException con First**  
  
 <xref:System.Linq.Enumerable.First%2A> è un metodo di ottimizzazione che restituisce il primo elemento di una sequenza che soddisfa una condizione specificata. Se non viene trovato un elemento che soddisfa la condizione, i metodi generano un'eccezione <xref:System.InvalidOperationException>.  
  
 In questo esempio, il metodo `First` genera l'eccezione perché `dbQueryResults` non contiene un elemento maggiore di 4.  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: La sequenza non contiene elementi corrispondenti  
  
```c#  
private void FindANumbersGreaterThan4() { var dbQueryResults = new[] { 1, 2, 3, 4 }; var firstNum = dbQueryResults.First(n=> n > 4); var msgFormat = "{0} is an element of dbQueryResults that is greater than 4"; Console.WriteLine(msgFormat, firstNum); }  
  
```  
  
 **Evitare un'eccezione con FirstOrDefault**  
  
 È possibile usare i metodi <xref:System.Linq.Enumerable.FirstOrDefault%2A> al posto di <xref:System.Linq.Enumerable.First%2A> per verificare che la sequenza `firstNum` contenga almeno un elemento. Se la query non trova un elemento che soddisfa la condizione, restituisce un valore specificato o predefinito. È possibile controllare il valore restituito per determinare se verranno trovati elementi.  
  
> [!NOTE]
>  L'uso di <xref:System.Linq.Enumerable.FirstOrDefault%2A> può essere più complicato da implementare se il valore predefinito del tipo e un elemento valido nella sequenza.  
  
```c#  
private void FindANumbersGreaterThan4() { var dbQueryResults = new[] { 1, 2, 3, 4 }; // default(object) == null var firstNum = dbQueryResults.FirstOrDefault(n => n > 4); if (firstNum != 0) { var msgFormat = "{0} is an element of dbQueryResults that is greater than 4"; Console.WriteLine(msgFormat, firstNum); } else { // handle default case Console.WriteLine("No element of dbQueryResults is greater than 4."); } }  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un metodo System.Linq.Enumerable viene chiamato su una raccolta vuota](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
###  <a name="BKMK_Single_and_SingleOrDefault_methods"></a> Metodi Single e SingleOrDefault  
 I metodi <xref:System.Linq.Enumerable.Single%2A?displayProperty=fullName> restituiscono l'unico elemento di una sequenza o l'unico elemento di una sequenza che soddisfa un test specificato.  
  
 Se nella sequenza non sono presenti elementi o se è presente più di un elemento, il metodo genera un'eccezione <xref:System.InvalidOperationException>.  
  
 È possibile usare <xref:System.Linq.Enumerable.SingleOrDefault%2A> per restituire un valore specificato o predefinito anziché generare l'eccezione quando la sequenza non contiene elementi. Tuttavia, <xref:System.Linq.Enumerable.SingleOrDefault%2A> genererà comunque un'eccezione <xref:System.InvalidOperationException> quando la sequenza contiene più di un elemento che corrisponde al predicato di selezione.  
  
> [!NOTE]
>  In .NET Framework i tipi hanno un concetto di valori predefiniti. Ad esempio, per i tipi di riferimento il valore predefinito è null, mentre per un tipo Integer è zero. Vedere [Tabella dei valori predefiniti](../Topic/Default%20Values%20Table%20\(C%23%20Reference\).md)  
  
 **Generazione di eccezioni InvalidOperationException con Single**  
  
 In questo esempio, `singleObject` genera un'eccezione <xref:System.InvalidOperationException> perché `dbQueryResults` non contiene un elemento maggiore di 4.  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: La sequenza non contiene elementi corrispondenti  
  
```c#  
private void FindTheOnlyNumberGreaterThan4() { var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 }; var singleObject = dbQueryResults.Single(obj => (int)obj > 4); // display results var msgFormat = "{0} is the only element of dbQueryResults that is greater than 4"; Console.WriteLine(msgFormat, singleObject); }  
  
```  
  
 **Generazione di eccezioni InvalidOperationException con Single o SingleOrDefault**  
  
 In questo esempio, `singleObject` genera un'eccezione <xref:System.InvalidOperationException> perché `dbQueryResults` contiene più di un elemento maggiore di 2.  
  
 **Messaggio di eccezione:**  
  
-   Altre informazioni: La sequenza contiene più di un elemento corrispondente  
  
```c#  
private void FindTheOnlyNumberGreaterThan2() { var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 }; var singleObject = dbQueryResults.SingleOrDefault(obj => (int)obj > 2); if (singleObject != null) { var msgFormat = "{0} is the only element of dbQueryResults that is greater than 2"; Console.WriteLine(msgFormat, singleObject); } else { // handle empty collection Console.WriteLine("No element of dbQueryResults is greater than 2."); } }  
  
```  
  
 **Evitare le eccezioni InvalidOperationException con Single**  
  
 L'uso di <xref:System.Linq.Enumerable.Single%2A> e <xref:System.Linq.Enumerable.SingleOrDefault%2A> serve anche da documentazione delle intenzioni.<xref:System.Linq.Enumerable.Single%2A> implica fortemente la restituzione di un solo risultato dalla condizione.<xref:System.Linq.Enumerable.SingleOrDefault%2A> dichiara che si prevede venga restituito uno o zero risultati ma non di più. Quando queste condizioni non sono valide, la generazione o il rilevamento dell'eccezione <xref:System.InvalidOperationException> è appropriato. Tuttavia, se si prevede il verificarsi di condizioni non valide con una certa frequenza, è consigliabile usare altri metodi <xref:System.Linq.Enumerable>, ad esempio <xref:System.Linq.Enumerable.First%2A> o <xref:System.Linq.Enumerable.Where%2A>, per generare i risultati.  
  
 Durante lo sviluppo, è possibile usare uno dei metodi <xref:System.Diagnostics.Debug.Assert%2A> per verificare i presupposti. In questo esempio, il codice evidenziato provoca l'interruzione del debugger e visualizza una finestra di dialogo di asserzione durante lo sviluppo. L'asserzione viene rimossa nel codice di rilascio e verrà generato un metodo <xref:System.Linq.Enumerable.Single%2A> se i risultati non sono validi.  
  
> [!NOTE]
>  Se si usa <xref:System.Linq.Enumerable.Take%2A> e si imposta il relativo parametro `count` su 2, si limita la sequenza restituita a due elementi al massimo. Questa sequenza include tutti i casi che è necessario verificare \(0, 1 e più di 1 elemento\) e può migliorare le prestazioni del controllo quando la sequenza può contenere un numero elevato di elementi o se l'operazione che genera la sequenza è onerosa.  
  
```c#  
private void FindTheOnlyNumberGreaterThan4() { var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 }; var moreThan4 = dbQueryResults.Where(obj => (int)obj > 4).Take(2); System.Diagnostics.Debug.Assert(moreThan4.Count() == 1,String.Format("moreThan4.Count() == 1; Actual count: {0}", moreThan4.Count())); // do not handle exceptions in release code Console.WriteLine("{0} is the only element of dbQueryResults that is greater than 4", moreThan4.Single()); }  
  
```  
  
 Se si desidera evitare l'eccezione, ma comunque gestire gli stati non validi nel codice di rilascio, è possibile modificare la tecnica sopra descritta. In questo esempio, il metodo risponde al numero di elementi restituiti da `moreThan2` nell'istruzione switch.  
  
```c#  
private void FindTheOnlyNumberGreaterThan2() { var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 }; var moreThan2 = dbQueryResults.TakeWhile(obj => (int)obj > 2).Take(2); switch(moreThan2.Count()) { case 1: // success var msgFormat = "{0} is the only element of dbQueryResults that is greater than 2"; Console.WriteLine(msgFormat, moreThan2.Single()); break; case 0: // handle empty collection Console.WriteLine("No element of the dbQueryResults are greater than 4."); break; default: // count > 1 // handle more than one element Console.WriteLine("More than one element of dbQueryResults is greater than 4"); break; } }  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS\_BackToTopMid") [Un metodo System.Linq.Enumerable viene chiamato su una raccolta vuota](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
##  <a name="BKMK_Related_articles"></a> Articoli correlati  
 [Linee guida di progettazione per le eccezioni \(Linee guida per la progettazione di .NET Framework\)](http://msdn.microsoft.com/library/ms229014)  
  
 [Gestione e generazione di eccezioni \(Concetti di base sulle applicazioni .NET Framework\)](http://msdn.microsoft.com/library/5b2yeyab)  
  
 [Procedura: Ricevere notifiche di eccezioni first\-chance \(Guida allo sviluppo di .NET Framework\)](http://msdn.microsoft.com/library/Dd997368)  
  
 [Procedura: Gestire le eccezioni in una query PLINQ \(Guida allo sviluppo per .NET Framework\)](http://msdn.microsoft.com/library/Dd460712)  
  
 [Eccezioni in thread gestiti \(Guida allo sviluppo per .NET Framework\)](http://msdn.microsoft.com/library/ms228965)  
  
 [Eccezioni e gestione delle eccezioni \(Guida per programmatori C\#\)](http://msdn.microsoft.com/library/ms173160)  
  
 [Istruzioni di gestione delle eccezioni \(Riferimenti per C\#\)](http://msdn.microsoft.com/library/s7fekhdy)  
  
 [Istruzione Try...Catch...Finally \(Visual Basic\)](http://msdn.microsoft.com/library/fk6t46tz)  
  
 [Gestione delle eccezioni \(F\#\)](http://msdn.microsoft.com/library/Dd233223)  
  
 [Eccezioni in C\+\+\/CLI](http://msdn.microsoft.com/library/Hh875008)  
  
 [Gestione delle eccezioni \(Task Parallel Library\)](http://msdn.microsoft.com/library/Dd997415)  
  
 [Gestione delle eccezioni \(debug\)](http://msdn.microsoft.com/library/x85tt0dd)  
  
 [Procedura dettagliata: Gestione di un'eccezione di concorrenza \(Accesso ai dati in Visual Studio\)](http://msdn.microsoft.com/library/ms171936)  
  
 [Procedura: Gestire gli errori e le eccezioni che si verificano con il data binding \(Windows Form\)](http://msdn.microsoft.com/library/k26k86tb)  
  
 [Gestione di eccezioni nelle app di rete \(XAML\) \(Windows\)](http://msdn.microsoft.com/library/Dn263240)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Contenuto dell'articolo](#BKMK_In_this_article)