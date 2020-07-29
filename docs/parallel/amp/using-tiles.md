---
title: Utilizzo di sezioni
ms.date: 11/19/2018
ms.assetid: acb86a86-2b7f-43f1-8fcf-bcc79b21d9a8
ms.openlocfilehash: edef9154b0c4da6f53c8ac40ee84e55e9b38a9b7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228466"
---
# <a name="using-tiles"></a>Utilizzo di sezioni

È possibile usare l'affiancamento per ottimizzare l'accelerazione dell'app. L'affiancamento divide i thread in subset o *riquadri*rettangolari uguali. Se si usano le dimensioni del riquadro appropriate e l'algoritmo affiancato, è possibile ottenere ancora più accelerazione dal codice C++ AMP. I componenti di base di affiancamento sono:

- `tile_static`variabili. Il vantaggio principale dell'affiancamento è il miglioramento delle prestazioni dall' `tile_static` accesso. L'accesso ai dati in `tile_static` memoria può essere notevolmente più veloce rispetto all'accesso ai dati nello spazio globale ( `array` o `array_view` oggetti). Viene creata un'istanza di una `tile_static` variabile per ogni sezione e tutti i thread del riquadro hanno accesso alla variabile. In un tipico algoritmo affiancato, i dati vengono copiati in `tile_static` memoria una sola volta dalla memoria globale e quindi a cui si accede più spesso dalla `tile_static` memoria.

