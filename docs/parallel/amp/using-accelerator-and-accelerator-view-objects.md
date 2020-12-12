---
description: 'Altre informazioni su: uso degli oggetti Accelerator e accelerator_view'
title: Utilizzo degli oggetti accelerator e accelerator_view
ms.date: 11/04/2016
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
ms.openlocfilehash: 270b517764b8060efbaea9d00c20e24aa1746818
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314490"
---
# <a name="using-accelerator-and-accelerator_view-objects"></a>Utilizzo degli oggetti accelerator e accelerator_view

È possibile usare le classi [Accelerator](../../parallel/amp/reference/accelerator-class.md) e [accelerator_view](../../parallel/amp/reference/accelerator-view-class.md) per specificare il dispositivo o l'emulatore in cui eseguire il codice di C++ amp. Un sistema potrebbe avere diversi dispositivi o emulatori che variano in base alla quantità di memoria, al supporto per la memoria condivisa, al supporto per il debug o al supporto a precisione doppia. C++ Accelerated Massive Parallelism (C++ AMP) fornisce le API che è possibile usare per esaminare gli acceleratori disponibili, impostarne uno come predefinito, specificare più accelerator_views per più chiamate a parallel_for_each ed eseguire attività di debug speciali.

## <a name="using-the-default-accelerator"></a>Uso del tasto di scelta rapida predefinito

Il runtime di C++ AMP sceglie un acceleratore predefinito, a meno che non si scriva codice per sceglierne uno specifico. Il runtime sceglie l'acceleratore predefinito come segue:

1. Se l'app è in esecuzione in modalità di debug, un acceleratore che supporta il debug.

2. In caso contrario, l'acceleratore specificato dalla variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR, se è impostato.

3. In caso contrario, un dispositivo non emulato.

4. In caso contrario, il dispositivo con la maggiore quantità di memoria disponibile.

5. In caso contrario, un dispositivo non collegato alla visualizzazione.

Inoltre, il runtime specifica un `access_type` di `access_type_auto` per il tasto di scelta rapida predefinito. Ciò significa che l'acceleratore predefinito usa la memoria condivisa se è supportata e se le relative caratteristiche di prestazioni (larghezza di banda e latenza) sono note come la memoria dedicata (non condivisa).

È possibile determinare le proprietà dell'acceleratore predefinito costruendo l'acceleratore predefinito ed esaminarne le proprietà. Nell'esempio di codice seguente viene stampato il percorso, la quantità di memoria dell'acceleratore, il supporto della memoria condivisa, il supporto a precisione doppia e il supporto limitato a precisione doppia dell'acceleratore predefinito.

```cpp
void default_properties() {
    accelerator default_acc;
    std::wcout << default_acc.device_path << "\n";
    std::wcout << default_acc.dedicated_memory << "\n";
    std::wcout << (accs[i].supports_cpu_shared_memory ?
        "CPU shared memory: true" : "CPU shared memory: false") << "\n";
    std::wcout << (accs[i].supports_double_precision ?
        "double precision: true" : "double precision: false") << "\n";
    std::wcout << (accs[i].supports_limited_double_precision ?
        "limited double precision: true" : "limited double precision: false") << "\n";
}
```

### <a name="cppamp_default_accelerator-environment-variable"></a>Variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR

È possibile impostare la variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR per specificare l'oggetto `accelerator::device_path` dell'acceleratore predefinito. Il percorso è dipendente dall'hardware. Il codice seguente usa la `accelerator::get_all` funzione per recuperare un elenco di acceleratori disponibili e quindi Visualizza il percorso e le caratteristiche di ogni acceleratore.

```cpp
void list_all_accelerators()
{
    std::vector<accelerator> accs = accelerator::get_all();

    for (int i = 0; i <accs.size(); i++) {
        std::wcout << accs[i].device_path << "\n";
        std::wcout << accs[i].dedicated_memory << "\n";
        std::wcout << (accs[i].supports_cpu_shared_memory ?
            "CPU shared memory: true" : "CPU shared memory: false") << "\n";
        std::wcout << (accs[i].supports_double_precision ?
            "double precision: true" : "double precision: false") << "\n";
        std::wcout << (accs[i].supports_limited_double_precision ?
            "limited double precision: true" : "limited double precision: false") << "\n";
    }
}
```

