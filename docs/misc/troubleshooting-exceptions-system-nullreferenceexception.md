---
title: "Risoluzione dei problemi relativi alle eccezioni: System.NullReferenceException | Microsoft Docs"
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
  - "NullReferenceException (classe)"
ms.assetid: 4822b0b4-8105-43fb-887a-3cc51ff02899
caps.latest.revision: 29
caps.handback.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.NullReferenceException
Un'eccezione <xref:System.NullReferenceException> si verifica quando si cerca di usare un metodo o una proprietà di un *tipo riferimento* \([C\#](../Topic/Reference%20Types%20\(C%23%20Reference\).md), [Visual Basic](../Topic/Value%20Types%20and%20Reference%20Types.md)\) il cui valore è `null`. Ad esempio, è possibile che si sia tentato di usare un oggetto senza prima specificare la parola chiave [new](../Topic/new%20\(C%23%20Reference\).md) \([New](../Topic/New%20Operator%20\(Visual%20Basic\).md) in Visual Basic\) oppure di usare un oggetto il cui valore è impostato su [null](../Topic/null%20\(C%23%20Reference\).md) \([Nothing](../Topic/Nothing%20\(Visual%20Basic\).md) in Visual Basic\).  
  
##  <a name="BKMK_Contents"></a> Sezioni incluse in questo articolo  
 [Classi usate in questo articolo](#BKMK_Classes_used_in_the_examples)  
  
 [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 [Individuazione dell'origine di un'eccezione dovuta a un riferimento Null durante lo sviluppo](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 [Come evitare le eccezioni NullReferenceException](#BKMK_Avoid_NullReferenceExceptions)  
  
 [Gestione delle eccezioni NullReferenceException nel codice di rilascio](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
##  <a name="BKMK_Classes_used_in_the_examples"></a> Classi usate in questo articolo  
 La maggior parte degli esempi inclusi in questo articolo usa una delle classi seguenti o entrambe:  
  
```c#  
public class Automobile { public EngineInfo Engine {get; set;} } public class EngineInfo { public EngineInfo() { } public EngineInfo(string powerSrc, double engineSize) { Power = powerSrc; Size = engineSize; } public double Size { get; set; } public string Power = null; }  
  
```  
  
```vb  
Public Class Automobile Public Property Engine As EngineInfo End Class Public Class EngineInfo Public Sub New() End Sub Public Sub New(powerSrc As String, engineSize As Double) Power = powerSrc Size = engineSize End Sub Public Property Size() As Double Public Power As String = Nothing End Class  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
##  <a name="BKMK_Common_causes_of_NullReferenceExceptions"></a> Cause più frequenti delle eccezioni NullReferenceException  
 Qualsiasi variabile di tipo riferimento può essere null. Le variabili locali, le proprietà di una classe, i parametri di metodi e i valori restituiti dei metodi possono tutti contenere un riferimento null. Se si chiamano metodi o proprietà di queste variabili quando hanno valore null, viene generata un'eccezione NullReferenceException. Casi specifici:  
  
 [Una variabile locale o un campo membro viene dichiarato ma non inizializzato](#BKMK_A_local_variable_or_member_field_is_declared_but_not_initialized)  
  
 [Una proprietà o un campo è null](#BKMK_A_property_or_field_is_null)  
  
 [Un parametro di un metodo è null](#BKMK_A_method_parameter_is_null)  
  
 [Il valore restituito di un metodo è null](#BKMK_The_return_value_of_a_method_is_null)  
  
 [Un oggetto in una raccolta o una matrice è null](#BKMK_An_object_in_a_collection_or_array_is_null)  
  
 [Un oggetto non viene creato a causa di una condizione](#BKMK_An_object_is_not_created_because_of_a_condition)  
  
 [Un oggetto passato per riferimento a un metodo è null](#BKMK_An_object_passed_by_reference_to_a_method_is_set_to_null)  
  
###  <a name="BKMK_A_local_variable_or_member_field_is_declared_but_not_initialized"></a> Una variabile locale o un campo membro viene dichiarato ma non inizializzato  
 Questo semplice errore è quello che si verifica più di frequente nel codice Visual Basic. Fatta eccezione per situazioni come la dichiarazione di una variabile da passare come parametro out, il compilatore C\# non consente l'uso di una variabile di riferimento locale a meno che non venga inizializzata. Il compilatore Visual Basic genera un avviso.  
  
-   Nel codice C\# seguente, la riga evidenziata genera questo errore del compilatore:  
  
 **Uso della variabile locale non assegnata 'engine'**  
  
-   Nel codice Visual Basic la riga evidenziata genera l'avviso del compilatore BC42104:  
  
 **La variabile 'engine' viene usata prima che le sia stato assegnato un valore. È possibile che venga restituita un'eccezione di riferimento null al runtime.**     La riga, inoltre, genera un'eccezione NullReferenceException all'esecuzione.  
  
```c#  
public void NullReferencFromUninitializedLocalVariable() { EngineInfo engine; Console.WriteLine(engine.ToString()); }  
```  
  
```vb  
Public Sub NullReferencFromUninitializedLocalVariable() Dim engine As EngineInfo Console.WriteLine(engine.ToString()) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_A_property_or_field_is_null"></a> Una proprietà o un campo è null  
 I campi e le proprietà di una classe vengono inizializzati automaticamente sul [valore predefinito](../Topic/Data%20Member%20Default%20Values.md) quando la classe viene creata. Il valore predefinito di un tipo riferimento è `null` \(`Nothing` in Visual Basic\). Se si chiamano metodi membro su un campo o una proprietà di una classe padre quando il valore del campo o della proprietà è null, viene generata un'eccezione NullReferenceException.  
  
 In questo esempio la riga evidenziata genera un'eccezione NullReferenceException perché la proprietà `Engine` di `car` è inizializzata automaticamente su null.  
  
```c#  
public void NullReferenceFromProperty() { var car = new Automobile(); Console.WriteLine(car.Engine.ToString()); }  
```  
  
```vb  
Public Sub NullReferenceFromProperty() Dim car = New Automobile() Console.WriteLine(car.Engine.ToString()) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_A_method_parameter_is_null"></a> Un parametro di un metodo è null  
 Un parametro di un metodo che è un tipo riferimento può essere `null` \(`Nothing` in Visual Basic\). Se si chiamano metodi o proprietà membri su un valore di parametro null viene generata un'eccezione NullReferenceException.  
  
 In questo esempio la riga evidenziata genera un'eccezione NullReferenceException perché `BadEngineInfoPassedToMethod` chiama `NullReferenceFromMethodParameter` con un parametro null.  
  
```c  
public void BadEngineInfoPassedToMethod() { EngineInfo eng = null; NullReferenceFromMethodParameter(eng); } public void NullReferenceFromMethodParameter(EngineInfo engine) { Console.WriteLine(engine.ToString()); }  
  
```  
  
```vb  
Public Sub BadParameterPassedToMethod() As EngineInfo Dim eng As EngineInfo = Nothing NullReferenceFromMethodParameter(eng) End Sub Public Sub NullReferenceFromMethodParameter(engine As EngineInfo) Console.WriteLine(engine.ToString()) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_The_return_value_of_a_method_is_null"></a> Il valore restituito di un metodo è null  
 Un metodo che restituisce un tipo riferimento può restituire `null` \(`Nothing` in Visual Basic\). Se si chiamano metodi o proprietà del tipo riferimento restituito, viene generata un'eccezione NullReferenceException quando il riferimento è null.  
  
 In questo esempio la riga evidenziata genera un'eccezione NullReferenceException perché la chiamata a `BadGetEngineInfo` restituisce un riferimento null nel metodo `NullReferenceFromMethodParameter`.  
  
```c#  
public EngineInfo BadGetEngineInfo() { EngineInfo engine = null; return engine; } public void NullReferenceFromMethodReturnValue() { var engine = BadGetEngineInfo(); Console.WriteLine(engine.ToString()); }  
```  
  
```vb  
Public Function BadGetEngineInfo() As EngineInfo Dim engine As EngineInfo = Nothing Return engine End Function Public Sub NullReferenceFromMethodReturnValue() Dim engine = BadGetEngineInfo() Console.WriteLine(engine.ToString()) End Sub  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_in_a_collection_or_array_is_null"></a> Un oggetto in una raccolta o una matrice è null  
 Un elenco o una matrice di tipi riferimento può contenere un elemento null. Se si chiamano metodi o proprietà di un elemento elenco null viene generata un'eccezione NullReferenceException.  
  
 In questo esempio la riga evidenziata in `NullReferenceFromListItem()` genera un'eccezione NullReferenceException perché la chiamata di `BadGetCarList` restituisce un elemento null.  
  
```c#  
public Automobile[] BadGetCarList() { var autos = new Automobile[10]; for (int i = 0; i autos.Length; i++) { if (i != 6) { autos[i] = new Automobile(); } } return autos; } public void NullReferenceFromListItem() { var cars = BadGetCarList(); foreach (Automobile car in cars) { Console.WriteLine(car.ToString()); } }  
```  
  
```vb  
Public Function BadGetCarList() As Automobile() Dim autos = New Automobile(10) {} For i As Integer = 0 To 9 If i <> 6 Then autos(i) = New Automobile() End If Next Return autos End Function Public Sub NullReferenceFromListItem() Dim cars = BadGetCarList() For Each car As Automobile In cars Console.WriteLine(car.ToString()) Next End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_is_not_created_because_of_a_condition"></a> Un oggetto non viene creato a causa di una condizione  
 Se un tipo riferimento viene inizializzato in un blocco condizionale, l'oggetto non viene creato quando la condizione ha valore false.  
  
 In questo esempio la riga evidenziata in `NullReferenceFromConditionalCreation` genera un'eccezione NullReferenceException perché inizializza la variabile `engine` solo se il metodo `DetermineTheCondition()` restituisce `true`.  
  
```c#  
public bool DetermineTheCondition() { return false; } public void NullReferenceFromConditionalCreation() { EngineInfo engine = null; var condition = DetermineTheCondition(); if (condition) { engine = new EngineInfo(); engine.Power = "Diesel"; engine.Size = 2.4; } Console.WriteLine(engine.Size); }  
```  
  
```vb  
Public Function DetermineTheCondition() As Boolean Return False End Function Public Sub NullReferenceFromConditionalCreation() Dim engine As EngineInfo = Nothing Dim condition = DetermineTheCondition() If condition Then engine = New EngineInfo() engine.Power = "Diesel" engine.Size = 2.4 End If Console.WriteLine(engine.Size) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
### La proprietà di un oggetto passato a un metodo è impostata su null  
 Quando un oggetto viene passato come parametro a un metodo in base al valore \(senza usare la parola chiave `ref` o `out` in C\# o la parola chiave `ByRef` in Visual Basic\), il metodo non è in grado di cambiare la posizione di memoria del parametro, ovvero la posizione a cui punta il parametro, ma può modificare le proprietà dell'oggetto.  
  
 In questo esempio il metodo `NullPropertyReferenceFromPassToMethod` crea un oggetto `Automobile` e inizializza la proprietà `Engine`. Chiama quindi `BadSwapCarEngine` passando il nuovo oggetto come parametro.`BadSwapCarEngine` imposta la proprietà Engine su null, motivo per cui la riga evidenziata in `NullPropertyReferenceFromPassToMethod` genera un'eccezione NullReferenceException.  
  
```c#  
public void BadSwapCarEngine(Automobile car) { car.Engine = null; } public void (Automobile car) { car.Engine = new EngineInfo("GAS", 1.5); BadSwapCarEngine(car); Console.WriteLine(car.Engine.ToString()); }  
  
```  
  
```vb  
Public Sub BadSwapCarEngine(car As Automobile) car.Engine = Nothing End Sub Public Sub NullPropertyReferenceFromPassToMethod() Dim car As New Automobile() car.Engine = New EngineInfo("GAS", 1.5) BadSwapCarEngine(car) Console.WriteLine(car.Engine.ToString()) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_passed_by_reference_to_a_method_is_set_to_null"></a> Un oggetto passato per riferimento a un metodo è null  
 Quando si passa un tipo riferimento come parametro a un metodo per riferimento \(usando la parola chiave `ref` o `out` in C\# o la parola chiave `ByRef` in Visual Basic\), è possibile modificare la posizione di memoria a cui punta il parametro.  
  
 Se si passa un tipo riferimento per riferimento a un metodo, il metodo può impostare il tipo referenziato su `null` \(`Nothing` in Visual Basic\).  
  
 In questo esempio la riga evidenziata in `NullReferenceFromPassToMethodByRef` genera un'eccezione NullReferenceException perché la chiamata al metodo `BadEngineSwapByRef` imposta la variabile `stockEngine` su null.  
  
```c#  
public void BadEngineSwapByRef(ref EngineInfo engine) { engine = null; } public void NullReferenceFromPassToMethodByRef() { var stockEngine = new EngineInfo(); stockEngine.Power = "Gas"; stockEngine.Size = 7.0; BadSwapEngineByRef(ref stockEngine); Console.WriteLine(stockEngine.ToString()); }  
```  
  
```vb  
Public Sub BadSwapEngineByRef(ByRef engine As EngineInfo) engine = Nothing End Sub Public Sub NullReferenceFromPassToMethodByRef() Dim formatStr = "The stock engine has been replaced by a {0} liter {} engine" Dim stockEngine = New EngineInfo() stockEngine.Power = "Gas" stockEngine.Size = 7.0 BadSwapEngineByRef(stockEngine) Console.WriteLine(stockEngine.ToString()) End Sub  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Cause più frequenti delle eccezioni NullReferenceException](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
##  <a name="BKMK_Find_the_source_of_a_null_reference_exception_during_development"></a> Individuazione dell'origine di un'eccezione dovuta a un riferimento Null durante lo sviluppo  
 [Usare i suggerimenti dati, la finestra Variabili locali e le finestre Espressioni di controllo per visualizzare i valori delle variabili](#BKMK_Use_data_tips_the_Locals_window_and_watch_windows_to_see_variables_values)  
  
 [Analizzare lo stack di chiamate per individuare il punto in cui una variabile di riferimento non è inizializzata o è impostata su null](#BKMK_Walk_the_call_stack_to_find_where_a_type_reference_is_not_initialized_or_set_to_null_)  
  
 [Impostare punti di interruzione condizionali per arrestare il debug quando un oggetto è null (Nothing in Visual Basic)](#BKMK_Set_conditional_breakpoints_to_stop_debugging_when_an_object_is_null_Nothing_in_Visual_Basic_)  
  
###  <a name="BKMK_Use_data_tips_the_Locals_window_and_watch_windows_to_see_variables_values"></a> Usare i suggerimenti dati, la finestra Variabili locali e le finestre Espressioni di controllo per visualizzare i valori delle variabili  
  
-   Posizionare il puntatore sul nome della variabile per visualizzarne il valore in un [suggerimento dati](../Topic/View%20data%20values%20in%20Data%20Tips%20%20in%20the%20code%20editor.md). Se la variabile fa riferimento a un oggetto o una raccolta, è possibile espandere il tipo di dati per esaminare le proprietà o gli elementi.  
  
-   Aprire la finestra **Variabili locali** per esaminare tutte le variabili attive nel contesto corrente.  
  
-   Usare una [finestra Espressioni di controllo](../Topic/Watch%20and%20QuickWatch%20Windows.md) per vedere come una variabile cambia mentre si esegue il codice un'istruzione alla volta.  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Individuazione dell'origine di un'eccezione dovuta a un riferimento Null durante lo sviluppo](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_Walk_the_call_stack_to_find_where_a_type_reference_is_not_initialized_or_set_to_null_"></a> Analizzare lo stack di chiamate per individuare il punto in cui una variabile di riferimento non è inizializzata o è impostata su null  
 La [finestra Stack di chiamate](../Topic/How%20to:%20Use%20the%20Call%20Stack%20Window.md) di Visual Studio visualizza un elenco di nomi dei metodi non completati quando il debugger si arresta in corrispondenza di un'eccezione o un punto di interruzione. È possibile selezionare un nome nella finestra **Stack di chiamate** e scegliere **Passa al frame** per cambiare il contesto di esecuzione del metodo ed esaminarne le variabili.  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Individuazione dell'origine di un'eccezione dovuta a un riferimento Null durante lo sviluppo](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_Set_conditional_breakpoints_to_stop_debugging_when_an_object_is_null_Nothing_in_Visual_Basic_"></a> Impostare punti di interruzione condizionali per arrestare il debug quando un oggetto è null \(Nothing in Visual Basic\)  
 È possibile impostare un [punto di interruzione condizionale](http://msdn.microsoft.com/library/5557y8b4.aspx#BKMK_Specify_a_breakpoint_condition_using_a_code_expression) in modo da interrompere l'esecuzione quando una variabile è null. I punti di interruzione condizionali possono essere utili quando il riferimento Null non ricorre spesso, ad esempio quando un elemento in una raccolta è null solo a intermittenza. Un altro vantaggio dei punti di interruzione condizionali è che consentono di eseguire il debug di un problema prima del commit in una determinata routine di gestione.  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Individuazione dell'origine di un'eccezione dovuta a un riferimento Null durante lo sviluppo](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
##  <a name="BKMK_Avoid_NullReferenceExceptions"></a> Come evitare le eccezioni NullReferenceException  
 [Usare Debug.Assert per confermare un'invariabile](#BKMK_Use_Debug_Assert_to_confirm_an_invariant)  
  
 [Inizializzare completamente i tipi riferimento](#BKMK_Fully_initialize_reference_types)  
  
###  <a name="BKMK_Use_Debug_Assert_to_confirm_an_invariant"></a> Usare Debug.Assert per confermare un'invariabile  
 Un *invariante* è una condizione che restituisce sempre true. Un'istruzione [Debug.Assert \(System.Diagnostics\)](http://msdn.microsoft.com/library/system.diagnostics.debug.assert.aspx) viene chiamata solo dalle build di debug delle app e non da codice di rilascio. Se la condizione dell'invariabile non è true, il debugger si interrompe in corrispondenza dell'istruzione Assert e visualizza un finestra di dialogo.`Debug.Assert` verifica che la condizione non sia cambiata durante lo sviluppo dell'app. Un'asserzione indica anche ad altri utenti che leggono il codice che la condizione deve essere sempre true.  
  
 Ad esempio, il metodo `MakeEngineFaster` presuppone che il parametro `engine` non sarà mai null perché il relativo metodo OnlyCaller \(`TheOnlyCallerOfMakeEngineFaster`\) inizializza sempre completamente `EngineInfo`. L'asserzione in `MakeEngineFaster` documenta questo presupposto e verifica che sia true.  
  
 Se un utente aggiunge un nuovo metodo caller \(`BadNewCallerOfMakeEngineFaster`\) che non inizializza il parametro, viene attivata l'asserzione.  
  
```c#  
private void TheOnlyCallerOfMakeEngineFaster() { var engine = new EngineInfo(); engine.Power = "GAS"; engine.Size = 1.5; MakeEngineFaster(engine); } private void MakeEngineFaster(EngineInfo engine) { System.Diagnostics.Debug.Assert(engine != null, "Assert: engine != null"); engine.Size *= 2; Console.WriteLine("The engine is twice as fast"); } private void BadNewCallerOfMakeEngineFaster() { EngineInfo engine = null; MakeEngineFaster(engine); }  
```  
  
```vb  
Public Sub TheOnlyCallerOfMakeEngineFaster() Dim engine As New EngineInfo engine.Power = "GAS" engine.Size = 1.5 MakeEngineFaster(engine) End Sub Private Sub MakeEngineFaster(engine As EngineInfo) System.Diagnostics.Debug.Assert(engine IsNot Nothing, "Assert: engine IsNot Nothing") engine.Size = engine.Size * 2 Console.WriteLine("The engine is twice as fast") End Sub Public Sub BadNewCallerOfMakeEngineFaster() Dim engine As EngineInfo = Nothing MakeEngineFaster(engine) End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Come evitare le eccezioni NullReferenceException](#BKMK_Avoid_NullReferenceExceptions)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_Fully_initialize_reference_types"></a> Inizializzare completamente i tipi riferimento  
 Per limitare le eccezioni NullReferenceException, inizializzare completamente i tipi riferimento subito dopo la creazione.  
  
 **Aggiungere l'inizializzazione completa alle classi personalizzate**  
  
 Se si ha il controllo della classe che genera un'eccezione NullReferenceException, è consigliabile inizializzare completamente l'oggetto nel costruttore del tipo. Ecco ad esempio una versione rivista delle classi di esempio che garantisce l'inizializzazione completa:  
  
```c#  
public class Automobile { public EngineInfo Engine { get; set; } public Automobile(){this.Engine = new EngineInfo();} public Automobile(string powerSrc, double engineSize) { this.Engine = new EngineInfo(powerSrc, engineSize); } } public class EngineInfo { public double Size {get; set;} public string Power {get; set;} public EngineInfo(){// the base enginethis.Power = "GAS";this.Size = 1.5;} public EngineInfo(string powerSrc, double engineSize) { this.Power = powerSrc; this.Size = engineSize; } }  
  
```  
  
```vb  
Public Class Automobile Public Property Engine As EngineInfo     Public Sub New()Me.Engine = New EngineInfo()End SubPublic Sub New(powerSrc As String, engineSize As Double)Me.Engine = New EngineInfo(powerSrc, engineSize)End Sub End Class Public Class BaseEngineInfo Public Sub New()' the base engineMe.Power = "GAS"Me.Size = 1.5End Sub Public Sub New(powerSrc As String, engineSize As Double) Power = powerSrc Size = engineSize End Sub Public Property Size() As Double Public Power As String = String.Empty End Class  
```  
  
> [!NOTE]
>  **Usare l'inizializzazione differita per proprietà di grandi dimensioni o usate di rado**  
>   
>  Per ridurre il footprint di memoria della classe e aumentarne le prestazioni, è consigliabile usare l'inizializzazione differita delle proprietà dei tipi riferimento. Vedere [Lazy Initialization](../Topic/Lazy%20Initialization.md).  
  
##  <a name="BKMK_Handle_NullReferenceExceptions_in_release_code"></a> Gestione delle eccezioni NullReferenceException nel codice di rilascio  
 [Verificare se sono presenti valori null (Nothing in Visual Basic) prima di usare un tipo riferimento](#BKMK_Check_for_null_Nothing_in_Visual_Basic_before_using_a_reference_type)  
  
 [Usare try–catch–finally (Try–Catch–Finally in Visual Basic) per gestire l'eccezione](#BKMK_Use_try_catch_finally_Try_Catch_Finally_in_Visual_Basic_to_handle_the_exception)  
  
 È meglio evitare un'eccezione NullReferenceException piuttosto che gestirla dopo che si è verificata. La gestione di un'eccezione può complicare la gestione e la comprensione del codice e può talvolta introdurre altri bug. Un'eccezione NullReferenceException è spesso un errore irreversibile. In questi casi, lasciare che l'eccezione arresti l'app potrebbe essere l'alternativa migliore.  
  
 In diverse situazioni, tuttavia, la gestione dell'errore può essere utile:  
  
-   L'app può ignorare gli oggetti null. Ad esempio, se l'app recupera ed elabora i record di un database, potrebbe essere possibile ignorare alcuni record che risultano in oggetti null. Potrebbe essere sufficiente registrare i dati errati in un file di log o nell'interfaccia utente dell'applicazione.  
  
-   È possibile ripristinare lo stato precedente l'eccezione. Ad esempio, una chiamata a un servizio Web che restituisce un tipo riferimento potrebbe restituire null in caso di perdita o timeout della connessione. È possibile tentare di ristabilire la connessione e ripetere la chiamata.  
  
-   È possibile ripristinare uno stato valido dell'app. Supponiamo ad esempio di dover eseguire un'attività in più passaggi che richiede di salvare le informazioni in un archivio dati prima di chiamare un metodo che genera un'eccezione NullReferenceException. Se l'oggetto non inizializzato dovesse danneggiare il record di dati, è possibile rimuovere i dati precedenti prima di chiudere l'app.  
  
-   È consigliabile segnalare l'eccezione. Ad esempio, se l'errore è stato causato da un errore dell'utente dell'app, è possibile generare un messaggio che lo aiuti a fornire le informazioni corrette. È anche possibile registrare le informazioni sull'errore per agevolare la risoluzione del problema. Alcuni framework, come ASP.NET, hanno un gestore di eccezioni di alto livello che acquisisce tutti gli errori in modo tale che non si verifichino mai arresti anomali dell'app. In tal caso, la registrazione dell'eccezione potrebbe essere l'unico modo per sapere se si verifica effettivamente.  
  
 Ci sono due modi per gestire le eccezioni NullReferenceException nel codice di rilascio.  
  
###  <a name="BKMK_Check_for_null_Nothing_in_Visual_Basic_before_using_a_reference_type"></a> Verificare se sono presenti valori null \(Nothing in Visual Basic\) prima di usare un tipo riferimento  
 L'uso di un test esplicito per verificare che un oggetto non sia null prima di usarlo evita i problemi di prestazioni causati dai costrutti try\-catch\-finally. È comunque necessario determinare e implementare l'azione da eseguire in risposta all'oggetto non inizializzato.  
  
 In questo esempio `CheckForNullReferenceFromMethodReturnValue` testa il valore restituito del metodo `BadGetEngineInfo`. Se l'oggetto non è null, viene usato, altrimenti il metodo segnala l'errore.  
  
```c#  
public EngineInfo BadGetEngineInfo() { EngineInfo engine = null; return engine; } public void CheckForNullReferenceFromMethodReturnValue() { var engine = BadGetEngineInfo(); if(engine != null) { // modify the info engine.Power = "DIESEL"; engine.Size = 2.4; } else { // report the error Console.WriteLine("BadGetEngine returned null") } }  
  
```  
  
```vb  
public EngineInfo BadGetEngineInfo() { EngineInfo engine = null; return engine; } Public Sub CheckForNullReferenceFromMethodReturnValue() Dim engine = BadGetEngineInfo() If (engine IsNot Nothing) Then ' modify the info engine.Power = "DIESEL" engine.Size = 2.4 Else ' report the error Console.WriteLine("BadGetEngineInfo returned Nothing") End If End Sub  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Gestione delle eccezioni NullReferenceException nel codice di rilascio](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
###  <a name="BKMK_Use_try_catch_finally_Try_Catch_Finally_in_Visual_Basic_to_handle_the_exception"></a> Usare try–catch–finally \(Try–Catch–Finally in Visual Basic\) per gestire l'eccezione  
 L'uso dei costrutti di gestione delle eccezioni incorporati \([try, catch, finally](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) in C\#, [Try, Catch, Finally](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md) in Visual Basic\) offre più opzioni per la gestione delle eccezioni NullReferenceException rispetto alla semplice verifica se un oggetto non è null.  
  
 In questo esempio, `CatchNullReferenceFromMethodCall` usa due asserzioni per verificare il presupposto che il relativo parametro contiene un'automobile completa, incluso un motore. Nel blocco `try`, la riga evidenziata genera un'eccezione NullReferenceException perché la chiamata a `RarelyBadEngineSwap` può distruggere la proprietà `Engine` dell'automobile. Il blocco `catch` acquisisce l'eccezione, scrive le informazioni sull'eccezione in un file e segnala l'errore all'utente. Nel blocco `finally`, il metodo verifica che lo stato dell'automobile non sia peggiore rispetto a quando il metodo è iniziato.  
  
```c#  
public void RarelyBadSwapCarEngine(Automobile car) { if ((new Random()).Next() == 42) { car.Engine = null; } else { car.Engine = new EngineInfo("DIESEL", 2.4); } } public void CatchNullReferenceFromMethodCall(Automobile car) { System.Diagnostics.Debug.Assert(car != null, "Assert: car != null"); System.Diagnostics.Debug.Assert(car.Engine != null, "Assert: car.Engine != null"); // save current engine properties in case they're needed var enginePowerBefore = car.Engine.Power; var engineSizeBefore = car.Engine.Size; try { RarelyBadSwapCarEngine(car); var msg = "Swap succeeded. New engine power source: {0} size {1}"; Console.WriteLine(msg, car.Engine.Power, car.Engine.Size); } catch(NullReferenceException nullRefEx) { // write exception info to log file LogException(nullRefEx); // notify the user Console.WriteLine("Engine swap failed. Please call your customer rep."); } finally { if(car.Engine == null) { car.Engine = new EngineInfo(enginePowerBefore, engineSizeBefore); } } }  
  
```  
  
```vb  
Public Sub RarelyBadSwapCarEngine(car As Automobile) If (New Random()).Next = 42 Then car.Engine = Nothing Else car.Engine = New EngineInfo("DIESEL", 2.4) End If End Sub Public Sub CatchNullReferenceFromMethodCall(car As Automobile) System.Diagnostics.Debug.Assert(car IsNot Nothing) System.Diagnostics.Debug.Assert(car.Engine IsNot Nothing) ' save current engine properties in case they're needed Dim powerBefore = car.Engine.Power Dim sizeBefore = car.Engine.Size Try RarelyBadSwapCarEngine(car) Dim msg = "Swap succeeded. New engine power source: {0} size {1}" Console.WriteLine(msg, car.Engine.Power, car.Engine.Size) Catch nullRefEx As NullReferenceException ' write exception info to log file LogException(nullRefEx) ' notify user Console.WriteLine("Engine swap failed. Please call your customer rep.") Finally If car.Engine Is Nothing Then car.Engine = New EngineInfo(powerBefore, sizeBefore) End Try End Sub  
  
```  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Gestione delle eccezioni NullReferenceException nel codice di rilascio](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)  
  
## Articoli correlati  
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
  
 ![Torna all'inizio](../misc/media/pcs_backtotop.png "PCS\_BackToTop") [Sezioni incluse in questo articolo](#BKMK_Contents)