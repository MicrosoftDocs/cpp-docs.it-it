---
title: 'Procedura dettagliata: Moltiplicazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 61172e8b-da71-4200-a462-ff3a908ab0cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d0c61bff6251d5ae833611161ef7b1bb06e6f39a
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="walkthrough-matrix-multiplication"></a>Procedura dettagliata: moltiplicazione di matrici
Questa procedura dettagliata viene illustrato come utilizzare C++ AMP per accelerare l'esecuzione di moltiplicazione. Vengono presentati due algoritmi, uno senza affiancamento e uno con affiancamento.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare:  
  
-   Lettura [C++ AMP Panoramica](../../parallel/amp/cpp-amp-overview.md).  
  
-   Lettura [utilizzando riquadri](../../parallel/amp/using-tiles.md).  
  
-   Assicurarsi che [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/reference/includes/win8_md.md)], [!INCLUDE[winsvr08_r2](../../parallel/amp/includes/winsvr08_r2_md.md)], o [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)] è installato nel computer in uso.  
  
### <a name="to-create-the-project"></a>Per creare il progetto  
  
1.  Nella barra dei menu in Visual Studio, scegliere **File**, **New**, **progetto**.  
  
2.  In **installato** nel riquadro Modelli selezionare **Visual C++**.  
  
3.  Selezionare **progetto vuoto**, immettere `MatrixMultiply` nel **nome** , quindi scegliere il **OK** pulsante.  
  
4.  Fare clic su **Avanti**.  
  
5.  In **Esplora**, aprire il menu di scelta rapida per **i file di origine**, quindi scegliere **Aggiungi**, **nuovo elemento**.  
  
6.  Nel **Aggiungi nuovo elemento** nella finestra di dialogo **File C++ (. cpp)**, immettere `MatrixMultiply.cpp` nel **nome** , quindi scegliere il **Aggiungi** pulsante.  
  
