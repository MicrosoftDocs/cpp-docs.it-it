---
title: 'Procedura dettagliata: moltiplicazione di matrici'
ms.date: 04/23/2019
ms.assetid: 61172e8b-da71-4200-a462-ff3a908ab0cf
ms.openlocfilehash: a84383aa02b3f8300774e18ba2b27655d07b72ae
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80075711"
---
# <a name="walkthrough-matrix-multiplication"></a>Procedura dettagliata: moltiplicazione di matrici

Questa procedura dettagliata illustra come usare C++ amp per accelerare l'esecuzione della moltiplicazione di matrici. Vengono presentati due algoritmi, uno senza affiancamento e uno con affiancamento.

## <a name="prerequisites"></a>Prerequisites

Prima di iniziare:

- Leggere [ C++ la Panoramica di amp](../../parallel/amp/cpp-amp-overview.md).

- Leggere [usando i riquadri](../../parallel/amp/using-tiles.md).

- Verificare che sia in esecuzione almeno Windows 7 o Windows Server 2008 R2.

### <a name="to-create-the-project"></a>Per creare il progetto

Le istruzioni per la creazione di un nuovo progetto variano a seconda della versione di Visual Studio installata. Verificare che il selettore di versione in alto a sinistra sia impostato sulla versione corretta.

::: moniker range="vs-2019"

### <a name="to-create-the-project-in-visual-studio-2019"></a>Per creare il progetto in Visual Studio 2019

1. Nella barra dei menu scegliere **File** > **nuovo** **progetto** > per aprire la finestra di dialogo **Crea un nuovo progetto** .

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**.

1. Dall'elenco filtrato dei tipi di progetto scegliere **progetto vuoto** , quindi fare clic su **Avanti**. Nella pagina successiva immettere *MatrixMultiply* nella casella **nome** per specificare un nome per il progetto e specificare il percorso del progetto, se necessario.

   ![Nuova app console](../../build/media/mathclient-project-name-2019.png "Nuova app console")

1. Scegliere il pulsante **Crea** per creare il progetto client.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **i file di origine**, quindi scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare  **C++ file (. cpp)** , immettere *MatrixMultiply. cpp* nella casella **nome** , quindi scegliere il pulsante **Aggiungi** .

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-project-in-visual-studio-2017-or-2015"></a>Per creare un progetto in Visual Studio 2017 o 2015

1. Nella barra dei menu di Visual Studio scegliere **File** > **nuovo** **progetto**>.

1. In **installato** nel riquadro Modelli selezionare oggetto **visivo C++** .

1. Selezionare **progetto vuoto**, immettere *MatrixMultiply* nella casella **nome** , quindi scegliere il pulsante **OK** .

1. Fare clic su **Avanti**.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **i file di origine**, quindi scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare  **C++ file (. cpp)** , immettere *MatrixMultiply. cpp* nella casella **nome** , quindi scegliere il pulsante **Aggiungi** .

::: moniker-end

## <a name="multiplication-without-tiling"></a>Moltiplicazione senza affiancamento

In questa sezione, si consideri la moltiplicazione di due matrici, A e B, definite come segue:

