---
title: Utilizzo delle sezioni | Microsoft Docs
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: acb86a86-2b7f-43f1-8fcf-bcc79b21d9a8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df2f449cce01dc2d0903ff802ffb94914b68bceb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386268"
---
# <a name="using-tiles"></a>Utilizzo di sezioni

È possibile usare sezionamento per massimizzare l'accelerazione dell'app. Affiancamento divide i thread in sottoinsiemi rettangolari uguali o *riquadri*. Se si usa una dimensione corretta della sezione e un algoritmo di partizionamento, è possibile ottenere ancora più accelerazione dal codice AMP C++. I componenti di base del sezionamento sono:

- `tile_static` variabili. Il vantaggio principale del sezionamento è il miglioramento delle prestazioni da `tile_static` accesso. Accesso ai dati in `tile_static` memoria può essere notevolmente più veloce rispetto all'accesso ai dati nello spazio globale (`array` o `array_view` oggetti). Un'istanza di un `tile_static` variabile viene creata per ogni sezione e tutti i thread nella sezione hanno accesso alla variabile. In un tipico algoritmo di partizionamento, i dati vengono copiati negli `tile_static` memoria una volta dalla memoria globale e quindi accedere più volte dal `tile_static` memoria.

- [Metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait). Una chiamata a `tile_barrier::wait` sospende l'esecuzione del thread corrente finché tutti thread nella stessa sezione raggiungono la chiamata a `tile_barrier::wait`. Non è possibile garantire l'ordine cui verranno eseguiti i thread, solo che nessun thread nella sezione verrà eseguito dopo la chiamata a `tile_barrier::wait` fino a quando tutti i thread hanno raggiunto la chiamata. Ciò significa che usando la `tile_barrier::wait` metodo, è possibile eseguire attività in base a una sezione-Dopo-sezione anziché thread-dopo-thread. Un tipico algoritmo di partizionamento contiene codice per inizializzare il `tile_static` memoria per l'intera sezione seguito da una chiamata a `tile_barrer::wait`. Il codice che segue `tile_barrier::wait` contiene i calcoli che richiedono l'accesso a tutti i `tile_static` valori.

- Indicizzazione locale e globale. È possibile utilizzare l'indice del thread relativo all'intero `array_view` o `array` oggetto e all'indice relativo riquadro. Utilizzo dell'indice locale può rendere il codice più facile da leggere ed eseguire il debug. In genere, si usa l'indicizzazione locale per accedere `tile_static` le variabili e l'indicizzazione globale per l'accesso `array` e `array_view` variabili.

- [Classe tiled_extent](../../parallel/amp/reference/tiled-extent-class.md) e [classe tiled_index](../../parallel/amp/reference/tiled-index-class.md). Si utilizza un `tiled_extent` dell'oggetto anziché un' `extent` dell'oggetto nel `parallel_for_each` chiamare. Si utilizza un `tiled_index` dell'oggetto anziché un' `index` dell'oggetto nel `parallel_for_each` chiamare.

Per sfruttare i vantaggi del sezionamento, l'algoritmo deve suddividere il dominio di calcolo in riquadri e quindi copiare i dati del riquadro in `tile_static` variabili per un accesso più rapido.

## <a name="example-of-global-tile-and-local-indices"></a>Esempio dell'oggetto globale, di sezione e locali degli indici

Il diagramma seguente rappresenta una 8x9 matrice di dati disposti in 2x3 sezioni.

