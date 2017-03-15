---
title: "Utilizzo di sezioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: acb86a86-2b7f-43f1-8fcf-bcc79b21d9a8
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Utilizzo di sezioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare il sezionamento per massimizzare l'accelerazione dell'applicazione.  Il sezionamento divide i thread in sottoinsiemi rettangolari uguali o *sezioni*.  Se si utilizza una dimensione corretta della sezione e un algoritmo di partizionamento, è possibile ottenere ancora più accelerazione dal codice AMP C\+\+.  I componenti di base del sezionamento sono:  
  
-   `tile_static` variabili.  Il vantaggio principale del sezionamento è il miglioramento delle prestazioni accedendo a `tile_static`.  L'accesso ai dati nella memoria `tile_static` può essere molto più veloce rispetto all'accesso ai dati nello spazio globale \(oggetti`array` o `array_view` \).  Un'istanza di una variabile `tile_static` viene creata per ogni sezione e tutti i thread nella sezione hanno accesso alla variabile.  In un tipico algoritmo di partizionamento, i dati vengono copiati una volta nella memoria `tile_static` dalla memoria globale e poi viene fatto loro accesso dalla memoria `tile_static`.  
  
-   [Metodo tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md).  Una chiamata a `tile_barrier::wait` sospende l'esecuzione del thread corrente finché tutti thread nella stessa sezione non raggiungono la chiamata a `tile_barrier::wait`.  Non è possibile garantire l'ordine in cui verranno eseguiti i thread, solo che nessun thread nella sezione verrà eseguito dopo la chiamata a `tile_barrier::wait` finché tutti thread non hanno raggiunto la chiamata.  Ciò significa che tramite il metodo `tile_barrier::wait`, si possono eseguire processi sezione\-dopo\-sezione anziché thread\-dopo\-thread.  Un tipico algoritmo di partizionamento contiene il codice per inizializzare la memoria `tile_static` per l'intera sezione seguito da una chiamata a `tile_barrer::wait`.  Il codice che segue `tile_barrier::wait` contiene i calcoli che richiedono l'accesso a tutti i valori di `tile_static`.  
  
-   Indicizzazione locale e globale.  È possibile accedere all'indice del thread relativo all'intero oggetto `array` o `array_view` e all'indice relativo alla sezione.  L'utilizzo dell'indice locale può rendere più facile la lettura e il debug del codice.  In genere, si utilizza l'indicizzazione locale per accedere alle variabili `tile_static` e l'indicizzazione globale per accedere alle variabili `array` e `array_view`.  
  
-   [Classe tiled\_extent](../../parallel/amp/reference/tiled-extent-class.md) e [Classe tiled\_index](../../parallel/amp/reference/tiled-index-class.md).  Si utilizza un oggetto `tiled_extent` anziché un oggetto `extent` nella chiamata `parallel_for_each`.  Si utilizza un oggetto `tiled_index` anziché un oggetto `index` nella chiamata `parallel_for_each`.  
  
 Per sfruttare il sezionamento, l'algoritmo deve suddividere il dominio di calcolo in sezioni e quindi copiare i dati della sezione nelle variabili `tile_static` per un accesso più veloce.  
  
## Esempio di indici globali, di sezione e locali  
 Il diagramma seguente rappresenta una matrice 8x9 di dati disposti in sezioni 2x3.  
  
 ![Matrice 8 per 9 suddivisa in sezioni 2 per 3](../../parallel/amp/media/usingtilesmatrix.png "UsingTilesMatrix")  
  
 Nell'esempio seguente vengono visualizzati gli indici globali, di sezione e locali di questa sezione di matrice.  Un oggetto `array_view` viene creato tramite gli elementi di tipo `Description`.  La `Description` utilizza gli indici globali, di sezione e locali dell'elemento della matrice.  Il codice nella chiamata a `parallel_for_each` imposta i valori degli indici globali, di sezione e locali di ogni elemento.  L'output visualizza i valori nelle strutture `Description`.  
  
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
    int colorValue = (color == 0) ? 4 : 2;  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorValue);  
}  
  
// A helper function for formatting the output.  
void SetConsoleSize(int height, int width) {  
    COORD coord; coord.X = width; coord.Y = height;  
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
    SMALL_RECT* rect = new SMALL_RECT();  
    rect->Left = 0; rect->Top = 0; rect->Right = width; rect->Bottom = height;  
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, rect);  
}  
  
