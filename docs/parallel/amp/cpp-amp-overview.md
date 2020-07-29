---
title: Cenni preliminari su C++ AMP
ms.date: 11/19/2018
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, requirements
- C++ Accelerated Massive Parallelism, architecture
- C++ AMP
- C++ Accelerated Massive Parallelism, overview
- C++ Accelerated Massive Parallelism
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
ms.openlocfilehash: 249170e1e29d3ca8c488d15be8fa4ccd2b9070c1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222758"
---
# <a name="c-amp-overview"></a>Cenni preliminari su C++ AMP

C++ Accelerated Massive Parallelism (C++ AMP) accelera l'esecuzione del codice C++ sfruttando l'hardware parallelo ai dati, ad esempio una GPU (Graphics Processing Unit) in una scheda grafica discreta. Utilizzando C++ AMP, è possibile codificare algoritmi di dati multidimensionali in modo che l'esecuzione possa essere accelerata utilizzando il parallelismo su hardware eterogeneo. Il modello di programmazione C++ AMP include le matrici multidimensionali, l'indicizzazione, il trasferimento di memoria, l'affiancamento e una libreria di funzioni matematiche. È possibile utilizzare le estensioni del linguaggio C++ AMP per controllare il modo in cui i dati vengono spostati dalla CPU alla GPU e viceversa, in modo da poter migliorare le prestazioni.

## <a name="system-requirements"></a>Requisiti di sistema

- Windows 7 o versione successiva

- Windows Server 2008 R2 o versione successiva

- Hardware a livello di funzionalità di DirectX 11 11,0 o versione successiva

- Per il debug nell'emulatore software, è necessario Windows 8 o Windows Server 2012. Per eseguire il debug nell'hardware, è necessario installare i driver per la scheda grafica. Per altre informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).

- Nota: AMP non è attualmente supportato in ARM64.

## <a name="introduction"></a>Introduzione

Nei due esempi seguenti vengono illustrati i componenti principali di C++ AMP. Si supponga di voler aggiungere gli elementi corrispondenti delle matrici 2 1-dimensionali. Ad esempio, potrebbe essere necessario aggiungere `{1, 2, 3, 4, 5}` e `{6, 7, 8, 9, 10}` per ottenere `{7, 9, 11, 13, 15}` . Senza usare C++ AMP, è possibile scrivere il codice seguente per aggiungere i numeri e visualizzare i risultati.

```cpp
#include <iostream>

void StandardMethod() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    for (int idx = 0; idx < 5; idx++)
    {
        sumCPP[idx] = aCPP[idx] + bCPP[idx];
    }

    for (int idx = 0; idx < 5; idx++)
    {
        std::cout << sumCPP[idx] << "\n";
    }
}
```

Di seguito sono riportate le parti importanti del codice:

- Data: i dati sono costituiti da tre matrici. Tutti hanno lo stesso rango (uno) e la stessa lunghezza (cinque).

- Iterazione: il primo **`for`** ciclo fornisce un meccanismo per scorrere gli elementi nelle matrici. Il codice che si desidera eseguire per calcolare le somme è contenuto nel primo **`for`** blocco.

- Index: la `idx` variabile accede ai singoli elementi delle matrici.

Utilizzando C++ AMP, è possibile scrivere invece il codice seguente.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

const int size = 5;

