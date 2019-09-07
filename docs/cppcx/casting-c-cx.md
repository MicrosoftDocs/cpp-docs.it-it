---
title: Cast (C++/CX)
ms.date: 06/19/2018
ms.assetid: 5247f6c7-6a0a-4021-97c9-21c868bd9455
ms.openlocfilehash: 6711320fd9ca52360f702e029fdc8e129c90c6cd
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740544"
---
# <a name="casting-ccx"></a>Cast (C++/CX)

I quattro operatori di cast diversi si applicano ai tipi di Windows Runtime: [operatore static_cast](../cpp/static-cast-operator.md), operatore [dynamic_cast](../cpp/dynamic-cast-operator.md), **operatore safe_cast**e [operatore reinterpret_cast](../cpp/reinterpret-cast-operator.md). **safe_cast** e **static_cast** generano un'eccezione quando non è possibile eseguire la conversione. l' [operatore static_cast](../cpp/static-cast-operator.md) esegue anche il controllo dei tipi in fase di compilazione. **dynamic_cast** restituisce **nullptr** se non è possibile convertire il tipo. Sebbene **reinterpret_cast** restituisca un valore non null, potrebbe non essere valido. Per questo motivo, è consigliabile non usare **reinterpret_cast** , a meno che non si sia certi che il cast avrà esito positivo. Inoltre, è consigliabile non usare cast di tipo C nel codice C++/CX perché sono identici a **reinterpret_cast**.

Anche il compilatore e il runtime eseguono cast impliciti, ad esempio, nelle operazioni di boxing quando un tipo di valore o un tipo incorporato viene passato come argomento a un metodo il cui tipo di parametro è `Object^`. In teoria, un cast implicito non deve mai generare un'eccezione in fase di esecuzione. Se il compilatore non è in grado di eseguire una conversione implicita, genera un errore in fase di compilazione.

Windows Runtime è un'astrazione su COM, che utilizza i codici di errore HRESULT anziché le eccezioni. In genere [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) indica un errore COM di basso livello di tipo E_NOINTERFACE.

## <a name="static_cast"></a>static_cast

Un **static_cast** viene controllato in fase di compilazione per determinare se esiste una relazione di ereditarietà tra i due tipi. Il cast causa un errore del compilatore se i tipi non sono correlati.

Un **static_cast** in una classe di riferimento causa anche l'esecuzione di un controllo in fase di esecuzione. Un **static_cast** in una classe di riferimento può superare la verifica in fase di compilazione ma ha ancora esito negativo in fase di esecuzione. in questo caso viene `Platform::InvalidCastException` generata un'eccezione. In genera non è necessario gestire queste eccezioni perché quasi sempre indicano errori di programmazione che puoi eliminare durante le fasi di sviluppo e test.

Utilizzare **static_cast** se il codice dichiara in modo esplicito una relazione tra i due tipi e pertanto si è certi che il cast dovrebbe funzionare.

```cpp
    interface class A{};
    public ref class Class1 sealed : A { };
    // ...
    A^ obj = ref new Class1(); // Class1 is an A
    // You know obj is a Class1. The compiler verifies that this is possible, and in C++/CX a run-time check is also performed.
    Class1^ c = static_cast<Class1^>(obj);
```

## <a name="safe_cast"></a>safe_cast

L'operatore **safe_cast** fa parte di Windows Runtime. Esegue un controllo del tipo di runtime e genera `Platform::InvalidCastException` se la conversione non riesce. Utilizzare **safe_cast** quando un errore in fase di esecuzione indica una condizione eccezionale. Lo scopo principale di **safe_cast** è consentire di identificare gli errori di programmazione durante le fasi di sviluppo e test nel punto in cui si verificano. Non è necessario gestire l'eccezione poiché l'eccezione non gestita stessa identifica il punto di errore.

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

## <a name="dynamic_cast"></a>dynamic_cast