// This method creates an 8x9 matrix of Description structures. In the call to parallel_for_each, the structure is updated   
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
  
 Il lavoro principale dell'esempio è nella definizione dell'oggetto `array_view` e nella chiamata a `parallel_for_each`.  
  
1.  Il vettore di strutture `Description` viene copiato in un oggetto `array_view` 8x9.  
  
2.  Il metodo `parallel_for_each` viene chiamato con un oggetto `tiled_extent` come dominio di calcolo.  L'oggetto `tiled_extent` viene creato chiamando il metodo `extent::tile()` della variabile `descriptions`.  I parametri di tipo della chiamata a `extent::tile()`, `<2,3>`, specificano che sono state create sezioni 2x3.  Pertanto, la matrice 8x9 viene sezionata in 12 sezioni, quattro righe e tre colonne.  
  
3.  Il metodo `parallel_for_each` viene chiamato utilizzando un oggetto `tiled_index<2,3>` \(`t_idx`\) come indice.  I parametri di tipo dell'indice \(`t_idx`\) devono corrispondere con i parametri di tipo del dominio di calcolo \(`descriptions.extent.tile< 2, 3>()`\).  
  
4.  Quando ogni thread viene eseguito, l'indice `t_idx` restituisce informazioni riguardo alla sezione in cui è il thread \(proprietà di`tiled_index::tile` \) e la posizione del thread nella sezione \(proprietà di`tiled_index::local` \).  
  
## Sincronizzazione della sezione—tile\_static e tile\_barrier::wait  
 Nell'esempio precedente viene illustrato il layout e gli indici della sezione, ma non è di per sé molto utile.  Il sezionamento risulta utile quando le sezioni sono parti integranti dell'algoritmo e sfruttano le variabili `tile_static`.  Poiché tutti i thread in una sezione hanno accesso alle variabili `tile_static`, le chiamate a `tile_barrier::wait` vengono utilizzate per sincronizzare l'accesso alle variabili `tile_static`.  Sebbene tutti i thread in una sezione abbiano accesso alle variabili `tile_static`, non esiste alcun ordine garantito dell'esecuzione dei thread nella sezione.  Di seguito viene illustrato come utilizzare le variabili `tile_static` e il metodo `tile_barrier::wait` per calcolare il valore medio di ogni sezione.  Di seguito sono riportati i punti chiave per comprendere l'esempio:  
  
1.  I dati vengono memorizzati in una matrice 8x8.  
  
2.  La dimensione della sezione è 2x2.  Verrà creata una griglia 4x4 di sezioni e le medie possono essere archiviate in una matrice 4x4 utilizzando un oggetto `array`.  Esiste solo un numero limitato di tipi che è possibile acquisire per riferimento in una funzione AMP\-limitata.  La classe `array` è una di essi.  
  
3.  La dimensione della matrice e la dimensione del campione vengono definite utilizzando le istruzioni `#define`, perché i parametri di tipo in `array`, `array_view`, `extent`, e `tiled_index` devono essere valori costanti.  È inoltre possibile utilizzare le dichiarazioni `const int static`.  Come vantaggio aggiuntivo, è semplice modificare la dimensione del campione per calcolare il valore medio fra le sezioni 4x4.  
  
4.  Una matrice `tile_static` 2x2 di valori float viene dichiarata per ogni sezione.  Sebbene la dichiarazione sia nel percorso del codice per ogni thread, solo un vettore viene creato per ogni elemento della matrice.  
  
5.  Esiste una riga di codice per copiare i valori in ciascuna sezione nel vettore `tile_static`.  Per ogni thread, dopo che il valore viene copiato nel vettore, l'esecuzione del thread viene arrestata a causa della chiamata a `tile_barrier::wait`.  
  
6.  Quando tutti i thread in una sezione hanno raggiunto la barriera, la media può essere calcolata.  Poiché il codice viene eseguito per ogni thread, è presente un'istruzione `if` per calcolare la media solo su un thread.  La media viene memorizzata nella variabile averages.  La barriera è essenzialmente il costrutto che controlla i calcoli per sezione, così come è possibile utilizzare un ciclo `for`.  
  
