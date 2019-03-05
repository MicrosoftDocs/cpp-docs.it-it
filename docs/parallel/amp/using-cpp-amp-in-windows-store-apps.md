---
title: Uso di C++ AMP nelle App UWP
ms.date: 11/04/2016
ms.assetid: 85577298-2c28-4209-9470-eb21048615db
ms.openlocfilehash: 31fede0a2419e56d53cb16521b08067dac5facc6
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57272659"
---
# <a name="using-c-amp-in-uwp-apps"></a>Uso di C++ AMP nelle App UWP

È possibile utilizzare C++ AMP (C++ Accelerated Massive Parallelism) nell'app per la Universal Windows Platform (UWP) per eseguire calcoli su GPU (Graphics Processing Unit) o altri acceleratori computazionali. Tuttavia, C++ AMP non fornisce API per utilizzare direttamente i tipi Windows Runtime; inoltre, Windows Runtime non fornisce un wrapper per C++ AMP. Quando si utilizzano i tipi Windows Runtime nel codice, inclusi quelli creati dall'utente, è necessario convertirli in tipi compatibili con C++ AMP.

## <a name="performance-considerations"></a>Considerazioni sulle prestazioni

Se si utilizza estensioni del componente C++ di Visual C + + c++ /CLI /CX per creare l'app Universal Windows Platform (UWP), è consigliabile usare tipi plain-old-data (POD) con archiviazione contigua, ad esempio, `std::vector` o matrici di tipo C, ovvero per i dati che saranno utilizzato con C++ AMP. Questo può consentire di ottenere prestazioni più elevate utilizzando i tipi non-POD o i contenitori di Windows RT perché nessun marshaling deve verificarsi.

Nel kernel di AMP C++, per accedere ai dati archiviati in questo modo, è sufficiente racchiudere il `std::vector` o una matrice di archiviazione in un `concurrency::array_view` e quindi usare la visualizzazione di matrici in un `concurrency::parallel_for_each` ciclo:

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

Quando si lavora con Windows Runtime APIs, si potrebbe voler utilizzare C++ AMP sui dati archiviati in un contenitore di Windows Runtime, ad esempio un `Platform::Array<T>^` o nei tipi di dati complessi come classi o struct che vengono dichiarate usando la **ref** parola chiave o il **valore** (parola chiave). In queste situazioni, è necessario effettuare alcune operazioni aggiuntive per rendere disponibili i dati in C++ AMP.

### <a name="platformarrayt-where-t-is-a-pod-type"></a>Platform:: Array\<T > ^, dove T è un tipo POD

Quando si incontra un `Platform::Array<T>^` e T è un tipo POD, è possibile accedere all'archiviazione relativa sottostante semplicemente utilizzando il `get` funzione membro:

```cpp
Platform::Array<float>^ arr; // Assume that this was returned by a Windows Runtime API
concurrency::array_view<float, 1> av(arr->Length, &arr->get(0));
```

Se T non è un tipo POD, usare la tecnica descritta nella sezione seguente per usare i dati con C++ AMP.

### <a name="windows-runtime-types-ref-classes-and-value-classes"></a>Tipi di Windows Runtime: classi di riferimento e classi di valore

C++ AMP non supporta tipi di dati complessi. Ciò include tipi non POD ed eventuali tipi dichiarati utilizzando la **ref** parola chiave o il **valore** (parola chiave). Se viene usato un tipo non supportato in un `restrict(amp)` contesto, un errore in fase di compilazione viene generato.

Quando si verifica un tipo non supportato, è possibile copiare parti interessanti dei dati in un `concurrency::array` oggetto. Oltre a rendere disponibili per C++ AMP utilizzare i dati, questo approccio di copia manuale può anche migliorare le prestazioni massimizzando la località dei dati e assicurando che i dati che non verrà usati non vengono copiati nell'acceleratore. È possibile migliorare ulteriormente le prestazioni usando una *matrice di gestione temporanea*, che è una forma speciale di `concurrency::array` che fornisce un hint al runtime di AMP che la matrice deve essere ottimizzata per un trasferimento frequente tra questo e ad altre matrici nel tasto di scelta specificato.

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

[Creare la prima app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
