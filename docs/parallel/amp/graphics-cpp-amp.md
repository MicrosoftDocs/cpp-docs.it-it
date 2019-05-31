---
title: Grafica (C++ AMP)
ms.date: 11/04/2016
ms.assetid: 190a98a4-5f7d-442e-866b-b374ca74c16f
ms.openlocfilehash: 6e21c5af094ce90c8e4365ed4263198422ad1905
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66449876"
---
# <a name="graphics-c-amp"></a>Grafica (C++ AMP)

C++ AMP contiene numerose API nel [Concurrency:: Graphics](../../parallel/amp/reference/concurrency-graphics-namespace.md) dello spazio dei nomi che è possibile usare per accedere al supporto trama sulle GPU. Di seguito sono illustrati alcuni scenari:

- È possibile usare la [trama](../../parallel/amp/reference/texture-class.md) classe come un contenitore di dati per calcolo e utilizzare il *località spaziale* della cache della trama e i layout dell'hardware della GPU. La località spaziale è la proprietà degli elementi dati fisicamente vicini gli uni agli altri.

- Il runtime consente un'efficiente interoperabilità con shader non di calcolo. Pixel, vertici, mosaico e hull shader spesso utilizzano o producono trame utilizzabili nei calcoli di C++ AMP.

- Le API grafiche di C++ AMP offrono modalità alternative per accedere ai buffer sub-word compressi. Le trame con formati che rappresentano *texel* (elementi di trama) che sono composte da 8 bit o valori scalari di 16 bit consentono l'accesso alle risorse di archiviazione così i dati compressi.

## <a name="the-norm-and-unorm-types"></a>Tipi norm e unorm

Il `norm` e `unorm` tipi sono tipi scalari che limitano l'intervallo della **float** valori; questa operazione è denominata *fissaggio*. Questi tipi possono essere costruiti in modo esplicito da altri tipi scalari. Nel cast, viene innanzitutto il cast del valore per **float** e quindi impostato alla relativa area consentita da norm [-1,0, 1.0] o unorm [0,0, 1,0]. Il cast da +/- all'infinito restituisce +/-1. Il cast da NaN non è definito. Un tipo norm può essere costruito in modo implicito da un tipo unorm senza perdita di dati. L'operatore di conversione implicita a float è definito su questi tipi. Gli operatori binari sono definiti tra questi tipi e altri tipi scalari predefiniti quali **float** e **int**: +, -, \*, /, = =,! =, >, \<, > =, < =. Operatori di assegnamento composti sono inoltre supportati: + =, -=, \*=, / =. L'operatore di negazione unario (-) è definito per i tipi norm.

## <a name="short-vector-library"></a>Libreria Short Vector