void CppAmpMethod() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[size];

    // Create C++ AMP objects.
    array_view<const int, 1> a(size, aCPP);
    array_view<const int, 1> b(size, bCPP);
    array_view<int, 1> sum(size, sumCPP);
    sum.discard_data();

    parallel_for_each(
        // Define the compute domain, which is the set of threads that are created.
        sum.extent,
        // Define the code to run on each thread on the accelerator.
        [=](index<1> idx) restrict(amp) {
            sum[idx] = a[idx] + b[idx];
        }
    );

    // Print the results. The expected output is "7, 9, 11, 13, 15".
    for (int i = 0; i < size; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

Sono presenti gli stessi elementi di base, ma vengono usati C++ AMP costrutti:

- Dati: è possibile usare matrici C++ per costruire tre oggetti C++ AMP [array_view](../../parallel/amp/reference/array-view-class.md) . Per costruire un oggetto vengono forniti quattro valori `array_view` , ovvero i valori dei dati, il rango, il tipo di elemento e la lunghezza dell' `array_view` oggetto in ogni dimensione. Il rango e il tipo vengono passati come parametri di tipo. I dati e la lunghezza vengono passati come parametri del costruttore. In questo esempio la matrice C++ passata al costruttore è unidimensionale. Il rango e la lunghezza vengono utilizzati per costruire la forma rettangolare dei dati nell' `array_view` oggetto e i valori dei dati vengono utilizzati per riempire la matrice. La libreria di runtime include anche la [classe Array](../../parallel/amp/reference/array-class.md), che ha un'interfaccia simile alla `array_view` classe e viene discussa più avanti in questo articolo.

- Iterazione: la [funzione parallel_for_each (C++ amp)](reference/concurrency-namespace-functions-amp.md#parallel_for_each) fornisce un meccanismo per scorrere gli elementi dati o il *dominio di calcolo*. In questo esempio, il dominio di calcolo è specificato da `sum.extent` . Il codice che si vuole eseguire è contenuto in un'espressione lambda o in una *funzione del kernel*. `restrict(amp)`Indica che viene utilizzato solo il subset del linguaggio C++ che C++ amp può accelerare.

- Index: la variabile di [classe index](../../parallel/amp/reference/index-class.md) , `idx` , è dichiarata con un rango di uno per corrispondere al rango dell' `array_view` oggetto. Utilizzando l'indice, è possibile accedere ai singoli elementi degli `array_view` oggetti.

## <a name="shaping-and-indexing-data-index-and-extent"></a>Data shaping e indicizzazione di dati: Indice ed extent

È necessario definire i valori dei dati e dichiarare la forma dei dati prima di poter eseguire il codice kernel. Tutti i dati sono definiti come matrici (rettangolari) ed è possibile definire la matrice per avere qualsiasi rango (numero di dimensioni). I dati possono essere di qualsiasi dimensione in qualsiasi dimensione.

### <a name="index-class"></a>Classe index

La [classe index](../../parallel/amp/reference/index-class.md) specifica una posizione nell' `array` oggetto o `array_view` incapsulando l'offset dall'origine in ogni dimensione in un unico oggetto. Quando si accede a una posizione nella matrice, si passa un `index` oggetto all'operatore di indicizzazione, `[]` , anziché un elenco di indici Integer. È possibile accedere agli elementi di ogni dimensione usando l' [operatore array:: operator ()](reference/array-class.md#operator_call) o l'operatore [array_view:: operator ()](reference/array-view-class.md#operator_call).

Nell'esempio seguente viene creato un indice unidimensionale che specifica il terzo elemento in un oggetto unidimensionale `array_view` . L'indice viene utilizzato per stampare il terzo elemento nell' `array_view` oggetto. L'output è 3.

```cpp
int aCPP[] = {1, 2, 3, 4, 5};
array_view<int, 1> a(5, aCPP);

index<1> idx(2);

std::cout << a[idx] << "\n";
// Output: 3
```

Nell'esempio seguente viene creato un indice bidimensionale che specifica l'elemento in cui la riga = 1 e la colonna = 2 in un oggetto bidimensionale `array_view` . Il primo parametro nel `index` costruttore è il componente riga e il secondo parametro è il componente della colonna. L'output è 6.

```cpp
int aCPP[] = {1, 2, 3, 4, 5, 6};
array_view<int, 2> a(2, 3, aCPP);

index<2> idx(1, 2);

std::cout <<a[idx] << "\n";
// Output: 6
```

Nell'esempio seguente viene creato un indice tridimensionale che specifica l'elemento in cui Depth = 0, la riga = 1 e la colonna = 3 in un oggetto tridimensionale `array_view` . Si noti che il primo parametro è il componente Depth, il secondo parametro è il componente Row e il terzo parametro è il componente Column. L'output è 8.

```cpp
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

array_view<int, 3> a(2, 3, 4, aCPP);

// Specifies the element at 3, 1, 0.
index<3> idx(0, 1, 3);

std::cout << a[idx] << "\n";
// Output: 8
```

### <a name="extent-class"></a>Classe extent

La [classe extent](../../parallel/amp/reference/extent-class.md) specifica la lunghezza dei dati in ogni dimensione dell' `array` `array_view` oggetto o. È possibile creare un extent e usarlo per creare un `array` `array_view` oggetto o. È anche possibile recuperare l'ambito di un `array` oggetto o esistente `array_view` . Nell'esempio seguente viene stampata la lunghezza dell'extent in ogni dimensione di un `array_view` oggetto.

```cpp
int aCPP[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
// There are 3 rows and 4 columns, and the depth is two.
array_view<int, 3> a(2, 3, 4, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";
std::cout << "The number of rows is " << a.extent[1] << "\n";
std::cout << "The depth is " << a.extent[0] << "\n";
std::cout << "Length in most significant dimension is " << a.extent[0] << "\n";
```

Nell'esempio seguente viene creato un `array_view` oggetto con le stesse dimensioni dell'oggetto nell'esempio precedente, ma in questo esempio viene utilizzato un `extent` oggetto anziché utilizzare parametri espliciti nel `array_view` costruttore.

```cpp
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
extent<3> e(2, 3, 4);

array_view<int, 3> a(e, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";
std::cout << "The number of rows is " << a.extent[1] << "\n";
std::cout << "The depth is " << a.extent[0] << "\n";
```

## <a name="moving-data-to-the-accelerator-array-and-array_view"></a>Trasferimento dei dati nel tasto di scelta rapida: Array e array_view

Due contenitori di dati usati per spostare i dati nell'acceleratore sono definiti nella libreria di Runtime. Si tratta della [classe Array](../../parallel/amp/reference/array-class.md) e della [classe array_view](../../parallel/amp/reference/array-view-class.md). La `array` classe è una classe contenitore che crea una copia completa dei dati quando viene costruito l'oggetto. La `array_view` classe è una classe wrapper che copia i dati quando la funzione kernel accede ai dati. Quando i dati sono necessari nel dispositivo di origine, i dati vengono copiati di nuovo.

### <a name="array-class"></a>Classe array

Quando `array` viene costruito un oggetto, viene creata una copia completa dei dati sul tasto di scelta rapida se si utilizza un costruttore che include un puntatore al set di dati. La funzione kernel modifica la copia sul tasto di scelta rapida. Al termine dell'esecuzione della funzione kernel, è necessario copiare nuovamente i dati nella struttura dei dati di origine. Nell'esempio seguente ogni elemento di un vettore viene moltiplicato per 10. Al termine della funzione kernel, `vector conversion operator` viene usato per copiare nuovamente i dati nell'oggetto Vector.

```cpp
std::vector<int> data(5);

for (int count = 0; count <5; count++)
{
    data[count] = count;
}

array<int, 1> a(5, data.begin(), data.end());

parallel_for_each(
    a.extent,
    [=, &a](index<1> idx) restrict(amp) {
        a[idx] = a[idx]* 10;
    });

data = a;
for (int i = 0; i < 5; i++)
{
    std::cout << data[i] << "\n";
}
```

### <a name="array_view-class"></a>Classe array_view

`array_view`Ha quasi gli stessi membri della `array` classe, ma il comportamento sottostante non è lo stesso. I dati passati al `array_view` costruttore non vengono replicati sulla GPU così come sono con un `array` costruttore. Al contrario, i dati vengono copiati nell'acceleratore quando la funzione del kernel viene eseguita. Pertanto, se si creano due `array_view` oggetti che utilizzano gli stessi dati, entrambi `array_view` gli oggetti fanno riferimento allo stesso spazio di memoria. Quando si esegue questa operazione, è necessario sincronizzare l'accesso multithread. Il vantaggio principale dell'utilizzo della `array_view` classe è che i dati vengono spostati solo se necessario.

### <a name="comparison-of-array-and-array_view"></a>Confronto tra array e array_view

Nella tabella seguente sono riepilogate le analogie e le differenze tra le `array` `array_view` classi e.

|Descrizione|array (classe)|array_view (classe)|
|-----------------|-----------------|-----------------------|
|Quando il rango è determinato|In fase di compilazione.|In fase di compilazione.|
|Quando l'extent è determinato|In fase di esecuzione.|In fase di esecuzione.|
|Con forme|Rettangolare.|Rettangolare.|
|Archiviazione dei dati|È un contenitore di dati.|È un wrapper di dati.|
|Copia|Esplicita e copia completa alla definizione.|Copia implicita quando viene eseguito l'accesso tramite la funzione kernel.|
|Recupero dati|Copiando di nuovo i dati della matrice in un oggetto nel thread della CPU.|Tramite l'accesso diretto all' `array_view` oggetto o chiamando il [Metodo array_view:: Synchronize](reference/array-view-class.md#synchronize) per continuare ad accedere ai dati nel contenitore originale.|

### <a name="shared-memory-with-array-and-array_view"></a>Memoria condivisa con matrice e array_view

La memoria condivisa è la memoria a cui è possibile accedere sia dalla CPU che dal tasto di scelta rapida. L'utilizzo della memoria condivisa Elimina o riduce significativamente il sovraccarico della copia dei dati tra la CPU e l'acceleratore. Sebbene la memoria sia condivisa, non è possibile accedervi contemporaneamente sia dalla CPU che dal tasto di scelta rapida. questa operazione causa un comportamento non definito.

`array`gli oggetti possono essere utilizzati per specificare un controllo con granularità fine sull'utilizzo della memoria condivisa se l'acceleratore associato lo supporta. Se un tasto di scelta rapida supporta la memoria condivisa è determinato dalla proprietà [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) dell'acceleratore, che restituisce **`true`** quando è supportata la memoria condivisa. Se la memoria condivisa è supportata, l' [enumerazione access_type](reference/concurrency-namespace-enums-amp.md#access_type) predefinita per le allocazioni di memoria sul tasto di scelta rapida è determinata dalla `default_cpu_access_type` Proprietà. Per impostazione predefinita `array` , `array_view` gli oggetti e accettano lo stesso `access_type` nome del database primario associato `accelerator` .

Impostando la proprietà del [membro dati array:: cpu_access_type](reference/array-class.md#cpu_access_type) di un oggetto in `array` modo esplicito, è possibile esercitare un controllo accurato sulla modalità di utilizzo della memoria condivisa, in modo che sia possibile ottimizzare l'applicazione per le caratteristiche di prestazioni dell'hardware, in base ai modelli di accesso alla memoria dei kernel di calcolo. Un oggetto `array_view` riflette lo stesso oggetto a `cpu_access_type` cui è `array` associato; in alternativa, se la array_view viene costruita senza un'origine dati, `access_type` riflette l'ambiente che prima ne determina l'allocazione di spazio di archiviazione. Ovvero, se l'accesso viene eseguito per la prima volta dall'host (CPU), si comporta come se fosse stato creato su un'origine dati della CPU e condivide il `access_type` di `accelerator_view` associato da Capture. Tuttavia, se l'accesso è stato eseguito per la prima volta da un oggetto `accelerator_view` , si comporta come se fosse stato creato `array` su un oggetto creato in `accelerator_view` e condivide l'oggetto di `array` `access_type` .

Nell'esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta la memoria condivisa, quindi vengono create più matrici con diverse configurazioni di cpu_access_type.

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
    acc.default_cpu_access_type = access_type_read_write

    // Create an accelerator_view from the default accelerator. The
    // accelerator_view inherits its default_cpu_access_type from acc.
    accelerator_view acc_v = acc.default_view;

    // Create an extent object to size the arrays.
    extent<1> ex(10);

    // Input array that can be written on the CPU.
    array<int, 1> arr_w(ex, acc_v, access_type_write);

    // Output array that can be read on the CPU.
    array<int, 1> arr_r(ex, acc_v, access_type_read);

    // Read-write array that can be both written to and read from on the CPU.
    array<int, 1> arr_rw(ex, acc_v, access_type_read_write);
}
```

## <a name="executing-code-over-data-parallel_for_each"></a>Esecuzione del codice sui dati: parallel_for_each

La funzione [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) definisce il codice che si vuole eseguire sull'acceleratore rispetto ai dati nell' `array` `array_view` oggetto o. Si consideri il codice seguente dell'introduzione di questo argomento.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

void AddArrays() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view<int, 1> a(5, aCPP);
    array_view<int, 1> b(5, bCPP);
    array_view<int, 1> sum(5, sumCPP);

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
            sum[idx] = a[idx] + b[idx];
        }
    );

    for (int i = 0; i < 5; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

Il `parallel_for_each` metodo accetta due argomenti, un dominio di calcolo e un'espressione lambda.

Il *dominio di calcolo* è un `extent` oggetto o un `tiled_extent` oggetto che definisce il set di thread da creare per l'esecuzione parallela. Viene generato un thread per ogni elemento nel dominio di calcolo. In questo caso, l' `extent` oggetto è unidimensionale e ha cinque elementi. Pertanto, vengono avviati cinque thread.

L' *espressione lambda* definisce il codice da eseguire in ogni thread. La clausola Capture, `[=]` , specifica che il corpo dell'espressione lambda accede a tutte le variabili acquisite in base al valore, che in questo caso sono `a` , `b` e `sum` . In questo esempio, l'elenco di parametri crea una variabile unidimensionale `index` denominata `idx` . Il valore di `idx[0]` è 0 nel primo thread e viene incrementato di uno in ogni thread successivo. `restrict(amp)`Indica che viene utilizzato solo il subset del linguaggio C++ che C++ amp può accelerare.  Le limitazioni per le funzioni che hanno il modificatore restrict sono descritte in [Restrict (C++ amp)](../../cpp/restrict-cpp-amp.md). Per ulteriori informazioni, vedere [sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md).

L'espressione lambda può includere il codice da eseguire oppure può chiamare una funzione del kernel separata. La funzione kernel deve includere il `restrict(amp)` modificatore. L'esempio seguente è equivalente all'esempio precedente, ma chiama una funzione del kernel separata.

```cpp
#include <amp.h>
#include <iostream>
using namespace concurrency;

void AddElements(
    index<1> idx,
    array_view<int, 1> sum,
    array_view<int, 1> a,
    array_view<int, 1> b) restrict(amp) {
    sum[idx] = a[idx] + b[idx];
}

void AddArraysWithFunction() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5] = {0, 0, 0, 0, 0};

    array_view<int, 1> a(5, aCPP);
    array_view<int, 1> b(5, bCPP);
    array_view<int, 1> sum(5, sumCPP);

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp) {
            AddElements(idx, sum, a, b);
        }
    );

    for (int i = 0; i < 5; i++) {
        std::cout << sum[i] << "\n";
    }
}
```

## <a name="accelerating-code-tiles-and-barriers"></a>Accelerazione del codice: riquadri e barriere

È possibile ottenere un'accelerazione aggiuntiva usando l'affiancamento. L'affiancamento divide i thread in subset o *riquadri*rettangolari uguali. È possibile determinare le dimensioni appropriate del riquadro in base al set di dati e all'algoritmo di codifica. Per ogni thread, è possibile accedere al percorso *globale* di un elemento dati relativo all'intero `array` o `array_view` e accedere al percorso *locale* rispetto al riquadro. L'uso del valore di indice locale semplifica il codice perché non è necessario scrivere il codice per tradurre i valori di indice da globale a locale. Per usare l'affiancamento, chiamare il [Metodo extent:: Tile](reference/extent-class.md#tile) sul dominio di calcolo nel `parallel_for_each` metodo e usare un oggetto [tiled_index](../../parallel/amp/reference/tiled-index-class.md) nell'espressione lambda.

Nelle applicazioni tipiche gli elementi in una sezione sono correlati in qualche modo e il codice deve accedere e tenere traccia dei valori nel riquadro. Per eseguire questa operazione, usare la parola chiave [tile_static](../../cpp/tile-static-keyword.md) keyword e il [Metodo tile_barrier:: wait](reference/tile-barrier-class.md#wait) . Una variabile con la parola chiave **tile_static** dispone di un ambito in un intero riquadro e viene creata un'istanza della variabile per ogni sezione. È necessario gestire la sincronizzazione dell'accesso dei thread di sezione alla variabile. Il [metodo tile_barrier:: wait](reference/tile-barrier-class.md#wait) arresta l'esecuzione del thread corrente fino a quando tutti i thread nella sezione non hanno raggiunto la chiamata a `tile_barrier::wait` . È quindi possibile accumulare i valori nel riquadro usando variabili **tile_static** . Sarà quindi possibile completare tutti i calcoli che richiedono l'accesso a tutti i valori.

Il diagramma seguente rappresenta una matrice bidimensionale di dati di campionamento disposti in riquadri.

![Valori di indice in un'estensione affiancata](../../parallel/amp/media/camptiledgridexample.png "Valori di indice in un'estensione affiancata")

Nell'esempio di codice seguente vengono usati i dati di campionamento del diagramma precedente. Il codice sostituisce ogni valore nel riquadro in base alla media dei valori nella sezione.

```cpp
// Sample data:
int sampledata[] = {
    2, 2, 9, 7, 1, 4,
    4, 4, 8, 8, 3, 4,
    1, 5, 1, 2, 5, 2,
    6, 8, 3, 2, 7, 2};

// The tiles:
// 2 2    9 7    1 4
// 4 4    8 8    3 4
//
// 1 5    1 2    5 2
// 6 8    3 2    7 2

// Averages:
int averagedata[] = {
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
};

array_view<int, 2> sample(4, 6, sampledata);

array_view<int, 2> average(4, 6, averagedata);

parallel_for_each(
    // Create threads for sample.extent and divide the extent into 2 x 2 tiles.
    sample.extent.tile<2,2>(),
        [=](tiled_index<2,2> idx) restrict(amp) {
        // Create a 2 x 2 array to hold the values in this tile.
        tile_static int nums[2][2];

        // Copy the values for the tile into the 2 x 2 array.
        nums[idx.local[1]][idx.local[0]] = sample[idx.global];

        // When all the threads have executed and the 2 x 2 array is complete, find the average.
        idx.barrier.wait();
        int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];

        // Copy the average into the array_view.
        average[idx.global] = sum / 4;
    });

