---
title: Utilizzo di C++ AMP nelle applicazioni Windows Store | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 85577298-2c28-4209-9470-eb21048615db
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3fa6b42dd4e00f3b5314806933d06b3c1534b4d7
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="using-c-amp-in-windows-store-apps"></a>Utilizzo di C++ AMP nelle applicazioni Windows Store
È possibile utilizzare C++ AMP (C++ Accelerated Massive Parallelism) nei [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app per eseguire calcoli sul GPU (Graphics Processing Unit) o altri tasti di scelta rapida di calcolo. Tuttavia, C++ AMP non fornisce API per utilizzare direttamente i tipi Windows Runtime; inoltre, Windows Runtime non fornisce un wrapper per C++ AMP. Quando si utilizzano i tipi Windows Runtime nel codice, inclusi quelli creati dall'utente, è necessario convertirli in tipi compatibili con C++ AMP.  
  
## <a name="performance-considerations"></a>Considerazioni sulle prestazioni  
 Se si utilizza [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]) per creare il [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app, è consigliabile utilizzare i tipi di dati di vecchio normale (POD) con archiviazione contiguo, ad esempio, `std::vector` o matrici di tipo C: per i dati che può essere utilizzato con C++ AMP. Questo può consentire di ottenere prestazioni più elevate utilizzando i contenitori di Windows RT o tipi non POD perché nessun tipo di marshalling deve verificarsi.  
  
 Un kernel C++ AMP, per accedere ai dati archiviati in questo modo, è sufficiente racchiudere il `std::vector` archiviazione nella matrice o un `concurrency::array_view` e quindi utilizzare la visualizzazione di matrice in un `concurrency::parallel_for_each` ciclo:  
  
```cpp  
// simple vector addition example  
std::vector<int> data0(1024, 1);
std::vector<int> data1(1024, 2);
std::vector<int> data_out(data0.size(), 0);
  
concurrency::array_view<int, 1> av0(data0.size(), data0);
concurrency::array_view<int, 1> av1(data1.size(), data1);
concurrency::array_view<int, 1> av2(data_out.size(), data2);
  
av2.discard_data();
  
concurrency::parallel_for_each(av0.extent, [=](concurrency::index<1> idx) restrict(amp)  
    {  
        av2[idx] = av0[idx] + av1[idx];  
    });
```  
  
## <a name="marshaling-windows-runtime-types"></a>Marshalling dei tipi di Windows Runtime  
 Quando si utilizzano le API di Windows Runtime, è possibile utilizzare C++ AMP nei dati archiviati in un contenitore Windows Runtime, ad esempio `Platform::Array<T>^` o in tipi di dati complessi come classi o struct che vengono dichiarati utilizzando la parola chiave `ref` o la parola chiave `value`. In questi casi, è necessario eseguire alcune operazioni aggiuntive per rendere disponibili i dati a C++ AMP.  
  
### <a name="platformarrayt-where-t-is-a-pod-type"></a>Platform:: Array\<T > ^, dove T è un tipo POD  
 Quando si verifica un `Platform::Array<T>^` e T è un tipo POD, è possibile accedere lo spazio di archiviazione sottostante semplicemente utilizzando la `get` funzione membro:  
  
```cpp  
Platform::Array<float>^ arr; // Assume that this was returned by a Windows Runtime API  
concurrency::array_view<float, 1> av(arr->Length, &arr->get(0));
```  
  
 Se T non è un tipo POD, utilizzare la tecnica descritta nella sezione seguente per utilizzare i dati con C++ AMP.  
  
### <a name="windows-runtime-types-ref-classes-and-value-classes"></a>Tipi di Windows Runtime: classi di riferimento e classi di valore  
 C++ AMP non supporta i tipi di dati complessi. Sono inclusi i tipi non POD e tutti i tipi che vengono dichiarati tramite la `ref` parola chiave o `value` (parola chiave). Se viene utilizzato un tipo non supportato un `restrict(amp)` contesto di un errore in fase di compilazione, viene generato.  
  
 Quando si verifica un tipo non supportato, è possibile copiare parti interessanti dei dati in un `concurrency::array` oggetto. Oltre a rendere disponibili per C++ AMP utilizzare i dati, questo approccio manuale copia può migliorare le prestazioni ottimizzando la località dei dati e assicurandosi che non vengono copiati i dati che non venga utilizzati per i tasti di scelta rapida. È possibile migliorare ulteriormente le prestazioni utilizzando un *matrice di gestione temporanea*, che è una forma speciale di `concurrency::array` che fornisce un hint al runtime AMP che la matrice deve essere ottimizzata per il trasferimento tra questa e altre matrici frequente sul tasto di scelta specificato.  
  
```cpp  
// pixel_color.h  
ref class pixel_color sealed  
{  
public: 
    pixel_color(Platform::String^ color_name, int red, int green, int blue)   
    {  
        name = color_name;  
        r = red;  
        g = green;  
        b = blue;  
    }  
 
    property Platform::String^ name;   
    property int r;  
    property int g;  
    property int b;  
};  
  
// Some other file  
  
std::vector<pixel_color^> pixels (256);
  
for (pixel_color ^pixel : pixels)   
{  
    pixels.push_back(ref new pixel_color("blue", 0, 0, 255));
}  
  
// Create the accelerators  
auto cpuAccelerator = concurrency::accelerator(concurrency::accelerator::cpu_accelerator);
auto devAccelerator = concurrency::accelerator(concurrency::accelerator::default_accelerator);
  
// Create the staging arrays  
concurrency::array<float, 1> red_vec(256, cpuAccelerator.default_view, devAccelerator.default_view);
concurrency::array<float, 1>  blue_vec(256, cpuAccelerator.default_view, devAccelerator.default_view);
  
// Extract data from the complex array of structs into staging arrays.  
concurrency::parallel_for(0, 256, [&](int i)  
    {   
        red_vec[i] = pixels[i]->r;  
        blue_vec[i] = pixels[i]->b;  
    });
  
// Array views are still used to copy data to the accelerator  
concurrency::array_view<float, 1> av_red(red_vec);
concurrency::array_view<float, 1> av_blue(blue_vec);
  
// Change all pixels from blue to red.  
concurrency::parallel_for_each(av_red.extent, [=](index<1> idx) restrict(amp)  
    {  
        av_red[idx] = 255;  
        av_blue[idx] = 0;  
    });
```  
  
## <a name="see-also"></a>Vedere anche  
 [Creare la prima app di Windows Store con C++](http://go.microsoft.com/fwlink/p/?linkid=249073)   
 [Creazione di componenti Windows Runtime in C++](http://go.microsoft.com/fwlink/p/?linkid=249076)



