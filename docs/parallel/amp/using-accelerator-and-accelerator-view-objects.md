---
title: Utilizzo degli oggetti accelerator e accelerator_view | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8cc676407a88979679a362b3d36f361614524432
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="using-accelerator-and-acceleratorview-objects"></a>Utilizzo degli oggetti accelerator e accelerator_view
È possibile utilizzare il [tasti di scelta rapida](../../parallel/amp/reference/accelerator-class.md) e [accelerator_view](../../parallel/amp/reference/accelerator-view-class.md) classi per specificare il dispositivo o l'emulatore per eseguire il codice C++ AMP. Un sistema potrebbe essere più dispositivi o gli emulatori che differiscono per quantità di memoria, supporto della memoria condivisa, il supporto del debug o il supporto e con precisione doppia. C++ Accelerated Massive Parallelism (C++ AMP) fornisce API che è possibile utilizzare per esaminare i tasti di scelta rapida disponibili, configurarne uno come impostazione predefinita, specificare più elementi accelerator_view per più chiamate a parallel_for_each ed eseguire attività di debug speciali.  
  
## <a name="using-the-default-accelerator"></a>Utilizzando i tasti di scelta rapida predefiniti  
 Il runtime C++ AMP sceglie un acceleratore predefinito, a meno che non si scrive codice per il prelievo di uno specifico. Il runtime sceglie il tasto di scelta rapida predefinito come indicato di seguito:  
  
1.  Se l'app è in esecuzione in modalità di debug, un acceleratore che supporta il debug.  
  
2.  In caso contrario, l'acceleratore specificato dalla variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR, se è impostato.  
  
3.  In caso contrario, un dispositivo non emulati.  
  
4.  In caso contrario, il dispositivo con la maggiore quantità di memoria disponibile.  
  
5.  In caso contrario, un dispositivo che non è collegato alla visualizzazione.  
  
 Inoltre, il runtime consente di specificare un `access_type` di `access_type_auto` per acceleratore predefinito. Ciò significa che i tasti di scelta rapida predefinita utilizza la memoria condivisa se è supportata e le caratteristiche di prestazioni (larghezza di banda e latenza) sono noti come quella della memoria (non condivisi) dedicata.  
  
 È possibile determinare le proprietà dell'acceleratore predefinito costruendo i tasti di scelta rapida predefiniti e di esaminarne le proprietà. Esempio di codice seguente stampa il percorso, quantità di memoria di tasti di scelta rapida, supporto della memoria condivisa, supporto e con precisione doppia e un supporto limitato e con precisione doppia dell'acceleratore predefinito.  
  
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
 È possibile impostare la variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR per specificare il `accelerator::device_path` dell'acceleratore predefinito. Il percorso è dipendente dall'hardware. Il codice seguente usa il `accelerator::get_all` funzione per recuperare un elenco di tasti di scelta rapida di disponibile e quindi Visualizza il percorso e le caratteristiche di ogni tasti di scelta rapida.  
  
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
  
## <a name="selecting-an-accelerator"></a>Selezione di un tasto di scelta rapida  
 Per selezionare un tasto di scelta rapida, utilizzare il `accelerator::get_all` metodo per recuperare un elenco di tasti di scelta rapida di disponibile e quindi selezionare una in base alle relative proprietà. In questo esempio viene illustrato come scegliere il tasto di scelta rapida con la maggior parte della memoria:  
  
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
>  Uno dei tasti di scelta rapida che vengono restituiti da `accelerator::get_all` è la scelta rapida della CPU. È possibile eseguire codice nel tasto di scelta rapida della CPU. Per filtrare l'acceleratore della CPU, confrontare il valore del [device_path](reference/accelerator-class.md#device_path) tasto di scelta rapida che viene restituito dalla proprietà `accelerator::get_all` con il valore della [Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator). Per ulteriori informazioni, vedere la sezione "Speciali tasti di scelta rapida" in questo articolo.  
  