for (int i = 0; i <4; i++) {
    for (int j = 0; j <6; j++) {
        std::cout << average(i,j) << " ";
    }
    std::cout << "\n";
}

// Output:
// 3 3 8 8 3 3
// 3 3 8 8 3 3
// 5 5 2 2 4 4
// 5 5 2 2 4 4
```

## <a name="math-libraries"></a>Librerie matematiche

C++ AMP include due librerie matematiche. La libreria a precisione doppia nello [spazio dei nomi Concurrency::p recise_math](../../parallel/amp/reference/concurrency-precise-math-namespace.md) fornisce supporto per le funzioni a precisione doppia. Fornisce inoltre il supporto per le funzioni a precisione singola, anche se il supporto a precisione doppia nell'hardware è ancora necessario. È conforme alla [specifica C99 (ISO/IEC 9899)](https://go.microsoft.com/fwlink/p/?linkid=225887). Il tasto di scelta rapida deve supportare la precisione doppia completa. È possibile determinare se esegue questa operazione controllando il valore del [membro dati Accelerator:: supports_double_precision](reference/accelerator-class.md#supports_double_precision). La libreria Math veloce, nello [spazio dei nomi Concurrency:: fast_math](../../parallel/amp/reference/concurrency-fast-math-namespace.md), contiene un altro set di funzioni matematiche. Queste funzioni, che supportano solo **`float`** operandi, vengono eseguite più rapidamente, ma non sono esatte come quelle nella libreria matematica a precisione doppia. Le funzioni sono contenute nel \<amp_math.h> file di intestazione e tutte sono dichiarate con `restrict(amp)` . Le funzioni nel \<cmath> file di intestazione vengono importate in entrambi gli `fast_math` `precise_math` spazi dei nomi e. La **`restrict`** parola chiave viene usata per distinguere la \<cmath> versione e la C++ amp versione. Il codice seguente calcola il logaritmo in base 10, usando il metodo rapido, di ogni valore presente nel dominio di calcolo.

```cpp
#include <amp.h>
#include <amp_math.h>
#include <iostream>
using namespace concurrency;