## <a name="selecting-an-accelerator"></a>Selezione di un acceleratore

Per selezionare un tasto di scelta rapida, utilizzare il `accelerator::get_all` metodo per recuperare un elenco di acceleratori disponibili e quindi selezionarne uno in base alle relative proprietà. Questo esempio Mostra come selezionare il tasto di scelta rapida con la maggiore quantità di memoria:

```cpp
void pick_with_most_memory()
{
    std::vector<accelerator> accs = accelerator::get_all();
    accelerator acc_chosen = accs[0];

    for (int i = 0; i <accs.size(); i++) {
        if (accs[i].dedicated_memory> acc_chosen.dedicated_memory) {
            acc_chosen = accs[i];
        }
    }

    std::wcout << "The accelerator with the most memory is "
        << acc_chosen.device_path << "\n"
        << acc_chosen.dedicated_memory << ".\n";
}
```

> [!NOTE]
> Uno degli acceleratori restituiti da `accelerator::get_all` è l'acceleratore della CPU. Non è possibile eseguire codice sull'acceleratore della CPU. Per filtrare l'acceleratore della CPU, confrontare il valore della proprietà [device_path](reference/accelerator-class.md#device_path) dell'acceleratore restituito da `accelerator::get_all` con il valore di [Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator). Per ulteriori informazioni, vedere la sezione "acceleratori speciali" in questo articolo.

## <a name="shared-memory"></a>Shared Memory

