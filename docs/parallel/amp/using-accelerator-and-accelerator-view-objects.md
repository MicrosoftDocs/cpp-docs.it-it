---
title: Utilizzo degli oggetti accelerator e accelerator_view | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d2c53ceb50057e789856aa8e7f67c9f788aa5a0a
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42540613"
---
# <a name="using-accelerator-and-acceleratorview-objects"></a>Utilizzo degli oggetti accelerator e accelerator_view
È possibile usare la [acceleratore](../../parallel/amp/reference/accelerator-class.md) e [accelerator_view](../../parallel/amp/reference/accelerator-view-class.md) classi per specificare un dispositivo o emulatore per eseguire il codice C++ AMP. Un sistema potrebbe avere diversi dispositivi o emulatori che differiscono per quantità di memoria, supporto della memoria condivisa, supporto per il debug o supporto a precisione doppia. C++ Accelerated Massive Parallelism (C++ AMP) fornisce API che è possibile usare per esaminare gli acceleratori disponibili, impostarne uno come predefinito, specificare più accelerator_views per più chiamate a parallel_for_each ed eseguire attività di debug speciali.  
  
## <a name="using-the-default-accelerator"></a>Utilizzo degli acceleratori predefiniti  
 
Il runtime di AMP C++ sceglie un acceleratore predefinito, a meno che non si scrive codice per selezionarne uno specifico. Il runtime sceglie l'acceleratore predefinito come indicato di seguito:  
  
1. Se l'app è in esecuzione in modalità di debug, un acceleratore che supporta il debug.  
  
2. In caso contrario, l'acceleratore specificato dalla variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR, se è impostata.  
  
3. In caso contrario, un dispositivo non emulato.  
  
4. In caso contrario, il dispositivo con la maggiore quantità di memoria disponibile.  
  
5. In caso contrario, un dispositivo che non è collegato alla visualizzazione.  
  
Inoltre, il runtime specifica un `access_type` di `access_type_auto` per l'acceleratore predefinito. Ciò significa che l'acceleratore predefinito utilizza memoria condivisa se è supportata e se le caratteristiche di prestazioni (larghezza di banda e latenza) sono noti per essere quella di memoria dedicata (non condiviso).  
  
È possibile determinare le proprietà del acceleratore predefinito dalla costruzione del acceleratore predefinito ed esaminandone le proprietà. Esempio di codice seguente consente di stampare il percorso, la quantità di memoria di tasti di scelta rapida, supporto della memoria condivisa, supporto a precisione doppia e supporto a precisione doppia limitato dell'acceleratore predefinito.  
  
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
  
### <a name="cppampdefaultaccelerator-environment-variable"></a>Variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR  
È possibile impostare la variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR per specificare il `accelerator::device_path` dell'acceleratore predefinito. Il percorso è dipendente dall'hardware. Il codice seguente usa il `accelerator::get_all` funzione per recuperare un elenco di acceleratori disponibili e quindi Visualizza il percorso e le caratteristiche di ogni acceleratore.  
  
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
 
Per selezionare un acceleratore, utilizzare il `accelerator::get_all` metodo per recuperare un elenco di acceleratori disponibili e quindi selezionare uno in base alle relative proprietà. In questo esempio mostra come selezionare l'acceleratore avente la maggior parte della memoria:  
  
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
> Uno degli acceleratori restituiti da `accelerator::get_all` è l'acceleratore della CPU. È possibile eseguire codice sull'acceleratore della CPU. Per filtrare l'acceleratore della CPU, confrontare il valore della [device_path](reference/accelerator-class.md#device_path) proprietà dell'acceleratore restituito da `accelerator::get_all` con il valore della [Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator). Per altre informazioni, vedere la sezione "Acceleratori speciali" in questo articolo.  
  
## <a name="shared-memory"></a>Memoria condivisa  
 
Memoria condivisa è la memoria che è possibile accedere dal tasto di scelta rapida sia la CPU. L'utilizzo della memoria condivisa Elimina o riduce notevolmente il sovraccarico di copia dei dati tra la CPU e i tasti di scelta rapida. Anche se la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e i tasti di scelta rapida e in caso contrario, un comportamento indefinito. La proprietà acceleratore [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) restituisce **true** se il tasto di scelta rapida supporta memoria condivisa e il [default_cpu_access_type](reference/accelerator-class.md#default_cpu_access_type) property get il valore predefinito [access_type](reference/concurrency-namespace-enums-amp.md#access_type) per la memoria allocata nel `accelerator`, ad esempio, **matrice**associati al `accelerator`, o `array_view` oggetti accessibili sul `accelerator`. 
  
