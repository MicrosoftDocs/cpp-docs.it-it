---
title: Panoramica di C++ AMP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, requirements
- C++ Accelerated Massive Parallelism, architecture
- C++ AMP
- C++ Accelerated Massive Parallelism, overview
- C++ Accelerated Massive Parallelism
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
caps.latest.revision: "60"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 96c794ee66f658ca211dfa5d95525e72daf296c8
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="c-amp-overview"></a>Cenni preliminari su C++ AMP
C++ Accelerated Massive Parallelism (C++ AMP) accelera l'esecuzione del codice C++, sfruttando la possibilità di hardware di dati in parallelo, ad esempio un'unità di elaborazione grafica (GPU) su una scheda grafica discreta. Se si utilizza C++ AMP, è possibile codificare gli algoritmi di dati multidimensionali in modo che può essere accelerata esecuzione con parallelismo in hardware eterogeneo. Il modello di programmazione C++ AMP include le matrici multidimensionali, l'indicizzazione, il trasferimento di memoria, affiancamento e una libreria di funzioni matematiche. È possibile utilizzare le estensioni del linguaggio C++ AMP per controllare la modalità di spostamento dati dalla CPU per la GPU e viceversa, in modo che è possibile migliorare le prestazioni.  
  
## <a name="system-requirements"></a>Requisiti di sistema  
  
- [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/reference/includes/win8_md.md)], [!INCLUDE[winsvr08_r2](../../parallel/amp/includes/winsvr08_r2_md.md)] o [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)]  
  
-   11.0 livello di funzionalità di DirectX 11 o versione successiva hardware  
  
-   Per il debug nell'emulatore software, [!INCLUDE[win8](../../build/reference/includes/win8_md.md)] o [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)] è obbligatorio. Per eseguire il debug nell'hardware, è necessario installare i driver per la scheda grafica. Per ulteriori informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).  
  
## <a name="introduction"></a>Introduzione  
 I due esempi seguenti vengono illustrati i componenti principali di C++ AMP. Si supponga che si desidera aggiungere gli elementi corrispondenti di due matrici unidimensionali. Potrebbe ad esempio, si desidera aggiungere `{1, 2, 3, 4, 5}` e `{6, 7, 8, 9, 10}` per ottenere `{7, 9, 11, 13, 15}`. Senza l'utilizzo di C++ AMP, è possibile scrivere il codice seguente per aggiungere i numeri e visualizza i risultati.  
  
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
  
 Le parti importanti del codice sono i seguenti:  
  
-   Dati: I dati è costituito da tre matrici. Tutti hanno lo stesso rango (uno) e lunghezza (5).  
  
-   Iterazione: La prima `for` ciclo fornisce un meccanismo per scorrere gli elementi nelle matrici. Il codice che si desidera eseguire per calcolare la somma è contenuto nel primo `for` blocco.  
  
-   Indice: Il `idx` variabile accede ai singoli elementi delle matrici.  
  
 Utilizza C++ AMP, è possibile scrivere il codice seguente invece.  
  
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
  
 Sono presenti gli stessi elementi di base, ma vengono utilizzati costrutti C++ AMP:  
  
-   Dati: Utilizzare matrici C++ per creare tre C++ AMP [array_view](../../parallel/amp/reference/array-view-class.md) oggetti. Vengono forniti quattro valori per costruire un `array_view` oggetto: i valori dei dati, il numero di dimensioni, il tipo di elemento e la lunghezza del `array_view` oggetto in ogni dimensione. Il numero di dimensioni e il tipo vengono passati come parametri di tipo. I dati e lunghezza vengono passati come parametri del costruttore. In questo esempio, la matrice di C++ che viene passata al costruttore è unidimensionale. Il numero di dimensioni e la lunghezza vengono utilizzate per costruire la forma rettangolare dei dati di `array_view` oggetto e i valori vengono utilizzati per compilare la matrice di dati. La libreria di runtime include anche il [classe array](../../parallel/amp/reference/array-class.md), che dispone di un'interfaccia simile di `array_view` classe e viene illustrato più avanti in questo articolo.  
  
