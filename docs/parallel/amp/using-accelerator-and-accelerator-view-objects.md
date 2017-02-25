---
title: "Utilizzo degli oggetti accelerator e accelerator_view | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 18f0dc66-8236-4420-9f46-1a14f2c3fba1
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Utilizzo degli oggetti accelerator e accelerator_view
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare il [accelerator](../../parallel/amp/reference/accelerator-class.md) e [accelerator_view](../../parallel/amp/reference/accelerator-view-class.md) classi per specificare il dispositivo o emulatore per eseguire il codice C++ AMP. Un sistema potrà essere diversi dispositivi o emulatori che differiscono dalla quantità di memoria, supporto della memoria condivisa, il supporto del debug o il supporto e precisione doppia. C++ Accelerated Massive Parallelism (C++ AMP) fornisce API che è possibile utilizzare per esaminare i tasti di scelta rapida disponibili, impostarne una come il valore predefinito, specificare più elementi accelerator_view per più chiamate a parallel_for_each ed eseguire attività di debug speciali.  
  
## <a name="using-the-default-accelerator"></a>Utilizzando i tasti di scelta rapida predefiniti  
 Il runtime di C++ AMP sceglie un acceleratore predefinito, a meno che non si scrive codice per selezionare uno specifico. Il runtime sceglie acceleratore predefinito come indicato di seguito:  
  
1.  Se l'applicazione è in esecuzione in modalità debug, un tasto di scelta rapida che supporta il debug.  
  
2.  In caso contrario, l'acceleratore specificato dalla variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR, se è impostata.  
  
3.  In caso contrario, un dispositivo non emulati.  
  
4.  In caso contrario, il dispositivo con la maggiore quantità di memoria disponibile.  
  
5.  In caso contrario, un dispositivo che non è collegato alla visualizzazione.  
  
 Inoltre, il runtime consente di specificare un `access_type` di `access_type_auto` per acceleratore predefinito. Ciò significa che l'acceleratore predefinito utilizza memoria condivisa se è supportato e le caratteristiche di prestazioni (larghezza di banda e latenza) sono nota come memoria dedicata (non condiviso).  
  
 È possibile determinare le proprietà dell'acceleratore predefinito costruzione acceleratore predefinito ed esaminando le relative proprietà. Esempio di codice seguente consente di stampare il percorso, quantità di memoria di tasti di scelta rapida, supporto della memoria condivisa, supporto e precisione doppia e un supporto limitato e precisione doppia dell'acceleratore predefinito.  
  
```cpp  
 
void default_properties() {  
    accelerator default_acc;  
    std::wcout <<default_acc.device_path <<"\n";  
    std::wcout <<default_acc.dedicated_memory <<"\n";  
    std::wcout <<(accs[i].supports_cpu_shared_memory    
 "CPU shared memory: true" : "CPU shared memory: false") <<"\n";  
    std::wcout <<(accs[i].supports_double_precision    
 "double precision: true" : "double precision: false") <<"\n";  
    std::wcout <<(accs[i].supports_limited_double_precision    
 "limited double precision: true" : "limited double precision: false") <<"\n";  
}  
 
```  
  
### <a name="cppampdefaultaccelerator-environment-variable"></a>Variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR  
 È possibile impostare la variabile di ambiente CPPAMP_DEFAULT_ACCELERATOR per specificare il `accelerator::device_path` dell'acceleratore predefinito. Il percorso dipende dall'hardware. Il codice seguente usa il `accelerator::get_all` funzione per recuperare un elenco degli acceleratori disponibili e quindi Visualizza il percorso e le caratteristiche di ogni tasto di scelta rapida.  
  
```cpp  
 
void list_all_accelerators()  
{  
    std::vector<accelerator> accs = accelerator::get_all();
for (int i = 0; i <accs.size();

i++) {  
    std::wcout <<accs[i].device_path <<"\n";  
    std::wcout <<accs[i].dedicated_memory <<"\n";  
    std::wcout <<(accs[i].supports_cpu_shared_memory    
 "CPU shared memory: true" : "CPU shared memory: false") <<"\n";  
    std::wcout <<(accs[i].supports_double_precision    
 "double precision: true" : "double precision: false") <<"\n";  
    std::wcout <<(accs[i].supports_limited_double_precision    
 "limited double precision: true" : "limited double precision: false") <<"\n";  
 }  
}  
 
```  
  