La memoria condivisa è la memoria a cui è possibile accedere sia dalla CPU che dal tasto di scelta rapida. L'utilizzo della memoria condivisa Elimina o riduce significativamente il sovraccarico della copia dei dati tra la CPU e l'acceleratore. Sebbene la memoria sia condivisa, non è possibile accedervi contemporaneamente sia dalla CPU che dal tasto di scelta rapida. questa operazione causa un comportamento non definito. La proprietà Accelerator [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) restituisce **`true`** se il tasto di scelta rapida supporta la memoria condivisa e la proprietà [default_cpu_access_type](reference/accelerator-class.md#default_cpu_access_type) ottiene la [access_type](reference/concurrency-namespace-enums-amp.md#access_type) predefinita per la memoria allocata in `accelerator` , ad esempio, la **matrice** associata all'oggetto `accelerator` o `array_view` gli oggetti a cui si accede in `accelerator` .

Il runtime di C++ AMP sceglie automaticamente il valore predefinito migliore `access_type` per ogni `accelerator` , ma le caratteristiche di prestazioni (larghezza di banda e latenza) della memoria condivisa possono essere inferiori rispetto a quelle della memoria dell'acceleratore dedicata (non condivisa) durante la lettura dalla CPU, la scrittura dalla CPU o entrambe. Se la memoria condivisa viene eseguita oltre alla memoria dedicata per la lettura e la scrittura dalla CPU, l'impostazione predefinita del runtime `access_type_read_write` è. in caso contrario, il runtime sceglie un valore predefinito più conservativo `access_type` e consente all'app di eseguirne l'override se i modelli di accesso alla memoria dei propri kernel di calcolo traggono vantaggio da un diverso `access_type` .

Nell'esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta la memoria condivisa, quindi esegue l'override del tipo di accesso predefinito e ne crea uno `accelerator_view` .

```cpp
#include <amp.h>
#include <iostream>

using namespace Concurrency;

int main()
{
    accelerator acc = accelerator(accelerator::default_accelerator);

    // Early out if the default accelerator doesn’t support shared memory.
    if (!acc.supports_cpu_shared_memory)
    {
        std::cout << "The default accelerator does not support shared memory" << std::endl;
        return 1;
    }

    // Override the default CPU access type.
    acc.set_default_cpu_access_type(access_type_read_write);

    // Create an accelerator_view from the default accelerator. The
    // accelerator_view reflects the default_cpu_access_type of the
    // accelerator it’s associated with.
    accelerator_view acc_v = acc.default_view;
}
```

Un oggetto `accelerator_view` riflette sempre l'oggetto `default_cpu_access_type` della classe a `accelerator` cui è associato e non fornisce alcuna interfaccia per eseguire l'override o modificare il relativo `access_type` .

## <a name="changing-the-default-accelerator"></a>Modifica dell'acceleratore predefinito

È possibile modificare l'acceleratore predefinito chiamando il `accelerator::set_default` metodo. È possibile modificare l'acceleratore predefinito solo una volta per ogni esecuzione dell'app ed è necessario modificarlo prima di eseguire qualsiasi codice nella GPU. Tutte le chiamate di funzione successive per modificare il tasto di scelta rapida restituiscono **`false`** . Se si vuole usare un tasto di scelta rapida diverso in una chiamata a `parallel_for_each` , vedere la sezione "uso di più acceleratori" in questo articolo. Nell'esempio di codice seguente il tasto di scelta rapida predefinito viene impostato su uno non emulato, non è connesso a una visualizzazione e supporta la precisione doppia.

```cpp
bool pick_accelerator()
{
    std::vector<accelerator> accs = accelerator::get_all();
    accelerator chosen_one;

    auto result = std::find_if(accs.begin(), accs.end(),
        [] (const accelerator& acc) {
            return !acc.is_emulated &&
                acc.supports_double_precision &&
                !acc.has_display;
        });

    if (result != accs.end()) {
        chosen_one = *(result);
    }

    std::wcout <<chosen_one.description <<std::endl;
    bool success = accelerator::set_default(chosen_one.device_path);
    return success;
}
```

## <a name="using-multiple-accelerators"></a>Uso di più acceleratori

Esistono due modi per usare più acceleratori nell'app:

- È possibile passare `accelerator_view` gli oggetti alle chiamate al metodo [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) .

- È possibile costruire un oggetto **Array** usando un `accelerator_view` oggetto specifico. Il runtime di C + AMP preleverà l' `accelerator_view` oggetto dall'oggetto **matrice** acquisito nell'espressione lambda.

## <a name="special-accelerators"></a>Acceleratori speciali

I percorsi dei dispositivi di tre acceleratori speciali sono disponibili come proprietà della `accelerator` classe:

- [acceleratore::d Irect3d_ref membro dati](reference/accelerator-class.md#direct3d_ref): questo acceleratore a thread singolo usa il software sulla CPU per emulare una scheda grafica generica. Viene usato per impostazione predefinita per il debug, ma non è utile nell'ambiente di produzione perché è più lento degli acceleratori hardware. Inoltre, è disponibile solo in DirectX SDK e nei Windows SDK ed è improbabile che sia installato nei computer dei clienti. Per altre informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).

- [Accelerator::d Irect3d_warp membro dati](reference/accelerator-class.md#direct3d_warp): questo acceleratore fornisce una soluzione di fallback per l'esecuzione di codice di C++ amp su CPU multicore che usano Streaming SIMD Extensions (SSE).

- [membro dati Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator): è possibile usare questo acceleratore per la configurazione di matrici di staging. Non può eseguire codice C++ AMP. Per ulteriori informazioni, vedere la pagina relativa alle [matrici di staging in C++ amp](/archive/blogs/nativeconcurrency/staging-arrays-in-c-amp) post nel Blog relativo alla programmazione parallela in codice nativo.

## <a name="interoperability"></a>Interoperabilità

Il runtime di C++ AMP supporta l'interoperabilità tra la `accelerator_view` classe e l' [interfaccia ID3D11Device](/windows/win32/api/d3d11/nn-d3d11-id3d11device)di Direct3D. Il metodo [create_accelerator_view](reference/concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view) accetta un' `IUnknown` interfaccia e restituisce un `accelerator_view` oggetto. Il metodo [get_device](reference/concurrency-direct3d-namespace-functions-amp.md#get_device) accetta un `accelerator_view` oggetto e restituisce un' `IUnknown` interfaccia.

## <a name="see-also"></a>Vedi anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)<br/>
[Classe accelerator_view](../../parallel/amp/reference/accelerator-view-class.md)