- [metodo tile_barrier:: wait](reference/tile-barrier-class.md#wait). Una chiamata a `tile_barrier::wait` sospende l'esecuzione del thread corrente fino a quando tutti i thread nello stesso riquadro raggiungono la chiamata a `tile_barrier::wait` . Non è possibile garantire l'ordine in cui vengono eseguiti i thread, ma solo che nessun thread nel riquadro verrà eseguito oltre la chiamata a `tile_barrier::wait` fino a quando tutti i thread non avranno raggiunto la chiamata. Ciò significa che tramite il `tile_barrier::wait` metodo, è possibile eseguire le attività in un riquadro per riquadro anziché in base a thread. Un algoritmo di affiancamento tipico contiene codice per inizializzare la `tile_static` memoria per l'intero riquadro seguito da una chiamata a `tile_barrier::wait` . Il codice che segue `tile_barrier::wait` contiene i calcoli che richiedono l'accesso a tutti i `tile_static` valori.

- Indicizzazione locale e globale. È possibile accedere all'indice del thread in relazione all'intero `array_view` `array` oggetto o e all'indice relativo alla sezione. Utilizzando l'indice locale è possibile semplificare la lettura e il debug del codice. In genere, si usa l'indicizzazione locale per accedere alle `tile_static` variabili e l'indicizzazione globale per accedere alle `array` `array_view` variabili e.

- classe [tiled_extent](../../parallel/amp/reference/tiled-extent-class.md) e [classe tiled_index](../../parallel/amp/reference/tiled-index-class.md). Usare un `tiled_extent` oggetto anziché un `extent` oggetto nella `parallel_for_each` chiamata. Usare un `tiled_index` oggetto anziché un `index` oggetto nella `parallel_for_each` chiamata.

Per sfruttare i vantaggi dell'affiancamento, l'algoritmo deve partizionare il dominio di calcolo in riquadri e quindi copiare i dati del riquadro in `tile_static` variabili per un accesso più rapido.

## <a name="example-of-global-tile-and-local-indices"></a>Esempio di indici globali, di sezione e locali

Il diagramma seguente rappresenta una matrice 8x9 di dati disposti nei riquadri 2x3.

![8&#45;di&#45;9 matrice divisa in 2&#45;da&#45;3 riquadri](../../parallel/amp/media/usingtilesmatrix.png "8&#45;di&#45;9 matrice divisa in 2&#45;da&#45;3 riquadri")

Nell'esempio seguente vengono visualizzati gli indici globali, di sezione e locali di questa matrice affiancata. Un `array_view` oggetto viene creato usando gli elementi di tipo `Description` . L'oggetto `Description` include gli indici globali, di sezione e locali dell'elemento nella matrice. Il codice nella chiamata a `parallel_for_each` imposta i valori degli indici globali, di sezione e locali di ogni elemento. Nell'output vengono visualizzati i valori delle `Description` strutture.

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

int main() {
    TilingDescription();
    char wait;
    std::cin >> wait;
}
```

Il lavoro principale dell'esempio è la definizione dell' `array_view` oggetto e la chiamata a `parallel_for_each` .

1. Il vettore di `Description` strutture viene copiato in un `array_view` oggetto 8x9.

2. Il `parallel_for_each` metodo viene chiamato con un `tiled_extent` oggetto come dominio di calcolo. L' `tiled_extent` oggetto viene creato chiamando il `extent::tile()` metodo della `descriptions` variabile. I parametri di tipo della chiamata a `extent::tile()` , `<2,3>` , specificano che vengono creati i riquadri 2x3. Quindi, la matrice 8x9 viene affiancata in 12 riquadri, quattro righe e tre colonne.

3. Il `parallel_for_each` metodo viene chiamato utilizzando un `tiled_index<2,3>` oggetto ( `t_idx` ) come indice. I parametri di tipo dell'indice ( `t_idx` ) devono corrispondere ai parametri di tipo del dominio di calcolo ( `descriptions.extent.tile< 2, 3>()` ).

4. Quando ogni thread viene eseguito, l'indice `t_idx` restituisce informazioni sul riquadro in cui si trova il thread ( `tiled_index::tile` proprietà) e sulla posizione del thread all'interno del riquadro ( `tiled_index::local` proprietà).

## <a name="tile-synchronizationtile_static-and-tile_barrierwait"></a>Sincronizzazione affiancata: tile_static e tile_barrier:: wait

L'esempio precedente illustra il layout e gli indici dei riquadri, ma non è molto utile.  L'affiancamento diventa utile quando i riquadri sono integrali nell'algoritmo e le variabili di exploit `tile_static` . Poiché tutti i thread in una sezione hanno accesso a `tile_static` variabili, le chiamate a `tile_barrier::wait` vengono utilizzate per sincronizzare l'accesso alle `tile_static` variabili. Anche se tutti i thread in una sezione hanno accesso alle `tile_static` variabili, non esiste un ordine di esecuzione garantito dei thread nella sezione. Nell'esempio seguente viene illustrato come utilizzare le `tile_static` variabili e il `tile_barrier::wait` metodo per calcolare il valore medio di ogni sezione. Ecco le chiavi per comprendere l'esempio:

1. RawData è archiviato in una matrice 8x8 Virtual.

2. Le dimensioni del riquadro sono 2x2. In questo modo viene creata una griglia 4x4 di riquadri e le medie possono essere archiviate in una matrice 4x4 usando un `array` oggetto. Esiste solo un numero limitato di tipi che è possibile acquisire per riferimento in una funzione con restrizioni AMP. La `array` classe è uno di essi.

3. Le dimensioni della matrice e le dimensioni del campione vengono definite tramite `#define` istruzioni, perché i parametri di tipo per `array` ,, `array_view` `extent` e `tiled_index` devono essere valori costanti. È anche possibile usare le `const int static` dichiarazioni. Come ulteriore vantaggio, è semplice modificare le dimensioni del campione per calcolare la media sui riquadri 4x4.

4. `tile_static`Per ogni sezione viene dichiarata una matrice 2x2 di valori float. Sebbene la dichiarazione si trovi nel percorso del codice per ogni thread, viene creata una sola matrice per ogni riquadro della matrice.

5. È presente una riga di codice per copiare i valori in ogni sezione nella `tile_static` matrice. Per ogni thread, dopo la copia del valore nella matrice, l'esecuzione del thread viene arrestata a causa della chiamata a `tile_barrier::wait` .

6. Quando tutti i thread in una sezione hanno raggiunto la barriera, la media può essere calcolata. Poiché il codice viene eseguito per ogni thread, è presente un' `if` istruzione per calcolare solo la media in un thread. La media viene archiviata nella variabile Averages. La barriera è essenzialmente il costrutto che controlla i calcoli per riquadro, molto come si può usare un **`for`** ciclo.

7. I dati nella `averages` variabile, poiché si tratta di un `array` oggetto, devono essere copiati di nuovo nell'host. Questo esempio usa l'operatore di conversione vettoriale.

8. Nell'esempio completo, è possibile modificare SAMPLESIZE in 4 e il codice viene eseguito correttamente senza altre modifiche.

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
    // Output for SAMPLESIZE = 2 is:
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

È possibile che si stia tentando di creare una `tile_static` variabile denominata `total` e di incrementare la variabile per ogni thread, come segue:

```cpp
// Do not do this.
tile_static float total;
total += matrix[t_idx];
t_idx.barrier.wait();

averages(t_idx.tile[0],t_idx.tile[1]) /= (float) (SAMPLESIZE* SAMPLESIZE);
```

Il primo problema con questo approccio è che le `tile_static` variabili non possono avere inizializzatori. Il secondo problema è che è presente un race condition sull'assegnazione a `total` , perché tutti i thread nel riquadro hanno accesso alla variabile senza un ordine particolare. È possibile programmare un algoritmo per consentire solo a un thread di accedere al totale a ogni barriera, come illustrato di seguito. Tuttavia, questa soluzione non è estendibile.

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

## <a name="memory-fences"></a>Barriere di memoria

Esistono due tipi di accesso alla memoria che devono essere sincronizzati: accesso alla memoria globale e accesso alla memoria `tile_static` . Un `concurrency::array` oggetto alloca solo la memoria globale. Un oggetto `concurrency::array_view` può fare riferimento a memoria globale, `tile_static` memoria o entrambi, a seconda di come è stato costruito.  Esistono due tipi di memoria che devono essere sincronizzati:

- memoria globale

- `tile_static`

Un limite di *memoria* garantisce che gli accessi alla memoria siano disponibili per altri thread nella sezione del thread e che gli accessi alla memoria vengano eseguiti in base all'ordine del programma. Per garantire questo problema, i compilatori e i processori non riordinano le letture e le Scritture attraverso la recinzione. In C++ AMP, un limite di memoria viene creato da una chiamata a uno di questi metodi:

- [metodo tile_barrier:: wait](reference/tile-barrier-class.md#wait): crea una recinzione intorno a globale e alla `tile_static` memoria.

- [metodo tile_barrier:: wait_with_all_memory_fence](reference/tile-barrier-class.md#wait_with_all_memory_fence): crea una recinzione intorno a globale e alla `tile_static` memoria.

- [metodo tile_barrier:: wait_with_global_memory_fence](reference/tile-barrier-class.md#wait_with_global_memory_fence): crea una recinzione intorno solo alla memoria globale.

- [metodo tile_barrier:: wait_with_tile_static_memory_fence](reference/tile-barrier-class.md#wait_with_tile_static_memory_fence): crea una recinzione intorno alla `tile_static` memoria.

La chiamata al limite specifico necessario può migliorare le prestazioni dell'app. Il tipo di barriera influiscono sul modo in cui il compilatore e l'hardware riordinano le istruzioni. Se ad esempio si usa un limite di memoria globale, si applica solo agli accessi alla memoria globale e pertanto il compilatore e l'hardware potrebbero riordinare le letture e le Scritture `tile_static` nelle variabili sui due lati della recinzione.

Nell'esempio seguente la barriera sincronizza le Scritture in `tileValues` una `tile_static` variabile. In questo esempio `tile_barrier::wait_with_tile_static_memory_fence` viene chiamato anziché `tile_barrier::wait` .

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
