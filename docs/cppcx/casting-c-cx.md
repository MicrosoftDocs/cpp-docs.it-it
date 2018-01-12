---
title: Cast (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 5247f6c7-6a0a-4021-97c9-21c868bd9455
caps.latest.revision: "15"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 18963860b1f9398343370378140ebee7314690b3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="casting-ccx"></a>Cast (C++/CX)
Quattro diversi operatori cast si applicano ai tipi di Windows Runtime: [operatore static_cast](../cpp/static-cast-operator.md), [operatore dynamic_cast](../cpp/dynamic-cast-operator.md), **safe_cast Operator**, e [ Operatore reinterpret_cast](../cpp/reinterpret-cast-operator.md). `safe_cast` e `static_cast` generano un'eccezione se la conversione non può essere eseguita. L'operatore [static_cast](../cpp/static-cast-operator.md) esegue inoltre il controllo dei tipi in fase di compilazione. `dynamic_cast` restituisce `nullptr` se risulta impossibile convertire il tipo. Sebbene `reinterpret_cast` restituisca un valore non Null, potrebbe non essere valido. Per questo motivo, è consigliabile non utilizzare `reinterpret_cast` a meno che tu non sappia che il cast riuscirà. Inoltre, è consigliabile non utilizzare cast di tipo C in C + + CX codice, in quanto sono identici a `reinterpret_cast`.  
  
 Anche il compilatore e il runtime eseguono cast impliciti, ad esempio, nelle operazioni di boxing quando un tipo di valore o un tipo incorporato viene passato come argomento a un metodo il cui tipo di parametro è `Object^`. In teoria, un cast implicito non deve mai generare un'eccezione in fase di esecuzione. Se il compilatore non è in grado di eseguire una conversione implicita, genera un errore in fase di compilazione.  
  
Windows Runtime è un'astrazione su COM, che utilizza i codici di errore HRESULT invece delle eccezioni. In genere [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) indica un errore COM di basso livello di tipo E_NOINTERFACE.  
  
## <a name="staticcast"></a>static_cast  
 `static_cast` viene controllato in fase di compilazione per determinare se vi sia una relazione di ereditarietà tra i due tipi. Il cast causa un errore del compilatore se i tipi non sono correlati.  
  
 `static_cast` in una classe di riferimento causa anche l'esecuzione di un controllo in fase di esecuzione. `static_cast` in una classe di riferimento può superare la verifica in fase di compilazione ma avere comunque esito negativo in fase di esecuzione. In questo caso viene generata `Platform::InvalidCastException` . In genera non è necessario gestire queste eccezioni perché quasi sempre indicano errori di programmazione che puoi eliminare durante le fasi di sviluppo e test.  
  
 Utilizza `static_cast` se il codice dichiara in modo esplicito una relazione tra due tipi e sei quindi certo che il cast funzionerà.  
  
```
    interface class A{};  
    public ref class Class1 sealed : A { };  
...  
    A^ obj = ref new Class1(); // Class1 is an A  
    // You know obj is a Class1. The compiler verifies that this is possible, and in C++/CX a run-time check is also performed.  
    Class1^ c = static_cast<Class1^>(obj);
```  
  
## <a name="safecast"></a>safe_cast  
 Il `safe_cast` operatore è parte diretti di Windows Runtime. Esegue un controllo del tipo di runtime e genera `Platform::InvalidCastException` se la conversione non riesce. Usa `safe_cast` quando un errore di runtime indica una condizione eccezionale. Lo scopo principale di `safe_cast` è di identificare gli errori di programmazione durante le fasi di sviluppo e test nel punto in cui si verificano. Non è necessario gestire l'eccezione poiché l'eccezione non gestita stessa identifica il punto di errore.  
  
 Utilizza safe_cast se il codice non dichiara la relazione ma sei sicuro che il cast funzionerà.  
  
```  
    // A and B are not related  
    interface class A{};  
    interface class B{};  
    public ref class Class1 sealed : A, B { };  
...  
    A^ obj = ref new Class1();  
  
    // You know that obj’s backing type implements A and B, but  
    // the compiler can’t tell this by comparing A and B. The run-time type check succeeds.  
    B^ obj2 = safe_cast<B^>(obj);  
```  
  
## <a name="dynamiccast"></a>dynamic_cast  
 Utilizzare `dynamic_cast` quando si esegue il cast di un oggetto (in particolare, `^`) a un tipo più derivato, si prevede che la destinazione oggetto talvolta potrebbe essere `nullptr` o che il cast non riesca e desideri gestire tale condizione come un normale codice percorso invece di un'eccezione. Ad esempio, nel modello di progetto **Applicazione vuota Windows Store** il metodo `OnLaunched` in `app.xamp.cpp` usa `dynamic_cast` per verificare se nella finestra dell'applicazione è presente contenuto. Non si tratta di un errore se non dispone di contenuto. Condizione prevista. `Windows::Current::Content` è `Windows::UI::XAML::UIElement` e la conversione viene eseguita a un `Windows::UI.XAML::Controls::Frame`, ovvero un tipo più derivato nella gerarchia dell'ereditarietà.  
```
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args)  
{  
    auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);  
  
    // Do not repeat app initialization when the window already has content,  
    // just ensure that the window is active  
    if (rootFrame == nullptr)  
    {  
        // Create a Frame to act as the navigation context and associate it with  
        // a SuspensionManager key  
        rootFrame = ref new Frame();  
...  
```  
 Un altro uso di `dynamic_cast` è la ricerca di `Object^` per determinare se contiene un tipo di valore boxed. In questo caso, si tenta `dynamic_cast<Platform::Box>` o `dynamic_cast<Platform::IBox>`.  
  
 **dynamic_cast e riferimenti traccia (%)**  
  
 Puoi anche applicare `dynamic_cast` a un riferimento traccia, ma in questo caso il cast si comporta come `safe_cast`. Genera `Platform::InvalidCastException` in caso di errore perché un riferimento traccia non può avere un valore `nullptr`.  
  
## <a name="reinterpretcast"></a>reinterpret_cast  
 È consigliabile non utilizzare [reinterpret_cast](../cpp/reinterpret-cast-operator.md) perché non viene eseguito un controllo né in fase di compilazione né di esecuzione. Nel caso peggiore, l'uso di `reinterpret_cast` consente agli errori di programmazione di passare inosservati in fase di sviluppo e di causare errori difficili da rilevare o irreversibili nel comportamento del programma. Pertanto, è consigliabile usare `reinterpret_cast` solo nei rari casi in cui devi eseguire il cast tra tipi non correlati e sai che il cast sarà completato. Un esempio di utilizzo non comune consiste nel convertire aWindows tipo di Runtime al tipo ABI sottostante, ciò significa che Assumi il controllo il conteggio dei riferimenti per l'oggetto. A tale scopo, è consigliabile utilizzare il puntatore intelligente [ComPtr Class](../cpp/com-ptr-t-class.md) . In caso contrario, è necessario chiamare espressamente Release sull'interfaccia. Il seguente esempio mostra come si possa eseguire il cast di una classe di riferimento in `IInspectable*`.  
  
```  
#include <wrl.h>  
using namespace Microsoft::WRL;  
auto winRtObject = ref new SomeWinRTType();  
ComPtr<IInspectable> inspectable = reinterpret_cast<IInspectable*>(winRtObject);  
...
```  
  
 Se si utilizza `reinterpret_cast` per convertire da interfaccia di Runtime oneWindows a un altro, si indicano che l'oggetto deve essere rilasciato due volte. Pertanto, usa questo cast solo quando esegui la conversione a un'interfaccia non di[!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] .  
  
 **Tipi ABI.**  
  
-   I tipi di ABI risiedono nelle intestazioni in Windows SDK. Le intestazioni sono convenientemente denominate in base allo spazio dei nomi, ad esempio `windows.storage.h`.  
  
-   I tipi ABI risiedono nell'ABI di uno spazio dei nomi speciale, ad esempio `ABI::Windows::Storage::Streams::IBuffer*`.  
  
-   Le conversioni tra aWindows tipo di interfaccia di Runtime e l'equivalente tipo ABI sono sempre sicure, vale a dire `IBuffer^` a `ABI::IBuffer*`.  
  
-   Classe di runtime AWindows Runtime deve essere sempre convertita in `IInspectable*` o la relativa interfaccia predefinita, se conosciuta.  
  
-   Dopo la conversione in tipi ABI, diventi proprietario della durata del tipo ed è necessario seguire le regole COM. È consigliabile utilizzare `WRL::ComPtr` per semplificare la gestione della durata dei puntatori ABI.  
  
 Nella tabella seguente sono riepilogati i casi in cui è possibile utilizzare `reinterpret_cast`. In ogni caso, il cast è sicuro in entrambe le direzioni.  
  
|||  
|-|-|  
|HSTRING|String^|  
|HSTRING*|String^*|  
|IInspectable*|Object^|  
|IInspectable**|Object^*|  
|IInspectable-derived-type*|same-interface-from-winmd^|  
|IInspectable-derived-type**|same-interface-from-winmd^*|  
|IDefault-interface-of-RuntimeClass*|same-RefClass-from-winmd^|  
|IDefault-interface-of-RuntimeClass**|same-RefClass-from-winmd^*|  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
