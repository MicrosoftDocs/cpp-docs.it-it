---
title: "Cast (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5247f6c7-6a0a-4021-97c9-21c868bd9455
caps.latest.revision: 15
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 15
---
# Cast (C++/CX)
Quattro diversi operatori cast sono applicabili ai tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]: [static\_cast Operator](../cpp/static-cast-operator.md), [dynamic\_cast Operator](../cpp/dynamic-cast-operator.md), [safe\_cast Operator](../Topic/safe_cast%20\(C++%20Component%20Extensions\).md) e [reinterpret\_cast Operator](../cpp/reinterpret-cast-operator.md).`safe_cast` e `static_cast` generano un'eccezione se la conversione non può essere eseguita. L'operatore [static\_cast](../cpp/static-cast-operator.md) esegue inoltre il controllo dei tipi in fase di compilazione.`dynamic_cast` restituisce `nullptr` se risulta impossibile convertire il tipo. Sebbene `reinterpret_cast` restituisca un valore non Null, potrebbe non essere valido. Per questo motivo, è consigliabile non utilizzare `reinterpret_cast` a meno che tu non sappia che il cast riuscirà. Inoltre, si consiglia di non utilizzare i cast di tipo C nel codice di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) perché sono identici a `reinterpret_cast`.  
  
 Anche il compilatore e il runtime eseguono cast impliciti, ad esempio, nelle operazioni di boxing quando un tipo di valore o un tipo incorporato viene passato come argomento a un metodo il cui tipo di parametro è `Object^`. In teoria, un cast implicito non deve mai generare un'eccezione in fase di esecuzione. Se il compilatore non è in grado di eseguire una conversione implicita, genera un errore in fase di compilazione.  
  
 [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] è un'astrazione su COM, che utilizza i codici di errore HRESULT invece delle eccezioni. In genere [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) indica un errore COM di basso livello di tipo E\_NOINTERFACE.  
  
## static\_cast  
 `static_cast` viene controllato in fase di compilazione per determinare se vi sia una relazione di ereditarietà tra i due tipi. Il cast causa un errore del compilatore se i tipi non sono correlati.  
  
 `static_cast` in una classe di riferimento causa anche l'esecuzione di un controllo in fase di esecuzione.`static_cast` in una classe di riferimento può superare la verifica in fase di compilazione ma avere comunque esito negativo in fase di esecuzione. In questo caso viene generata `Platform::InvalidCastException`. In genera non è necessario gestire queste eccezioni perché quasi sempre indicano errori di programmazione che puoi eliminare durante le fasi di sviluppo e test.  
  
 Utilizza `static_cast` se il codice dichiara in modo esplicito una relazione tra due tipi e sei quindi certo che il cast funzionerà.  
  
```  
interface class A{}; public ref class Class1 sealed : A { }; ... A^ obj = ref new Class1(); // Class1 is an A // You know obj is a Class1. The compiler verifies that this is possible, and in C++/CX a run-time check is also performed. Class1^ c = static_cast<Class1^>(obj);  
  
```  
  
## safe\_cast  
 L'operatore di `safe_cast` fa parte di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)]. Esegue un controllo del tipo di runtime e genera `Platform::InvalidCastException` se la conversione non riesce. Usa `safe_cast` quando un errore di runtime indica una condizione eccezionale. Lo scopo principale di `safe_cast` è di identificare gli errori di programmazione durante le fasi di sviluppo e test nel punto in cui si verificano. Non è necessario gestire l'eccezione poiché l'eccezione non gestita stessa identifica il punto di errore.  
  
 Utilizza safe\_cast se il codice non dichiara la relazione ma sei sicuro che il cast funzionerà.  
  
```  
  
// A and B are not related interface class A{}; interface class B{}; public ref class Class1 sealed : A, B { }; ... A^ obj = ref new Class1(); // You know that obj’s backing type implements A and B, but // the compiler can’t tell this by comparing A and B. The run-time type check succeeds. B^ obj2 = safe_cast<B^>(obj);  
  
```  
  
## dynamic\_cast  
 Usa `dynamic_cast` quando esegui il cast di un oggetto \(in particolare, ‘^’\) a un tipo più derivato, prevedi che l'oggetto di destinazione sia a volte `nullptr` o che il cast non riesca e desideri gestire tale condizione come percorso di codice normale invece di un'eccezione. Ad esempio, nel modello di progetto **Applicazione vuota Windows Store** il metodo `OnLaunched` in `app.xamp.cpp` usa `dynamic_cast` per verificare se nella finestra dell'applicazione è presente contenuto. Non si tratta di un errore se non dispone di contenuto. Condizione prevista.`Windows::Current::Content` è `Windows::UI::XAML::UIElement` e la conversione viene eseguita a un `Windows::UI.XAML::Controls::Frame`, ovvero un tipo più derivato nella gerarchia dell'ereditarietà.  
  