-   Iterazione: Il [parallel_for_each (funzione) (C++ AMP)](reference/concurrency-namespace-functions-amp.md#parallel_for_each) fornisce un meccanismo per scorrere gli elementi di dati, o *calcolo dominio*. In questo esempio viene specificato il dominio di calcolo da `sum.extent`. Il codice che si desidera eseguire è contenuto in un'espressione lambda, o *funzione kernel*. Il `restrict(amp)` indica che viene utilizzato solo il subset del linguaggio C++ che C++ AMP può accelerare.  
  
-   Indice: Il [classe index](../../parallel/amp/reference/index-class.md) variabile, `idx`, viene dichiarato con un numero di dimensioni di un oggetto a cui corrisponde il rango del `array_view` oggetto. Tramite l'indice, è possibile accedere ai singoli elementi del `array_view` oggetti.  
  
## <a name="shaping-and-indexing-data-index-and-extent"></a>Data Shaping e indicizzazione: indice e extent  
 È necessario definire i valori dei dati e dichiarare la forma dei dati prima di poter eseguire il codice del kernel. Tutti i dati viene definito come una matrice (rettangolare), ed è possibile definire la matrice per qualsiasi classificazione (numero di dimensioni). I dati possono essere di qualsiasi dimensione in una qualsiasi delle dimensioni.  
  
### <a name="index-class"></a>Classe index  
 Il [classe index](../../parallel/amp/reference/index-class.md) specifica una posizione di `array` o `array_view` oggetto incapsulando l'offset dall'origine in ogni dimensione in un unico oggetto. Quando si accede a una posizione nella matrice, è necessario passare un `index` oggetto per l'operatore di indicizzazione, `[]`, anziché un elenco di indici di tipo integer. Gli elementi in ogni dimensione è possibile accedere utilizzando il [array:: operator () (operatore](reference/array-class.md#operator_call) o [array_view::operator() operatore](reference/array-view-class.md#operator_call).  
  
 Nell'esempio seguente viene creato un indice unidimensionale che specifica il terzo elemento in una matrice unidimensionale `array_view` oggetto. L'indice viene utilizzato per stampare il terzo elemento di `array_view` oggetto. L'output è 3.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5};  
array_view<int, 1> a(5, aCPP);

index<1> idx(2);

std::cout << a[idx] << "\n";    
// Output: 3  
```  
  
 Nell'esempio seguente viene creato un indice bidimensionale che specifica l'elemento in cui la riga = 1 e la colonna = 2 in un oggetto bidimensionale `array_view` oggetto. Il primo parametro di `index` costruttore è il componente di riga e il secondo parametro è il componente di colonna. L'output è 6.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5, 6};  
array_view<int, 2> a(2, 3, aCPP);  
  
index<2> idx(1, 2);  
  
std::cout <<a[idx] << "\n";    
// Output: 6  
```  
  
 Nell'esempio seguente viene creato un indice tridimensionale che specifica l'elemento in cui la profondità = 0, riga = 1 e la colonna = 3 in un oggetto tridimensionale `array_view` oggetto. Si noti che il primo parametro è il componente di profondità, il secondo parametro è il componente di riga e il terzo parametro è il componente di colonna. L'output è 8.  
  
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
 Il [classe extent](../../parallel/amp/reference/extent-class.md) specifica la lunghezza dei dati in ogni dimensione del `array` o `array_view` oggetto. È possibile creare una misura e utilizzarla per creare un `array` o `array_view` oggetto. È inoltre possibile recuperare l'entità di un oggetto esistente `array` o `array_view` oggetto. L'esempio seguente visualizza la lunghezza dell'estensione in ogni dimensione di un `array_view` oggetto.  
  
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
  
 Nell'esempio seguente viene creato un `array_view` oggetto con lo stesso le dimensioni dell'oggetto nell'esempio precedente, ma in questo esempio viene utilizzato un `extent` oggetto anziché utilizzare i parametri espliciti nel `array_view` costruttore.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};  
extent<3> e(2, 3, 4);

array_view<int, 3> a(e, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";  
std::cout << "The number of rows is " << a.extent[1] << "\n";  
std::cout << "The depth is " << a.extent[0] << "\n";  
```  
  
## <a name="moving-data-to-the-accelerator-array-and-arrayview"></a>Lo spostamento dei dati per i tasti di scelta rapida: matrice e array_view  
 Due contenitori di dati utilizzati per spostare i dati per i tasti di scelta rapida sono definiti nella libreria di runtime. Sono di [classe array](../../parallel/amp/reference/array-class.md) e [classe array_view](../../parallel/amp/reference/array-view-class.md). Il `array` è una classe di contenitore crea una copia completa dei dati quando l'oggetto viene costruito. La `array_view` classe è una classe wrapper che copia i dati quando la funzione kernel accede ai dati. Quando sono necessari i dati sul dispositivo di origine viene copiati nuovamente i dati.  
  
### <a name="array-class"></a>Classe array  
 Quando un `array` oggetto viene costruito, una copia completa dei dati viene creata nel tasto di scelta rapida se si utilizza un costruttore che include un puntatore al set di dati. La funzione kernel modifica la copia nel tasto di scelta rapida. Al termine dell'esecuzione della funzione kernel, è necessario copiare i dati alla struttura di dati di origine. Nell'esempio seguente moltiplica ogni elemento in un vettore per 10. Al termine, la funzione kernel di `vector conversion operator` viene utilizzato per copiare i dati in un oggetto vector.  
  
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
  
### <a name="arrayview-class"></a>Classe array_view  
 Il `array_view` con quasi gli stessi membri come il `array` classe, ma il comportamento sottostante non è uguale. Dati passati al `array_view` costruttore non viene replicato sulla GPU come nel caso di un `array` costruttore. Al contrario, i dati vengono copiati al tasto di scelta rapida quando viene eseguita la funzione kernel. Pertanto, se si creano due `array_view` gli oggetti che utilizzano gli stessi dati, entrambi `array_view` due oggetti si riferiscono allo stesso spazio di memoria. Quando si esegue questa operazione, è necessario sincronizzare l'accesso multithreading. Il principale vantaggio dell'utilizzo di `array_view` classe è che i dati vengono spostati solo se è necessario.  
  
### <a name="comparison-of-array-and-arrayview"></a>Confronto di matrice e array_view  
 Nella tabella seguente sono riepilogate le analogie e differenze tra il `array` e `array_view` classi.  
  
|Descrizione|array (classe)|array_view (classe)|  
|-----------------|-----------------|-----------------------|  
|Quando rango è determinato|In fase di compilazione.|In fase di compilazione.|  
|Quando viene determinato extent|In fase di esecuzione.|In fase di esecuzione.|  
|Forma|Rettangolare.|Rettangolare.|  
|Archiviazione dei dati|È un contenitore di dati.|È un wrapper di dati.|  
|Copia|Esplicita e completa la copia della definizione.|Copia implicita quando vi si accede dalla funzione kernel.|  
|Recupero dei dati|Copiando i dati in un oggetto nel thread della CPU.|L'accesso diretto del `array_view` dell'oggetto o la chiamata di [array_view:: Synchronize (metodo)](reference/array-view-class.md#synchronize) per continuare l'accesso ai dati nel contenitore originale.|  
  
### <a name="shared-memory-with-array-and-arrayview"></a>Memoria condivisa a matrice e array_view  
 Condiviso è la memoria che è possibile accedere tramite la CPU e i tasti di scelta rapida. L'utilizzo della memoria condivisa, Elimina o riduce notevolmente il sovraccarico di copiare dati tra la CPU e i tasti di scelta rapida. Anche se la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e i tasti di scelta rapida e in caso contrario, un comportamento indefinito.  
  
 `array`Per specificare un controllo accurato l'utilizzo della memoria condivisa, se il tasto di scelta rapida associato supporta, è possono utilizzare gli oggetti. Se un tasto di scelta rapida supporta la memoria condivisa è determinato dall'acceleratore [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) proprietà, che restituisce `true` quando la memoria condivisa è supportata. Se è supportata la memoria condivisa, il valore predefinito [enumerazione access_type](reference/concurrency-namespace-enums-amp.md#access_type) per la memoria è determinato allocazioni nel tasto di scelta rapida per il `default_cpu_access_type` proprietà. Per impostazione predefinita, `array` e `array_view` oggetti eseguire nello stesso `access_type` del database primario associato `accelerator`.  
  
 Impostando il [membro dati Array:: cpu_access_type](reference/array-class.md#cpu_access_type) proprietà di un `array` in modo esplicito, è possibile con granularità fine esercizio controllare su memoria condivisa come viene utilizzato, in modo che è possibile ottimizzare l'app per le prestazioni dell'hardware caratteristiche in base agli schemi di accesso di memoria del kernel relativo calcolo. Un `array_view` riflette lo stesso `cpu_access_type` come il `array` che è associato; oppure, se viene costruito il array_view senza un'origine dati, il relativo `access_type` riflette l'ambiente che provoca innanzitutto allocare spazio di archiviazione. Vale a dire, se vi si accede prima dall'host (CPU), quindi si comporta come se si creati su un'origine dati di CPU e condivisioni di `access_type` del `accelerator_view` associati dall'acquisizione; tuttavia, se è accessibile a un `accelerator_view`, quindi si comporta come se fosse creato tramite un `array` creato su tale `accelerator_view` e condivide il `array`del `access_type`.  
  
 Esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta memoria condivisa e quindi crea numerose matrici contenenti cpu_access_type diverse configurazioni.  
  
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
  
## <a name="executing-code-over-data-parallelforeach"></a>L'esecuzione del codice dati: parallel_for_each  
 Il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) funzione definisce il codice che si desidera eseguire nel tasto di scelta rapida per i dati nel `array` o `array_view` oggetto. Si consideri il codice seguente all'introduzione di questo argomento.  
  
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
  
 Il *calcolo dominio* è un `extent` oggetto o un `tiled_extent` oggetto che definisce il set di thread da creare per l'esecuzione parallela. Un thread viene generato per ogni elemento nel dominio di calcolo. In questo caso, il `extent` oggetto unidimensionale con cinque elementi. Pertanto, vengono avviati cinque thread.  
  
 Il *espressione lambda* definisce il codice da eseguire in ogni thread. La clausola di acquisizione, `[=]`, specifica che il corpo dell'espressione lambda accede alle variabili tutti acquisite per valore, in questo caso sono `a`, `b`, e `sum`. In questo esempio, l'elenco di parametri crea una matrice unidimensionale `index` variabile denominata `idx`. Il valore di `idx[0]` sempre il primo thread uguale a 0 e aumenta di uno in ogni thread successivi. Il `restrict(amp)` indica che viene utilizzato solo il subset del linguaggio C++ che C++ AMP può accelerare.  Sono descritte le limitazioni sulle funzioni che presentano il modificatore di limitare [restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md). Per ulteriori informazioni, vedere, [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).  
  
 L'espressione lambda può includere il codice da eseguire o può chiamare una funzione kernel separato. La funzione kernel deve includere il `restrict(amp)` modificatore. L'esempio seguente è equivalente all'esempio precedente, ma chiama una funzione kernel separato.  
  
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
  
## <a name="accelerating-code-tiles-and-barriers"></a>Accelerando codice: Riquadri e barriere  

 È possibile ottenere ulteriore accelerazione affiancamento. Affiancamento divide i thread in sottoinsiemi rettangolare uguali o *riquadri*. Si determinano le dimensioni di riquadro appropriato in base a set di dati e l'algoritmo di codifica. Per ogni thread, è disponibile per il *globale* percorso di un elemento di dati rispetto all'intero `array` o `array_view` e l'accesso al *locale* percorso relativo al riquadro. Utilizzando il valore di indice locale semplifica il codice perché non è necessario scrivere il codice per convertire i valori di indice da globale a locale. Per utilizzare l'affiancamento, chiamare il [metodo extent:: Tile](reference/extent-class.md#tile) nel dominio di calcolo nel `parallel_for_each` metodo e utilizzare un [tiled_index](../../parallel/amp/reference/tiled-index-class.md) oggetto nell'espressione lambda.  
  
 In applicazioni tipiche, gli elementi in un riquadro sono correlati in qualche modo e il codice deve accedere e tenere traccia dei valori tra il riquadro. Utilizzare il [tile_static (parola chiave)](../../cpp/tile-static-keyword.md) (parola chiave) e [tile_barrier:: Wait (metodo)](reference/tile-barrier-class.md#wait) a questo scopo. Una variabile che dispone di `tile_static` parola chiave ha un ambito in un riquadro dell'intero e viene creata un'istanza della variabile per ogni sezione. È necessario gestire la sincronizzazione di riquadro thread l'accesso alla variabile. Il [metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait) interrompe l'esecuzione del thread corrente finché tutti i thread nel riquadro hanno raggiunto la chiamata a `tile_barrier::wait`. Pertanto è possibile accumulare i valori tra il riquadro utilizzando `tile_static` variabili. Sarà quindi possibile completare tutti i calcoli che richiedono l'accesso a tutti i valori.  

  
 Nel diagramma seguente rappresenta una matrice bidimensionale di campionamento dei dati che sono disposti in riquadri.  
  
 ![I valori in un'estensione affiancata](../../parallel/amp/media/camptiledgridexample.png "camptiledgridexample")  
  
 Esempio di codice seguente usa i dati di campionamento dal diagramma precedente. Il codice sostituisce ogni valore nel riquadro per la media dei valori nel riquadro.  
  
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
 C++ AMP include due librerie matematiche. La libreria e con precisione doppia nel [Namespace Concurrency:: precise_math](../../parallel/amp/reference/concurrency-precise-math-namespace.md) fornisce il supporto per le funzioni e con precisione doppia. Fornisce inoltre supporto per le funzioni e con precisione singola, anche se è comunque necessario il supporto e con precisione doppia nell'hardware. La conformità con la [specifica C99 (ISO/IEC 9899)](http://go.microsoft.com/fwlink/p/?linkid=225887). Tasto di scelta rapida deve supportare e precisione doppia completo. È possibile determinare se eseguita controllando il valore di [membro dati Accelerator:: supports_double_precision](reference/accelerator-class.md#supports_double_precision). La libreria matematica rapido, nel [Namespace Concurrency:: fast_math](../../parallel/amp/reference/concurrency-fast-math-namespace.md), contiene un altro set di funzioni matematiche. Queste funzioni, che supporta solo `float` operandi, vengono eseguite più rapidamente, ma non altrettanto precisi a quelli presenti nella libreria matematica e con precisione doppia. Le funzioni sono contenute nel \<amp_math.h > file di intestazione e tutti vengono dichiarati con `restrict(amp)`. Le funzioni nel \<cmath > file di intestazione vengono importati in entrambi i `fast_math` e `precise_math` gli spazi dei nomi. Il `restrict` parola chiave viene utilizzata per distinguere il \<cmath > versione e la versione di C++ AMP. Il codice seguente calcola il logaritmo in base 10, utilizzando il metodo rapido, di ogni valore nel dominio di calcolo.  

  
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
            logs[idx] = concurrency::fast_math::log10(logs[idx]);  
        }  
    );  
  
    for (int i = 0; i < 6; i++) {  
        std::cout << logs[i] << "\n";  
    }  
}  
  
```  
  
## <a name="graphics-library"></a>Libreria di immagini  
 C++ AMP include una libreria di immagini che è progettata per la programmazione con accelerata grafica. Questa libreria viene utilizzata solo per i dispositivi che supportano la funzionalità di immagini native. I metodi sono contenuti il [Namespace Concurrency:: Graphics](../../parallel/amp/reference/concurrency-graphics-namespace.md) e sono contenuti nel \<amp_graphics.h > file di intestazione. I componenti principali della libreria grafica sono:  
  
- [Classe texture](../../parallel/amp/reference/texture-class.md): È possibile utilizzare la classe di trama per creare le trame dalla memoria o da un file. Le trame sono simili alle matrici, poiché contengono dati e sono simili a contenitori della libreria Standard C++ rispetto all'assegnazione e la costruzione di copia. Per altre informazioni, vedere [Contenitori della libreria standard C++](../../standard-library/stl-containers.md). I parametri di modello per la `texture` classe sono il tipo di elemento e il numero di dimensioni. La classificazione può essere 1, 2 o 3. Il tipo di elemento può essere uno dei tipi di vettore short descritte più avanti in questo articolo.  
  
- [Classe writeonly_texture_view](../../parallel/amp/reference/writeonly-texture-view-class.md): fornisce l'accesso in sola lettura a qualsiasi trama.  
  
- [Breve libreria Vector](http://msdn.microsoft.com/en-us/4c4f5bed-c396-493b-a238-c347563f645f): definisce un set di tipi short vector di lunghezza 2, 3 e 4 basati su `int`, `uint`, `float`, `double`, [norm](../../parallel/amp/reference/norm-class.md), o [unorm](../../parallel/amp/reference/unorm-class.md).  
  
## <a name="includewin8appnamelongbuildincludeswin8appnamelongmdmd-apps"></a>Applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]  
 Ad esempio altre librerie di C++, è possibile utilizzare C++ AMP nel [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app. Questi articoli viene descritto come includere codice AMP C++ nelle App che viene creato utilizzando C++, c#, Visual Basic o JavaScript:  
  
- [Uso di C++ AMP nelle app di Windows Store](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)  
  
- [Procedura dettagliata: Creazione di un componente Windows Runtime di base in C++ e chiamata da JavaScript](http://go.microsoft.com/fwlink/p/?linkid=249077)  
  
- [Ottimizzazione dei viaggi, un'applicazione Windows Store in JavaScript e C++ di Bing mappe](http://go.microsoft.com/fwlink/p/?linkid=249078)  
  
- [Come utilizzare C++ AMP dall'utilizzo di Windows Runtime in c#](http://go.microsoft.com/fwlink/p/?linkid=249080)  
  
- [Come utilizzare C++ AMP da c#](http://go.microsoft.com/fwlink/p/?linkid=249081)  
  
- [Chiamata di funzioni native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md)  
  
## <a name="c-amp-and-concurrency-visualizer"></a>C++ AMP e Visualizzatore di concorrenze  
 Il Visualizzatore di concorrenza include il supporto per l'analisi delle prestazioni del codice C++ AMP. Questi articoli descrivono queste funzionalità:  
  
- [Grafico dell'attività GPU](/visualstudio/profiling/gpu-activity-graph)  
  
- [Attività GPU (paging)](/visualstudio/profiling/gpu-activity-paging)  
  
- [Attività GPU (questo processo)](/visualstudio/profiling/gpu-activity-this-process)  
  
- [Attività GPU (altri processi)](/visualstudio/profiling/gpu-activity-other-processes)  
  
- [Canali (visualizzazione Thread)](/visualstudio/profiling/channels-threads-view)  
  
- [Analisi del codice AMP C++ con il Visualizzatore di concorrenza](http://go.microsoft.com/fwlink/p/?linkid=253987&clcid=0x409)  
  
## <a name="performance-recommendations"></a>Consigli relativi alle prestazioni  
 Modulo e la divisione di interi senza segno offrono prestazioni decisamente migliori rispetto modulo e la divisione di interi con segno. È consigliabile utilizzare interi senza segno, quando possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)   
 [Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)   
 [Programmazione parallela in codice nativo Blog](http://go.microsoft.com/fwlink/p/?linkid=238472)