## <a name="selecting-an-accelerator"></a>Selezione di un tasto di scelta rapida  
 Per selezionare un tasto di scelta rapida, utilizzare il `accelerator::get_all` metodo per recuperare un elenco di acceleratori disponibili e quindi selezionare una base nelle relative proprietà. In questo esempio viene illustrato come selezionare i tasti di scelta rapida con la maggior parte della memoria:  
  
```cpp  
 
void pick_with_most_memory()  
{  
    std::vector<accelerator> accs = accelerator::get_all();
accelerator acc_chosen = accs[0];  
    for (int i = 0; i <accs.size();

i++) {  
    if (accs[i].dedicated_memory> acc_chosen.dedicated_memory) {  
    acc_chosen = accs[i];  
 }  
 }  
 
    std::wcout <<"The accelerator with the most memory is "    
 <<acc_chosen.device_path <<"\n"  
 <<acc_chosen.dedicated_memory <<".\n";  
}  
 
```  
  
> [!NOTE]
>  Uno dei tasti di scelta rapida che sono restituiti da `accelerator::get_all` è la scelta rapida della CPU. È possibile eseguire codice sull'acceleratore della CPU. Per filtrare l'acceleratore della CPU, confrontare il valore del [device_path](../Topic/accelerator::device_path%20Data%20Member.md) del tasto di scelta rapida che viene restituito dalla proprietà `accelerator::get_all` con il valore di [Accelerator:: cpu_accelerator](../Topic/accelerator::cpu_accelerator%20Data%20Member.md). Per ulteriori informazioni, vedere la sezione "Accelerator speciale" in questo articolo.  
  
## <a name="shared-memory"></a>Memoria condivisa  
 Memoria condivisa è disponibile memoria accessibili tramite l'utilizzo della CPU sia i tasti di scelta rapida. L'utilizzo della memoria condivisa Elimina o riduce notevolmente il sovraccarico di copia dei dati tra l'utilizzo della CPU e il tasto di scelta rapida. Sebbene la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e il tasto di scelta rapida e in caso contrario, un comportamento non definito. La proprietà accelerator [supports_cpu_shared_memory](../Topic/accelerator::supports_cpu_shared_memory%20Data%20Member.md) restituisce `true` Se l'acceleratore supporta la memoria condivisa e il [default_cpu_access_type](../Topic/accelerator::default_cpu_access_type%20Data%20Member.md) proprietà ottiene il valore predefinito [access_type](../Topic/access_type%20Enumeration.md) per la memoria allocata nel `accelerator`ad esempio, `array`associati il `accelerator`, o `array_view` oggetti accessibili nel `accelerator`.  
  
 Il runtime di C++ AMP sceglie automaticamente il valore predefinito migliore `access_type` per ogni `accelerator`, ma le caratteristiche di prestazioni (larghezza di banda e latenza) di memoria condivisa possono essere peggiore rispetto a quelle di memoria dedicata accelerator (non condiviso) durante la lettura dalla CPU, la scrittura, la CPU o di entrambi. Se la memoria condivisa esegue nonché memoria dedicata per la lettura e scrittura dalla CPU, il runtime verrà impostato `access_type_read_write`; in caso contrario, il runtime sceglie predefinito è più conservativa `access_type`, e consente all'applicazione di eseguire l'override da un altro vantaggio per i modelli di accesso di memoria del kernel relativo calcolo `access_type`.  
  
 Esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta la memoria condivisa, quindi sostituisce il tipo di accesso predefinito e crea un `accelerator_view` da esso.  
  