Il runtime di AMP C++ sceglie automaticamente il valore predefinito migliore `access_type` per ogni `accelerator`, ma le caratteristiche di prestazioni (larghezza di banda e latenza) di memoria condivisa possono essere inferiori rispetto a quelle della memoria dedicata accelerator (non condivisa) durante la lettura dalla CPU, la scrittura dalla CPU o entrambi. Se la memoria condivisa esegue quello della memoria dedicata per la lettura e scrittura dalla CPU, il runtime predefinito `access_type_read_write`; in caso contrario, il runtime sceglie un valore predefinito più conservativo `access_type`e consente all'app di eseguire l'override se la memoria di accesso modelli dei relativi kernel di calcolo traggono vantaggio da un altro `access_type`.  
  
Esempio di codice seguente viene illustrato come determinare se l'acceleratore predefinito supporta la memoria condivisa, quindi esegue l'override relativo tipo di accesso predefinito e crea un `accelerator_view` da quest'ultimo.  
  
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
  
Un' `accelerator_view` riflette sempre il `default_cpu_access_type` del `accelerator` cui è associato e non fornisce alcuna interfaccia per eseguire l'override o modificare relativo `access_type`.  
  
## <a name="changing-the-default-accelerator"></a>Modificare gli acceleratori predefiniti  
 
È possibile modificare l'acceleratore predefinito chiamando il `accelerator::set_default` (metodo). È possibile modificare l'acceleratore predefinito solo una volta per ogni app per l'esecuzione ed è necessario modificarlo prima codice venga eseguito sulla GPU. Restituirà qualsiasi successiva chiamata di funzione per modificare l'acceleratore **false**. Se si desidera utilizzare un acceleratore diverso in una chiamata a `parallel_for_each`, leggere la sezione "Usare più acceleratori" in questo articolo. Esempio di codice seguente imposta l'acceleratore predefinito che non viene emulato, non è connesso a un display e supporta la doppia precisione.  
  
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
  
## <a name="using-multiple-accelerators"></a>Utilizzo di più acceleratori  
 
Esistono due modi per usare più acceleratori nella propria app:  

- È possibile passare `accelerator_view` gli oggetti per le chiamate per il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) (metodo).  
  
- È possibile costruire un **matrice** dell'oggetto usando uno specifico `accelerator_view` oggetto. Il runtime C++ AMP selezionerà il `accelerator_view` oggetto acquisito **matrice** oggetto nell'espressione lambda.  
  
## <a name="special-accelerators"></a>Acceleratori speciali  
 
I percorsi di dispositivo di tre acceleratori speciali sono disponibili come proprietà del `accelerator` classe:  
  
- [Membro dati Accelerator::direct3d_ref](reference/accelerator-class.md#direct3d_ref): questo acceleratore a thread singolo Usa software sulla CPU per emulare una scheda grafica generica. Per impostazione predefinita viene usato per eseguire il debug, ma non è utile nell'ambiente di produzione perché è più lento rispetto degli acceleratori hardware. Inoltre, è disponibile solo in DirectX SDK e il SDK di Windows, ed è improbabile venga installato nei computer dei tuoi clienti. Per altre informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).  
  
- [Membro dati Accelerator::direct3d_warp](reference/accelerator-class.md#direct3d_warp): questo acceleratore fornisce una soluzione di fallback per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).  
  
- [Membro dati Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator): È possibile utilizzare questo tasto di scelta rapida per la configurazione di matrici di gestione temporanea. Non può eseguire il codice C++ AMP. Per altre informazioni, vedere la [matrici di gestione temporanea in AMP C++](http://go.microsoft.com/fwlink/p/?linkId=248485) post nella programmazione parallela nel blog del codice nativo.  
  
## <a name="interoperability"></a>Interoperabilità  
 
Il runtime C++ AMP supporta l'interoperabilità tra i `accelerator_view` classe e Direct3D [interfaccia ID3D11Device](http://go.microsoft.com/fwlink/p/?linkId=248488). Il [create_accelerator_view](reference/concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view) metodo accetta un `IUnknown` interfaccia e restituisce un `accelerator_view` oggetto. Il [get_device](http://msdn.microsoft.com/8194125e-8396-4d62-aa8a-65831dea8439) metodo accetta un `accelerator_view` oggetto e restituisce un `IUknown` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 
[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
[Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)   
[Classe accelerator_view](../../parallel/amp/reference/accelerator-view-class.md)