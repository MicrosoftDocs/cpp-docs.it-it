---
title: Panoramica di C++ AMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- C++ Accelerated Massive Parallelism, requirements
- C++ Accelerated Massive Parallelism, architecture
- C++ AMP
- C++ Accelerated Massive Parallelism, overview
- C++ Accelerated Massive Parallelism
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f7cbfd0e8b9ef95aac083b367980571c5535e6a7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599042"
---
# <a name="c-amp-overview"></a>Cenni preliminari su C++ AMP
C++ Accelerated Massive Parallelism (C++ AMP) accelera l'esecuzione del codice C++ sfruttando hardware parallelo, ad esempio un'unità di elaborazione grafica (GPU) in una scheda grafica discreta. Tramite AMP C++, è possibile codificare algoritmi di dati multidimensionali in modo che sia possibile accelerare l'esecuzione tramite il parallelismo su hardware eterogeneo. Il modello di programmazione C++ AMP include le matrici multidimensionali, l'indicizzazione, il trasferimento di memoria, l'affiancamento e una libreria di funzioni matematiche. È possibile usare le estensioni del linguaggio C++ AMP per controllare il modo in cui i dati vengono spostati dalla CPU alla GPU e viceversa, in modo che sia possibile migliorare le prestazioni.  
  
## <a name="system-requirements"></a>Requisiti di sistema  
  
- Windows 7, Windows 8, Windows Server 2008 R2 o Windows Server 2012  
  
- 11.0 a livello di funzionalità di DirectX 11 o versione successiva dell'hardware  
  
- Per eseguire il debug nell'emulatore software, è necessario Windows 8 o Windows Server 2012. Per eseguire il debug nell'hardware, è necessario installare i driver per la scheda grafica. Per altre informazioni, vedere [debug del codice GPU](/visualstudio/debugger/debugging-gpu-code).  
  
## <a name="introduction"></a>Introduzione  
 
I due esempi seguenti illustrano i componenti principali di C++ AMP. Si supponga di voler aggiungere gli elementi corrispondenti di due matrici unidimensionali. Ad esempio, è possibile aggiungere `{1, 2, 3, 4, 5}` e `{6, 7, 8, 9, 10}` ottenere `{7, 9, 11, 13, 15}`. Senza l'utilizzo di C++ AMP, è possibile scrivere il codice seguente per aggiungere i numeri e visualizzare i risultati.  
  
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
  
Come indicato di seguito sono riportate le parti importanti del codice:  
  
- Dati: I dati è costituito da tre matrici. Tutti hanno la stessa priorità (uno) e lunghezza (cinque).  
  
- Iterazione: Il primo `for` ciclo fornisce un meccanismo per scorrere gli elementi nelle matrici. Il codice che si vuole eseguire per calcolare le somme è contenuto nel primo `for` blocco.  
  
- Indice: La `idx` variabile accede ai singoli elementi delle matrici.  
  
 Uso di C++ AMP, è possibile scrivere il codice seguente invece.  
  
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
  
Gli stessi elementi base sono presenti, ma vengono utilizzati costrutti C++ AMP:  
  
- Dati: Si utilizzano matrici C++ per creare tre C++ AMP [array_view](../../parallel/amp/reference/array-view-class.md) oggetti. Si forniti quattro valori per costruire un' `array_view` oggetti: i valori dei dati, il numero di dimensioni, il tipo di elemento e la lunghezza del `array_view` oggetto in ogni dimensione. Il tipo di dimensione e vengono passati come parametri di tipo. I dati e lunghezza vengono passati come parametri del costruttore. In questo esempio, la matrice C++ che viene passata al costruttore è unidimensionale. Il numero di dimensioni e la lunghezza vengono utilizzati per costruire la forma rettangolare dei dati nel `array_view` oggetto e i dati usati per riempire la matrice di valori. La libreria di runtime include anche il [classe array](../../parallel/amp/reference/array-class.md), che ha un'interfaccia che è simile al `array_view` classe e viene descritto più avanti in questo articolo.  
  