![8&#45;da&#45;matrice 9 diviso 2&#45;da&#45;3 riquadri](../../parallel/amp/media/usingtilesmatrix.png "usingtilesmatrix")

L'esempio seguente mostra il riquadro globale, e gli indici locali di questa sezione di matrice. Un' `array_view` viene creato usando gli elementi di tipo oggetto `Description`. Il `Description` contiene globale, di sezione e locali indici dell'elemento nella matrice. Il codice nella chiamata a `parallel_for_each` imposta i valori della variabile globale, riquadro e indici locali di ogni elemento. L'output visualizzerà i valori di `Description` strutture.

```cpp
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <amp.h>
using namespace concurrency;

const int ROWS = 8;
const int COLS = 9;

// tileRow and tileColumn specify the tile that each thread is in.
// globalRow and globalColumn specify the location of the thread in the array_view.
// localRow and localColumn specify the location of the thread relative to the tile.
struct Description {
    int value;
    int tileRow;
    int tileColumn;
    int globalRow;
    int globalColumn;
    int localRow;
    int localColumn;
};

// A helper function for formatting the output.
void SetConsoleColor(int color) {
    int colorValue = (color == 0)  4 : 2;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorValue);
}

// A helper function for formatting the output.
void SetConsoleSize(int height, int width) {
    COORD coord;

    coord.X = width;
    coord.Y = height;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    SMALL_RECT* rect = new SMALL_RECT();
    rect->Left = 0;
    rect->Top = 0;
    rect->Right = width;
    rect->Bottom = height;
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, rect);
}

// This method creates an 8x9 matrix of Description structures.
// In the call to parallel_for_each, the structure is updated
// with tile, global, and local indices.
void TilingDescription() {
    // Create 72 (8x9) Description structures.
    std::vector<Description> descs;
    for (int i = 0; i < ROWS * COLS; i++) {
        Description d = {i, 0, 0, 0, 0, 0, 0};
        descs.push_back(d);
    }

    // Create an array_view from the Description structures.
    extent<2> matrix(ROWS, COLS);
    array_view<Description, 2> descriptions(matrix, descs);

    // Update each Description with the tile, global, and local indices.
    parallel_for_each(descriptions.extent.tile< 2, 3>(),
        [=] (tiled_index< 2, 3> t_idx) restrict(amp)
    {
        descriptions[t_idx].globalRow = t_idx.global[0];
        descriptions[t_idx].globalColumn = t_idx.global[1];
        descriptions[t_idx].tileRow = t_idx.tile[0];
        descriptions[t_idx].tileColumn = t_idx.tile[1];
        descriptions[t_idx].localRow = t_idx.local[0];
        descriptions[t_idx].localColumn= t_idx.local[1];
    });

    // Print out the Description structure for each element in the matrix.
    // Tiles are displayed in red and green to distinguish them from each other.
    SetConsoleSize(100, 150);
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLS; column++) {
            SetConsoleColor((descriptions(row, column).tileRow + descriptions(row, column).tileColumn) % 2);
            std::cout << "Value: " << std::setw(2) << descriptions(row, column).value << "      ";
        }
        std::cout << "\n";

        for (int column = 0; column < COLS; column++) {
            SetConsoleColor((descriptions(row, column).tileRow + descriptions(row, column).tileColumn) % 2);
            std::cout << "Tile:   " << "(" << descriptions(row, column).tileRow << "," << descriptions(row, column).tileColumn << ")  ";
        }
        std::cout << "\n";

        for (int column = 0; column < COLS; column++) {
            SetConsoleColor((descriptions(row, column).tileRow + descriptions(row, column).tileColumn) % 2);
            std::cout << "Global: " << "(" << descriptions(row, column).globalRow << "," << descriptions(row, column).globalColumn << ")  ";
        }
        std::cout << "\n";

        for (int column = 0; column < COLS; column++) {
            SetConsoleColor((descriptions(row, column).tileRow + descriptions(row, column).tileColumn) % 2);
            std::cout << "Local:  " << "(" << descriptions(row, column).localRow << "," << descriptions(row, column).localColumn << ")  ";
        }
        std::cout << "\n";
        std::cout << "\n";
    }
}

void main() {
    TilingDescription();
    char wait;
    std::cin >> wait;
}
```

Il lavoro principale dell'esempio è presente nella definizione del `array_view` oggetto e la chiamata a `parallel_for_each`.

1. Il vettore dei `Description` strutture viene copiato in un 8x9 `array_view` oggetto.

2. Il `parallel_for_each` metodo viene chiamato con un `tiled_extent` oggetto come dominio di calcolo. Il `tiled_extent` oggetto viene creato chiamando il `extent::tile()` metodo il `descriptions` variabile. I parametri di tipo della chiamata a `extent::tile()`, `<2,3>`, specificare che vengano create 2x3 sezioni. Di conseguenza, la 8x9 matrice viene sezionata in 12 sezioni, quattro righe e tre colonne.

3. Il `parallel_for_each` viene chiamato con un `tiled_index<2,3>` oggetto (`t_idx`) dell'indice. I parametri di tipo dell'indice (`t_idx`) devono corrispondere ai parametri di tipo di dominio di calcolo (`descriptions.extent.tile< 2, 3>()`).

4. Quando viene eseguito ogni thread, l'indice `t_idx` restituisce informazioni sulla tessera in cui il thread si trova in (`tiled_index::tile` proprietà) e il percorso del thread presente nel compartimento (`tiled_index::local` proprietà).

## <a name="tile-synchronizationtilestatic-and-tilebarrierwait"></a>Sincronizzazione della sezione — tile_static e tile_barrier:: Wait

Nell'esempio precedente viene illustrato il riquadro layout e gli indici, ma non è di per sé molto utile.  Sezionamento risulta utile quando i riquadri sono parte integrante dell'algoritmo e sfruttano `tile_static` variabili. Poiché tutti i thread in una sezione hanno accesso al `tile_static` variabili, le chiamate a `tile_barrier::wait` vengono usati per sincronizzare l'accesso al `tile_static` variabili. Anche se tutti i thread in una sezione hanno accesso al `tile_static` variabili, non vi è alcun ordine garantito dell'esecuzione del thread nella sezione. Nell'esempio seguente viene illustrato come utilizzare `tile_static` le variabili e `tile_barrier::wait` metodo per la quale calcolare il valore medio di ogni sezione. Di seguito sono le chiavi per comprendere l'esempio:

1. I dati vengono memorizzati in una 8x8 matrice.

2. La dimensione della sezione è 2x2. Verrà creata una 4x4 griglia di sezioni e le medie possono essere archiviate in una 4x4 matrice utilizzando un `array` oggetto. Sono disponibili solo un numero limitato di tipi che è possibile acquisire per riferimento in una funzione con limitazioni AMP. Il `array` classe è uno di essi.

3. La dimensione della matrice e dimensioni del campione vengono definiti tramite `#define` (istruzioni), perché i parametri di tipo a `array`, `array_view`, `extent`, e `tiled_index` devono essere valori costanti. È anche possibile usare `const int static` dichiarazioni. Come ulteriore vantaggio, è semplice modificare la dimensione del campione per calcolare i riquadri di oltre 4 x 4 medi.

4. Oggetto `tile_static` 2x2 di valori float viene dichiarata per ogni sezione. Sebbene la dichiarazione sia nel percorso di codice per ogni thread, solo un array viene creato per ogni elemento della matrice.

5. È presente una riga di codice per copiare i valori in ogni riquadro per il `tile_static` matrice. Per ogni thread, dopo che il valore viene copiato nella matrice, esecuzione nel thread si arresta a causa della chiamata a `tile_barrier::wait`.

6. Quando tutti i thread in una sezione hanno raggiunto la barriera, può essere calcolata la Media. Poiché il codice viene eseguito per ogni thread, è presente un `if` calcolare la media in un unico thread solo dell'istruzione. La media viene archiviata nella variabile averages. La barriera è essenzialmente il costrutto che controlla i calcoli per sezione, così come è possibile utilizzare un `for` ciclo.

7. I dati nella `averages` variabile, perché è un `array` oggetto, deve essere copiato all'host. Questo esempio Usa l'operatore di conversione vettoriale.

8. Nell'esempio completo, è possibile modificare SAMPLESIZE a 4 e il codice viene eseguito correttamente senza altre modifiche.

```cpp
#include <iostream>
#include <amp.h>
using namespace concurrency;

#define SAMPLESIZE 2
#define MATRIXSIZE 8
void SamplingExample() {

    // Create data and array_view for the matrix.
    std::vector<float> rawData;
    for (int i = 0; i < MATRIXSIZE * MATRIXSIZE; i++) {
        rawData.push_back((float)i);
    }
    extent<2> dataExtent(MATRIXSIZE, MATRIXSIZE);
    array_view<float, 2> matrix(dataExtent, rawData);

    // Create the array for the averages.
    // There is one element in the output for each tile in the data.
    std::vector<float> outputData;
    int outputSize = MATRIXSIZE / SAMPLESIZE;
    for (int j = 0; j < outputSize * outputSize; j++) {
        outputData.push_back((float)0);
    }
    extent<2> outputExtent(MATRIXSIZE / SAMPLESIZE, MATRIXSIZE / SAMPLESIZE);
    array<float, 2> averages(outputExtent, outputData.begin(), outputData.end());

    // Use tiles that are SAMPLESIZE x SAMPLESIZE.
    // Find the average of the values in each tile.
    // The only reference-type variable you can pass into the parallel_for_each call
    // is a concurrency::array.
    parallel_for_each(matrix.extent.tile<SAMPLESIZE, SAMPLESIZE>(),
        [=, &averages] (tiled_index<SAMPLESIZE, SAMPLESIZE> t_idx) restrict(amp)
    {
        // Copy the values of the tile into a tile-sized array.
        tile_static float tileValues[SAMPLESIZE][SAMPLESIZE];
        tileValues[t_idx.local[0]][t_idx.local[1]] = matrix[t_idx];

        // Wait for the tile-sized array to load before you calculate the average.
        t_idx.barrier.wait();

        // If you remove the if statement, then the calculation executes for every
        // thread in the tile, and makes the same assignment to averages each time.
        if (t_idx.local[0] == 0 && t_idx.local[1] == 0) {
            for (int trow = 0; trow < SAMPLESIZE; trow++) {
                for (int tcol = 0; tcol < SAMPLESIZE; tcol++) {
                    averages(t_idx.tile[0],t_idx.tile[1]) += tileValues[trow][tcol];
                }
            }
            averages(t_idx.tile[0],t_idx.tile[1]) /= (float) (SAMPLESIZE * SAMPLESIZE);
        }
    });

    // Print out the results.
    // You cannot access the values in averages directly. You must copy them
    // back to a CPU variable.
    outputData = averages;
    for (int row = 0; row < outputSize; row++) {
        for (int col = 0; col < outputSize; col++) {
            std::cout << outputData[row*outputSize + col] << " ";
        }
        std::cout << "\n";
    }
    // Output for SAMPLESSIZE = 2 is:
    //  4.5  6.5  8.5 10.5
    // 20.5 22.5 24.5 26.5
    // 36.5 38.5 40.5 42.5
    // 52.5 54.5 56.5 58.5

    // Output for SAMPLESIZE = 4 is:
    // 13.5 17.5
    // 45.5 49.5
}

int main() {
    SamplingExample();
}
```

## <a name="race-conditions"></a>Condizioni di traccia

È possibile pensare di creare un `tile_static` variabile denominata `total` e incrementare tale variabile per ogni thread, simile al seguente:

```cpp
// Do not do this.
tile_static float total;
total += matrix[t_idx];
t_idx.barrier.wait();

averages(t_idx.tile[0],t_idx.tile[1]) /= (float) (SAMPLESIZE* SAMPLESIZE);
```

Il primo problema con questo approccio è che `tile_static` variabili non possono avere inizializzatori. Il secondo problema è che vi sia una race condition nell'assegnazione a `total`, poiché tutti i thread nella sezione hanno accesso alla variabile in nessun ordine particolare. È possibile programmare un algoritmo per consentire solo un thread di accedere al totale ad ogni barriera, come indicato di seguito. Tuttavia, questa soluzione non è estendibile.

```cpp
// Do not do this.
tile_static float total;
if (t_idx.local[0] == 0&& t_idx.local[1] == 0) {
    total = matrix[t_idx];
}
t_idx.barrier.wait();

if (t_idx.local[0] == 0&& t_idx.local[1] == 1) {
    total += matrix[t_idx];
}
t_idx.barrier.wait();

// etc.
```

## <a name="memory-fences"></a>Limiti di memoria

Esistono due tipi di accesso alla memoria che deve essere sincronizzati: accesso alla memoria globale e `tile_static` l'accesso alla memoria. Oggetto `concurrency::array` oggetto alloca solo memoria globale. Oggetto `concurrency::array_view` può fare riferimento a memoria globale, `tile_static` memoria o entrambi, a seconda di come è stato creato.  Esistono due tipi di memoria che devono essere sincronizzati:

- memoria globale

- `tile_static`

Oggetto *limite di memoria* garantisce che gli accessi sono disponibili ad altri thread nella sezione del thread di memoria e memoria siano eseguiti in base all'ordine di programma. A tale scopo, i compilatori e i processori non riordinano le letture e scritture lungo il limite. In AMP C++, viene creato un limite di memoria da una chiamata a uno dei metodi seguenti:

- [Metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait): consente di creare una barriera protettiva entrambi globale e `tile_static` memoria.

- [Metodo tile_barrier:: wait_with_all_memory_fence](reference/tile-barrier-class.md#wait_with_all_memory_fence): consente di creare una barriera protettiva entrambi globale e `tile_static` memoria.

- [Metodo tile_barrier:: wait_with_global_memory_fence](reference/tile-barrier-class.md#wait_with_global_memory_fence): crea un limite attorno solo memoria globale.

- [Metodo tile_barrier:: wait_with_tile_static_memory_fence](reference/tile-barrier-class.md#wait_with_tile_static_memory_fence): crea un limite solo intorno alla `tile_static` memoria.

Chiamando il limite specifico richiesto si possono migliorare le prestazioni dell'app. Il tipo di barriera influisce sul modo in cui il compilatore e l'hardware riordinano le istruzioni. Ad esempio, se si usa un limite di memoria globale, si applica gli accessi alla memoria solo globali e di conseguenza, il compilatore e l'hardware possono riordinare legge e scrive `tile_static` variabili sui due lati del limite.

Nell'esempio seguente, la barriera Sincronizza le scritture `tileValues`, un `tile_static` variabile. In questo esempio `tile_barrier::wait_with_tile_static_memory_fence` viene chiamato al posto di `tile_barrier::wait`.

```cpp
// Using a tile_static memory fence.
parallel_for_each(matrix.extent.tile<SAMPLESIZE, SAMPLESIZE>(),
    [=, &averages] (tiled_index<SAMPLESIZE, SAMPLESIZE> t_idx) restrict(amp)
{
    // Copy the values of the tile into a tile-sized array.
    tile_static float tileValues[SAMPLESIZE][SAMPLESIZE];
    tileValues[t_idx.local[0]][t_idx.local[1]] = matrix[t_idx];

    // Wait for the tile-sized array to load before calculating the average.
    t_idx.barrier.wait_with_tile_static_memory_fence();

    // If you remove the if statement, then the calculation executes
    // for every thread in the tile, and makes the same assignment to
    // averages each time.
    if (t_idx.local[0] == 0&& t_idx.local[1] == 0) {
        for (int trow = 0; trow <SAMPLESIZE; trow++) {
            for (int tcol = 0; tcol <SAMPLESIZE; tcol++) {
                averages(t_idx.tile[0],t_idx.tile[1]) += tileValues[trow][tcol];
            }
        }
    averages(t_idx.tile[0],t_idx.tile[1]) /= (float) (SAMPLESIZE* SAMPLESIZE);
    }
});
```

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Parola chiave tile_static](../../cpp/tile-static-keyword.md)
