---
title: "Cenni preliminari su C++ AMP | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ Accelerated Massive Parallelism, requisiti"
  - "C++ Accelerated Massive Parallelism, architettura"
  - "C++ AMP"
  - "C++ Accelerated Massive Parallelism, panoramica"
  - "C++ Accelerated Massive Parallelism"
ms.assetid: 9e593b06-6e3c-43e9-8bae-6d89efdd39fc
caps.latest.revision: 60
caps.handback.revision: 60
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari su C++ AMP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

C++ Accelerated Massive Parallelism (C++ AMP) accelera l'esecuzione del codice C++, sfruttando i vantaggi dell'hardware parallelo di dati, ad esempio un'unità di elaborazione grafica (GPU) su una scheda grafica. Se si utilizza C++ AMP, è possibile codificare gli algoritmi di dati multidimensionali in modo che l'esecuzione può essere accelerata procedendo utilizzando il parallelismo su hardware eterogeneo. Il modello di programmazione C++ AMP include le matrici multidimensionali, l'indicizzazione, trasferimento memoria, l'espansione e una libreria di funzioni matematiche. È possibile utilizzare le estensioni del linguaggio C++ AMP per controllare come i dati vengono spostati dalla CPU al GPU e viceversa, in modo che è possibile migliorare le prestazioni.  
  
## <a name="system-requirements"></a>Requisiti di sistema  
  
- [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/includes/win8_md.md)], [!INCLUDE[winsvr08_r2](../../parallel/amp/includes/winsvr08_r2_md.md)] o [!INCLUDE[winserver8](../../build/includes/winserver8_md.md)]  
  
-   DirectX 11 funzionalità livello 11.0 o versioni successive hardware  
  
-   Per eseguire il debug nell'emulatore software, [!INCLUDE[win8](../../build/includes/win8_md.md)] o [!INCLUDE[winserver8](../../build/includes/winserver8_md.md)] è obbligatorio. Per eseguire il debug nell'hardware, è necessario installare i driver per la scheda grafica. Per ulteriori informazioni, vedere [il debug di codice della GPU](../Topic/Debugging%20GPU%20Code.md).  
  
## <a name="introduction"></a>Introduzione  
 I due esempi seguenti illustrano i componenti principali di C++ AMP. Si supponga che si desidera aggiungere gli elementi corrispondenti dei due matrici unidimensionali. Ad esempio, possibile che si desidera aggiungere `{1, 2, 3, 4, 5}` e `{6, 7, 8, 9, 10}` per ottenere `{7, 9, 11, 13, 15}`. Senza l'utilizzo di C++ AMP, è possibile scrivere il codice seguente per aggiungere i numeri e visualizza i risultati.  
  
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
  
-   Indice: Il `idx` variabile consente di accedere ai singoli elementi delle matrici.  
  
 Utilizzo di C++ AMP, è possibile scrivere il codice seguente invece.  
  
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
 [=](index<1> idx) restrict(amp)  
    {  
        sum[idx] = a[idx] + b[idx];  
    }  
    );  
  
    // Print the results. The expected output is "7, 9, 11, 13, 15".  
    for (int i = 0; i < size; i++) {  
        std::cout << sum[i] << "\n";  
    }  
}  
  
