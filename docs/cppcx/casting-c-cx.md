---
title: Cast (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 06/19/2018
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 5247f6c7-6a0a-4021-97c9-21c868bd9455
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 66c0e6bc9d987c400c709e74586e6e37ccc0b715
ms.sourcegitcommit: 301bb19056e5bae84ff50f7d1df1e546efe225ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/21/2018
ms.locfileid: "36305995"
---
# <a name="casting-ccx"></a>Cast (C++/CX)

Quattro diversi operatori cast si applicano ai tipi di Windows Runtime: [operatore static_cast](../cpp/static-cast-operator.md), [operatore dynamic_cast](../cpp/dynamic-cast-operator.md), **safe_cast Operator**, e [ Operatore reinterpret_cast](../cpp/reinterpret-cast-operator.md). **safe_cast** e **static_cast** genera un'eccezione se la conversione non può essere eseguita. [operatore static_cast](../cpp/static-cast-operator.md) esegue inoltre il controllo dei tipi in fase di compilazione. **dynamic_cast** restituisce **nullptr** se risulta Impossibile convertire il tipo. Sebbene **reinterpret_cast** restituisce un valore diverso da null, potrebbe non essere valido. Per questo motivo, è consigliabile non utilizzare **reinterpret_cast** a meno che non si sappia che il cast riuscirà. Inoltre, è consigliabile non utilizzare cast di tipo C nel tuo C + + CX codice, in quanto sono identici a **reinterpret_cast**.

Anche il compilatore e il runtime eseguono cast impliciti, ad esempio, nelle operazioni di boxing quando un tipo di valore o un tipo incorporato viene passato come argomento a un metodo il cui tipo di parametro è `Object^`. In teoria, un cast implicito non deve mai generare un'eccezione in fase di esecuzione. Se il compilatore non è in grado di eseguire una conversione implicita, genera un errore in fase di compilazione.

Windows Runtime è un'astrazione su COM, che utilizza i codici di errore HRESULT invece delle eccezioni. In genere [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) indica un errore COM di basso livello di tipo E_NOINTERFACE.

## <a name="staticcast"></a>static_cast

Un **static_cast** viene controllato in fase di compilazione per determinare se è presente una relazione di ereditarietà tra i due tipi. Il cast causa un errore del compilatore se i tipi non sono correlati.

Un **static_cast** in un riferimento classe causa anche un controllo in fase di esecuzione da eseguire. Un **static_cast** in ref classe può superare la verifica in fase di compilazione ma avere comunque esito negativo in fase di esecuzione, in questo caso un `Platform::InvalidCastException` viene generata un'eccezione. In genera non è necessario gestire queste eccezioni perché quasi sempre indicano errori di programmazione che puoi eliminare durante le fasi di sviluppo e test.

Uso **static_cast** se il codice dichiara in modo esplicito una relazione tra i due tipi, e sei quindi certo che il cast funzionerà.

```cpp
    interface class A{};
    public ref class Class1 sealed : A { };
    // ...
    A^ obj = ref new Class1(); // Class1 is an A
    // You know obj is a Class1. The compiler verifies that this is possible, and in C++/CX a run-time check is also performed.
    Class1^ c = static_cast<Class1^>(obj);
```

## <a name="safecast"></a>safe_cast

Il **safe_cast** operatore fa parte di Windows Runtime. Esegue un controllo del tipo di runtime e genera `Platform::InvalidCastException` se la conversione non riesce. Uso **safe_cast** quando un errore di runtime indica una condizione eccezionale. Lo scopo principale di **safe_cast** consiste nell'identificare gli errori di programmazione durante lo sviluppo e test fasi in corrispondenza del punto in cui si verificano. Non è necessario gestire l'eccezione poiché l'eccezione non gestita stessa identifica il punto di errore.

Utilizza safe_cast se il codice non dichiara la relazione ma sei sicuro che il cast funzionerà.

```cpp
    // A and B are not related
    interface class A{};
    interface class B{};
    public ref class Class1 sealed : A, B { };
    // ...
    A^ obj = ref new Class1();

    // You know that obj’s backing type implements A and B, but
    // the compiler can’t tell this by comparing A and B. The run-time type check succeeds.
    B^ obj2 = safe_cast<B^>(obj);
```

## <a name="dynamiccast"></a>dynamic_cast

Uso **dynamic_cast** quando si esegue il cast di un oggetto (in particolare, un handle oggetto **^**) a un tipo più derivato, Prevedi ad che la destinazione oggetto in alcuni casi potrebbe essere **nullptr** o che il cast non riesca e desideri gestire tale condizione come percorso di codice normale invece di un'eccezione. Ad esempio, nel **App vuota (Windows universale)** modello di progetto, la `OnLaunched` metodo usi app.xamp.cpp **dynamic_cast** per verificare se nella finestra dell'applicazione include contenuto. Non si tratta di un errore se non dispone di contenuto. Condizione prevista. `Windows::Current::Content` è `Windows::UI::XAML::UIElement` e la conversione viene eseguita a un `Windows::UI.XAML::Controls::Frame`, ovvero un tipo più derivato nella gerarchia dell'ereditarietà.

```cpp
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
        // ...
    }
}
```

Un altro uso di **dynamic_cast** è la ricerca un `Object^` per determinare se contiene un tipo di valore boxed. In questo caso, si tenta `dynamic_cast<Platform::Box>` o `dynamic_cast<Platform::IBox>`.

## <a name="dynamiccast-and-tracking-references-"></a>dynamic_cast e riferimenti traccia (%)

È inoltre possibile applicare un **dynamic_cast** a un riferimento di rilevamento, ma in questo caso il cast si comporta come **safe_cast**. Genera `Platform::InvalidCastException` in caso di errore perché un riferimento di traccia non può avere un valore di **nullptr**.

## <a name="reinterpretcast"></a>reinterpret_cast

È consigliabile non utilizzare [reinterpret_cast](../cpp/reinterpret-cast-operator.md) perché non viene eseguito un controllo né in fase di compilazione né di esecuzione. Nel peggiore dei casi, un **reinterpret_cast** rende possibile agli errori di passare inosservati in fase di sviluppo e causare lievi o irreversibili nel comportamento del programma di programmazione. È pertanto consigliabile utilizzare **reinterpret_cast** solo in rari casi in cui è necessario eseguire il cast tra tipi non correlati e sai che il cast sarà completato. Un esempio di utilizzo non comune consiste nel convertire un tipo Windows Runtime al tipo ABI sottostante, ciò significa che Assumi il controllo il conteggio dei riferimenti per l'oggetto. A tale scopo, è consigliabile utilizzare il puntatore intelligente [ComPtr Class](../cpp/com-ptr-t-class.md) . In caso contrario, è necessario chiamare espressamente Release sull'interfaccia. Il seguente esempio mostra come si possa eseguire il cast di una classe di riferimento in `IInspectable*`.

```cpp
#include <wrl.h>
using namespace Microsoft::WRL;
auto winRtObject = ref new SomeWinRTType();
ComPtr<IInspectable> inspectable = reinterpret_cast<IInspectable*>(winRtObject);
// ...
```

Se si utilizza **reinterpret_cast** per convertire da interfaccia di Runtime oneWindows a un altro, si indicano che l'oggetto deve essere rilasciato due volte. Pertanto, usa questo cast solo quando esegui la conversione a un'interfaccia non di[!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] .

## <a name="abi-types"></a>Tipi ABI.

- I tipi di ABI risiedono nelle intestazioni in Windows SDK. Le intestazioni sono convenientemente denominate in base allo spazio dei nomi, ad esempio `windows.storage.h`.

- I tipi ABI risiedono nell'ABI di uno spazio dei nomi speciale, ad esempio `ABI::Windows::Storage::Streams::IBuffer*`.

- Le conversioni tra un tipo di interfaccia di Windows Runtime e l'equivalente tipo ABI sono sempre sicure, vale a dire `IBuffer^` a `ABI::IBuffer*`.

- Una classe di runtime di Windows Runtime debba essere sempre convertita in `IInspectable*` o la relativa interfaccia predefinita, se conosciuta.

- Dopo la conversione in tipi ABI, diventi proprietario della durata del tipo ed è necessario seguire le regole COM. È consigliabile utilizzare `WRL::ComPtr` per semplificare la gestione della durata dei puntatori ABI.

Nella tabella seguente sono riepilogati i casi in cui è possibile usare in sicurezza **reinterpret_cast**. In ogni caso, il cast è sicuro in entrambe le direzioni.

|||
|-|-|
|`HSTRING`|`String^`|
|`HSTRING*`|`String^*`|
|`IInspectable*`|`Object^`|
|`IInspectable**`|`Object^*`|
|`IInspectable-derived-type*`|`same-interface-from-winmd^`|
|`IInspectable-derived-type**`|`same-interface-from-winmd^*`|
|`IDefault-interface-of-RuntimeClass*`|`same-RefClass-from-winmd^`|
|`IDefault-interface-of-RuntimeClass**`|`same-RefClass-from-winmd^*`|

## <a name="see-also"></a>Vedere anche

- [Sistema di tipi](../cppcx/type-system-c-cx.md)
- [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)
- [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