![3&#45;per&#45;2 matrice A](../../parallel/amp/media/campmatrixanontiled.png "3&#45;per&#45;2 matrice A")

![2&#45;per&#45;3 matrice B](../../parallel/amp/media/campmatrixbnontiled.png "2&#45;per&#45;3 matrice B")

Un oggetto è una matrice di 3 per 2 e B è una matrice 2 per 3. Il prodotto della moltiplicazione A per B è la matrice 3 per 3. Il prodotto viene calcolato moltiplicando le righe di un oggetto in base alle colonne dell'elemento B per elemento.

![3&#45;per&#45;3 matrice di prodotti](../../parallel/amp/media/campmatrixproductnontiled.png "3&#45;per&#45;3 matrice di prodotti")

### <a name="to-multiply-without-using-c-amp"></a>Per moltiplicare senza C++ usare amp

1. Aprire MatrixMultiply. cpp e usare il codice seguente per sostituire il codice esistente.

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

   int main() {
       MultiplyWithOutAMP();
       getchar();
   }
   ```

   L'algoritmo è un'implementazione semplice della definizione della moltiplicazione di matrici. Non viene utilizzato alcun algoritmo parallelo o con thread per ridurre il tempo di calcolo.

1. Sulla barra dei menu scegliere **File** > **Salva tutto**.

1. Premere il tasto di scelta rapida **F5** per avviare il debug e verificare che l'output sia corretto.

1. Premere **invio** per uscire dall'applicazione.

### <a name="to-multiply-by-using-c-amp"></a>Per moltiplicare usando C++ amp

1. In MatrixMultiply. cpp aggiungere il codice seguente prima del metodo `main`.

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

   Il codice AMP è simile al codice non AMP. La chiamata a `parallel_for_each` avvia un thread per ogni elemento in `product.extent`e sostituisce i cicli di `for` per riga e colonna. Il valore della cella in corrispondenza della riga e della colonna è disponibile in `idx`. È possibile accedere agli elementi di un oggetto `array_view` usando l'operatore `[]` e una variabile di indice oppure l'operatore `()` e le variabili di riga e colonna. Nell'esempio vengono illustrati entrambi i metodi. Il metodo `array_view::synchronize` copia nuovamente i valori della variabile `product` nella variabile `productMatrix`.

1. Aggiungere le istruzioni `include` e `using` seguenti all'inizio di MatrixMultiply. cpp.

   ```cpp
   #include <amp.h>
   using namespace concurrency;
   ```

1. Modificare il metodo `main` per chiamare il metodo `MultiplyWithAMP`.

   ```cpp
   int main() {
       MultiplyWithOutAMP();
       MultiplyWithAMP();
       getchar();
   }
   ```

1. Premere il tasto di scelta rapida **Ctrl**+**F5** per avviare il debug e verificare che l'output sia corretto.

1. Premere la **barra spaziatrice** per uscire dall'applicazione.

## <a name="multiplication-with-tiling"></a>Moltiplicazione con affiancamento

L'affiancamento è una tecnica in cui i dati vengono partizionati in subset di dimensioni uguali, noti come riquadri. Quando si usa l'affiancamento, cambiano tre elementi.

- È possibile creare variabili di `tile_static`. L'accesso ai dati in `tile_static` spazio può essere molto più veloce rispetto all'accesso ai dati nello spazio globale. Viene creata un'istanza di una variabile di `tile_static` per ogni sezione e tutti i thread nel riquadro hanno accesso alla variabile. Il vantaggio principale dell'affiancamento è il miglioramento delle prestazioni dovuto all'accesso `tile_static`.

- È possibile chiamare il metodo [tile_barrier:: wait](reference/tile-barrier-class.md#wait) per arrestare tutti i thread in un riquadro in una riga di codice specificata. Non è possibile garantire l'ordine in cui verranno eseguiti i thread, ma solo che tutti i thread in un riquadro si arresteranno in corrispondenza della chiamata a `tile_barrier::wait` prima di continuare l'esecuzione.

- È possibile accedere all'indice del thread in relazione all'intero `array_view` oggetto e all'indice relativo alla sezione. Utilizzando l'indice locale è possibile semplificare la lettura e il debug del codice.

Per sfruttare i vantaggi dell'affiancamento nella moltiplicazione di matrici, l'algoritmo deve partizionare la matrice in riquadri e quindi copiare i dati del riquadro in variabili `tile_static` per un accesso più rapido. In questo esempio la matrice viene partizionata in sottomatrici di uguale dimensione. Il prodotto viene trovato moltiplicando le sottomatrici. Le due matrici e il relativo prodotto in questo esempio sono:

![4&#45;per&#45;4 matrice A](../../parallel/amp/media/campmatrixatiled.png "4&#45;per&#45;4 matrice A")

![4&#45;per&#45;4 matrice B](../../parallel/amp/media/campmatrixbtiled.png "4&#45;per&#45;4 matrice B")

![4&#45;per&#45;4 Product Matrix](../../parallel/amp/media/campmatrixproducttiled.png "4&#45;per&#45;4 Product Matrix")

Le matrici sono partizionate in quattro matrici 2x2, definite come segue:

![4&#45;per&#45;4 matrice A partizionato in 2&#45;per&#45;2&#45;sottomatrici](../../parallel/amp/media/campmatrixapartitioned.png "4&#45;per&#45;4 matrice A partizionato in 2&#45;per&#45;2&#45;sottomatrici")

![4&#45;per&#45;4 matrice B partizionato in 2&#45;per&#45;2&#45;sottomatrici](../../parallel/amp/media/campmatrixbpartitioned.png "4&#45;per&#45;4 matrice B partizionato in 2&#45;per&#45;2&#45;sottomatrici")

Il prodotto di A e B ora può essere scritto e calcolato come segue:

![4&#45;per&#45;4 matrice A B partizionato in 2&#45;per&#45;2&#45;sottomatrici](../../parallel/amp/media/campmatrixproductpartitioned.png "4&#45;per&#45;4 matrice A B partizionato in 2&#45;per&#45;2&#45;sottomatrici")

Poiché le matrici `a` tramite `h` sono matrici 2x2, anche tutti i prodotti e le somme sono matrici 2x2. Segue inoltre che il prodotto di A e B è una matrice 4x4, come previsto. Per controllare rapidamente l'algoritmo, calcolare il valore dell'elemento nella prima riga, prima colonna del prodotto. Nell'esempio, si tratta del valore dell'elemento nella prima riga e nella prima colonna di `ae + bg`. È necessario solo calcolare la prima colonna, prima riga di `ae` e `bg` per ogni termine. Il valore per `ae` è `(1 * 1) + (2 * 5) = 11`. Il valore della proprietà `bg` è `(3 * 1) + (4 * 5) = 23`. Il valore finale è `11 + 23 = 34`, che è corretto.

Per implementare questo algoritmo, il codice:

- Usa un oggetto `tiled_extent` anziché un oggetto `extent` nella chiamata di `parallel_for_each`.

- Usa un oggetto `tiled_index` anziché un oggetto `index` nella chiamata di `parallel_for_each`.

- Crea le variabili di `tile_static` per conservare le sottomatrici.

- Usa il metodo `tile_barrier::wait` per arrestare i thread per il calcolo dei prodotti delle sottomatrici.

### <a name="to-multiply-by-using-amp-and-tiling"></a>Per moltiplicare usando AMP e affiancamento

1. In MatrixMultiply. cpp aggiungere il codice seguente prima del metodo `main`.

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

   Questo esempio è significativamente diverso dall'esempio senza affiancamento. Il codice usa questi passaggi concettuali:
   1. Copiare gli elementi del riquadro [0, 0] di `a` in `locA`. Copiare gli elementi del riquadro [0, 0] di `b` in `locB`. Si noti che `product` è affiancato, non `a` e `b`. Si usano quindi gli indici globali per accedere `a, b`e `product`. La chiamata a `tile_barrier::wait` è essenziale. Arresta tutti i thread nel riquadro fino a quando non vengono riempiti sia `locA` che `locB`.

   1. Moltiplicare `locA` e `locB` e inserire i risultati in `product`.

   1. Copiare gli elementi del riquadro [0, 1] di `a` in `locA`. Copiare gli elementi del riquadro [1, 0] di `b` in `locB`.

   1. Moltiplicare `locA` e `locB` e aggiungerli ai risultati già presenti in `product`.

   1. La moltiplicazione del riquadro [0, 0] è stata completata.

   1. Ripetere per gli altri quattro riquadri. Non esiste alcuna indicizzazione specifica per i riquadri e i thread possono essere eseguiti in qualsiasi ordine. Quando ogni thread viene eseguito, le variabili `tile_static` vengono create per ogni riquadro in modo appropriato e la chiamata a `tile_barrier::wait` controlla il flusso del programma.

   1. Quando si esamina attentamente l'algoritmo, si noterà che ogni sottomatrice viene caricata due volte in una memoria `tile_static`. Il trasferimento dei dati può richiedere tempo. Tuttavia, una volta che i dati sono in `tile_static` memoria, l'accesso ai dati risulta molto più rapido. Poiché il calcolo dei prodotti richiede l'accesso ripetuto ai valori nelle sottomatrici, si verifica un miglioramento complessivo delle prestazioni. Per ogni algoritmo, è necessaria la sperimentazione per trovare l'algoritmo ottimale e le dimensioni del riquadro.

   Negli esempi non AMP e non di sezione, a ogni elemento di A e B viene eseguito l'accesso quattro volte dalla memoria globale per calcolare il prodotto. Nell'esempio di sezione, a ogni elemento viene eseguito l'accesso due volte dalla memoria globale e quattro volte dalla memoria `tile_static`. Questo non rappresenta un miglioramento significativo delle prestazioni. Tuttavia, se A e B erano matrici 1024x1024 e le dimensioni del riquadro erano 16, si verificherebbe un miglioramento significativo delle prestazioni. In tal caso, ogni elemento viene copiato in `tile_static` memoria solo 16 volte ed è accessibile da `tile_static` memoria 1024 volte.

1. Modificare il metodo Main per chiamare il metodo `MultiplyWithTiling`, come illustrato.

   ```cpp
   int main() {
       MultiplyWithOutAMP();
       MultiplyWithAMP();
       MultiplyWithTiling();
       getchar();
   }
   ```

1. Premere il tasto di scelta rapida **Ctrl**+**F5** per avviare il debug e verificare che l'output sia corretto.

1. Per uscire dall'applicazione, premere la barra **spaziatrice** .

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)