7.  I dati nella variabile `averages`, poiché è un oggetto `array`, devono essere copiati nell'host.  In questo esempio viene utilizzato l'operatore di conversione del vettore.  
  
8.  Nell'esempio completo, è possibile modificare SAMPLESIZE a 4 e il codice viene eseguito correttamente senza altre modifiche.  
  
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
  
## Race condition  
 Si può pensare di creare una variabile `tile_static` chiamata `total` e di incrementare tale variabile per ogni thread, come segue:  
  
```cpp  
  
// Do not do this.  
tile_static float total;  
total += matrix[t_idx];  
t_idx.barrier.wait();  
averages(t_idx.tile[0],t_idx.tile[1]) /= (float) (SAMPLESIZE * SAMPLESIZE);  
  
```  
  
 Il primo problema con questo approccio è che le variabili `tile_static` non possono avere inizializzatori.  Il secondo problema è che esiste una race condition nell'assegnazione a `total`, poiché tutti thread nella sezione accedono alla variabile in nessun ordine specifico.  È possibile programmare un algoritmo per consentire solo ad un thread di accedere al totale ad ogni barriera, come indicato di seguito.  Tuttavia, questa soluzione non è estensibile.  
  
```cpp  
  
// Do not do this.  
tile_static float total;  
if (t_idx.local[0] == 0 && t_idx.local[1] == 0) {  
    total = matrix[t_idx];  
}  
t_idx.barrier.wait();  
  
if (t_idx.local[0] == 0 && t_idx.local[1] == 1) {  
    total += matrix[t_idx];  
}  
t_idx.barrier.wait();  
  
// etc.  
  
```  
  
## Limiti di memoria  
 Esistono due tipi di accesso alla memoria che devono essere sincronizzati—l'accesso alla memoria globale e l'accesso alla memoria `tile_static`.  Un oggetto `concurrency::array` alloca solo memoria globale.  Un `concurrency::array_view` può fare riferimento alla memoria globale, alla memoria `tile_static`, o entrambi, a seconda di come è stata creato.  Esistono due tipi di memoria che devono essere sincronizzati:  
  
-   memoria globale  
  
-   `tile_static`  
  
 Un *limite di memoria* garantisce che gli accessi alla memoria siano disponibili ad altri thread nella sezione del thread, e che questi accessi alla memoria vengono eseguiti secondo l'ordine del programma.  Per garantire questa operazione, i compilatori e i processori non riordinano le letture e le scritture lungo il limite.  In Amp C\+\+, un limite di memoria viene creato da una chiamata a uno dei seguenti metodi:  
  
-   [Metodo tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md): Crea un limite sia intorno alla memoria `tile_static` sia alla globale.  
  
-   [Metodo tile\_barrier::wait\_with\_all\_memory\_fence](../Topic/tile_barrier::wait_with_all_memory_fence%20Method.md): Crea un limite sia intorno alla memoria `tile_static` sia alla globale.  
  
-   [Metodo tile\_barrier::wait\_with\_global\_memory\_fence](../Topic/tile_barrier::wait_with_global_memory_fence%20Method.md): Crea un limite solo intorno alla memoria globale.  
  
-   [Metodo tile\_barrier::wait\_with\_tile\_static\_memory\_fence](../Topic/tile_barrier::wait_with_tile_static_memory_fence%20Method.md): Crea un limite solo intorno alla memoria `tile_static`.  
  
 Chiamando il limite specifico richiesto si possono migliorare le prestazioni dell'applicazione.  Il tipo di limite influisce su come il compilatore e l'hardware riordinano le istruzioni.  Ad esempio, se si utilizza un limite di memoria globale, si applica solo agli accessi di memoria globale e pertanto, il compilatore e l'hardware possono riordinare le letture e le scritture alle variabili `tile_static` sui due lati del limite.  
  
 Nell'esempio seguente, la barriera sincronizza le scritture in `tileValues`, una variabile `tile_static`.  In questo esempio, viene chiamato `tile_barrier::wait_with_tile_static_memory_fence` anziché `tile_barrier::wait`.  
  
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
  
```  
  
## Vedere anche  
 [C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Parola chiave tile\_static](../../cpp/tile-static-keyword.md)