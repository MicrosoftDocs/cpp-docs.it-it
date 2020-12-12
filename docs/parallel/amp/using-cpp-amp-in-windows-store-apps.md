---
description: 'Altre informazioni su: uso di C++ AMP nelle app UWP'
title: Uso di C++ AMP nelle app UWP
ms.date: 11/04/2016
ms.assetid: 85577298-2c28-4209-9470-eb21048615db
ms.openlocfilehash: 91c7b147ff89a1fe19ebe1b18e465533053542d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314477"
---
# <a name="using-c-amp-in-uwp-apps"></a>Uso di C++ AMP nelle app UWP

È possibile usare C++ AMP (C++ Accelerated Massive Parallelism) nell'app piattaforma UWP (Universal Windows Platform) (UWP) per eseguire calcoli sulla GPU (unità di elaborazione grafica) o su altri acceleratori computazionali. Tuttavia, C++ AMP non fornisce API per utilizzare direttamente i tipi Windows Runtime; inoltre, Windows Runtime non fornisce un wrapper per C++ AMP. Quando si utilizzano i tipi Windows Runtime nel codice, inclusi quelli creati dall'utente, è necessario convertirli in tipi compatibili con C++ AMP.

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

Se si usa Visual C++ Component Extensions C++/CX per creare l'app piattaforma UWP (Universal Windows Platform) (UWP), è consigliabile usare i tipi di dati Plain-Old-data (POD) insieme all'archiviazione contigua, ad esempio `std::vector` o alle matrici di tipo C, per i dati che verranno usati con C++ amp. Ciò consente di ottenere prestazioni più elevate rispetto all'utilizzo di tipi non POD o di contenitori di Windows RT perché non deve essere eseguito alcun marshalling.

In un kernel C++ AMP, per accedere ai dati archiviati in questo modo, è sufficiente eseguire il wrapping dell' `std::vector` archiviazione della matrice o in un oggetto `concurrency::array_view` e quindi usare la visualizzazione della matrice in un `concurrency::parallel_for_each` ciclo:

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

Quando si lavora con Windows Runtime API, è possibile usare C++ AMP sui dati archiviati in un contenitore Windows Runtime, ad esempio `Platform::Array<T>^` o in tipi di dati complessi, ad esempio classi o struct dichiarati usando la parola chiave **ref** o la parola chiave **value** . In questi casi, è necessario eseguire alcune operazioni aggiuntive per rendere i dati disponibili per C++ AMP.

### <a name="platformarrayt-where-t-is-a-pod-type"></a>Platform:: array \<T> ^, dove T è un tipo POD

Quando si incontra `Platform::Array<T>^` e T è un tipo POD, è possibile accedere alla relativa archiviazione sottostante semplicemente utilizzando la `get` funzione membro:

```cpp
Platform::Array<float>^ arr; // Assume that this was returned by a Windows Runtime API
concurrency::array_view<float, 1> av(arr->Length, &arr->get(0));
```

Se T non è un tipo POD, usare la tecnica descritta nella sezione seguente per usare i dati con C++ AMP.

### <a name="windows-runtime-types-ref-classes-and-value-classes"></a>Tipi di Windows Runtime: classi di riferimento e classi di valore

C++ AMP non supporta tipi di dati complessi. Sono inclusi i tipi non POD e i tipi dichiarati utilizzando la parola chiave **ref** o la parola chiave **value** . Se un tipo non supportato viene usato in un `restrict(amp)` contesto, viene generato un errore in fase di compilazione.

Quando si verifica un tipo non supportato, è possibile copiare parti interessanti dei propri dati in un `concurrency::array` oggetto. Oltre a rendere i dati disponibili per l'utilizzo da parte di C++ AMP, questo approccio di copia manuale può migliorare le prestazioni ottimizzando la località dei dati e assicurando che i dati che non verranno utilizzati non vengano copiati nel tasto di scelta rapida. È possibile migliorare ulteriormente le prestazioni usando un *array di staging*, che è un modulo speciale di `concurrency::array` che fornisce un suggerimento al runtime di amp che la matrice deve essere ottimizzata per il trasferimento frequente tra di essa e altre matrici sull'acceleratore specificato.

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

## <a name="see-also"></a>Vedi anche

[Creare la prima app UWP con C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