```cpp  
#include <amp.h>  
#include <iostream>  
  
using namespace Concurrency;  
  
int main()  
{  
  accelerator acc = accelerator(accelerator::default_accelerator);  
  
  // Early out if the default accelerator doesn’t support shared memory.  
  if(!acc.supports_cpu_shared_memory)  
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
  
 Un `accelerator_view` riflette sempre il `default_cpu_access_type` del `accelerator` è associata e non fornisce alcuna interfaccia per eseguire l'override o modificare il relativo `access_type`.  
  
## <a name="changing-the-default-accelerator"></a>Modifica acceleratore predefinito  
 È possibile modificare l'acceleratore predefinito chiamando il `accelerator::set_default` metodo. È possibile modificare l'acceleratore predefinito solo una volta per ogni app esecuzione ed è necessario modificarla prima di qualsiasi codice che viene eseguito su GPU. Qualsiasi chiamata di funzione successive per modificare l'acceleratore restituirà `false`. Se si desidera utilizzare un acceleratore diversi in una chiamata a `parallel_for_each`, leggere la sezione "Utilizzo degli acceleratori più" in questo articolo. Esempio di codice seguente imposta acceleratore predefinito in modo che non viene emulato, non è connesso a una visualizzazione e supporta la precisione doppia.  
  
```cpp  
 
    bool pick_accelerator()  
{  
    std::vector<accelerator> accs = accelerator::get_all();
accelerator chosen_one;  
 
    auto result = 
    std::find_if(accs.begin(), accs.end(), [] (const accelerator& acc)  
 {  
    return !acc.is_emulated&& 
    acc.supports_double_precision&& 
 !acc.has_display;  
 });

 
    if (result != accs.end())  
    chosen_one = *(result);

 
    std::wcout <<chosen_one.description <<std::endl;  
 
    bool success = accelerator::set_default(chosen_one.device_path);

    return success;  
}  
 
```  
  
## <a name="using-multiple-accelerators"></a>Utilizzo di più tasti di scelta rapida  
 Esistono due modalità di utilizzo di più tasti di scelta rapida nell'applicazione:  
  
-   È possibile passare `accelerator_view` per le chiamate a oggetti di [parallel_for_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md) metodo.  
  
-   È possibile costruire un `array` mediante un oggetto specifico dell'oggetto `accelerator_view` oggetto. Il runtime di C + AMP selezionerà il `accelerator_view` oggetto acquisiti `array` oggetto nell'espressione lambda.  
  
## <a name="special-accelerators"></a>Tasti di scelta rapida speciali  
 I percorsi di dispositivi di tre acceleratori speciali sono disponibili come proprietà della `accelerator` classe:  
  
- [Membro dati Accelerator:: direct3d_ref](../Topic/accelerator::direct3d_ref%20Data%20Member.md): questo tasto di scelta rapida a thread singolo Usa software sulla CPU per emulare una scheda grafica generico. Per impostazione predefinita viene utilizzato per il debug, ma non è utile in fase di produzione perché è più che gli acceleratori hardware lento. Inoltre, è disponibile solo in DirectX SDK e Windows SDK ed è improbabile che sia installato nel computer dei clienti. Per ulteriori informazioni, vedere [il debug di codice della GPU](../Topic/Debugging%20GPU%20Code.md).  
  
- [Membro dati Accelerator:: direct3d_warp](../Topic/accelerator::direct3d_warp%20Data%20Member.md): questo acceleratore fornisce una soluzione di fallback per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).  
  
- [Membro dati Accelerator:: cpu_accelerator](../Topic/accelerator::cpu_accelerator%20Data%20Member.md): È possibile utilizzare questo tasto di scelta rapida per la configurazione di gestione temporanea di matrici. È possibile eseguire il codice C++ AMP. Per ulteriori informazioni, vedere il [matrici di gestione temporanea in C++ AMP](http://go.microsoft.com/fwlink/p/LinkId=248485) post in parallelo blog sulla programmazione nel codice nativo.  
  
## <a name="interoperability"></a>Interoperabilità  
 Il runtime di C++ AMP supporta l'interoperabilità tra la `accelerator_view` classe e Direct3D [ID3D11Device interfaccia](http://go.microsoft.com/fwlink/p/LinkId=248488). Il [create_accelerator_view](../Topic/create_accelerator_view%20Function.md) metodo accetta un `IUnknown` interfaccia e restituisce un `accelerator_view` oggetto. Il [get_device](http://msdn.microsoft.com/it-it/8194125e-8396-4d62-aa8a-65831dea8439) metodo accetta un `accelerator_view` oggetto e restituisce un `IUknown` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Debug del codice GPU](../Topic/Debugging%20GPU%20Code.md)   
 [accelerator_view (classe)](../../parallel/amp/reference/accelerator-view-class.md)