void MathExample() {

    double numbers[] = { 1.0, 10.0, 60.0, 100.0, 600.0, 1000.0 };
    array_view<double, 1> logs(6, numbers);

    parallel_for_each(
        logs.extent,
        [=] (index<1> idx) restrict(amp) {
            logs[idx] = concurrency::fast_math::log10(numbers[idx]);
        }
    );

    for (int i = 0; i < 6; i++) {
        std::cout << logs[i] << "\n";
    }
}
```

## <a name="graphics-library"></a>Libreria grafica

C++ AMP include una libreria di grafica progettata per la programmazione grafica accelerata. Questa libreria viene utilizzata solo nei dispositivi che supportano la funzionalità grafica nativa. I metodi si trovano nello [spazio dei nomi Concurrency:: graphics](../../parallel/amp/reference/concurrency-graphics-namespace.md) e sono contenuti nel \<amp_graphics.h> file di intestazione. I componenti chiave della libreria grafica sono:

- [classe trama](../../parallel/amp/reference/texture-class.md): è possibile usare la classe texture per creare trame dalla memoria o da un file. Le trame sono simili alle matrici perché contengono dati e sono simili ai contenitori nella libreria standard C++ rispetto all'assegnazione e alla costruzione della copia. Per altre informazioni, vedere [C++ Standard Library Containers](../../standard-library/stl-containers.md) (Contenitori della libreria standard C++). I parametri del modello per la `texture` classe sono il tipo di elemento e il rango. Il rango può essere 1, 2 o 3. Il tipo di elemento può essere uno dei tipi di vettore short descritti più avanti in questo articolo.

- [Writeonly_texture_view class](../../parallel/amp/reference/writeonly-texture-view-class.md): fornisce l'accesso in sola scrittura a qualsiasi trama.

- Short vector Library: definisce un set di tipi di vettori short di lunghezza 2, 3 e 4 basati su **`int`** , `uint` , **`float`** , **`double`** , [Norm](../../parallel/amp/reference/norm-class.md)o [unorm](../../parallel/amp/reference/unorm-class.md).

## <a name="universal-windows-platform-uwp-apps"></a>App UWP (Universal Windows Platform)

Analogamente ad altre librerie di C++, è possibile usare C++ AMP nelle app UWP. Questi articoli descrivono come includere C++ AMP codice nelle app create usando C++, C#, Visual Basic o JavaScript:

- [Uso di C++ AMP nelle app UWP](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)

- [Procedura dettagliata: creazione di un componente Windows Runtime di base in C++ e chiamata da JavaScript](https://go.microsoft.com/fwlink/p/?linkid=249077)

- [Utilità di ottimizzazione dei viaggi di Bing mappe, un'app di Windows Store in JavaScript e C++](https://go.microsoft.com/fwlink/p/?linkid=249078)

- [Come usare C++ AMP da C# usando il Windows Runtime](https://devblogs.microsoft.com/pfxteam/how-to-use-c-amp-from-c-using-winrt/)

- [Come usare C++ AMP da C #](https://devblogs.microsoft.com/pfxteam/how-to-use-c-amp-from-c/)

- [Chiamata di funzioni native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md)

## <a name="c-amp-and-concurrency-visualizer"></a>C++ AMP e Visualizzatore di concorrenza

Il Visualizzatore di concorrenza include il supporto per l'analisi delle prestazioni del codice C++ AMP. Questi articoli descrivono le funzionalità seguenti:

- [Grafico dell'attività GPU](/visualstudio/profiling/gpu-activity-graph)

- [Attività GPU (paging)](/visualstudio/profiling/gpu-activity-paging)

- [Attività GPU (questo processo)](/visualstudio/profiling/gpu-activity-this-process)

- [Attività GPU (altri processi)](/visualstudio/profiling/gpu-activity-other-processes)

- [Canali (visualizzazione Thread)](/visualstudio/profiling/channels-threads-view)

- [Analisi del codice di C++ AMP con il Visualizzatore di concorrenza](/archive/blogs/nativeconcurrency/analyzing-c-amp-code-with-the-concurrency-visualizer)

## <a name="performance-recommendations"></a>Raccomandazioni per le prestazioni

Il modulo e la divisione di interi senza segno offrono prestazioni significativamente migliori rispetto al modulo e alla divisione di interi con segno. Quando possibile, è consigliabile utilizzare interi senza segno.

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)<br/>
[Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)<br/>
[Blog sulla programmazione parallela nel codice nativo](https://go.microsoft.com/fwlink/p/?linkid=238472)