La libreria Short Vector fornisce alcune delle funzionalità dei [tipo vettore](https://go.microsoft.com/fwlink/p/?linkid=248500) che viene definito in HLSL e viene in genere utilizzata per definire i texel. Un vettore short è una struttura di dati che contiene da uno a quattro valori dello stesso tipo. I tipi supportati sono **doppie**, **float**, **int**, `norm`, `uint`, e `unorm`. I nomi dei tipi sono riportati nella tabella seguente. Per ogni tipo, è disponibile anche un oggetto corrispondente **typedef** che non dispone di un carattere di sottolineatura nel nome. Tipi che includono i caratteri di sottolineatura presenti il [Concurrency:: Graphics Namespace](../../parallel/amp/reference/concurrency-graphics-namespace.md). Inclusi tra i tipi che non hanno i caratteri di sottolineatura il [Concurrency::graphics::direct3d Namespace](../../parallel/amp/reference/concurrency-graphics-direct3d-namespace.md) in modo che siano chiaramente separati dai tipi fondamentali con nomi simili, ad esempio **__int8** e **__int16**.

||Lunghezza 2|Lunghezza 3|Lunghezza 4|
|-|--------------|--------------|--------------|
|double|double_2<br /><br /> double2|double_3<br /><br /> double3|double_4<br /><br /> double4|
|float|float_2<br /><br /> float2|float_3<br /><br /> float3|float_4<br /><br /> float4|
|int|int_2<br /><br /> int2|int_3<br /><br /> int3|int_4<br /><br /> int4|
|norm|norm_2<br /><br /> norm2|norm_3<br /><br /> norm3|norm_4<br /><br /> norm4|
|uint|uint_2<br /><br /> uint2|uint_3<br /><br /> uint3|uint_4<br /><br /> uint4|
|unorm|unorm_2<br /><br /> unorm2|unorm_3<br /><br /> unorm3|unorm_4<br /><br /> unorm4|

### <a name="operators"></a>Operatori

Se un operatore viene definito tra due short vector, viene anche definito tra uno short vector e uno scalare. Inoltre, uno di questi deve essere true:

- Il tipo del valore scalare deve essere uguale al tipo di elemento dello short vector.

- Il tipo del valore scalare può essere convertito in modo implicito nel tipo di elemento del vettore utilizzando una sola conversione definita dall'utente.

L'operazione viene eseguita per componente tra ogni componente dello short vector e il tipo scalare. Di seguito sono elencati gli operatori validi:

|Tipo di operatore|Tipi validi|
|-------------------|-----------------|
|Operatori binari|Validi su tutti i tipi: +, -, \*, /,<br /><br /> Validi su tipi integer: %, ^, &#124;&, <\<, >><br /><br /> I due vettori devono presentare le stesse dimensioni e il risultato è un vettore di dimensioni equivalenti.|
|Operatori relazionali|Validi per tutti i tipi: == e !=|
|Operatore di assegnazione composta|Validi su tutti i tipi: + =, -=, \*=, / =<br /><br /> Validi su tipi integer: % =, ^ =, &#124;= & =, <\<=, >> =|
|Operatori di incremento e decremento|Validi per tutti i tipi: ++, --<br /><br /> Sono validi sia il prefisso che il suffisso.|
|Operatore NOT bit per bit (~)|Validi per i tipi Integer.|
|Operatore unario|Valido per tutti i tipi tranne `unorm` e `uint`.|

### <a name="swizzling-expressions"></a>Espressioni swizzling

La Libreria Short Vector supporta il costrutto della funzione di accesso `vector_type.identifier` per accedere ai componenti di uno short vector. Il `identifier`, che è noto come un *espressione swizzling*, specifica i componenti del vettore. L'espressione può essere un l-value o un r-value. Singoli caratteri dell'identificatore potrebbero essere: x, y, z e w; o r, g, b e un oggetto. "x" e "r" significa che il componente zero, "y" e indicano il primo componente "g" e così via. Si noti che "x" e "r" non possono essere utilizzati nello stesso identificatore. Di conseguenza, "rgba" e "xyzw" restituiscono lo stesso risultato. Le funzioni di accesso con un solo componente come "x" e "y" sono tipi di valore scalari. Le funzioni di accesso con più componenti sono tipi short vector. Se ad esempio si crea un vettore di `int_4` denominato `fourInts` con i valori 2, 4, 6 e 8, `fourInts.y` restituisce il numero intero 4 e `fourInts.rg` restituisce un oggetto `int_2` con i valori 2 e 4.

## <a name="texture-classes"></a>Classi Texture

Molte GPU dispongono di hardware e cache ottimizzati per recuperare pixel e texel ed eseguire il rendering di immagini e texture. Il [trama\<T, N >](../../parallel/amp/reference/texture-class.md) (classe), che è una classe contenitore per oggetti texel, espone la funzionalità trama di queste GPU. Un texel può essere:

- Un' **int**, `uint`, **float**, **double**, `norm`, o `unorm` scalare.

- Uno short vector con due o quattro componenti. L'unica eccezione è `double_4`, che non è consentito.

L'oggetto `texture` può avere una dimensione pari a 1, 2 o 3. L'oggetto `texture` può essere acquisito solo per riferimento nell'espressione lambda di una chiamata a `parallel_for_each`. La trama viene archiviata sulla GPU come oggetto texture Direct3D. Per altre informazioni sulle trame e sui texel in Direct3D, vedere [Introduzione alle trame in Direct3D 11](https://go.microsoft.com/fwlink/p/?linkid=248502).

Il tipo di texel utilizzato può essere uno dei molti formati di trama utilizzati nella programmazione grafica. Un formato RGBA, ad esempio, potrebbe utilizzare 32 bit, con 8 bit per ciascun elemento scalare R, G, B e A. L'hardware trama di una scheda grafica può accedere ai singoli elementi in base al formato. Se ad esempio si utilizza il formato RGBA, l'hardware trama consente di estrarre ciascun elemento a 8 bit in una forma a 32 bit. In C++ AMP è possibile impostare i bit per elemento scalare del texel per poter accedere automaticamente ai singoli elementi scalari nel codice senza scorrere i bit.

### <a name="instantiating-texture-objects"></a>Creazione di istanze di oggetti texture

È possibile dichiarare un oggetto texture senza inizializzazione. Nell'esempio di codice seguente vengono dichiarati diversi oggetti texture.

```cpp
#include <amp.h>
#include <amp_graphics.h>
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextures() {
    // Create a 16-texel texture of int.
    texture<int, 1> intTexture1(16);
    texture<int, 1> intTexture2(extent<1>(16));

    // Create a 16 x 32 texture of float_2.
    texture<float_2, 2> floatTexture1(16, 32);
    texture<float_2, 2> floatTexture2(extent<2>(16, 32));

    // Create a 2 x 4 x 8 texture of uint_4.
    texture<uint_4, 3> uintTexture1(2, 4, 8);
    texture<uint_4, 3> uintTexture2(extent<3>(2, 4, 8));
}
```

È inoltre possibile utilizzare un costruttore per dichiarare e inizializzare un oggetto `texture`. Nell'esempio di codice seguente viene creata un'istanza di un oggetto `texture` da un vettore di oggetti `float_4`. I bit per elemento scalare sono impostati sul valore predefinito. Non è possibile utilizzare questo costruttore con `norm`, `unorm` o gli short vector di `norm` e `unorm`, poiché non presentano bit predefiniti per elemento scalare.

```cpp
#include <amp.h>
#include <amp_graphics.h>
#include <vector>
using namespace concurrency;
using namespace concurrency::graphics;

void initializeTexture() {
    std::vector<int_4> texels;
    for (int i = 0; i < 768 * 1024; i++) {
        int_4 i4(i, i, i, i);
        texels.push_back(i4);
    }

    texture<int_4, 2> aTexture(768, 1024, texels.begin(), texels.end());
}
```

È anche possibile dichiarare e inizializzare un oggetto `texture` utilizzando un overload del costruttore che accetta un puntatore ai dati di origine, le dimensioni dei dati di origine in byte e i bit per elemento scalare.

```cpp
void createTextureWithBPC() { // Create the source data.
    float source[1024* 2];
    for (int i = 0; i <1024* 2; i++) {
        source[i] = (float)i;
    }
    // Initialize the texture by using the size of source in bytes // and bits per scalar element.
    texture<float_2, 1> floatTexture(1024, source, (unsigned int)sizeof(source), 32U);
}
```

Le trame di questi esempi vengono create nella visualizzazione predefinita dell'acceleratore predefinito. È possibile utilizzare altri overload del costruttore se si desidera specificare un oggetto `accelerator_view`. Non è possibile creare un oggetto texture su un acceleratore della CPU.

Esistono limiti alla grandezza di ogni dimensione dell'oggetto `texture`, come illustrato nella tabella seguente. Se si superano questi limiti, viene generato un errore di runtime.

|Trama|Limitazione delle dimensioni per ogni dimensione|
|-------------|---------------------|
|texture\<T,1>|16384|
|texture\<T,2>|16384|
|texture\<T,3>|2048|

### <a name="reading-from-texture-objects"></a>Lettura da oggetti texture

È possibile leggere da un `texture` oggetto usando [texture:: operator\[\]](reference/texture-class.md#operator_at), [texture:: operator () (operatore](reference/texture-class.md#operator_call), o [texture:: Get(metodo)](reference/texture-class.md#get). I due operatori restituiscono un valore, non un riferimento. Di conseguenza, non è possibile scrivere su un oggetto `texture` utilizzando `texture::operator\[\]`.

```cpp
void readTexture() {
    std::vector<int_2> src;
    for (int i = 0; i <16 *32; i++) {
        int_2 i2(i, i);

        src.push_back(i2);
    }

    std::vector<int_2> dst(16* 32);

    array_view<int_2, 2> arr(16, 32, dst);

    arr.discard_data();

    const texture<int_2, 2> tex9(16, 32, src.begin(), src.end());

    parallel_for_each(tex9.extent, [=, &tex9] (index<2> idx) restrict(amp) { // Use the subscript operator.
        arr[idx].x += tex9[idx].x; // Use the function () operator.
        arr[idx].x += tex9(idx).x; // Use the get method.
        arr[idx].y += tex9.get(idx).y; // Use the function () operator.
        arr[idx].y += tex9(idx[0], idx[1]).y;
    });

    arr.synchronize();
}
```

Nell'esempio di codice seguente viene illustrato come archiviare i canali di trama in uno short vector e accedere ai singoli elementi scalari come proprietà dello short vector.

```cpp
void UseBitsPerScalarElement() { // Create the image data. // Each unsigned int (32-bit) represents four 8-bit scalar elements(r,g,b,a values).
    const int image_height = 16;
    const int image_width = 16;
    std::vector<unsigned int> image(image_height* image_width);

    extent<2> image_extent(image_height, image_width);

    // By using uint_4 and 8 bits per channel, each 8-bit channel in the data source is // stored in one 32-bit component of a uint_4.
    texture<uint_4, 2> image_texture(image_extent, image.data(), image_extent.size()* 4U,  8U);

    // Use can access the RGBA values of the source data by using swizzling expressions of the uint_4.
    parallel_for_each(image_extent,
        [&image_texture](index<2> idx) restrict(amp)
        { // 4 bytes are automatically extracted when reading.
            uint_4 color = image_texture[idx];
            unsigned int r = color.r;
            unsigned int g = color.g;
            unsigned int b = color.b;
            unsigned int a = color.a;
        });
}
```

Nella tabella seguente sono elencati i bit per canale validi per ogni tipo di short vector.

|Tipo di dati texture|Bit validi per elemento scalare|
|-----------------------|-----------------------------------|
|int, int_2, int_4<br /><br /> uint, uint_2, uint_4|8, 16, 32|
|int_3, uint_3|32|
|float, float_2, float_4|16, 32|
|float_3|32|
|double, double_2|64|
|norm, norm_2, norm_4<br /><br /> unorm, unorm_2, unorm, 4|8, 16|

### <a name="writing-to-texture-objects"></a>Scrittura su oggetti texture

Usare la [texture:: set](reference/texture-class.md#set) metodo per scrivere `texture` oggetti. Un oggetto texture può essere di sola lettura o lettura/scrittura. Affinché sia possibile leggere e scrivere su un oggetto texture, devono essere soddisfatte le condizioni seguenti:

- T ha un solo componente scalare. Gli short vector non sono consentiti.

- T non è **doppie**, `norm`, o `unorm`.

- La proprietà `texture::bits_per_scalar_element` è 32.

Se non vengono soddisfatte tutte e tre le condizioni, l'oggetto `texture` è di sola lettura. Le prime due condizioni vengono verificate durante la compilazione. Viene generato un errore di compilazione se è presente codice che tenta di scrivere su un oggetto texture `readonly`. La condizione per `texture::bits_per_scalar_element` viene rilevata in fase di esecuzione e il runtime genera il [unsupported_feature](../../parallel/amp/reference/unsupported-feature-class.md) eccezioni se si prova a scrivere una sola lettura `texture` oggetto.

Nell'esempio di codice seguente vengono scritti valori su un oggetto texture.

```cpp
void writeTexture() {
    texture<int, 1> tex1(16);

    parallel_for_each(tex1.extent, [&tex1] (index<1> idx) restrict(amp) {
        tex1.set(idx, 0);
    });
}
```

### <a name="copying-texture-objects"></a>Copia di oggetti texture

È possibile copiare tra oggetti texture utilizzando la [copia](reference/concurrency-namespace-functions-amp.md#copy) funzione o il [copy_async](reference/concurrency-namespace-functions-amp.md#copy_async) funzionare, come illustrato nell'esempio di codice seguente.

```cpp
void copyHostArrayToTexture() { // Copy from source array to texture object by using the copy function.
    float floatSource[1024* 2];
    for (int i = 0; i <1024* 2; i++) {
        floatSource[i] = (float)i;
    }
    texture<float_2, 1> floatTexture(1024);

    copy(floatSource, (unsigned int)sizeof(floatSource), floatTexture);

    // Copy from source array to texture object by using the copy function.
    char charSource[16* 16];
    for (int i = 0; i <16* 16; i++) {
        charSource[i] = (char)i;
    }
    texture<int, 2> charTexture(16, 16, 8U);

    copy(charSource, (unsigned int)sizeof(charSource), charTexture);
    // Copy from texture object to source array by using the copy function.
    copy(charTexture, charSource, (unsigned int)sizeof(charSource));
}
```

È anche possibile copiare da una trama a un altro usando il [texture:: copy_to](reference/texture-class.md#copy_to) (metodo). Le due trame possono trovarsi su diversi elementi accelerator_view. Quando si esegue una copia su un oggetto `writeonly_texture_view`, i dati vengono copiati sull'oggetto `texture` sottostante. I bit per elemento scalare e l'estensione devono essere uguali sugli oggetti `texture` di destinazione e su quelli di origine. Se questi requisiti non vengono soddisfatti, durante la fase di esecuzione viene generata un'eccezione.

## <a name="texture-view-classes"></a>Classi di visualizzazioni di trama

C++AMP introduce la [classe texture_view](../../parallel/amp/reference/texture-view-class.md) in Visual Studio 2013. Le visualizzazioni di trama supportano le stesse texel gli stessi tipi e il [classe texture](../../parallel/amp/reference/texture-class.md), ma a differenza delle trame, forniscono l'accesso a funzionalità hardware aggiuntive come le mipmap e il campionamento della trama. Le visualizzazioni di trama supportano l'accesso di sola scrittura, di sola lettura e di lettura e scrittura ai dati di trama sottostanti.

- L'accesso in sola lettura viene fornito dalla specializzazione del modello `texture_view<const T, N>` che supporta elementi con 1, 2 o 4 componenti, il campionamento delle trame e l'accesso dinamico a un intervallo di livelli di mipmap che vengono determinati quando viene creata un'istanza della visualizzazione.

- L'accesso in sola scrittura viene fornito dalla classe di modelli non specializzati `texture_view<T, N>` che supporta elementi con 2 o 4 componenti e può accedere a un livello di mipmap che viene determinato quando viene creata un'istanza della visualizzazione. Non supporta il campionamento.

- L'accesso in sola scrittura viene fornito dalla classe di modelli non specializzati `texture_view<T, N>` che, analogamente alle trame, supporta elementi con un solo componente; la visualizzazione può accedere a un livello di mipmap che viene determinato quando viene creata un'istanza della visualizzazione. Non supporta il campionamento.

Le visualizzazioni di trama sono analoghe alle visualizzazioni di matrice, ma non forniscono la funzionalità di spostamento e gestione automatica dei dati che il [classe array_view](../../parallel/amp/reference/array-view-class.md) fornisce tramite il [classe array](../../parallel/amp/reference/array-class.md). Una `texture_view` è accessibile unicamente sulla visualizzazione dell'acceleratore in cui risiedono i dati della trama sottostanti.

### <a name="writeonlytextureview-deprecated"></a>writeonly_texture_view deprecata

Per Visual Studio 2013, C++ AMP introduce un migliore supporto per le funzionalità di trama hardware come il campionamento e le mipmap, che potrebbero non essere supportate dal [classe writeonly_texture_view](../../parallel/amp/reference/writeonly-texture-view-class.md). La classe `texture_view` appena introdotta supporta un superset della funzionalità in `writeonly_texture_view`. Di conseguenza, `writeonly_texture_view` è deprecata.

È consigliabile, almeno per il nuovo codice, utilizzare `texture_view` per accedere alla funzionalità fornita in precedenza da `writeonly_texture_view`. Confrontare i due esempi di codice seguenti che prevedono la scrittura su un oggetto texture con due componenti (int_2). Si noti che, in entrambi i casi, la visualizzazione `wo_tv4` deve essere acquisita per valore dall'espressione lambda. Di seguito è riportato un esempio che utilizza la nuova classe `texture_view`:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex4(16);

    texture_view<int_2, 1> wo_tv4(tex4);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        wo_tv4.set(idx, int_2(1, 1));
    });
}
```

Di seguito è riportata la classe `writeonly_texture_view` deprecata:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex4(16);

    writeonly_texture_view<int_2, 1> wo_tv4(tex4);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        wo_tv4.set(idx, int_2(1, 1));
    });
}
```

Come si può notare, i due esempi di codice sono quasi identici quando si scrive sul livello di mipmap principale. Se nel codice esistente si è utilizzato `writeonly_texture_view` e non si intende migliorare tale codice, non è necessario modificarlo. Se invece si intende migliorarlo, è consigliabile riscriverlo per utilizzare `texture_view` perché i miglioramenti previsti in questa visualizzazione supportano nuove funzionalità di trama hardware. Per ulteriori informazioni sulle nuove funzionalità, continuare a leggere.

Per altre informazioni sulla deprecazione di `writeonly_texture_view`, vedere [Panoramica della progettazione vista trame in C++ AMP](https://blogs.msdn.com/b/nativeconcurrency/archive/2013/07/25/overview-of-the-texture-view-design-in-c-amp.aspx) nella programmazione parallela nel blog del codice nativo.

### <a name="instantiating-texture-view-objects"></a>Creazione di istanze di oggetti texture view

La dichiarazione di una `texture_view` è simile alla dichiarazione di un `array_view` che è associato un **matrice**. Nell'esempio di codice seguente vengono dichiarati molti oggetti `texture` e oggetti `texture_view` a essi associati.

```cpp
#include <amp.h>
#include <amp_graphics.h>
using namespace concurrency;
using namespace concurrency::graphics;

void declareTextureViews()
{
    // Create a 16-texel texture of int, with associated texture_views.
    texture<int, 1> intTexture(16);
    texture_view<const int, 1> intTextureViewRO(intTexture);  // read-only
    texture_view<int, 1> intTextureViewRW(intTexture);        // read-write

    // Create a 16 x 32 texture of float_2, with associated texture_views.
    texture<float_2, 2> floatTexture(16, 32);
    texture_view<const float_2, 2> floatTextureViewRO(floatTexture);  // read-only
    texture_view<float_2, 2> floatTextureViewRO(floatTexture);        // write-only

    // Create a 2 x 4 x 8 texture of uint_4, with associated texture_views.
    texture<uint_4, 3> uintTexture(2, 4, 8);
    texture_view<const uint_4, 3> uintTextureViewRO(uintTexture);  // read-only
    texture_view<uint_4, 3> uintTextureViewWO(uintTexture);        // write-only
}
```

Si noti come una visualizzazione delle trame con tipo di elemento non const e con un solo componente sia di lettura/scrittura, mentre una visualizzazione di trama con tipo di elemento non const e più componenti sia di sola scrittura. Le visualizzazioni di trama di tipi di elementi const sono sempre di sola lettura, ma se il tipo di elemento è non const, il numero di componenti nell'elemento determina se è di lettura e scrittura (1 componente) o di sola scrittura (più componenti).

Il tipo di elemento di un oggetto `texture_view`, il relativo stato const e il numero dei componenti sono fondamentali per determinare se la visualizzazione supporta il campionamento delle trame e la modalità di accesso ai livelli di mipmap:

|Tipo|Componenti|Lettura|Write|Campionamento|Accesso alle mipmap|
|----------|----------------|----------|-----------|--------------|-------------------|
|texture_view\<const T, N >|1, 2, 4|Yes|No (1)|Yes|Sì, indicizzabile. L'intervallo viene determinato al momento della creazione delle istanze.|
|Texture_view\<T, N >|1<br /><br /> 2, 4|Yes<br /><br /> No (2)|Yes<br /><br /> Yes|No (1)<br /><br /> No (1)|Sì, un livello. Il livello viene determinato al momento della creazione delle istanze.<br /><br /> Sì, un livello. Il livello viene determinato al momento della creazione delle istanze.|

Da questa tabella, è possibile vedere che le visualizzazioni di trama in sola lettura supportano completamente le nuove funzionalità a fronte dell'impossibilità di scrivere sulla visualizzazione. Le visualizzazioni di trama che consentono la scrittura sono limitate in quanto possono accedere a un solo livello di mipmap. Le visualizzazioni di trama in lettura e scrittura sono ancora più specializzate di quelle scrivibili, poiché richiedono che il tipo di elemento della visualizzazione di trama abbia un solo componente. Si noti che il campionamento non è supportato per le visualizzazioni di trama scrivibili perché è un'operazione orientata alla lettura.

### <a name="reading-from-texture-view-objects"></a>Lettura da oggetti texture view

La lettura dei dati di trama non campionati attraverso una visualizzazione di trama equivale alla lettura dalla trama stessa, tranne per il fatto che le trame vengono acquisite per riferimento, mentre le visualizzazioni di trama sono acquisite per valore. Nei due esempi di codice seguenti viene illustrato il concetto, prima mediante `texture`:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> text_data(16);

    parallel_for_each(extent<1>(16), [&] (index<1> idx) restrict(amp) {
        tex_data.set(idx, int_2(1, 1));
    });
}
```

Di seguito è riportato lo stesso esempio con la differenza che si utilizza la classe `texture_view`:

```cpp
void write2ComponentTexture() {
    texture<int_2, 1> tex_data(16);

    texture_view<int_2, 1> tex_view(tex_data);

    parallel_for_each(extent<1>(16), [=] (index<1> idx) restrict(amp) {
        tex_view.set(idx, int_2(1, 1));
    });
}
```

Le visualizzazioni di trama i cui elementi sono basati su tipi a virgola mobile, ad esempio float, float_2 o float_4, possono anche essere letti utilizzando il campionamento delle trame per sfruttare il supporto hardware per varie modalità di filtro e indirizzamento. C++ AMP supporta le due modalità di filtro più comuni negli scenario di calcolo, filtro punto (più simile) e filtro lineare (media ponderata) e quattro modalità di indirizzamento, ovvero wrapping, mirroring, clamping e bordo. Per altre informazioni sulle modalità di indirizzamento, vedere [enumerazione address_mode](reference/concurrency-graphics-namespace-enums.md#address_mode).

Oltre alle modalità supportate direttamente da C++ AMP, è possibile accedere ad altre modalità di filtro e modalità di indirizzamento della piattaforma sottostante utilizzando le API di interoperabilità per utilizzare un campionatore di trame creato utilizzando direttamente le API della piattaforma. Ad esempio, Direct3D supporta altre modalità di filtro, come il filtro anisotropico, e consente l'applicazione di una modalità di indirizzamento diversa a ogni dimensione di una trama. È possibile creare un campionatore di trame sulle cui coordinate sono state eseguite operazioni di wrapping verticale, mirroring orizzontale e di campionamento con filtro anisotropico mediante le API di Direct3D e utilizzare il campionatore nel codice C++ AMP tramite l'API di interoperabilità `make_sampler`. Per altre informazioni, vedere [campionamento delle trame in C++ AMP](https://blogs.msdn.com/b/nativeconcurrency/archive/2013/07/18/texture-sampling-in-c-amp.aspx) nella programmazione parallela nel blog del codice nativo.

Le visualizzazioni di trama supportano inoltre la lettura delle mipmap. Le visualizzazioni di trama di sola lettura, ovvero quelle che presentano un tipo di elemento const, offrono la massima flessibilità in quanto è possibile campionare in modo dinamico un intervallo di livelli di mipmap determinato al momento della creazione delle istanze e perché supportano elementi con 1, 2 o 4 componenti. Anche le visualizzazioni di trama di lettura e scrittura che contengono elementi con un solo componente supportano le mipmap, ma solo di un livello determinato al momento della creazione delle istanze. Per altre informazioni, vedere [trame con mipmap](https://blogs.msdn.com/b/nativeconcurrency/archive/2013/08/22/texture-with-mipmaps.aspx) nella programmazione parallela nel blog del codice nativo.

### <a name="writing-to-texture-view-objects"></a>Scrittura su oggetti texture view

Usare la [texture_view:: Get (metodo)](reference/texture-view-class.md#get) scrivere sottostante `texture` attraverso il `texture_view` oggetto. Una visualizzazione di trama può essere di sola lettura, di lettura e scrittura o di sola scrittura. Per essere scrivibile, una visualizzazione di trama deve avere un tipo di elemento non const; per essere leggibile e scrivibile, il relativo tipo di elemento deve avere un solo componente. In caso contrario, la visualizzazione di trama è di sola lettura. È possibile accedere a un solo livello di mipmap di una trama alla volta attraverso una visualizzazione di trama e il livello viene specificato al momento della creazione delle istanze della visualizzazione.

In questo esempio viene illustrato come scrivere sul secondo livello di mipmap più dettagliato di una trama con 4 livelli di mipmap. Il livello di mipmap più dettagliato è il livello 0.

```cpp
// Create a texture that has 4 mipmap levels : 16x16, 8x8, 4x4, 2x2
texture<int, 2> tex(extent<2>(16, 16), 16U, 4);

// Create a writable texture view to the second mipmap level :4x4
texture_view<int, 2> w_view(tex, 1);

parallel_for_each(w_view.extent, [=](index<2> idx) restrict(amp)
{
    w_view.set(idx, 123);
});
```

## <a name="interoperability"></a>Interoperabilità

Il runtime C++ AMP supporta l'interoperabilità tra `texture<T,1>` e il [interfaccia ID3D11Texture1D](https://go.microsoft.com/fwlink/p/?linkId=248503)tra `texture<T,2>` e il [interfaccia ID3D11Texture2D](https://go.microsoft.com/fwlink/p/?linkId=255317)e tra `texture<T,3>`e il [interfaccia ID3D11Texture3D](https://go.microsoft.com/fwlink/p/?linkId=255377). Il [get_texture](reference/concurrency-graphics-direct3d-namespace-functions.md#get_texture) metodo accetta un `texture` oggetto e restituisce un `IUnknown` interfaccia. Il [make_texture](reference/concurrency-graphics-direct3d-namespace-functions.md#make_texture) metodo accetta un `IUnknown` interfaccia e un' `accelerator_view` oggetto e restituisce un `texture` oggetto.

## <a name="see-also"></a>Vedere anche

[Classe double_2](../../parallel/amp/reference/double-2-class.md)<br/>
[Classe double_3](../../parallel/amp/reference/double-3-class.md)<br/>
[Classe double_4](../../parallel/amp/reference/double-4-class.md)<br/>
[Classe float_2](../../parallel/amp/reference/float-2-class.md)<br/>
[Classe float_3](../../parallel/amp/reference/float-3-class.md)<br/>
[Classe float_4](../../parallel/amp/reference/float-4-class.md)<br/>
[Classe int_2](../../parallel/amp/reference/int-2-class.md)<br/>
[Classe int_3](../../parallel/amp/reference/int-3-class.md)<br/>
[Classe int_4](../../parallel/amp/reference/int-4-class.md)<br/>
[Classe norm_2](../../parallel/amp/reference/norm-2-class.md)<br/>
[Classe norm_3](../../parallel/amp/reference/norm-3-class.md)<br/>
[Classe norm_4](../../parallel/amp/reference/norm-4-class.md)<br/>
[Struttura short_vector](../../parallel/amp/reference/short-vector-structure.md)<br/>
[Struttura short_vector_traits](../../parallel/amp/reference/short-vector-traits-structure.md)<br/>
[Classe uint_2](../../parallel/amp/reference/uint-2-class.md)<br/>
[Classe uint_3](../../parallel/amp/reference/uint-3-class.md)<br/>
[Classe uint_4](../../parallel/amp/reference/uint-4-class.md)<br/>
[Classe unorm_2](../../parallel/amp/reference/unorm-2-class.md)<br/>
[Classe unorm_3](../../parallel/amp/reference/unorm-3-class.md)<br/>
[Classe unorm_4](../../parallel/amp/reference/unorm-4-class.md)