```  
  
 Sono presenti gli stessi elementi di base, ma vengono utilizzati costrutti di C++ AMP:  
  
-   Dati: Utilizzare matrici C++ per creare tre C++ AMP [array_view](../../parallel/amp/reference/array-view-class.md) oggetti. Vengono forniti quattro valori per costruire un `array_view` oggetto: i valori dei dati, l'ordine di priorità, il tipo di elemento e la lunghezza di `array_view` oggetto in ogni dimensione. Il numero di dimensioni e il tipo vengono passati come parametri di tipo. I dati e lunghezza vengono passati come parametri del costruttore. In questo esempio, la matrice di C++ che viene passata al costruttore è unidimensionale. Il numero di dimensioni e la lunghezza vengono utilizzate per costruire la forma rettangolare dei dati di `array_view` oggetto e i valori vengono utilizzati per compilare la matrice di dati. La libreria di runtime include inoltre la [classe array](../../parallel/amp/reference/array-class.md), che dispone di un'interfaccia simile al `array_view` classe e viene discusso più avanti in questo articolo.  
  
-   Iterazione: Il [funzione parallel_for_each (C++ AMP)](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md) fornisce un meccanismo per scorrere gli elementi di dati, o *calcolo dominio*. In questo esempio viene specificato il dominio di calcolo da `sum.extent`. Il codice che si desidera eseguire è contenuto in un'espressione lambda, o *funzione kernel*. Il `restrict(amp)` indica che viene utilizzato solo il subset del linguaggio C++ che C++ AMP può accelerare.  
  
-   Indice: La [classe index](../../parallel/amp/reference/index-class.md) variabile, `idx`, viene dichiarato con una classificazione di un oggetto a cui corrisponde il rango di `array_view` oggetto. Tramite l'indice, è possibile accedere ai singoli elementi del `array_view` oggetti.  
  
## <a name="shaping-and-indexing-data-index-and-extent"></a>Data Shaping e indicizzazione: indice e l'entità  
 È necessario definire i valori dei dati e dichiarare la forma dei dati prima di poter eseguire il codice kernel. Tutti i dati viene definito come una matrice (rettangolare), ed è possibile definire la matrice per qualsiasi classificazione (numero di dimensioni). I dati possono essere di qualsiasi dimensione in una delle dimensioni.  
  
### <a name="index-class"></a>Classe index  
 La [classe index](../../parallel/amp/reference/index-class.md) Specifica una posizione di `array` o `array_view` oggetto incapsulando l'offset dall'origine in ogni dimensione in un unico oggetto. Quando si accede a una posizione nella matrice, si passa un `index` oggetto per l'operatore di indicizzazione, `[]`, anziché un elenco di indici di tipo integer. Gli elementi in ogni dimensione è possibile accedere tramite il [array:: operator () (operatore)](../Topic/array::operator\(\)%20Operator.md) o [array_view::operator() operatore](../Topic/array_view::operator\(\)%20Operator.md).  
  
 Nell'esempio seguente viene creato un indice unidimensionale che specifica il terzo elemento in una matrice unidimensionale `array_view` oggetto. L'indice viene utilizzato per stampare il terzo elemento di `array_view` oggetto. L'output è 3.  
  
```cpp  
 
int aCPP[] = {1, 2, 3, 4, 5};  
array_view<int, 1> a(5, aCPP);

index<1> idx(2);

std::cout <<a[idx] <<"\n";    
// Output: 3  
 
```  
  
 Nell'esempio seguente viene creato un indice bidimensionale che specifica l'elemento in cui la riga = 1 e la colonna = 2 in un oggetto bidimensionale `array_view` oggetto. Il primo parametro di `index` costruttore è il componente di riga e il secondo parametro è il componente di colonna. L'output è 6.  
  
```cpp  
 
int aCPP[] = {1, 2, 3,  
    4, 5, 6};  
array_view<int, 2> a(2, 3, aCPP);

index<2> idx(1, 2);

std::cout <<a[idx] <<"\n";  
// Output: 6  
 
```  
  
 Nell'esempio seguente viene creato un indice tridimensionale che specifica l'elemento in cui la profondità = 0, la riga = 1 e la colonna = 3 in un oggetto tridimensionale `array_view` oggetto. Si noti che il primo parametro è il componente di profondità, il secondo parametro è il componente di riga e il terzo parametro è il componente di colonna. L'output è 8.  
  
```cpp  
 
