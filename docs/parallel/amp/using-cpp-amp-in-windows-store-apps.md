---
title: "Utilizzo di C++ AMP nelle applicazioni Windows Store | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 85577298-2c28-4209-9470-eb21048615db
caps.latest.revision: 14
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di C++ AMP nelle applicazioni Windows Store
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare AMP C\+\+ \(C\+\+ Accelerated Massive Parallelism\) nell'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] per eseguire calcoli su GPU \(unità di elaborazione grafica\) o altri acceleratori computazionali.  Tuttavia, AMP C\+\+ non fornisce le API per utilizzare direttamente i tipi di Windows Runtime; inoltre il Windows Runtime non fornisce un wrapper per AMP C\+\+.  Quando si utilizzano i tipi di Windows Runtime nel codice, inclusi quelli creati personalmente, è necessario convertirli in tipi compatibili con C\+\+ AMP.  
  
## Considerazioni sulle prestazioni  
 Se si utilizza [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] \([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]\) per creare l'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], si consiglia di utilizzare i tipi POD \(Plain\-Old\-Data\) insieme con l'archiviazione contigua, ad esempio, `std::vector` o array di tipo C, per i dati che verranno utilizzati con C\+\+ AMP.  Questo consente di ottenere prestazioni elevate utilizzando i tipi non\-POD o i contenitori di Windows RT perché non deve avvenire nessun marshaling.  
  
 Nel kernel di AMP C\+\+, per accedere ai dati memorizzati in questa modalità, è sufficiente eseguire il wrapping di `std::vector` o dell'archivio di matrici in `concurrency::array_view`, quindi utilizzare la visualizzazione di matrici in un ciclo `concurrency::parallel_for_each`:  
  
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
  
## Marshalling dei tipi di Windows Runtime  
 Quando si utilizzano le API di Windows Runtime, è possibile utilizzare C\+\+ AMP sui dati archiviati in un contenitore Windows Runtime, ad esempio un `Platform::Array<T>^` o nei tipi di dati complessi come classi o strutture che vengono dichiarate utilizzando la parola chiave `ref` o la parola chiave `value`.  In queste situazioni, è necessario eseguire operazioni aggiuntive per rendere i dati disponibili in C\+\+ AMP.  
  
### Platform::Array\<T\>^, dove T è un tipo POD  
 Quando si incontra `Platform::Array<T>^` e T è un tipo POD, è possibile accedere all'archiviazione relativa sottostante, semplicemente utilizzando la funzione membro `get` :  
  
```cpp  
Platform::Array<float>^ arr; // Assume that this was returned by a Windows Runtime API  
concurrency::array_view<float, 1> av(arr->Length, &arr->get(0));  
  
```  
  
 Se T non è un tipo POD, utilizzare la tecnica descritta nella seguente sezione, per utilizzare i dati con C\+\+ AMP.  
  
### Tipi di Windows Runtime: classi di riferimento e classi di valore  
 C\+\+ AMP non supporta i tipi di dati complessi.  Questo include i tipi di non\-POD ed eventuali tipi dichiarati utilizzando la parola chiave `ref` o la parola chiave `value`.  Se un tipo non supportato viene utilizzato in un contesto `restrict(amp)`, viene generato un errore in fase di compilazione.  
  
 Quando si incontra un tipo non supportato, è possibile copiare parti interessanti dei dati in un oggetto di `concurrency::array`.  Oltre a rendere i dati disponibili per essere utilizzati da C\+\+ AMP, questo approccio di copia manuale può anche migliorare le prestazioni massimizzando la vicinanza dei dati e assicurando che i dati non utilizzati non vengano copiati nell'acceleratore.  È possibile migliorare ulteriormente le prestazioni utilizzando una *matrice di gestione temporanea*, un form speciale di `concurrency::array` che fornisce un suggerimento al runtime AMP, indicante che la matrice deve essere ottimizzata per un trasferimento frequente tra essa ad altre matrici specificate dell'acceleratore.  
  
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
..property int b;  
};  
  
// Some other file  
std::vector<pixel_color^> pixels (256);   
  
for(pixel_color ^pixel : pixels)   
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
  red_vec[i] = pixels[i]->r; blue_vec[i] = pixels[i]->b;  
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
  
## Vedere anche  
 [Creare la prima app di Windows Store in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=249073)   
 [Creazione di componenti Windows Runtime in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=249076)