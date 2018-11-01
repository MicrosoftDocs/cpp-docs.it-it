---
title: 'Procedura dettagliata: moltiplicazione di matrici'
ms.date: 11/04/2016
ms.assetid: 61172e8b-da71-4200-a462-ff3a908ab0cf
ms.openlocfilehash: a8f43f5b9df0726c9c01f940965b77b856e35430
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647451"
---
# <a name="walkthrough-matrix-multiplication"></a>Procedura dettagliata: moltiplicazione di matrici

Questa procedura dettagliata viene illustrato come utilizzare C++ AMP per accelerare l'esecuzione della moltiplicazione di matrici. Vengono presentati due algoritmi, uno senza affiancamento e uno con affiancamento.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare:

- Lettura [Panoramica di C++ AMP](../../parallel/amp/cpp-amp-overview.md).

- Lettura [usando i riquadri](../../parallel/amp/using-tiles.md).

- Assicurarsi che Windows 7, Windows 8, Windows Server 2008 R2 o Windows Server 2012 è installato nel computer.

### <a name="to-create-the-project"></a>Per creare il progetto

1. Nella barra dei menu in Visual Studio, scegliere **File** > **New** > **progetto**.

2. Sotto **Installed** nel riquadro Modelli selezionare **Visual C++**.

3. Selezionare **progetto vuoto**, immettere `MatrixMultiply` nel **Name** casella e quindi scegliere il **OK** pulsante.

4. Fare clic su **Avanti**.

5. In **Esplora soluzioni**, aprire il menu di scelta rapida **i file di origine**, quindi scegliere **Add** > **nuovo elemento**.

6. Nel **Aggiungi nuovo elemento** finestra di dialogo **File di C++ (. cpp)**, immettere `MatrixMultiply.cpp` nel **nome** casella e quindi scegliere il **Aggiungi** pulsante.

## <a name="multiplication-without-tiling"></a>Moltiplicazione senza visualizzazione affiancata

In questa sezione, prendere in considerazione la moltiplicazione di due matrici, A e B, che sono definiti come segue:

![3&#45;da&#45;2 matrix](../../parallel/amp/media/campmatrixanontiled.png "campmatrixanontiled")

![2&#45;da&#45;3 matrix](../../parallel/amp/media/campmatrixbnontiled.png "campmatrixbnontiled")

È una matrice 3 per 2 e B è una matrice 2 per 3. Il prodotto della moltiplicazione da B è la seguente matrice 3 per 3. Il prodotto viene calcolato moltiplicando le righe dell'oggetto da colonne di B elemento per elemento.

![3&#45;da&#45;3 matrix](../../parallel/amp/media/campmatrixproductnontiled.png "campmatrixproductnontiled")

### <a name="to-multiply-without-using-c-amp"></a>Moltiplicare senza utilizzare C++ AMP

1. Aprire MatrixMultiply.cpp e usare il codice seguente per sostituire il codice esistente.

```cpp
#include <iostream>

void MultiplyWithOutAMP() {
    int aMatrix[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int bMatrix[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int product[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            // Multiply the row of A by the column of B to get the row, column of product.
            for (int inner = 0; inner < 2; inner++) {
                product[row][col] += aMatrix[row][inner] * bMatrix[inner][col];
            }
            std::cout << product[row][col] << "  ";
        }
        std::cout << "\n";
    }
}

void main() {
    MultiplyWithOutAMP();
    getchar();
}
```

    The algorithm is a straightforward implementation of the definition of matrix multiplication. It does not use any parallel or threaded algorithms to reduce the computation time.

2. Sulla barra dei menu scegliere **File** > **Salva tutto**.

3. Scegliere il **F5** tasti di scelta rapida per avviare il debug e verificare che l'output sia corretto.

4. Scegli **invio** per uscire dall'applicazione.

### <a name="to-multiply-by-using-c-amp"></a>Da moltiplicare con C++ AMP

1. In MatrixMultiply.cpp, aggiungere il codice seguente prima di `main` (metodo).

```cpp
void MultiplyWithAMP() {
    int aMatrix[] = { 1, 4, 2, 5, 3, 6 };
    int bMatrix[] = { 7, 8, 9, 10, 11, 12 };
    int productMatrix[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    array_view<int, 2> a(3, 2, aMatrix);

    array_view<int, 2> b(2, 3, bMatrix);

    array_view<int, 2> product(3, 3, productMatrix);

    parallel_for_each(product.extent,
        [=] (index<2> idx) restrict(amp) {
            int row = idx[0];
            int col = idx[1];
            for (int inner = 0; inner <2; inner++) {
                product[idx] += a(row, inner)* b(inner, col);
            }
        });

    product.synchronize();

    for (int row = 0; row <3; row++) {
        for (int col = 0; col <3; col++) {
            //std::cout << productMatrix[row*3 + col] << "  ";
            std::cout << product(row, col) << "  ";
        }
        std::cout << "\n";
    }
}
```

    The AMP code resembles the non-AMP code. The call to `parallel_for_each` starts one thread for each element in `product.extent`, and replaces the `for` loops for row and column. The value of the cell at the row and column is available in `idx`. You can access the elements of an `array_view` object by using either the `[]` operator and an index variable, or the `()` operator and the row and column variables. The example demonstrates both methods. The `array_view::synchronize` method copies the values of the `product` variable back to the `productMatrix` variable.

2. Aggiungere il codice seguente `include` e `using` istruzioni all'inizio del MatrixMultiply.cpp.

```cpp
#include <amp.h>
using namespace concurrency;
```

3. Modificare il `main` metodo da chiamare il `MultiplyWithAMP` (metodo).

```cpp
void main() {
    MultiplyWithOutAMP();
    MultiplyWithAMP();
    getchar();
}
```

4. Scegliere il **Ctrl**+**F5** tasti di scelta rapida per avviare il debug e verificare che l'output sia corretto.

5. Scegliere il **barra spaziatrice** per uscire dall'applicazione.

## <a name="multiplication-with-tiling"></a>Moltiplicazione con affiancamento

Visualizzazione affiancata è una tecnica di partizionamento dei dati in subset uguali dimensioni che sono note come riquadri. Tre cose cambiano quando si usa per l'affiancamento.

- È possibile creare `tile_static` variabili. Accesso ai dati in `tile_static` spazio può essere più volte più veloce rispetto all'accesso ai dati nello spazio globale. Un'istanza di un `tile_static` variabile viene creata per ogni sezione e tutti i thread nella sezione hanno accesso alla variabile. Il vantaggio principale del sezionamento è il miglioramento delle prestazioni a causa dell'errore `tile_static` accesso.

- È possibile chiamare il [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) metodo arrestare tutti i thread in un riquadro in una riga di codice specificata. Non è possibile garantire l'ordine in cui verranno eseguiti i thread, solo che tutti i thread in un riquadro verrà interrotta in corrispondenza della chiamata a `tile_barrier::wait` prima di continuare l'esecuzione.

- È possibile utilizzare l'indice del thread relativo all'intero `array_view` oggetto e all'indice relativo riquadro. Tramite l'indice locale, è possibile rendere il codice più facile da leggere ed eseguire il debug.

Per sfruttare i vantaggi del sezionamento nella moltiplicazione di matrici, l'algoritmo deve suddividere la matrice in sezioni e quindi copiare i dati del riquadro in `tile_static` variabili per un accesso più rapido. In questo esempio, la matrice viene partizionata in sottomatrici della stessa dimensione. Il prodotto è stato trovato moltiplicando i sottomatrici. Le due matrici e i prodotti in questo esempio sono:

![4&#45;da&#45;matrice 4](../../parallel/amp/media/campmatrixatiled.png "campmatrixatiled")

![4&#45;da&#45;matrice 4](../../parallel/amp/media/campmatrixbtiled.png "campmatrixbtiled")

![4&#45;da&#45;matrice 4](../../parallel/amp/media/campmatrixproducttiled.png "campmatrixproducttiled")

Le matrici sono suddivisi in quattro 2x2 matrici, che sono definite come segue:

![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixapartitioned.png "campmatrixapartitioned")

![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixbpartitioned.png "campmatrixbpartitioned")

Il prodotto di A e B possono essere scritti e calcolata come segue:

![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixproductpartitioned.png "campmatrixproductpartitioned")

Poiché le matrici `a` tramite `h` sono 2x2 matrici, tutti i prodotti e somme di essi sono anche 2x2 matrici. Segue anche che A * B è una 4x4 matrice, come previsto. Per controllare rapidamente l'algoritmo, calcolare il valore dell'elemento nella prima riga, prima colonna all'interno del prodotto. Nell'esempio, che sarà il valore dell'elemento nella prima riga e colonna prima di `ae + bg`. È sufficiente calcolare la prima colonna, la prima riga della `ae` e `bg` per ciascun termine. Tale valore per `ae` è `1*1 + 2*5 = 11`. Il valore per `bg` è `3*1 + 4*5 = 23`. Il valore finale è `11 + 23 = 34`, che sia corretto.

Per implementare questo algoritmo, il codice:

- Usa una `tiled_extent` dell'oggetto anziché un' `extent` dell'oggetto nel `parallel_for_each` chiamare.

- Usa una `tiled_index` dell'oggetto anziché un' `index` dell'oggetto nel `parallel_for_each` chiamare.

- Crea `tile_static` variabili per mantenere la sottomatrici.

- Usa il `tile_barrier::wait` metodo per interrompere i thread per il calcolo dei prodotti per la sottomatrici.

### <a name="to-multiply-by-using-amp-and-tiling"></a>Moltiplicare tramite AMP e affiancamento

1. In MatrixMultiply.cpp, aggiungere il codice seguente prima di `main` (metodo).

```cpp
void MultiplyWithTiling() {
    // The tile size is 2.
    static const int TS = 2;

    // The raw data.
    int aMatrix[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8 };
    int bMatrix[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8 };
    int productMatrix[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    // Create the array_view objects.
    array_view<int, 2> a(4, 4, aMatrix);
    array_view<int, 2> b(4, 4, bMatrix);
    array_view<int, 2> product(4, 4, productMatrix);

    // Call parallel_for_each by using 2x2 tiles.
    parallel_for_each(product.extent.tile<TS, TS>(),
        [=] (tiled_index<TS, TS> t_idx) restrict(amp)
        {
            // Get the location of the thread relative to the tile (row, col)
            // and the entire array_view (rowGlobal, colGlobal).
            int row = t_idx.local[0];
            int col = t_idx.local[1];
            int rowGlobal = t_idx.global[0];
            int colGlobal = t_idx.global[1];
            int sum = 0;

            // Given a 4x4 matrix and a 2x2 tile size, this loop executes twice for each thread.
            // For the first tile and the first loop, it copies a into locA and e into locB.
            // For the first tile and the second loop, it copies b into locA and g into locB.
            for (int i = 0; i < 4; i += TS) {
                tile_static int locA[TS][TS];
                tile_static int locB[TS][TS];
                locA[row][col] = a(rowGlobal, col + i);
                locB[row][col] = b(row + i, colGlobal);
                // The threads in the tile all wait here until locA and locB are filled.
                t_idx.barrier.wait();

                // Return the product for the thread. The sum is retained across
                // both iterations of the loop, in effect adding the two products
                // together, for example, a*e.
                for (int k = 0; k < TS; k++) {
                    sum += locA[row][k] * locB[k][col];
                }

                // All threads must wait until the sums are calculated. If any threads
                // moved ahead, the values in locA and locB would change.
                t_idx.barrier.wait();
                // Now go on to the next iteration of the loop.
            }

            // After both iterations of the loop, copy the sum to the product variable by using the global location.
            product[t_idx.global] = sum;
        });

    // Copy the contents of product back to the productMatrix variable.
    product.synchronize();

    for (int row = 0; row <4; row++) {
        for (int col = 0; col <4; col++) {
            // The results are available from both the product and productMatrix variables.
            //std::cout << productMatrix[row*3 + col] << "  ";
            std::cout << product(row, col) << "  ";
        }
        std::cout << "\n";
    }
}
```

    This example is significantly different than the example without tiling. The code uses these conceptual steps:

    1. Copiare gli elementi della sezione [0,0] dei `a` in `locA`. Copiare gli elementi della sezione [0,0] dei `b` in `locB`. Si noti che `product` viene affiancata, non `a` e `b`. Pertanto, è utilizzare indici globali per accedere `a, b`, e `product`. La chiamata a `tile_barrier::wait` è essenziale. Arresta tutti i thread nella sezione fino a quando sia `locA` e `locB` vengono compilati.

    2. Moltiplicare `locA` e `locB` e inserire i risultati in `product`.

    3. Copiare gli elementi della sezione [0,1] dei `a` in `locA`. Copiare gli elementi della sezione [1,0] dei `b` in `locB`.

    4. Moltiplicare `locA` e `locB` e aggiungerli ai risultati che sono già presenti nel `product`.

    5. La moltiplicazione del riquadro [0,0] è stata completata.

    6. Ripetere per le quattro sezioni. Non esiste alcun processo di indicizzazione in modo specifico per i riquadri e i thread possono eseguire in qualsiasi ordine. Poiché ogni thread viene eseguito, il `tile_static` le variabili vengono create in modo appropriato per ogni sezione e la chiamata a `tile_barrier::wait` controlla il flusso di programma.

    7. Quando si esamina da vicino l'algoritmo, si noti che ogni sottomatrice venga caricato in un `tile_static` memoria due volte. Tempo di trasferimento dei dati. Tuttavia, quando i dati sono `tile_static` memoria, l'accesso ai dati è molto più veloce. Poiché il calcolo dei prodotti richiede l'accesso ripetuta ai valori di sottomatrici, si verifica un miglioramento delle prestazioni complessive. Per ogni algoritmo, sperimentazione deve individuare l'algoritmo ottima e affiancare le dimensioni.

         Negli esempi non AMP e non riquadro, ogni elemento dell'oggetto B a cui si accede quattro volte dalla memoria globale per la quale calcolare il prodotto. Nel riquadro esempio accesso due volte dalla memoria globale e quattro volte da ogni elemento di `tile_static` memoria. Non è un miglioramento significativo delle prestazioni. Tuttavia, se il A e B sono state 1024 x 1024 matrici e delle dimensioni riquadro sono stati 16, non vi sarà un miglioramento significativo delle prestazioni. In tal caso, ogni elemento verrà copiato `tile_static` memoria solo 16 volte e accedervi da `tile_static` memoria volte 1024.

2. Modificare il metodo main per chiamare il `MultiplyWithTiling` metodo, come illustrato.

```cpp
void main() {
    MultiplyWithOutAMP();
    MultiplyWithAMP();
    MultiplyWithTiling();
    getchar();
}
```

3. Scegliere il **Ctrl**+**F5** tasti di scelta rapida per avviare il debug e verificare che l'output sia corretto.

4. Scegliere il **spazio** barra per uscire dall'applicazione.

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)