- Iterazione: Il [funzione (C++ AMP) parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) fornisce un meccanismo per scorrere gli elementi di dati, o *dominio di calcolo*. In questo esempio, il dominio di calcolo specificato da `sum.extent`. Il codice che si vuole eseguire è contenuto in un'espressione lambda, o *funzione del kernel*. Il `restrict(amp)` indica che viene usato solo il subset del linguaggio C++ che C++ AMP può accelerare.  
  
- Indice: La [classe index](../../parallel/amp/reference/index-class.md) variabile `idx`, viene dichiarato con un rango pari a uno in modo che corrisponda il rango del `array_view` oggetto. Tramite l'indice, è possibile accedere ai singoli elementi del `array_view` oggetti.  
  
## <a name="shaping-and-indexing-data-index-and-extent"></a>Data shaping e indicizzazione dei dati: indice ed extent  
 
È necessario definire i valori dei dati e dichiararne la forma dei dati prima di poter eseguire il codice kernel. Tutti i dati viene definito come una matrice (rettangolare), ed è possibile definire la matrice per avere qualsiasi classificazione (numero di dimensioni). I dati possono essere di qualsiasi dimensione in una qualsiasi delle dimensioni.  
  
### <a name="index-class"></a>Classe index  
Il [classe index](../../parallel/amp/reference/index-class.md) specifica una posizione nel `array` o `array_view` incapsulando l'offset dall'origine in ciascuna dimensione in un unico oggetto. Quando si accede a una posizione nella matrice, si passa un' `index` oggetto per l'operatore di indicizzazione, `[]`, invece di un elenco di indici integer. È possibile accedere agli elementi in ogni dimensione utilizzando la [array:: operator () (operatore](reference/array-class.md#operator_call) o nella [array_view::operator() operatore](reference/array-view-class.md#operator_call).  
  
L'esempio seguente crea un indice unidimensionale che specifica il terzo elemento in una matrice unidimensionale `array_view` oggetto. L'indice viene utilizzato per stampare il terzo elemento di `array_view` oggetto. L'output è 3.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5};  
array_view<int, 1> a(5, aCPP);

index<1> idx(2);

std::cout << a[idx] << "\n";    
// Output: 3  
```  
  
L'esempio seguente crea un indice bidimensionale che specifica l'elemento in cui la riga = 1 e la colonna = 2 in un oggetto bidimensionale `array_view` oggetto. Il primo parametro di `index` costruttore è la componente riga e il secondo parametro è la componente colonna. L'output è 6.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5, 6};  
array_view<int, 2> a(2, 3, aCPP);  
  
index<2> idx(1, 2);  
  
std::cout <<a[idx] << "\n";    
// Output: 6  
```  
  
L'esempio seguente crea un indice tridimensionale che specifica l'elemento in cui la profondità = 0, riga = 1 e la colonna = 3 in un oggetto tridimensionale `array_view` oggetto. Si noti che il primo parametro è la componente profondità, il secondo parametro è la componente riga e il terzo parametro è la componente colonna. L'output è 8.  
  
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
Il [classe extent](../../parallel/amp/reference/extent-class.md) specifica la lunghezza dei dati in ogni dimensione delle `array` o `array_view` oggetto. È possibile creare un extent e utilizzarlo per creare un `array` o `array_view` oggetto. È anche possibile recuperare l'extent di un oggetto esistente `array` o `array_view` oggetto. Nell'esempio seguente viene stampato la lunghezza dell'extent in ogni dimensione di un `array_view` oggetto.  
  
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
  
L'esempio seguente crea un `array_view` oggetto che ha gli stessi dimensioni dell'oggetto nell'esempio precedente, ma in questo esempio Usa un' `extent` oggetto anziché usare i parametri espliciti nel `array_view` costruttore.  
  
```cpp  
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};  
extent<3> e(2, 3, 4);

array_view<int, 3> a(e, aCPP);

std::cout << "The number of columns is " << a.extent[2] << "\n";  
std::cout << "The number of rows is " << a.extent[1] << "\n";  
std::cout << "The depth is " << a.extent[0] << "\n";  
```  
  
## <a name="moving-data-to-the-accelerator-array-and-arrayview"></a>Lo spostamento dei dati all'acceleratore: array e array_view  
 
Due contenitori di dati utilizzati per spostare i dati nell'acceleratore sono definiti nella libreria di runtime. Sono le [classe array](../../parallel/amp/reference/array-class.md) e il [classe array_view](../../parallel/amp/reference/array-view-class.md). Il `array` classe è una classe contenitore che crea una copia completa dei dati quando l'oggetto viene costruito. Il `array_view` classe è una classe wrapper che copia i dati quando la funzione del kernel accede ai dati. Quando sono necessari i dati sul dispositivo di origine i dati vengono copiati nuovamente.  
  
### <a name="array-class"></a>Classe array  
Quando un `array` costruito, una copia completa dei dati viene creata sull'acceleratore se si usa un costruttore che include un puntatore al set di dati. La funzione del kernel modifica la copia sull'acceleratore. Al termine dell'esecuzione della funzione del kernel, è necessario copiare i dati nella struttura di dati di origine di. Nell'esempio seguente moltiplica ogni elemento in un vettore per 10. Al termine, la funzione del kernel di `vector conversion operator` viene utilizzato per copiare i dati nell'oggetto vector.  
  
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
Il `array_view` ha quasi gli stessi membri di `array` classe, ma il comportamento sottostante non è uguale. I dati passati per il `array_view` costruttore non verrà replicato nella GPU come nel caso di un `array` costruttore. Al contrario, i dati vengono copiati nell'acceleratore quando viene eseguita la funzione del kernel. Pertanto, se si creano due `array_view` oggetti che utilizzano gli stessi dati, entrambi `array_view` oggetti si riferiscono allo stesso spazio di memoria. Quando si esegue questa operazione, è necessario sincronizzare qualsiasi accesso multithreading. Il principale vantaggio dell'uso di `array_view` classe è che i dati vengono spostati solo se è necessario.  
  
### <a name="comparison-of-array-and-arrayview"></a>Confronto tra array e array_view  
Nella tabella seguente sono riepilogate le analogie e differenze tra il `array` e `array_view` classi.  
  
|Descrizione|array (classe)|array_view (classe)|  
|-----------------|-----------------|-----------------------|  
|Quando il numero di dimensioni viene determinato|In fase di compilazione.|In fase di compilazione.|  
|Quando l'extent viene determinato|In fase di esecuzione.|In fase di esecuzione.|  
|Forma|Rettangolare.|Rettangolare.|  
|Archiviazione dei dati|È un contenitore di dati.|È un wrapper di dati.|  
|Copia|Esplicita e copia completa alla definizione.|Copia implicita quando vi si accede dalla funzione del kernel.|  
|Recupero dei dati|Copiare i dati di matrice a un oggetto nel thread della CPU.|Dall'accesso diretto il `array_view` dell'oggetto oppure chiamando il [metodo array_view:: Synchronize](reference/array-view-class.md#synchronize) per continuare ad accedere ai dati nel contenitore originale.|  
  
### <a name="shared-memory-with-array-and-arrayview"></a>Memoria condivisa con array e array_view  
Memoria condivisa è la memoria che è possibile accedere dal tasto di scelta rapida sia la CPU. L'utilizzo della memoria condivisa Elimina o riduce notevolmente il sovraccarico di copia dei dati tra la CPU e i tasti di scelta rapida. Anche se la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e i tasti di scelta rapida e in caso contrario, un comportamento indefinito.  
  
`array` gli oggetti sono utilizzabile per specificare un controllo accurato sull'utilizzo della memoria condivisa se il tasto di scelta rapida associato supporta. Se un tasto di scelta rapida supporta memoria condivisa è determinato dall'acceleratore [supports_cpu_shared_memory](reference/accelerator-class.md#supports_cpu_shared_memory) proprietà, che restituisce **true** quando la memoria condivisa è supportata. Se la memoria condivisa è supportata, il valore predefinito [enumerazione access_type](reference/concurrency-namespace-enums-amp.md#access_type) per la memoria delle allocazioni nell'acceleratore è determinato dal `default_cpu_access_type` proprietà. Per impostazione predefinita `array` e `array_view` gli oggetti hanno lo stesso `access_type` del database primario associato `accelerator`.  
  
Impostando il [membro dati Array:: cpu_access_type](reference/array-class.md#cpu_access_type) proprietà di un `array` in modo esplicito, è possibile esercitare un controllo preciso su come la memoria condivisa viene utilizzata, in modo da poter ottimizzare l'app per le prestazioni dell'hardware caratteristiche, basate su modelli di accesso della memoria del relativo kernel di calcolo. Un' `array_view` riflette lo stesso `cpu_access_type` come la `array` cui è associato; oppure, se array_view viene costruito senza un'origine dati, relative `access_type` riflette l'ambiente che ne determina innanzitutto l'allocare spazio di archiviazione. Vale a dire, se prima di tutto, vi si accede dall'host (CPU), quindi si comporta come se si sono stato creato su un'origine dati di CPU e condivisioni il `access_type` del `accelerator_view` associato dall'acquisizione; tuttavia, se questo viene prima accedere da un `accelerator_view`, quindi si comporta come se fosse creati nel corso di un' `array` creati su esso `accelerator_view` e condivide le `array`del `access_type`.  
  
Esempio di codice seguente viene illustrato come determinare se il tasto di scelta rapida predefinito supporta la memoria condivisa e quindi vengono create varie matrici con configurazioni di cpu_access_type differenti.  
  
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
  
## <a name="executing-code-over-data-parallelforeach"></a>Codice in esecuzione sui dati: parallel_for_each  
 
Il [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) funzione definisce il codice che si desidera eseguire nell'acceleratore sui dati nel `array` o `array_view` oggetto. Si consideri il codice riportato di seguito dell'introduzione di questo argomento.  
  
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
  
Il *dominio di calcolo* è un `extent` oggetto o un `tiled_extent` oggetto che definisce il set di thread da creare per l'esecuzione parallela. Un thread viene generato per ogni elemento nel dominio di calcolo. In questo caso, il `extent` oggetto è unidimensionale e ha cinque elementi. Pertanto, vengono avviati cinque thread.  
  
Il *espressione lambda* definisce il codice da eseguire su ogni thread. La clausola di acquisizione `[=]`, specifica che il corpo dell'espressione lambda accede a tutte le variabili acquisite per valore, che in questo caso vengono `a`, `b`, e `sum`. In questo esempio, l'elenco di parametri crea una matrice unidimensionale `index` variabile denominata `idx`. Il valore della `idx[0]` va da 0 nel primo thread e aumenta di uno in ciascun thread successivo. Il `restrict(amp)` indica che viene usato solo il subset del linguaggio C++ che C++ AMP può accelerare.  Le limitazioni delle funzioni che hanno il modificatore restrict sono descritte nel [restrict (AMP C++)](../../cpp/restrict-cpp-amp.md). Per altre informazioni, vedere, [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).  
  
L'espressione lambda può includere il codice da eseguire o può chiamare una funzione del kernel separata. La funzione del kernel deve includere il `restrict(amp)` modificatore. L'esempio seguente è equivalente all'esempio precedente, ma chiama una funzione del kernel separata.  
  
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
  
## <a name="accelerating-code-tiles-and-barriers"></a>Codice accelerato: Sezioni e barriere  

È possibile ottenere un'accelerazione aggiuntiva utilizzando l'affiancamento. Affiancamento divide i thread in sottoinsiemi rettangolari uguali o *riquadri*. È determinare la dimensione corretta della sezione basata su set di dati e l'algoritmo di codifica. Per ogni thread, è possibile utilizzare il *global* posizione di un elemento di dati relativo all'intero `array` o `array_view` e l'accesso al *locale* posizione rispetto alla sezione. Utilizzando il valore di indice locale semplifica il codice perché non è necessario scrivere il codice per convertire i valori di indice da globale a locale. Per utilizzare l'affiancamento, chiamare il [metodo extent:: Tile](reference/extent-class.md#tile) nel dominio di calcolo il `parallel_for_each` metodo e utilizzare un [tiled_index](../../parallel/amp/reference/tiled-index-class.md) oggetto nell'espressione lambda.  
  
Nelle applicazioni tipiche, gli elementi in un riquadro sono correlati in qualche modo e il codice deve accedere e tenere traccia dei valori nella sezione. Usare la [parola chiave tile_static](../../cpp/tile-static-keyword.md) parola chiave e il [tile_barrier:: Wait (metodo)](reference/tile-barrier-class.md#wait) per eseguire questa operazione. Una variabile con il **tile_static** parola chiave ha un ambito in un'intera sezione, e viene creata un'istanza della variabile per ogni sezione. È necessario gestire la sincronizzazione dell'accesso riquadro thread per la variabile. Il [metodo tile_barrier:: Wait](reference/tile-barrier-class.md#wait) interrompe l'esecuzione del thread corrente fino a quando tutti i thread nella sezione hanno raggiunto la chiamata a `tile_barrier::wait`. Pertanto è possibile accumulare valori il riquadro usando **tile_static** variabili. È quindi possibile completare tutti i calcoli che richiedono l'accesso a tutti i valori.  
  
Il diagramma seguente rappresenta una matrice bidimensionale di dati disposti in sezioni di campionamento.  
  
![Indicizzare i valori in un'estensione affiancata](../../parallel/amp/media/camptiledgridexample.png "camptiledgridexample")  
  
L'esempio di codice seguente usa i dati di campionamento dal diagramma precedente. Il codice sostituisce ogni valore nella sezione per la media dei valori nel riquadro.  
  
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
 
AMP C++ include due librerie matematiche. La libreria della precisione doppia nel [Concurrency:: precise_math Namespace](../../parallel/amp/reference/concurrency-precise-math-namespace.md) fornisce il supporto per le funzioni a precisione doppia. Fornisce inoltre il supporto per le funzioni a precisione singola, anche se è ancora necessario supporto a precisione doppia nell'hardware. La conformità con i [specifica C99 (ISO/IEC 9899)](http://go.microsoft.com/fwlink/p/?linkid=225887). Tasto di scelta rapida deve supportare la precisione doppia completa. È possibile determinare se esegue l'operazione controllando il valore della [membro dati Accelerator:: supports_double_precision](reference/accelerator-class.md#supports_double_precision). La libreria del calcolo veloce, nelle [Concurrency:: fast_math Namespace](../../parallel/amp/reference/concurrency-fast-math-namespace.md), contiene un altro set di funzioni matematiche. Queste funzioni, che supportano solo `float` operandi, vengono eseguite più rapidamente, ma non sono precisi come quelle nella libreria matematica a precisione doppia. Le funzioni sono contenute nel \<amp_math. h > file di intestazione e tutte vengono dichiarate con `restrict(amp)`. Le funzioni nel \<cmath > file di intestazione vengono importati in entrambe le `fast_math` e `precise_math` gli spazi dei nomi. Il **limitare** parola chiave viene usata per distinguere il \<cmath > versione e la versione C++ AMP. Il codice seguente calcola il logaritmo in base 10, utilizzando il metodo veloce, di ogni valore nel dominio di calcolo.  

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
  
## <a name="graphics-library"></a>Libreria grafica  
 
AMP C++ include una libreria grafica progettata per la programmazione grafica accelerata. Questa libreria viene usata solo nei dispositivi che supportano funzionalità grafiche native. I metodi sono contenuti i [Concurrency:: Graphics Namespace](../../parallel/amp/reference/concurrency-graphics-namespace.md) e sono contenuti nel \<amp_graphics. h > file di intestazione. I componenti principali della libreria grafica sono:  
  
- [Classe texture](../../parallel/amp/reference/texture-class.md): È possibile usare la classe texture per creare trame dalla memoria o da un file. Le trame sono simili alle matrici perché contengono dati e sono simili ai contenitori della libreria Standard C++ rispetto alla costruzione di copia e assegnazione. Per altre informazioni, vedere [Contenitori della libreria standard C++](../../standard-library/stl-containers.md). I parametri del modello per il `texture` classe sono il tipo di elemento e il numero di dimensioni. La classificazione può essere 1, 2 o 3. Il tipo di elemento può essere uno dei tipi di vettori short che sono descritte più avanti in questo articolo.  
  
- [Classe writeonly_texture_view](../../parallel/amp/reference/writeonly-texture-view-class.md): fornisce l'accesso in sola lettura a qualsiasi trama.  
  
- [Breve vettore di libreria](http://msdn.microsoft.com/en-us/4c4f5bed-c396-493b-a238-c347563f645f): definisce un set di tipi vettore short di lunghezza 2, 3 e 4 basati sul **int**, `uint`, **float**, **double**, [norm](../../parallel/amp/reference/norm-class.md), o [unorm](../../parallel/amp/reference/unorm-class.md).  
  
## <a name="universal-windows-platform-uwp-apps"></a>App di Universal Windows Platform (UWP)  
 
Come altre librerie di C++, è possibile utilizzare AMP C++ nelle App UWP. Questi articoli descrivono come includere codice C++ AMP nelle App che viene creato utilizzando C++, c#, Visual Basic o JavaScript:  
  
- [Uso di C++ AMP in app UWP](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)  
  
- [Procedura dettagliata: Creazione di un componente Windows Runtime di base in C++ e chiamarlo da JavaScript](http://go.microsoft.com/fwlink/p/?linkid=249077)  
  
- [Ottimizzazione dei viaggi, un'app di Store finestra in JavaScript e C++ di Bing mappe](http://go.microsoft.com/fwlink/p/?linkid=249078)  
  
- [Come utilizzare C++ AMP da c# utilizzando il Runtime di Windows](http://go.microsoft.com/fwlink/p/?linkid=249080)  
  
- [Come utilizzare C++ AMP da c#](http://go.microsoft.com/fwlink/p/?linkid=249081)  
  
- [Chiamata di funzioni native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md)  
  
## <a name="c-amp-and-concurrency-visualizer"></a>C++ AMP e Visualizzatore di concorrenza  
 
Il Visualizzatore di concorrenze include il supporto per l'analisi delle prestazioni del codice AMP C++. Questi articoli descrivono queste funzionalità:  
  
- [Grafico dell'attività GPU](/visualstudio/profiling/gpu-activity-graph)  
  
- [Attività GPU (paging)](/visualstudio/profiling/gpu-activity-paging)  
  
- [Attività GPU (questo processo)](/visualstudio/profiling/gpu-activity-this-process)  
  
- [Attività GPU (altri processi)](/visualstudio/profiling/gpu-activity-other-processes)  
  
- [Canali (visualizzazione Thread)](/visualstudio/profiling/channels-threads-view)  
  
- [Analisi del codice AMP C++ con il Visualizzatore di concorrenza](http://go.microsoft.com/fwlink/p/?linkid=253987&clcid=0x409)  
  
## <a name="performance-recommendations"></a>Raccomandazioni sulle prestazioni  
 
Modulo e la divisione di interi senza segno hanno prestazioni significativamente migliori rispetto a modulo e la divisione di interi con segno. È consigliabile usare valori interi senza segno quando possibile.  
  
## <a name="see-also"></a>Vedere anche  
 
[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
[Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)   
[Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)   
[Programmazione parallela nel Blog del codice nativo](http://go.microsoft.com/fwlink/p/?linkid=238472)