```  
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) { auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content); // Do not repeat app initialization when the window already has content, // just ensure that the window is active if (rootFrame == nullptr) { // Create a Frame to act as the navigation context and associate it with // a SuspensionManager key rootFrame = ref new Frame(); ...  
```  
  
 Un altro uso di `dynamic_cast` è la ricerca di `Object^` per determinare se contiene un tipo di valore boxed. In questo caso, si tenta `dynamic_cast<Platform::Box>` o `dynamic_cast<Platform::IBox>`.  
  
 **dynamic\_cast e riferimenti traccia \(%\)**  
  
 Puoi anche applicare `dynamic_cast` a un riferimento traccia, ma in questo caso il cast si comporta come `safe_cast`. Genera `Platform::InvalidCastException` in caso di errore perché un riferimento traccia non può avere un valore `nullptr`.  
  
## reinterpret\_cast  
 È consigliabile non utilizzare [reinterpret\_cast](../cpp/reinterpret-cast-operator.md) perché non viene eseguito un controllo né in fase di compilazione né di esecuzione. Nel caso peggiore, l'uso di `reinterpret_cast` consente agli errori di programmazione di passare inosservati in fase di sviluppo e di causare errori difficili da rilevare o irreversibili nel comportamento del programma. Pertanto, è consigliabile usare `reinterpret_cast` solo nei rari casi in cui devi eseguire il cast tra tipi non correlati e sai che il cast sarà completato. Un esempio di utilizzo non comune consiste nel convertire un tipo di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] al tipo ABI sottostante. Ciò significa che assumi il controllo del conteggio dei riferimenti per l'oggetto. A tale scopo, è consigliabile utilizzare il puntatore intelligente [Classe ComPtr](../windows/comptr-class.md). In caso contrario, è necessario chiamare espressamente Release sull'interfaccia. Il seguente esempio mostra come si possa eseguire il cast di una classe di riferimento in `IInspectable*`.  
  
```  
  
#include <wrl.h> using namespace Microsoft::WRL; auto winRtObject = ref new SomeWinRTType(); ComPtr<IInspectable> inspectable = reinterpret_cast<IInspectable*>(obj2); ...  
  
```  
  
 Se usi `reinterpret_cast` per la conversione da un'interfaccia di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] a un'altra, l'oggetto potrebbe essere rilasciato due volte. Pertanto, usa questo cast solo quando esegui la conversione a un'interfaccia non di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)].  
  
 **Tipi ABI.**  
  
-   I tipi di ABI risiedono nelle intestazioni in Windows SDK. Le intestazioni sono convenientemente denominate in base allo spazio dei nomi, ad esempio `windows.storage.h`.  
  
-   I tipi ABI risiedono nell'ABI di uno spazio dei nomi speciale, ad esempio `ABI::Windows::Storage::Streams::IBuffer*`.  
  
-   Le conversioni tra un tipo di interfaccia di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] e l'equivalente tipo ABI sono sempre sicure, ovvero `IBuffer^` a `ABI::IBuffer*`.  
  
-   Una classe di runtime di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] deve essere sempre convertita in `IInspectable*` o nella relativa interfaccia predefinita, se conosciuta.  
  
-   Dopo la conversione in tipi ABI, diventi proprietario della durata del tipo ed è necessario seguire le regole COM. È consigliabile utilizzare `WRL::ComPtr` per semplificare la gestione della durata dei puntatori ABI.  
  
 Nella tabella seguente sono riepilogati i casi in cui è possibile utilizzare `reinterpret_cast`. In ogni caso, il cast è sicuro in entrambe le direzioni.  
  
|||  
|-|-|  
|HSTRING|String^|  
|HSTRING\*|String^\*|  
|IInspectable\*|Object^|  
|IInspectable\*\*|Object^\*|  
|IInspectable\-derived\-type\*|same\-interface\-from\-winmd^|  
|IInspectable\-derived\-type\*\*|same\-interface\-from\-winmd^\*|  
|IDefault\-interface\-of\-RuntimeClass\*|same\-RefClass\-from\-winmd^|  
|IDefault\-interface\-of\-RuntimeClass\*\*|same\-RefClass\-from\-winmd^\*|  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)