Utilizzare **dynamic_cast** quando si esegue il cast di un oggetto (più specificamente **^** , un hat) a un tipo più derivato, si prevede che l'oggetto di destinazione sia talvolta **nullptr** o che il cast potrebbe non riuscire e si desidera gestire tale condizione come percorso di codice normale invece di un'eccezione. Ad esempio, nel modello di progetto **app vuota (Windows universale)** il `OnLaunched` metodo in app. XAMP. cpp USA **dynamic_cast** per verificare se la finestra dell'app contiene contenuto. Non si tratta di un errore se non dispone di contenuto. Condizione prevista. `Windows::Current::Content` è `Windows::UI::XAML::UIElement` e la conversione viene eseguita a un `Windows::UI.XAML::Controls::Frame`, ovvero un tipo più derivato nella gerarchia dell'ereditarietà.

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

Un altro uso di **dynamic_cast** è quello di `Object^` eseguire un probe per determinare se contiene un tipo di valore boxed. In questo caso, si tenta `dynamic_cast<Platform::Box>` o `dynamic_cast<Platform::IBox>`.

## <a name="dynamic_cast-and-tracking-references-"></a>dynamic_cast e riferimenti traccia (%)

È anche possibile applicare un **dynamic_cast** a un riferimento di rilevamento, ma in questo caso il cast si comporta come **safe_cast**. Genera `Platform::InvalidCastException` in caso di errore perché un riferimento di rilevamento non può avere un valore **nullptr**.

## <a name="reinterpret_cast"></a>reinterpret_cast

È consigliabile non utilizzare [reinterpret_cast](../cpp/reinterpret-cast-operator.md) perché non viene eseguito un controllo né in fase di compilazione né di esecuzione. Nel peggiore dei casi, un **reinterpret_cast** rende possibile la programmazione degli errori non rilevati in fase di sviluppo e causare errori evidenti o irreversibili nel comportamento del programma. Pertanto, è consigliabile utilizzare **reinterpret_cast** solo nei rari casi in cui è necessario eseguire il cast tra tipi non correlati e si è certi che il cast avrà esito positivo. Un esempio di uso raro consiste nel convertire un tipo di Windows Runtime nel tipo ABI sottostante. Ciò significa che si sta assumendo il controllo del conteggio dei riferimenti per l'oggetto. A tale scopo, è consigliabile utilizzare il puntatore intelligente [ComPtr Class](../cpp/com-ptr-t-class.md) . In caso contrario, è necessario chiamare espressamente Release sull'interfaccia. Il seguente esempio mostra come si possa eseguire il cast di una classe di riferimento in `IInspectable*`.

```cpp
#include <wrl.h>
using namespace Microsoft::WRL;
auto winRtObject = ref new SomeWinRTType();
ComPtr<IInspectable> inspectable = reinterpret_cast<IInspectable*>(winRtObject);
// ...
```

Se si usa **reinterpret_cast** per eseguire la conversione dall'interfaccia di runtime di oneWindows a un'altra, l'oggetto verrà rilasciato due volte. Pertanto, utilizzare questo cast solo quando si esegue la conversione in un'interfacciaC++ di estensioni non componente.

## <a name="abi-types"></a>Tipi ABI.

- I tipi di ABI risiedono nelle intestazioni in Windows SDK. Le intestazioni sono convenientemente denominate in base allo spazio dei nomi, ad esempio `windows.storage.h`.

- I tipi ABI risiedono nell'ABI di uno spazio dei nomi speciale, ad esempio `ABI::Windows::Storage::Streams::IBuffer*`.

- Le conversioni tra un tipo di interfaccia Windows Runtime e il tipo ABI equivalente sono sempre sicure, `IBuffer^` ovvero a. `ABI::IBuffer*`

- Una classe di runtime di Windows Runtime deve essere sempre `IInspectable*` convertita in o nella relativa interfaccia predefinita, se nota.

- Dopo la conversione in tipi ABI, diventi proprietario della durata del tipo ed è necessario seguire le regole COM. È consigliabile utilizzare `WRL::ComPtr` per semplificare la gestione della durata dei puntatori ABI.

La tabella seguente riepiloga i casi in cui è sicuro usare **reinterpret_cast**. In ogni caso, il cast è sicuro in entrambe le direzioni.

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
- [Riferimenti al linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)
- [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
