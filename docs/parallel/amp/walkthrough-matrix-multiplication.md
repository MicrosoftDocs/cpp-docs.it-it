---
title: 'Procedura dettagliata: moltiplicazione di matrici'
ms.date: 04/23/2019
ms.assetid: 61172e8b-da71-4200-a462-ff3a908ab0cf
ms.openlocfilehash: f30f8dc235bf0e76c342bea26a35bcbb36cfa237
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366805"
---
# <a name="walkthrough-matrix-multiplication"></a>Procedura dettagliata: moltiplicazione di matrici

In questa procedura dettagliata viene illustrato come utilizzare AMP per accelerare l'esecuzione della moltiplicazione di matrici. Vengono presentati due algoritmi, uno senza apfino e uno a 09tina.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare:

- Lettura [di Cenni](../../parallel/amp/cpp-amp-overview.md)preliminari su AMP di C.

- Leggere [Utilizzo dei riquadri](../../parallel/amp/using-tiles.md).

- Assicurarsi di eseguire almeno Windows 7 o Windows Server 2008 R2.

### <a name="to-create-the-project"></a>Per creare il progetto

Le istruzioni per la creazione di un nuovo progetto variano a seconda della versione di Visual Studio installata. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-the-project-in-visual-studio-2019"></a>Per creare il progetto in Visual Studio 2019To create the project in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++ **, impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**.

1. Dall'elenco filtrato dei tipi di progetto scegliere **Progetto vuoto,** quindi **Avanti**. Nella pagina successiva, immettere *MatrixMultiply* nella casella **Nome** per specificare un nome per il progetto e specificare il percorso del progetto, se lo si desidera.

   ![Nuova app console](../../build/media/mathclient-project-name-2019.png "Nuova app console")

1. Scegliere il pulsante **Crea** per creare il progetto client.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **File di origine**, quindi scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare File di C **(.cpp),** immettere *MatrixMultiply.cpp* nella casella **Nome,** quindi scegliere il pulsante **Aggiungi.**

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-project-in-visual-studio-2017-or-2015"></a>Per creare un progetto in Visual Studio 2017 o 2015To create a project in Visual Studio 2017 or 2015

1. Nella barra dei menu di Visual Studio scegliere **File** > **Nuovo** > **progetto**.

1. In **Installato** nel riquadro dei modelli, selezionare **Visual C**

1. Selezionare **Progetto vuoto**, immettere *MatrixMultiply* nella casella **Nome,** quindi scegliere **OK.**

1. Fare clic su **Avanti**.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per **File di origine**, quindi scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare File di C **(.cpp),** immettere *MatrixMultiply.cpp* nella casella **Nome,** quindi scegliere il pulsante **Aggiungi.**

::: moniker-end

## <a name="multiplication-without-tiling"></a>Moltiplicazione senza apperemi

In questa sezione si consideri la moltiplicazione di due matrici, A e B, definite come segue:

![3&#45;&#45;a 2 matrici A](../../parallel/amp/media/campmatrixanontiled.png "3&#45;&#45;a 2 matrici A")

![2&#45;per&#45;3 matrici B](../../parallel/amp/media/campmatrixbnontiled.png "2&#45;per&#45;3 matrici B")

A è una matrice 3 x 2 e B è una matrice 2 per 3. Il prodotto della moltiplicazione di A per B è la seguente matrice 3 per 3. Il prodotto viene calcolato moltiplicando le righe di A per le colonne dell'elemento B per elemento.

![3&#45;da&#45;3 matrice di prodotti](../../parallel/amp/media/campmatrixproductnontiled.png "3&#45;da&#45;3 matrice di prodotti")

### <a name="to-multiply-without-using-c-amp"></a>Per eseguire la moltiplicazione senza l'utilizzo di AMP di C

1. Aprire MatrixMultiply.cpp e utilizzare il codice seguente per sostituire il codice esistente.

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

   L'algoritmo è un'implementazione semplice della definizione della moltiplicazione di matrici. Non utilizza algoritmi paralleli o threadizzati per ridurre il tempo di calcolo.

1. Nella barra dei menu scegliere **Salva tutto.** > **Save All**

1. Scegliere il tasto di scelta rapida **F5** per avviare il debug e verificare che l'output sia corretto.

1. Scegliere **Invio** per uscire dall'applicazione.

### <a name="to-multiply-by-using-c-amp"></a>Per moltiplicare l'uso di AMP

1. In MatrixMultiply.cpp aggiungere il codice `main` seguente prima del metodo.

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

   Il codice AMP è simile al codice non AMP. La chiamata `parallel_for_each` a avvia un `product.extent`thread per ogni `for` elemento in e sostituisce i cicli per riga e colonna. Il valore della cella in corrispondenza `idx`della riga e della colonna è disponibile in . È possibile accedere agli `array_view` elementi di `[]` un oggetto utilizzando l'operatore e una variabile di indice oppure l'operatore `()` e le variabili di riga e colonna. Nell'esempio vengono illustrati entrambi i metodi. Il `array_view::synchronize` metodo copia i `product` valori della `productMatrix` variabile nella variabile.

1. Aggiungere le `include` `using` istruzioni e riportate di seguito all'inizio di MatrixMultiply.cpp.

   ```cpp
   #include <amp.h>
   using namespace concurrency;
   ```

1. Modificare `main` il metodo `MultiplyWithAMP` per chiamare il metodo .

   ```cpp
   int main() {
       MultiplyWithOutAMP();
       MultiplyWithAMP();
       getchar();
   }
   ```

1. Premere il tasto di scelta rapida **Ctrl**+**F5** per avviare il debug e verificare che l'output sia corretto.

1. Premere la **barra spaziatrice** per uscire dall'applicazione.

## <a name="multiplication-with-tiling"></a>Moltiplicazione a tutto tondo

L'affiancamento è una tecnica in cui si partizionano i dati in sottoinsiemi di dimensioni uguali, noti come riquadri. Tre cose cambiano quando usi l'adeletta.

- È possibile `tile_static` creare variabili. L'accesso `tile_static` ai dati nello spazio può essere molto più veloce dell'accesso ai dati nello spazio globale. Viene creata `tile_static` un'istanza di una variabile per ogni riquadro e tutti i thread nel riquadro hanno accesso alla variabile. Il vantaggio principale dell'afposizione è `tile_static` il miglioramento delle prestazioni dovuto all'accesso.

- È possibile chiamare il metodo [tile_barrier::wait](reference/tile-barrier-class.md#wait) per arrestare tutti i thread in un riquadro in corrispondenza di una riga di codice specificata. Non è possibile garantire l'ordine di esecuzione dei thread, ma solo che `tile_barrier::wait` tutti i thread in un riquadro verranno interrotti in corrispondenza della chiamata a prima di continuare l'esecuzione.

- È possibile accedere all'indice del thread `array_view` relativo all'intero oggetto e all'indice relativo al riquadro. Utilizzando l'indice locale, è possibile semplificare la lettura e il debug del codice.

Per sfruttare i vantaggi dell'affiancamento nella moltiplicazione della matrice, l'algoritmo deve partizionare la matrice in riquadri e quindi copiare i dati del riquadro in `tile_static` variabili per un accesso più rapido. In questo esempio, la matrice viene partizionata in sottomatrici di uguale dimensione. Il prodotto si trova moltiplicando le sottomatrici. Le due matrici e il relativo prodotto in questo esempio sono:

![4&#45;da&#45;matrice 4 A](../../parallel/amp/media/campmatrixatiled.png "4&#45;da&#45;matrice 4 A")

![4&#45;per&#45;4 matrici B](../../parallel/amp/media/campmatrixbtiled.png "4&#45;per&#45;4 matrici B")

![4&#45;da&#45;matrice di prodotti 4](../../parallel/amp/media/campmatrixproducttiled.png "4&#45;da&#45;matrice di prodotti 4")

Le matrici sono partizionate in quattro matrici 2x2, definite come segue:

![4&#45;per&#45;matrice 4 A partizionata in 2&#45;da&#45;2 matrici di&#45;secondarie](../../parallel/amp/media/campmatrixapartitioned.png "4&#45;per&#45;matrice 4 A partizionata in 2&#45;da&#45;2 matrici di&#45;secondarie")

![4&#45;da&#45;4 matrici B partizionate in 2&#45;da&#45;2 matrici di&#45;sub](../../parallel/amp/media/campmatrixbpartitioned.png "4&#45;da&#45;4 matrici B partizionate in 2&#45;da&#45;2 matrici di&#45;sub")

Il prodotto di A e B può ora essere scritto e calcolato come segue:

![4&#45;da&#45;4 matrici A B partizionate in 2&#45;da&#45;2 sottomatrici di&#45;](../../parallel/amp/media/campmatrixproductpartitioned.png "4&#45;da&#45;4 matrici A B partizionate in 2&#45;da&#45;2 sottomatrici di&#45;")

Poiché `a` le `h` matrici attraverso sono matrici 2x2, tutti i prodotti e somme di essi sono anche 2x2 matrici. Ne consegue inoltre che il prodotto di A e B è una matrice 4x4, come previsto. Per controllare rapidamente l'algoritmo, calcolare il valore dell'elemento nella prima riga, la prima colonna del prodotto. Nell'esempio, questo sarebbe il valore dell'elemento nella prima `ae + bg`riga e nella prima colonna di . Devi solo calcolare la prima colonna, la prima riga di `ae` e `bg` per ogni termine. Tale valore `ae` `(1 * 1) + (2 * 5) = 11`per è . Il valore della proprietà `bg` è `(3 * 1) + (4 * 5) = 23`. Il valore `11 + 23 = 34`finale è , che è corretto.

Per implementare questo algoritmo, il codice:To implement this algorithm, the code:

- Utilizza `tiled_extent` un oggetto `extent` anziché `parallel_for_each` un oggetto nella chiamata.

- Utilizza `tiled_index` un oggetto `index` anziché `parallel_for_each` un oggetto nella chiamata.

- Crea `tile_static` variabili per contenere le sottomatrici.

- Utilizza `tile_barrier::wait` il metodo per arrestare i thread per il calcolo dei prodotti delle sottomatrici.

### <a name="to-multiply-by-using-amp-and-tiling"></a>Per moltiplicare utilizzando AMP e apfiancando

1. In MatrixMultiply.cpp aggiungere il codice `main` seguente prima del metodo.

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

   Questo esempio è significativamente diverso dall'esempio senza apposizione. Il codice usa questi passaggi concettuali:The code uses these conceptual steps:
   1. Copiare gli elementi del riquadro[0,0] di `a` in `locA`. Copiare gli elementi del riquadro[0,0] di `b` in `locB`. Si `product` noti che `a` è `b`affiancato, non e . Pertanto, si utilizzano `a, b`gli `product`indici globali per accedere a , e . La chiamata `tile_barrier::wait` a è essenziale. Arresta tutti i fili nella `locA` piastrella fino a quando entrambi e `locB` vengono riempiti.

   1. `locA` Moltiplicare `locB` e inserire `product`i risultati in .

   1. Copiare gli elementi del riquadro[0,1] di `a` in `locA`. Copiare gli elementi del riquadro `b` `locB`[1,0] di in .

   1. `locA` Moltiplicare `locB` e aggiungerli ai risultati `product`già presenti in .

   1. La moltiplicazione della piastrella[0,0] è completa.

   1. Ripetere per le altre quattro tessere. Non esiste alcuna indicizzazione specifica per i riquadri e i thread possono essere eseguiti in qualsiasi ordine. Quando ogni thread viene `tile_static` eseguito, le variabili vengono create `tile_barrier::wait` per ogni riquadro in modo appropriato e la chiamata a controlla il flusso del programma.

   1. Quando si esamina attentamente l'algoritmo, si `tile_static` noti che ogni sottomatrice viene caricata in una memoria due volte. Il trasferimento dei dati richiede tempo. Tuttavia, una volta `tile_static` che i dati sono in memoria, l'accesso ai dati è molto più veloce. Poiché il calcolo dei prodotti richiede un accesso ripetuto ai valori nelle sottomatrici, si ottiene un miglioramento complessivo delle prestazioni. Per ogni algoritmo, la sperimentazione è necessaria per trovare l'algoritmo ottimale e le dimensioni del riquadro.

   Negli esempi non AMP e non affiancati, ogni elemento di A e B è accessibile quattro volte dalla memoria globale per calcolare il prodotto. Nell'esempio di riquadro, ogni elemento è accessibile `tile_static` due volte dalla memoria globale e quattro volte dalla memoria. Questo non è un miglioramento significativo delle prestazioni. Tuttavia, se le matrici A e B fossero matrici 1024x1024 e le dimensioni delle mattine fossero 16, ci sarebbe un miglioramento significativo delle prestazioni. In tal caso, ogni elemento `tile_static` verrebbe copiato in `tile_static` memoria solo 16 volte e accessibile dalla memoria 1024 volte.

1. Modificare il metodo main `MultiplyWithTiling` per chiamare il metodo, come illustrato.

   ```cpp
   int main() {
       MultiplyWithOutAMP();
       MultiplyWithAMP();
       MultiplyWithTiling();
       getchar();
   }
   ```

1. Premere il tasto di scelta rapida **Ctrl**+**F5** per avviare il debug e verificare che l'output sia corretto.

1. Premere la barra **spaziatrice** per uscire dall'applicazione.

## <a name="see-also"></a>Vedere anche

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Procedura dettagliata: Debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)