## <a name="shared-memory"></a>Memoria condivisa  
 Condiviso è la memoria che è possibile accedere tramite la CPU e i tasti di scelta rapida. L'utilizzo della memoria condivisa, Elimina o riduce notevolmente il sovraccarico di copiare dati tra la CPU e i tasti di scelta rapida. Anche se la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e i tasti di scelta rapida e in caso contrario, un comportamento indefinito. La proprietà accelerator [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) restituisce `true` se supporta la memoria condivisa, il tasto di scelta rapida e [default_cpu_access_type](reference/accelerator-class.md#default_cpu_access_type) proprietà ottiene il valore predefinito [access_type](reference/concurrency-namespace-enums-amp.md#access_type) per la memoria allocata nel `accelerator`, ad esempio, `array`associati al `accelerator`, o `array_view` oggetti accessibili il `accelerator`. 
  
 Il runtime di C++ AMP sceglie automaticamente il valore predefinito migliore `access_type` per ogni `accelerator`, ma le caratteristiche di prestazioni (larghezza di banda e latenza) di memoria condivisa possono essere peggiore rispetto a quelle di memoria dedicata accelerator (non condivisi) durante la lettura dalla CPU, la scrittura, la CPU o di entrambi. Se la memoria condivisa esegue nonché memoria dedicata per la lettura e scrittura dalla CPU, il runtime per impostazione predefinita `access_type_read_write`; in caso contrario, il runtime sceglie predefinito più attento `access_type`e consente all'app di eseguire l'override se la memoria di accesso modelli del kernel di calcolo trarre vantaggio da un altro `access_type`.  
  
 Esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta memoria condivisa, quindi sostituisce il tipo di accesso predefinito e crea un `accelerator_view` da esso.  
  
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
  
 Un `accelerator_view` riflette sempre il `default_cpu_access_type` del `accelerator` è associato, e non fornisce alcuna interfaccia per eseguire l'override o modificare il relativo `access_type`.  
  
## <a name="changing-the-default-accelerator"></a>Modifica l'acceleratore predefinito  
 È possibile modificare i tasti di scelta rapida predefiniti chiamando il `accelerator::set_default` metodo. È possibile modificare i tasti di scelta rapida predefinito solo una volta per ogni app esecuzione ed è necessario modificarla prima di qualsiasi codice viene eseguito nella GPU. Qualsiasi chiamata di funzione successive per modificare l'acceleratore restituirà `false`. Se si desidera utilizzare un tasto di scelta rapida diversi in una chiamata a `parallel_for_each`, leggere la sezione "Utilizzo di più degli acceleratori" in questo articolo. Esempio di codice seguente imposta i tasti di scelta rapida predefiniti in modo che non viene emulato, non è connesso a una visualizzazione e supporta e con precisione doppia.  
  
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
  
## <a name="using-multiple-accelerators"></a>Utilizzo di più tasti di scelta rapida  
 Esistono due modi per usare più tasti di scelta rapida nell'app:  

-   È possibile passare `accelerator_view` le chiamate a oggetti di [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) metodo.  
  
-   È possibile costruire un `array` utilizzando uno specifico `accelerator_view` oggetto. Il runtime di C + AMP selezionerà il `accelerator_view` oggetto acquisiti `array` oggetto nell'espressione lambda.  
  
## <a name="special-accelerators"></a>Tasti di scelta rapida speciali  
 I percorsi di dispositivo degli acceleratori speciali tre sono disponibili come proprietà della `accelerator` classe:  
  
- [Membro dati Accelerator:: direct3d_ref](reference/accelerator-class.md#direct3d_ref): questo tasto di scelta rapida a thread singolo Usa il software di CPU per emulare una scheda grafica generico. Per impostazione predefinita viene utilizzato per il debug, ma non è utile nell'ambiente di produzione perché è più lento rispetto di acceleratori hardware. Inoltre, è disponibile solo in DirectX SDK e Windows SDK e non viene in genere essere installato nei computer dei clienti. Per ulteriori informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).  
  
- [Membro dati Accelerator:: direct3d_warp](reference/accelerator-class.md#direct3d_warp): questo tasto di scelta rapida fornisce una soluzione di fallback per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).  
  
- [Membro dati Accelerator:: cpu_accelerator](reference/accelerator-class.md#cpu_accelerator): È possibile utilizzare questo tasto di scelta rapida per la configurazione di gestione temporanea di matrici. È possibile eseguire il codice C++ AMP. Per ulteriori informazioni, vedere il [matrici di gestione temporanea in C++ AMP](http://go.microsoft.com/fwlink/p/?linkId=248485) post nel codice nativo blog sulla programmazione parallela.  
  
## <a name="interoperability"></a>Interoperabilità  
 Il runtime C++ AMP supporta l'interoperabilità fra i `accelerator_view` classe e Direct3D [ID3D11Device interfaccia](http://go.microsoft.com/fwlink/p/?linkId=248488). Il [create_accelerator_view](reference/concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view) metodo accetta un `IUnknown` interfaccia e restituisce un `accelerator_view` oggetto. Il [get_device](http://msdn.microsoft.com/en-us/8194125e-8396-4d62-aa8a-65831dea8439) metodo accetta un `accelerator_view` oggetto e restituisce un `IUknown` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Debug del codice GPU](/visualstudio/debugger/debugging-gpu-code)   
 [Classe accelerator_view](../../parallel/amp/reference/accelerator-view-class.md)