## <a name="multiplication-without-tiling"></a>Moltiplicazione senza affiancamento  
 In questa sezione, prendere in considerazione la moltiplicazione di due matrici, A e B, che sono definiti come segue:  
  
 ![3&#45;da&#45;matrice 2](../../parallel/amp/media/campmatrixanontiled.png "campmatrixanontiled")  
  
 ![2&#45;da&#45;3 matrice](../../parallel/amp/media/campmatrixbnontiled.png "campmatrixbnontiled")  
  
 È una matrice 3 per 2 e B è una matrice 2 per 3. Il prodotto della moltiplicazione da B è la seguente matrice 3 per 3. Il prodotto viene calcolato moltiplicando le righe dell'oggetto da colonne di B elemento per elemento.  
  
 ![3&#45;da&#45;3 matrice](../../parallel/amp/media/campmatrixproductnontiled.png "campmatrixproductnontiled")  
  
### <a name="to-multiply-without-using-c-amp"></a>Moltiplicare senza l'utilizzo di C++ AMP  
  
1.  Aprire MatrixMultiply.cpp e utilizzare il codice seguente per sostituire il codice esistente.  
  
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
  
2.  Nella barra dei menu scegliere **File**, **Salva tutto**.  
  
3.  Scegliere la combinazione di tasti F5 per avviare il debug e verificare che l'output sia corretto.  
  
4.  Premere INVIO per uscire dall'applicazione.  
  
### <a name="to-multiply-by-using-c-amp"></a>Per moltiplicare per l'utilizzo di C++ AMP  
  
1.  In MatrixMultiply.cpp, aggiungere il codice seguente prima di `main` metodo.  
  
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
  
2.  Aggiungere il seguente `include` e `using` istruzioni all'inizio del MatrixMultiply.cpp.  
  
```cpp  
#include <amp.h>  
using namespace concurrency;  
```  
  
3.  Modificare il `main` metodo da chiamare il `MultiplyWithAMP` metodo.  
  
```cpp  
void main() {  
    MultiplyWithOutAMP();  
    MultiplyWithAMP();  
    getchar();  
}  
```  
  
4.  Scegliere la combinazione di tasti Ctrl + F5 per avviare il debug e verificare che l'output sia corretto.  
  
5.  Scegliere la barra spaziatrice per uscire dall'applicazione.  
  
## <a name="multiplication-with-tiling"></a>Moltiplicazione con affiancamento  
 Affiancamento è una tecnica in cui i dati vengono partizionati in subset uguali dimensioni sono note come riquadri. Tre operazioni di modifica quando si utilizza l'affiancamento.  
  
-   È possibile creare `tile_static` variabili. Accesso ai dati in `tile_static` spazio può essere notevolmente superiore rispetto ai dati nello spazio globale. Un'istanza di un `tile_static` variabile viene creata per ogni sezione e nel riquadro tutti i thread hanno accesso alla variabile. Il vantaggio principale di affiancamento è il miglioramento delle prestazioni a causa di `tile_static` accesso.  
  
-   È possibile chiamare il [tile_barrier:: Wait](reference/tile-barrier-class.md#wait) metodo per interrompere tutti i thread in un riquadro in una riga di codice specificata. Non è possibile garantire l'ordine in cui verrà eseguito il thread, solo che tutti i thread in un riquadro verrà arrestato in corrispondenza della chiamata a `tile_barrier::wait` prima di continuare l'esecuzione.  

  
-   Si ha accesso all'indice del thread relativo dell'intero `array_view` oggetto e l'indice relativo riquadro. Tramite l'indice locale, è possibile rendere il codice più facile da leggere ed eseguire il debug.  
  
 Per sfruttare i vantaggi di affiancamento nella moltiplicazione, l'algoritmo necessario partizionare la matrice in riquadri, quindi copiare i dati della sezione in `tile_static` variabili per un accesso più rapido. In questo esempio, la matrice viene partizionata in sottomatrici di uguale dimensione. Il prodotto è stato trovato moltiplicando i sottomatrici. Le due matrici e il prodotto in questo esempio sono:  
  
 ![4&#45;da&#45;4 matrice](../../parallel/amp/media/campmatrixatiled.png "campmatrixatiled")  
  
 ![4&#45;da&#45;4 matrice](../../parallel/amp/media/campmatrixbtiled.png "campmatrixbtiled")  
  
 ![4&#45;da&#45;4 matrice](../../parallel/amp/media/campmatrixproducttiled.png "campmatrixproducttiled")  
  
 Le matrici sono suddivisi in quattro 2x2 matrici, che sono definite come segue:  
  
 ![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixapartitioned.png "campmatrixapartitioned")  
  
 ![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixbpartitioned.png "campmatrixbpartitioned")  
  
 Il prodotto di A e B può ora essere scritta e calcolata come segue:  
  
 ![4&#45;da&#45;matrice 4 partizionata in 2&#45;da&#45;sub 2&#45;matrici](../../parallel/amp/media/campmatrixproductpartitioned.png "campmatrixproductpartitioned")  
  
 Poiché le matrici `a` tramite `h` è 2x2 matrici, tutti i prodotti e le somme di essi sono anche 2x2 matrici. Segue anche che A * B è una 4x4 matrice, come previsto. Per verificare rapidamente l'algoritmo, calcolare il valore dell'elemento nella prima riga della prima colonna all'interno del prodotto. Nell'esempio che sarebbe il valore dell'elemento nella prima colonna della prima riga `ae + bg`. È necessario calcolare la prima riga della prima colonna `ae` e `bg` per ogni termine. Tale valore per `ae` è `1*1 + 2*5 = 11`. Il valore per `bg` è `3*1 + 4*5 = 23`. Il valore finale è `11 + 23 = 34`, che sia corretto.  
  
 Per implementare questo algoritmo, il codice:  
  
-   Usa un `tiled_extent` oggetto anziché un `extent` oggetto di `parallel_for_each` chiamare.  
  
-   Usa un `tiled_index` oggetto anziché un `index` oggetto di `parallel_for_each` chiamare.  
  
-   Crea `tile_static` variabili per mantenere i sottomatrici.  
  
-   Usa il `tile_barrier::wait` metodo per interrompere il thread per il calcolo dei prodotti di sottomatrici.  
  
### <a name="to-multiply-by-using-amp-and-tiling"></a>Moltiplicare utilizzando AMP e affiancamento  
  
1.  In MatrixMultiply.cpp, aggiungere il codice seguente prima di `main` metodo.  
  
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
  
    1.  Copiare gli elementi della sezione [0,0] di `a` in `locA`. Copiare gli elementi della sezione [0,0] di `b` in `locB`. Si noti che `product` viene affiancata, non `a` e `b`. È pertanto utilizzare indici globali per accedere a `a, b`, e `product`. La chiamata a `tile_barrier::wait` è essenziale. Arresta tutti i thread nel riquadro fino a quando sia `locA` e `locB` vengono riempite completamente.  
  
    2.  Moltiplicare `locA` e `locB` e inserire i risultati in `product`.  
  
    3.  Copiare gli elementi della sezione [0,1] di `a` in `locA`. Copiare gli elementi della sezione [1,0] di `b` in `locB`.  
  
    4.  Moltiplicare `locA` e `locB` e aggiungerli ai risultati che sono già in `product`.  
  
    5.  La moltiplicazione di riquadro [0,0] è stata completata.  
  
    6.  Ripetere per le quattro sezioni. Non vi è alcun l'indicizzazione in particolare per i riquadri e i thread possono eseguire in qualsiasi ordine. Poiché ogni thread viene eseguito, il `tile_static` le variabili vengono create in modo appropriato per ogni sezione e la chiamata a `tile_barrier::wait` controlla il flusso di programma.  
  
    7.  Quando si esamina attentamente l'algoritmo, si noti che ogni sottomatrice viene caricato un `tile_static` memoria due volte. Tempo di trasferimento di dati. Tuttavia, quando i dati sono `tile_static` accesso ai dati di memoria, è molto più veloce. Poiché il calcolo dei prodotti richiede l'accesso ripetuto ai valori di sottomatrici, vi è un miglioramento delle prestazioni complessive. Per ogni algoritmo, è necessario sperimentazione per trovare l'algoritmo ottimale e delle dimensioni.  
  
         Negli esempi non AMP e non di riquadro, ogni elemento dell'oggetto B a cui si accede quattro volte dalla memoria globale per calcolare il prodotto. Nell'esempio di riquadro, accesso due volte dalla memoria globale e quattro volte da ogni elemento di `tile_static` memoria. Non è un miglioramento significativo delle prestazioni. Se, tuttavia, di A e B sono state 1024 x 1024 matrici e le dimensioni della finestra sono 16, non vi sarà un miglioramento significativo delle prestazioni. In tal caso, verrà copiata in ogni elemento `tile_static` memoria solo 16 volte e sono accessibili dai `tile_static` memoria volte 1024.  
  
2.  Modificare il metodo principale per chiamare il `MultiplyWithTiling` (metodo), come illustrato.  
  
```cpp  
void main() {  
    MultiplyWithOutAMP();  
    MultiplyWithAMP();  
    MultiplyWithTiling();  
    getchar();  
}  
```  
  
3.  Scegliere la combinazione di tasti Ctrl + F5 per avviare il debug e verificare che l'output sia corretto.  
  
4.  Scegliere la barra spaziatrice per uscire dall'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Procedura dettagliata: debug di un'applicazione C++ AMP](../../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md)