int aCPP[] = {  
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,   
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  
 
array_view<int, 3> a(2, 3, 4, aCPP);

// Specifies the element at 3, 1, 0.  
index<3> idx(0, 1, 3);

std::cout <<a[idx] <<"\n";  
 
// Output: 8  
 
```  
  
### <a name="extent-class"></a>Classe extent  
 La [classe extent](../../parallel/amp/reference/extent-class-cpp-amp.md) Specifica la lunghezza dei dati in ogni dimensione della `array` o `array_view` oggetto. È possibile creare un extent e utilizzarlo per creare un `array` o `array_view` oggetto. È inoltre possibile recuperare l'entità di un oggetto esistente `array` o `array_view` oggetto. L'esempio seguente visualizza la lunghezza dell'estensione in ogni dimensione di un `array_view` oggetto.  
  
```cpp  
 
int aCPP[] = {  
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,   
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  
// There are 3 rows and 4 columns, and the depth is two.  
array_view<int, 3> a(2, 3, 4, aCPP);

std::cout <<"The number of columns is " <<a.extent[2] <<"\n";  
std::cout <<"The number of rows is " <<a.extent[1] <<"\n";  
std::cout <<"The depth is " <<a.extent[0]<<"\n";  
std::cout <<"Length in most significant dimension is " <<a.extent[0] <<"\n";  
 
```  
  
 Nell'esempio seguente viene creato un `array_view` oggetto con lo stesso le dimensioni dell'oggetto nell'esempio precedente, ma in questo esempio viene utilizzato un `extent` oggetto anziché utilizzando parametri espliciti nel `array_view` costruttore.  
  
```cpp  
 
int aCPP[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};  
extent<3> e(2, 3, 4);

array_view<int, 3> a(e, aCPP);

std::cout <<"The number of columns is " <<a.extent[2] <<"\n";  
std::cout <<"The number of rows is " <<a.extent[1] <<"\n";  
std::cout <<"The depth is " <<a.extent[0] <<"\n";  
 
```  
  
## <a name="moving-data-to-the-accelerator-array-and-arrayview"></a>Lo spostamento dei dati per l'acceleratore: matrice e array_view  
 Due contenitori di dati utilizzati per spostare i dati per i tasti di scelta rapida sono definiti nella libreria di runtime. Sono la [classe array](../../parallel/amp/reference/array-class.md) e [classe array_view](../../parallel/amp/reference/array-view-class.md). La `array` classe è una classe contenitore che crea una copia completa dei dati quando viene costruito l'oggetto. La `array_view` classe è una classe wrapper che copia i dati quando la funzione kernel accede ai dati. Quando sono necessari i dati sul dispositivo di origine viene copiati nuovamente i dati.  
  
### <a name="array-class"></a>Classe array  
 Quando un `array` viene costruito l'oggetto, viene creata una copia completa dei dati sul tasto di scelta rapida se si utilizza un costruttore che include un puntatore al set di dati. La funzione kernel modifica la copia nel tasto di scelta rapida. Al termine dell'esecuzione della funzione kernel, è necessario copiare i dati alla struttura di dati di origine. Nell'esempio seguente moltiplica ogni elemento in un vettore per 10. Una volta terminata la funzione kernel, [vettore conversione operator--] brokenlink-(... Eseguire il backup /topic/array::operator%20std::Vector%3Cvalue_type%3e%20Operator.MD)is utilizzato per copiare i dati nell'oggetto vector.  
  
```cpp  
 
std::vector<int> data(5);

for (int count = 0; count <5; count++)   
{  
    data[count] = count;  
}  
 
array<int, 1> a(5, data.begin(), data.end());

 
parallel_for_each(
    a.extent, 
 [=, &a](index<1> idx) restrict(amp)  
 {  
    a[idx] = a[idx]* 10;  
 });

 
data = a;  
for (int i = 0; i <5; i++)   
{  
    std::cout <<data[i] <<"\n";  
}  
 
```  
  
### <a name="arrayview-class"></a>Classe array_view  
 Il `array_view` ha quasi gli stessi membri di `array` (classe), ma il comportamento sottostante non è lo stesso. Dati passati al `array_view` costruttore non viene replicato sulla GPU come nel caso di un `array` costruttore. Al contrario, i dati vengono copiati per i tasti di scelta rapida quando viene eseguita la funzione kernel. Pertanto, se si creano due `array_view` gli oggetti che utilizzano gli stessi dati, entrambi `array_view` oggetti si riferiscono allo stesso spazio di memoria. Quando si esegue questa operazione, è necessario sincronizzare l'accesso multithreading. Il principale vantaggio dell'utilizzo di `array_view` classe è che i dati vengono spostati solo se è necessario.  
  
### <a name="comparison-of-array-and-arrayview"></a>Confronto della matrice e array_view  
 Nella tabella seguente sono riepilogate le analogie e differenze tra il `array` e `array_view` classi.  
  
|Descrizione|array (classe)|array_view (classe)|  
|-----------------|-----------------|-----------------------|  
|Quando viene determinato rank|In fase di compilazione.|In fase di compilazione.|  
|Quando viene determinato extent|In fase di esecuzione.|In fase di esecuzione.|  
|Forma|Rettangolare.|Rettangolare.|  
|Archiviazione dei dati|È un contenitore di dati.|È un wrapper di dati.|  
|Copia|Copia esplicita e completa definizione.|Copia implicita quando vi si accede dalla funzione kernel.|  
|Recupero dei dati|Copiando i dati in un oggetto nel thread della CPU.|L'accesso diretto del `array_view` dell'oggetto o la chiamata di [array_view:: Synchronize (metodo)](../Topic/array_view::synchronize%20Method.md) per continuare l'accesso ai dati nel contenitore originale.|  
  
### <a name="shared-memory-with-array-and-arrayview"></a>Memoria condivisa a matrice e array_view  
 Memoria condivisa è disponibile memoria accessibili tramite l'utilizzo della CPU sia i tasti di scelta rapida. L'utilizzo della memoria condivisa Elimina o riduce notevolmente il sovraccarico di copia dei dati tra l'utilizzo della CPU e il tasto di scelta rapida. Sebbene la memoria è condivisa, non è possibile accedere contemporaneamente sia la CPU e il tasto di scelta rapida e in caso contrario, un comportamento non definito.  
  
 `array` gli oggetti possono essere utilizzati per specificare l'utilizzo di memoria condivisa di un controllo accurato se supporta i tasti di scelta rapida associato. Se un tasto di scelta rapida supporta la memoria condivisa è determinato dall'acceleratore [supports_cpu_shared_memory](../Topic/accelerator::supports_cpu_shared_memory%20Data%20Member.md) proprietà, che restituisce `true` quando la memoria condivisa è supportata. Se è supportata la memoria condivisa, il valore predefinito [enumerazione access_type](../Topic/access_type%20Enumeration.md) per la memoria allocazioni sull'acceleratore varia a seconda di `default_cpu_access_type` proprietà. Per impostazione predefinita, `array` e `array_view` oggetti eseguire nello stesso `access_type` come principale associata `accelerator`.  
  
 Impostando il [membro dati Array:: cpu_access_type](../Topic/array::cpu_access_type%20Data%20Member.md) proprietà di un `array` in modo esplicito, è possibile con granularità fine esercizio controllare su memoria condivisa come viene utilizzato, in modo da poter ottimizzare l'app per le caratteristiche delle prestazioni dell'hardware, in base agli schemi di accesso di memoria del kernel relativo calcolo. Un `array_view` riflette lo stesso `cpu_access_type` come il `array` che è associato; oppure, se il array_view viene creata senza un'origine dati, il relativo `access_type` riflette l'ambiente che ne determina innanzitutto l'allocare spazio di archiviazione. Ovvero se primo accesso da parte dell'host (CPU), quindi si comporta come se creata su un'origine dati della CPU e condivisioni di `access_type` del `accelerator_view` associate mediante acquisizione; tuttavia, se del primo accesso eseguito da un `accelerator_view`, quindi si comporta come se creata tramite un `array` creati su di esso `accelerator_view` e condivide il `array`del `access_type`.  
  
 Esempio di codice seguente viene illustrato come determinare se l'acceleratore predefinito supporta la memoria condivisa e quindi crea diversi array cpu_access_type diverse configurazioni.  
  
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
  
## <a name="executing-code-over-data-parallelforeach"></a>L'esecuzione del codice su dati: parallel_for_each  
 Il [parallel_for_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md) funzione definisce il codice che si desidera eseguire sul tasto di scelta rapida per i dati nel `array` o `array_view` oggetto. Si consideri il codice seguente all'introduzione di questo argomento.  
  
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
  
 Il *calcolo dominio* è un `extent` oggetto o un `tiled_extent` oggetto che definisce il set di thread da creare per l'esecuzione parallela. Un thread viene generato per ogni elemento nel dominio di calcolo. In questo caso, il `extent` oggetto unidimensionale con cinque elementi. Di conseguenza, vengono avviati cinque thread.  
  
 Il *espressione lambda* definisce il codice da eseguire su ogni thread. La clausola di acquisizione, `[=]`, specifica che il corpo dell'espressione lambda accede a tutte le variabili acquisite per valore, in questo caso sono `a`, `b`, e `sum`. In questo esempio, l'elenco di parametri crea una matrice unidimensionale `index` variabile denominata `idx`. Il valore di `idx[0]` sempre il primo thread uguale a 0 e aumenta di uno in ogni thread successivi. Il `restrict(amp)` indica che viene utilizzato solo il subset del linguaggio C++ che C++ AMP può accelerare.  Sono descritte le limitazioni sulle funzioni che presentano il modificatore di limitare in [restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md). Per ulteriori informazioni, vedere, [sintassi delle espressioni Lambda](../../cpp/lambda-expression-syntax.md).  
  
 L'espressione lambda può includere il codice da eseguire o può chiamare una funzione kernel separato. La funzione kernel deve includere il `restrict(amp)` modificatore. Nell'esempio seguente è equivalente all'esempio precedente, ma chiama una funzione kernel separato.  
  
```cpp  
  
#include <amp.h>  
#include <iostream>  
using namespace concurrency;  
  
void AddElements(index<1> idx, array_view<int, 1> sum, array_view<int, 1> a, array_view<int, 1> b) restrict(amp)  
{  
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
 [=](index<1> idx) restrict(amp)  
        {  
            AddElements(idx, sum, a, b);  
        }  
    );  
  
    for (int i = 0; i < 5; i++) {  
        std::cout << sum[i] << "\n";  
    }  
}  
  
```  
  
## <a name="accelerating-code-tiles-and-barriers"></a>Accenna codice: Riquadri e le barriere  
 È possibile ottenere ulteriore accelerazione affiancamento. Affiancamento divide i thread in sottoinsiemi uguali rettangolare o *riquadri*. Determinare la dimensione appropriata in base ai set di dati e l'algoritmo di codifica. Per ogni thread, sarà possibile accedere al *globale* percorso di un elemento di dati rispetto al intero `array` o `array_view` e l'accesso al *locale* percorso relativo per il riquadro. Utilizzando il valore di indice locale semplifica il codice perché non è necessario scrivere il codice per convertire i valori di indice da globale a locale. Per utilizzare l'affiancamento, chiamare il [metodo extent:: Tile](../Topic/extent::tile%20Method.md) nel dominio di calcolo nel `parallel_for_each` metodo e utilizzare un [tiled_index](../../parallel/amp/reference/tiled-index-class.md) oggetto nell'espressione lambda.  
  
 Nelle applicazioni comuni, gli elementi in un riquadro sono correlati in qualche modo e il codice deve accedere e tenere traccia dei valori tra il riquadro. Utilizzare il [tile_static (parola chiave)](../../cpp/tile-static-keyword.md) (parola chiave) e [metodo tile_barrier:: Wait](../Topic/tile_barrier::wait%20Method.md) a questo scopo. Una variabile che dispone di `tile_static` parola chiave ha un ambito in un riquadro dell'intero e viene creata un'istanza della variabile per ogni sezione. È necessario gestire la sincronizzazione di tessera thread l'accesso alla variabile. Il [metodo tile_barrier:: Wait](../Topic/tile_barrier::wait%20Method.md) interrompe l'esecuzione del thread corrente finché tutti i thread nel tile hanno raggiunto la chiamata a `tile_barrier::wait`. Pertanto è possibile accumulare i valori tra il riquadro utilizzando `tile_static` variabili. È quindi possibile completare tutti i calcoli che richiedono l'accesso a tutti i valori.  
  
 Nel diagramma seguente rappresenta una matrice bidimensionale di campionamento dei dati che sono disposti in riquadri.  
  
 ![Valori di indice in un'estensione affiancata](../../parallel/amp/media/camptiledgridexample.png "CampTiledGridExample")  
  
 Esempio di codice seguente utilizza i dati di campionamento dal diagramma precedente. Il codice sostituisce ogni valore nel riquadro per la media dei valori nella sezione.  
  
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

 
parallel_for_each(*// Create threads for sample.extent and divide the extent into 2 x 2 tiles.  
    sample.extent.tile<2,2>(), 
 [=](tiled_index<2,2> idx) restrict(amp)  
 { *// Create a 2 x 2 array to hold the values in this tile.  
    tile_static int nums[2][2]; *// Copy the values for the tile into the 2 x 2 array.  
    nums[idx.local[1]][idx.local[0]] = sample[idx.global]; *// When all the threads have executed and the 2 x 2 array is complete, find the average.  
    idx.barrier.wait();
int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1]; *// Copy the average into the array_view.  
    average[idx.global] = sum / 4;  
 });

 
for (int i = 0; i <4; i++) {  
    for (int j = 0; j <6; j++) {  
    std::cout <<average(i,j) <<" ";  
 }  
    std::cout <<"\n";  
}  
 
// Output:  
// 3 3 8 8 3 3  
// 3 3 8 8 3 3  
// 5 5 2 2 4 4  
// 5 5 2 2 4 4  
 
```  
  
## <a name="math-libraries"></a>Librerie matematiche  
 C++ AMP include due librerie matematiche. La libreria e precisione doppia nel [dello spazio dei nomi Concurrency:: precise_math](../../parallel/amp/reference/concurrency-precise-math-namespace.md) fornisce il supporto per le funzioni e precisione doppia. Fornisce inoltre il supporto per le funzioni e precisione singola, anche se è ancora richiesto il supporto e precisione doppia nell'hardware. La conformità con la [specifica C99 (ISO/IEC 9899)](http://go.microsoft.com/fwlink/LinkId=225887). L'acceleratore deve supportare la precisione doppia completo. È possibile determinare se esegue controllando il valore di [membro dati Accelerator:: supports_double_precision](../Topic/accelerator::supports_double_precision%20Data%20Member.md). La libreria matematica veloce, nel [dello spazio dei nomi Concurrency:: fast_math](../../parallel/amp/reference/concurrency-fast-math-namespace.md), contiene un altro set di funzioni matematiche. Queste funzioni, che supporta solo `float` operandi, vengono eseguite più rapidamente, ma non è altrettanto precisi a quelli presenti nella libreria matematica e precisione doppia. Le funzioni sono contenute nel file di intestazione \< amp_math. h > e tutti vengono dichiarati con `restrict(amp)`. Le funzioni di \< cmath> file di intestazione vengono importati in entrambi il `fast_math` e `precise_math` gli spazi dei nomi. Il `restrict` parola chiave viene utilizzata per distinguere il \< cmath> versione e la versione di C++ AMP. Il codice seguente calcola il logaritmo in base 10, utilizzando il metodo rapido, di ogni valore presente nel dominio di calcolo.  
  
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
 C++ AMP include una libreria di grafica che è progettata per la programmazione grafica accelerata. Questa libreria viene utilizzata solo sui dispositivi che supportano la funzionalità grafica nativo. I metodi sono contenuti il [spazio dei nomi](../../parallel/amp/reference/concurrency-graphics-namespace.md) e sono contenute nel file di intestazione \< amp_graphics.h >. I componenti principali della libreria grafica sono:  
  
- [Classe texture](../../parallel/amp/reference/texture-class.md): È possibile utilizzare la classe di trama per creare le trame dalla memoria o da un file. Le trame simili alle matrici in quanto contengono dati e assomigliano contenitori nel STL Standard Template Library () rispetto alla costruzione di copia e assegnazione. Per ulteriori informazioni, vedere [contenitori STL](../../standard-library/stl-containers.md). Parametri di modello per la `texture` classe sono il tipo di elemento e l'ordine di priorità. L'ordine di priorità può essere 1, 2 o 3. Il tipo di elemento può essere uno dei tipi di vettore short descritti più avanti in questo articolo.  
  
- [Classe writeonly_texture_view](../../parallel/amp/reference/writeonly-texture-view-class.md): fornisce l'accesso in sola lettura a qualsiasi trama.  
  
- [Breve libreria Vector](http://msdn.microsoft.com/it-it/4c4f5bed-c396-493b-a238-c347563f645f): definisce un set di tipi short vector di lunghezza 2, 3 e 4 basati su `int`, `uint`, `float`, `double`, [norm](../../parallel/amp/reference/norm-class.md), o [unorm](../../parallel/amp/reference/unorm-class.md).  
  
## <a name="includewin8appnamelongtokenwin8appnamelongmdmd-apps"></a>Applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]  
 Come altre librerie C++, è possibile utilizzare C++ AMP nel [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app. Questi articoli viene illustrato come includere il codice C++ AMP nelle applicazioni che viene creato utilizzando C++, c#, Visual Basic o JavaScript:  
  
- [Utilizzo di C++ AMP nelle applicazioni Windows Store](../../parallel/amp/using-cpp-amp-in-windows-store-apps.md)  
  
- [Procedura dettagliata: Creazione di un componente Windows Runtime di base in C++ e chiamarlo da JavaScript](http://go.microsoft.com/fwlink/p/LinkId=249077)  
  
- [Un'app di Windows Store in JavaScript e C++, ottimizzazione dei viaggi di Bing mappe](http://go.microsoft.com/fwlink/p/LinkId=249078)  
  
- [Procedura: utilizzare C++ AMP dall'utilizzo di Windows Runtime in c#](http://go.microsoft.com/fwlink/p/LinkId=249080)  
  
- [Procedura: utilizzare C++ AMP da c#](http://go.microsoft.com/fwlink/p/LinkId=249081)  
  
- [Chiamata di funzioni Native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md)  
  
## <a name="c-amp-and-concurrency-visualizer"></a>Visualizzatore di concorrenza e di C++ AMP  
 Il Visualizzatore di concorrenza include il supporto per l'analisi delle prestazioni del codice C++ AMP. Questi articoli descrivono queste funzionalità:  
  
- [Grafico dell'attività GPU](../Topic/GPU%20Activity%20Graph.md)  
  
- [Attività GPU (Paging)](../Topic/GPU%20Activity%20\(Paging\).md)  
  
- [Attività GPU (questo processo)](../Topic/GPU%20Activity%20\(This%20Process\).md)  
  
- [Attività GPU (altri processi)](../Topic/GPU%20Activity%20\(Other%20Processes\).md)  
  
- [Canali (visualizzazione thread)](../Topic/Channels%20\(Threads%20View\).md)  
  
- [Analisi del codice di C++ AMP con il Visualizzatore di concorrenza](http://go.microsoft.com/fwlink/LinkID=253987&clcid=0x409)  
  
## <a name="performance-recommendations"></a>Consigli relativi alle prestazioni  
 Divisione di interi senza segno e modulo offrono prestazioni significativamente migliori rispetto modulus e divisione di interi con segno. È consigliabile utilizzare interi senza segno, quando possibile.  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)   
 [Sintassi delle espressioni lambda](../../cpp/lambda-expression-syntax.md)   
 [Riferimento (C++ AMP)](../../parallel/amp/reference/reference-cpp-amp.md)   
 [Programmazione parallela in codice nativo Blog](http://go.microsoft.com/fwlink/p/LinkId=238472)
