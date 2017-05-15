---
title: '&lt;random&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <random>
dev_langs:
- C++
helpviewer_keywords:
- random header
ms.assetid: 60afc25c-b162-4811-97c1-1b65398d4c57
caps.latest.revision: 58
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 86978cd4549f0672dac7cad0e4713380ea189c27
ms.openlocfilehash: 89cbb528d14117feac1f04863f0f4082969f22d9
ms.contentlocale: it-it
ms.lasthandoff: 04/18/2017

---
# <a name="ltrandomgt"></a>&lt;random&gt;
Definisce strutture per la generazione casuale di numeri, permettendo la creazione di numeri casuali distribuiti in modo uniforme.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <random>  
```  
  
## <a name="summary"></a>Riepilogo  
 Un *generatore di numeri casuali* è un oggetto che produce una sequenza di valori pseudocasuali. Un generatore che produce valori distribuiti in modo uniforme in un intervallo specificato è un *generatore di numeri casuali uniformi* (URNG, Uniform Random Number Generator). Una classe modello designata per il funzionamento come generatore URNG è definita come *motore* se è caratterizzata da alcuni elementi comuni, illustrati più avanti in questo articolo. Un generatore URNG può essere associato, e in genere lo è, a una *distribuzione* tramite il passaggio come argomento all'oggetto `operator()` della distribuzione, per produrre valori distribuiti nel modo definito dalla distribuzione.  
  
 Questi collegamenti permettono di passare alle sezioni principali dell'articolo:  
  
- [Esempi](#code)  
  
- [Elenchi categorizzati](#listing)  
  
- [Motori e distribuzioni](#engdist)  
  
- [Note](#comments)  
  
### <a name="quick-tips"></a>Suggerimenti rapidi  
 Ecco alcuni suggerimenti da ricordare quando si usa `<random>`:  
  
-   Nella maggior parte dei casi, i generatori URNG producono bit non elaborati che devono essere modellati da distribuzioni. Un'eccezione è costituita da [std::shuffle()](../standard-library/algorithm-functions.md#shuffle), poiché usa direttamente un generatore URNG.  
  
-   Una singola creazione di istanza di un generatore URNG o di una distribuzione non può essere chiamata contemporaneamente in modo sicuro, poiché l'esecuzione di un generatore URNG o di una distribuzione costituisce un'operazione di modifica. Per altre informazioni, vedere [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md).  
  
- Sono disponibili [typedef predefiniti](#typedefs) di molti motori. Per la creazione di un generatore URNG se si usa un motore, è preferibile usare questa modalità.  
  
-   L'associazione più utile per la maggior parte delle applicazioni è costituita dal motore `mt19937` con `uniform_int_distribution`, come mostrato nell'[esempio di codice](#code) più avanti in questo articolo.  
  
 Nell'intestazione `<random>` sono disponibili molte opzioni selezionabili e qualsiasi opzione indicata è preferibile alla funzione `rand()` obsoleta di Runtime C. Per informazioni sui problemi relativi a `rand()` e sul modo in cui `<random>` li gestisce, vedere [questo video](http://go.microsoft.com/fwlink/LinkId=397615).  
  
##  <a name="code"></a> Esempi  
 L'esempio di codice seguente illustra come generare alcuni numeri casuali, in questo caso cinque, usando un generatore creato con un valore di inizializzazione non deterministico.  
  
```cpp  
#include <random>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    random_device rd;   // non-deterministic generator  
    mt19937 gen(rd());  // to seed mersenne twister.  
                        // replace the call to rd() with a  
                        // constant value to get repeatable  
                        // results.  
  
    for (int i = 0; i < 5; ++i) {  
        cout << gen() << " "; // print the raw output of the generator.  
    }  
    cout << endl;  
}  
```  
  
```Output  
2430338871 3531691818 2723770500 3252414483 3632920437  
```  
  
 Anche se sono numeri casuali di alta qualità e diversi ogni volta che viene eseguito il programma, essi non sono necessariamente in un intervallo utile. Per controllare l'intervallo, usare una distribuzione uniforme, come illustrato nel codice seguente:  
  
```cpp  
#include <random>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    random_device rd;   // non-deterministic generator  
    mt19937 gen(rd());  // to seed mersenne twister.  
    uniform_int_distribution<> dist(1,6); // distribute results between 1 and 6 inclusive.  
  
    for (int i = 0; i < 5; ++i) {  
        cout << dist(gen) << " "; // pass the generator to the distribution.  
    }  
    cout << endl;  
}  
```  
  
```Output  
5 1 6 1 2  
```  
  
 L'esempio di codice successivo mostra un set più realistico di casi d'uso con generatori di numeri casuali distribuiti in modo uniforme eseguendo la riproduzione casuale del contenuto di un vettore e di una matrice.  
  
```cpp  
// cl.exe /EHsc /nologo /W4 /MTd  
#include <algorithm>  
#include <array>  
#include <iostream>  
#include <random>  
#include <string>  
#include <vector>  
#include <functional> // ref()  
  
using namespace std;  
  
template <typename C> void print(const C& c) {  
    for (const auto& e : c) {  
        cout << e << " ";  
    }  
  
    cout << endl;  
}  
  
template <class URNG>  
void test(URNG& urng) {  
  
    // Uniform distribution used with a vector  
    // Distribution is [-5, 5] inclusive  
    uniform_int_distribution<int> dist(-5, 5);  
    vector<int> v;  
  
    for (int i = 0; i < 20; ++i) {  
        v.push_back(dist(urng));  
    }  
  
    cout << "Randomized vector: ";  
    print(v);  
  
    // Shuffle an array   
    // (Notice that shuffle() takes a URNG, not a distribution)  
    array<string, 26> arr = { { "H", "He", "Li", "Be", "B", "C", "N", "O", "F",  
        "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc",  
        "Ti", "V", "Cr", "Mn", "Fe" } };  
  
    shuffle(arr.begin(), arr.end(), urng);  
  
    cout << "Randomized array: ";  
    print(arr);  
    cout << "--" << endl;  
}  
  
int main()  
{  
    // First run: non-seedable, non-deterministic URNG random_device  
    // Slower but crypto-secure and non-repeatable.  
    random_device rd;  
    cout << "Using random_device URNG:" << endl;  
    test(rd);  
  
    // Second run: simple integer seed, repeatable results  
    cout << "Using constant-seed mersenne twister URNG:" << endl;  
    mt19937 engine1(12345);  
    test(engine1);  
  
    // Third run: random_device as a seed, different each run  
    // (Desirable for most purposes)  
    cout << "Using non-deterministic-seed mersenne twister URNG:" << endl;  
    mt19937 engine2(rd());  
    test(engine2);  
  
    // Fourth run: "warm-up" sequence as a seed, different each run  
    // (Advanced uses, allows more than 32 bits of randomness)  
    cout << "Using non-deterministic-seed \"warm-up\" sequence mersenne twister URNG:" << endl;  
    array<unsigned int, mt19937::state_size> seed_data;  
    generate_n(seed_data.begin(), seed_data.size(), ref(rd));  
    seed_seq seq(begin(seed_data), end(seed_data));  
    mt19937 engine3(seq);  
    test(engine3);  
}  
```  
  
```Output  
Using random_device URNG:  
Randomized vector: 5 -4 2 3 0 5 -2 0 4 2 -1 2 -4 -3 1 4 4 1 2 -2  
Randomized array: O Li V K C Ti N Mg Ne Sc Cl B Cr Mn Ca Al F P Na Be Si Ar Fe S He H  
--  
Using constant-seed mersenne twister URNG:  
Randomized vector: 3 -1 -5 0 0 5 3 -4 -3 -4 1 -3 0 -3 -2 -4 5 1 -1 -1  
Randomized array: Al O Ne Si Na Be C N Cr Mn H V F Sc Mg Fe K Ca S Ti B P Ar Cl Li He  
--  
Using non-deterministic-seed mersenne twister URNG:  
Randomized vector: 5 -4 0 2 1 -2 4 4 -4 0 0 4 -5 4 -5 -1 -3 0 0 3  
Randomized array: Si Fe Al Ar Na P B Sc H F Mg Li C Ti He N Mn Be O Ca Cr V K Ne Cl S  
--  
Using non-deterministic-seed "warm-up" sequence mersenne twister URNG:  
Randomized vector: -1 3 -2 4 1 3 0 -5 5 -5 0 0 5 0 -3 3 -4 2 5 0  
Randomized array: Si C Sc H Na O S Cr K Li Al Ti Cl B Mn He Fe Ne Be Ar V P Ca N Mg F  
--  
```  
  
Questo codice illustra due sequenze casuali: la creazione di una sequenza casuale per un vettore di interi e la riproduzione casuale di una matrice di dati indicizzati, con una funzione modello di esempio. La prima chiamata alla funzione di test usa il `random_device` sicuro a livello di crittografia, non deterministico, non sottoponibile a seeding, non ripetibile del generatore URNG. La seconda esecuzione dei test usa `mersenne_twister_engine` come generatore URNG, con seeding costante a 32 bit deterministico. I risultati sono quindi ripetibili. La terza esecuzione dei test esegue il seeding di `mersenne_twister_engine` con un risultato non deterministico a 32 bit da `random_device`. La quarta esecuzione dei test procede a un'ulteriore espansione, usando una [sequenza di seeding](../standard-library/seed-seq-class.md) compilata con risultati di `random_device`, che consente di ottenere in modo efficace un risultato superiore a una casualità deterministica a 32 bit, ma non ancora sicuro a livello di crittografia. Per altre informazioni, continuare a leggere.  
  
##  <a name="listing"></a> Elenchi categorizzati  
  
###  <a name="urngs"></a> Generatori di numeri casuali uniformi  
 I generatori URNG sono spesso descritti tramite e proprietà seguenti:  
  
1. **Durata periodo**: numero di iterazioni necessarie per la ripetizione della sequenza di numeri generati. È preferibile specificare un periodo lungo.  
  
2. **Prestazioni**: rapidità con cui è possibile generare i numeri e quantità di memoria necessaria. È preferibile che il valore sia basso.  
  
3. **Qualità**: livello di casualità effettiva della sequenza generata. Questa proprietà è definita spesso "*casualità*".  
  
 Nella sezione seguente sono elencati i generatori di numeri casuali uniformi disponibili nell'intestazione di `<random>`.  
  
####  <a name="rd"></a> Generatore non deterministico  
  
|||  
|-|-|  
|[Classe random_device](../standard-library/random-device-class.md)|Genera una sequenza casuale non deterministica e sicura a livello di crittografia usando un dispositivo esterno. È usato in genere per il seeding di un motore. Offre prestazioni ridotte ma qualità molto elevata. Per altre informazioni, vedere [Note](#comments).|  
  
####  <a name="typedefs"></a> Typedef di motore con parametri predefiniti  
 Per la creazione di istanze di motori e adattatori del motore. Per altre informazioni, vedere [Motori e distribuzioni](#engdist).  
  
- `default_random_engine` Motore predefinito.   
 `typedef mt19937 default_random_engine;`  
  
- `knuth_b` Motore Knuth.   
 `typedef shuffle_order_engine<minstd_rand0, 256> knuth_b;`  
  
- `minstd_rand0` Motore del 1988 a standard minimo (Lewis, Goodman e Miller, 1969).   
 `typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;`  
  
- `minstd_rand` Motore standard minimo `minstd_rand0` aggiornato (Park, Miller e Stockmeyer, 1993).   
 `typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;`  
  
- `mt19937` Motore Mersenne Twister a 32 bit (Matsumoto e Nishimura, 1998).   
 `typedef mersenne_twister_engine<unsigned int, 32, 624, 397,      31, 0x9908b0df,      11, 0xffffffff,      7, 0x9d2c5680,      15, 0xefc60000,      18, 1812433253> mt19937;`  
  
- `mt19937_64` Motore Mersenne Twister a 64 bit (Matsumoto e Nishimura, 2000).   
 `typedef mersenne_twister_engine<unsigned long long, 64, 312, 156,      31, 0xb5026f5aa96619e9ULL,      29, 0x5555555555555555ULL,      17, 0x71d67fffeda60000ULL,      37, 0xfff7eee000000000ULL,      43, 6364136223846793005ULL> mt19937_64;`  
  
- `ranlux24` Motore RANLUX a 24 bit (Martin Lüscher e Fred James, 1994).   
 `typedef discard_block_engine<ranlux24_base, 223, 23> ranlux24;`  
  
- `ranlux24_base` Usato come base per `ranlux24`.   
 `typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;`  
  
- `ranlux48` Motore RANLUX a 48 bit (Martin Lüscher e Fred James, 1994).   
 `typedef discard_block_engine<ranlux48_base, 389, 11> ranlux48;`  
  
- `ranlux48_base` Usato come base per `ranlux48`.   
 `typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;`  
  
####  <a name="eng"></a> Modelli di motore  
 I modelli di motore sono usati come generatori URNG autonomi o come motori di base passati ad [adattatori del motore](#engadapt). In genere sono create istanze corrispondenti con un [typedef di motore predefinito](#typedefs) e le istanze sono passate a una [distribuzione](#distributions). Per altre informazioni, vedere la sezione [Motori e distribuzioni](#engdist).  
  
|||  
|-|-|  
|[Classe linear_congruential_engine](../standard-library/linear-congruential-engine-class.md)|Genera una sequenza casuale usando l'algoritmo congruenziale lineare. È estremamente semplice e offre la qualità più bassa.|  
|[Classe mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md)|Genera una sequenza casuale usando l'algoritmo twister Mersenne. È estremamente complesso e offre la qualità più elevata, ad eccezione della classe random_device class. Prestazioni molto elevate.|  
|[Classe subtract_with_carry_engine](../standard-library/subtract-with-carry-engine-class.md)|Genera una sequenza casuale usando l'algoritmo subtract-with-carry. Rappresenta un miglioramento rispetto `linear_congruential_engine`, ma offre qualità e prestazioni inferiori rispetto a `mersenne_twister_engine`.|  
  
####  <a name="engadapt"></a> Modelli di adattatori del motore  
 Gli adattatori del motore sono modelli che adattano altri motori (di base). In genere sono create istanze corrispondenti con un [typedef di motore predefinito](#typedefs) e le istanze sono passate a una [distribuzione](#distributions). Per altre informazioni, vedere la sezione [Motori e distribuzioni](#engdist).  
  
|||  
|-|-|  
|[Classe discard_block_engine](../standard-library/discard-block-engine-class.md)|Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.|  
|[Classe independent_bits_engine](../standard-library/independent-bits-engine-class.md)|Genera una sequenza casuale con un numero specificato di bit tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal motore di base corrispondente.|  
|[Classe shuffle_order_engine](../standard-library/shuffle-order-engine-class.md)|Genera una sequenza casuale riordinando i valori restituiti dal motore di base corrispondente.|  
  
 [[Modelli di motore](#eng)]  
  
###  <a name="distributions"></a> Distribuzioni di numeri casuali  
 Nelle sezioni seguenti sono elencate le distribuzioni disponibili nell'intestazione `<random>`. Le distribuzioni sono un meccanismo post-elaborazione che usano in genere l'output del generatore URNG come input e distribuiscono l'output in base a una funzione di densità di probabilità statistica definita. Per altre informazioni, vedere la sezione [Motori e distribuzioni](#engdist).  
  
#### <a name="uniform-distributions"></a>Distribuzioni uniformi  
  
|||  
|-|-|  
|[Classe uniform_int_distribution](../standard-library/uniform-int-distribution-class.md)|Produce una distribuzione uniforme di valori di tipo Integer in un intervallo che si trova nell'intervallo chiuso \[a, b] (inclusivo- inclusivo).|  
|[Classe uniform_real_distribution](../standard-library/uniform-real-distribution-class.md)|Produce una distribuzione uniforme di valori reali (a virgola mobile) in un intervallo che si trova nell'intervallo semiaperto [a, b) (inclusivo-esclusivo).|  
|[generate_canonical](../standard-library/random-functions.md#generate_canonical)|Produce una distribuzione uniforme di valori reali (a virgola mobile) con precisione specificata in [0, 1) (inclusivo-esclusivo).|  
  
 [[Distribuzioni di numeri casuali](#distributions)]  
  
#### <a name="bernoulli-distributions"></a>Distribuzioni di Bernoulli  
  
|||  
|-|-|  
|[Classe bernoulli_distribution](../standard-library/bernoulli-distribution-class.md)|Produce una distribuzione di Bernoulli dei valori `bool`.|  
|[Classe binomial_distribution](../standard-library/binomial-distribution-class.md)|Produce una distribuzione binomiale di valori di tipo Integer.|  
|[Classe geometric_distribution](../standard-library/geometric-distribution-class.md)|Produce una distribuzione geometrica di valori di tipo Integer.|  
|[Classe negative_binomial_distribution](../standard-library/negative-binomial-distribution-class.md)|Produce una distribuzione binomiale negativa di valori di tipo Integer.|  
  
 [[Distribuzioni di numeri casuali](#distributions)]  
  
#### <a name="normal-distributions"></a>Distribuzioni normali  
  
|||  
|-|-|  
|[Classe cauchy_distribution](../standard-library/cauchy-distribution-class.md)|Produce una distribuzione Cauchy di valori reali (a virgola mobile).|  
|[Classe chi_squared_distribution](../standard-library/chi-squared-distribution-class.md)|Produce una distribuzione del chi quadrato di valori reali (a virgola mobile).|  
|[Classe fisher_f_distribution](../standard-library/fisher-f-distribution-class.md)|Produce una distribuzione F (nota anche come distribuzione F di Snedecor o distribuzione Fisher-Snedecor) di valori reali (a virgola mobile).|  
|[Classe lognormal_distribution](../standard-library/lognormal-distribution-class.md)|Produce una distribuzione lognormale di valori reali (a virgola mobile).|  
|[Classe normal_distribution](../standard-library/normal-distribution-class.md)|Produce una distribuzione normale (gaussiana) di valori reali (a virgola mobile).|  
|[Classe student_t_distribution](../standard-library/student-t-distribution-class.md)|Produce una distribuzione *t* di valori reali (a virgola mobile).|  
  
 [[Distribuzioni di numeri casuali](#distributions)]  
  
#### <a name="poisson-distributions"></a>Distribuzioni di Poisson  
  
|||  
|-|-|  
|[Classe exponential_distribution](../standard-library/exponential-distribution-class.md)|Produce una distribuzione esponenziale di valori reali (a virgola mobile).|  
|[Classe extreme_value_distribution](../standard-library/extreme-value-distribution-class.md)|Produce una distribuzione dei valori estremi di valori reali (a virgola mobile).|  
|[Classe gamma_distribution](../standard-library/gamma-distribution-class.md)|Produce una distribuzione gamma di valori reali (a virgola mobile).|  
|[Classe poisson_distribution](../standard-library/poisson-distribution-class.md)|Produce una distribuzione di Poisson di valori di tipo Integer.|  
|[Classe weibull_distribution](../standard-library/weibull-distribution-class.md)|Produce una distribuzione Weibull di valori reali (a virgola mobile).|  
  
 [[Distribuzioni di numeri casuali](#distributions)]  
  
#### <a name="sampling-distributions"></a>Distribuzioni di campionamento  
  
|||  
|-|-|  
|[Classe discrete_distribution](../standard-library/discrete-distribution-class.md)|Produce una distribuzione discreta di valori di tipo Integer.|  
|[Classe piecewise_constant_distribution](../standard-library/piecewise-constant-distribution-class.md)|Produce una distribuzione costante a tratti di valori reali (a virgola mobile).|  
|[Classe piecewise_linear_distribution](../standard-library/piecewise-linear-distribution-class.md)|Produce una distribuzione lineare a tratti di valori reali (a virgola mobile).|  
  
 [[Distribuzioni di numeri casuali](#distributions)]  
  
### <a name="utility-functions"></a>Funzioni di utilità  
 In questa sezione sono elencate le funzioni di utilità generali disponibili nell'intestazione `<random>`.  
  
|||  
|-|-|  
|[Classe seed_seq](../standard-library/seed-seq-class.md)|Genera una sequenza di seeding criptata non distorta. Usata per evitare la replica di flussi di varianti casuali. Risulta utile quando i motori creano istanze di molti generatori URNG.|  
  
### <a name="operators"></a>Operatori  
 In questa sezione sono elencati gli operatori disponibili nell'intestazione `<random>`.  
  
|||  
|-|-|  
|`operator==`|Verifica se il generatore URNG sul lato sinistro dell'operatore è uguale al motore sul lato destro.|  
|`operator!=`|Verifica se il generatore URNG sul lato sinistro dell'operatore è diverso dal motore sul lato destro.|  
|`operator<<`|Scrive le informazioni sullo stato in un flusso.|  
|`operator>>`|Estrae le informazioni sullo stato da un flusso.|  
  
##  <a name="engdist"></a> Motori e distribuzioni  
 Per informazioni su ogni categoria di classi di modelli definita in `<random>`, fare riferimento alle sezioni seguenti. Entrambe le categorie di classi di modelli accettano un tipo come argomento e usano i nomi di parametri di modello condivisi per descrivere le proprietà del tipo consentite come tipo di argomento effettivo, come indicato di seguito:  
  
- `IntType` indica un `short`, `int`, `long`, `long long`, `unsigned short`, `unsigned int`, `unsigned long` o `unsigned long long`.  
  
- `UIntType` indica `unsigned short`, `unsigned int`, `unsigned long` o `unsigned long long`.  
  
- `RealType` indica un `float`, `double` o `long double`.  
  
### <a name="engines"></a>Motori  
 I [modelli di motore](#eng) e i [modelli di adattatori del motore](#engadapt) sono modelli i cui parametri permettono di personalizzare il generatore creato.  
  
 Un *motore* è una classe o una classe modello le cui istanze (generatori) fungono da origine di numeri casuali distribuiti in modo uniforme tra un valore minimo e un valore massimo. Un *adattatore del motore* fornisce una sequenza di valori con proprietà di casualità diverse, accettando i valori prodotti da un altro motore di numeri casuali e applicando un algoritmo a questi valori.  
  
 Ogni motore e adattatore del motore include i membri seguenti:  
  
- `typedef` `numeric-type` `result_type` è il tipo restituito dall'oggetto `operator()` del generatore. `numeric-type` è passato come parametro di modello durante la creazione di istanze.  
  
- `result_type operator()` restituisce valori distribuiti in modo uniforme tra `min()` e `max()`.  
  
- `result_type min()` restituisce il valore minimo restituito da `operator()` del generatore. Gli adattatori del motore usano il risultato `min()` del motore di base.  
  
- `result_type max()` restituisce il valore massimo restituito da `operator()` del generatore. Se `result_type` è un tipo Integer (con valore di tipo Integer), `max()` è il valore massimo che può essere effettivamente restituito (inclusivo). Se `result_type` è un tipo a virgola mobile (con valori reali), `max()` è il valore più piccolo superiore a tutti gli altri valori che possono essere restituiti (non inclusivo). Gli adattatori del motore usano il risultato `max()` del motore di base.  
  
- `void seed(result_type s)` esegue il seeding del generatore con il valore di seeding `s`. Per i motori, la firma è `void seed(result_type s = default_seed)` per il supporto di parametri predefiniti. Gli adattatori del motore definiscono un valore `void seed()` distinto, come illustrato nella sottosezione seguente.  
  
- `template <class Seq> void seed(Seq& q)` esegue il seeding del generatore tramite [seed_seq](../standard-library/seed-seq-class.md)`Seq`.  
  
-   Un costruttore esplicito con argomento `result_type x` che crea un generatore sottoposto a seeding come se l'operazione fosse eseguita chiamando `seed(x)`.  
  
-   Un costruttore esplicito con argomento `seed_seq& seq` che crea un generatore sottoposto a seeding come se l'operazione fosse eseguita chiamando `seed(seq)`.  
  
- `void discard(unsigned long long count)` chiama in modo efficace `operator()``count` volte e rimuove ogni valore.  
  
 Gli **adattatori del motore** supportano anche questi membri (`Engine` è il primo parametro di modello di un adattatore del motore e designa il tipo del motore di base):  
  
-   Un costruttore predefinito per inizializzare il generatore come se l'operazione fosse eseguita dal costruttore predefinito del motore.  
  
-   Un costruttore esplicito con argomento `const Engine& eng`. Questo permette di supportare la costruzione di copie usando il motore di base.  
  
-   Un costruttore esplicito con argomento `Engine&& eng`. Questo permette di supportare la costruzione di spostamenti usando il motore di base.  
  
- `void seed()` che inizializza il generatore con il valore di seeding predefinito del motore di base.  
  
- Funzione della proprietà `const Engine& base()` che restituisce il motore di base usato per costruire il generatore.  
  
 Ciascun motore mantiene uno *stato* che determina la sequenza di valori che saranno generati da chiamate successive a `operator()`. Gli stati dei due generatori le cui istanze sono create da motori dello stesso tipo possono essere confrontati usando `operator==` e `operator!=`. Se i due stati sono uguali, i generatori produrranno la stessa sequenza di valori. Lo stato di un oggetto può essere salvato in un flusso sotto forma di sequenza di valori non firmati a 32 bit tramite `operator<<` del generatore. Il salvataggio non modifica lo stato. Uno stato salvato può essere letto nel generatore le cui istanze sono create da un motore dello stesso tipo tramite `operator>>`.  
  
### <a name="distributions"></a>Distribuzioni  
 Una [distribuzione di numeri casuali](#distributions) è una classe o una classe modello le cui istanze trasformano un flusso di numeri casuali distribuiti in modo uniforme ottenuto da un motore in un flusso di numeri casuali con una distribuzione particolare. Ogni distribuzione include i membri seguenti:  
  
- `typedef` `numeric-type` `result_type` è il tipo restituito dall'oggetto `operator()` della distribuzione. `numeric-type` è passato come parametro di modello durante la creazione di istanze.  
  
- `template <class URNG> result_type operator()(URNG& gen)` restituisce valori distribuiti in base alla definizione della distribuzione, usando `gen` come origine dei valori casuali distribuiti in modo uniforme e dei *parametri della distribuzione* archiviati.  
  
- `template <class URNG> result_type operator()(URNG& gen, param_type p)` restituisce valori distribuiti in base alla definizione della distribuzione, usando `gen` come origine dei valori casuali distribuiti in modo uniforme e di `p` della struttura di parametri.  
  
- `typedef` `unspecified-type` `param_type` è il pacchetto di parametri facoltativamente passato a `operator()` ed è usato al posto dei parametri archiviati per generare il valore restituito corrispondente.  
  
-   Un costruttore `const param&` inizializza i parametri archiviati dall'argomento corrispondente.  
  
- `param_type param() const` ottiene i parametri archiviati.  
  
- `void param(const param_type&)` imposta i parametri archiviati dall'argomento corrispondente.  
  
- `result_type min()` restituisce il valore minimo restituito da `operator()` della distribuzione.  
  
- `result_type max()` restituisce il valore massimo restituito da `operator()` della distribuzione. Se `result_type` è un tipo Integer (con valore di tipo Integer), `max()` è il valore massimo che può essere effettivamente restituito (inclusivo). Se `result_type` è un tipo a virgola mobile (con valori reali), `max()` è il valore più piccolo superiore a tutti gli altri valori che possono essere restituiti (non inclusivo).  
  
- `void reset()` elimina eventuali valori memorizzati nella cache, in modo che il risultato della chiamata successiva a `operator()` quindi, non dipenda da alcun valore ottenuto dal motore prima della chiamata.  
  
 Una struttura di parametri è un oggetto che archivia tutti i parametri necessari per una distribuzione. Include gli elementi seguenti:  
  
- `typedef` `distribution-type` `distribution_type`, che è il tipo della distribuzione corrispondente.  
  
-   Uno o più costruttori che accettano gli stessi elenchi di parametri accettati dai costruttori della distribuzione.  
  
-   Le stesse funzioni di accesso ai parametri della distribuzione.  
  
-   Operatori di confronto di uguaglianza e disuguaglianza.  
  
 Per altre informazioni, vedere gli argomenti secondari di riferimento seguenti. I collegamenti corrispondenti sono disponibili in precedenza in questo articolo.  
  
##  <a name="comments"></a> Note  
 In Visual Studio sono disponibili due generatori URNG molto utili, ovvero `mt19937` e `random_device`, come mostrato in questa tabella di confronto:  
  
|URNG|Fast|Sicuro a livello di crittografia|Compatibile con seeding|Deterministico|  
|----------|-----------|---------------------|---------------|--------------------|  
|`mt19937`|Sì|No|Sì|Sì<sup>*</sup>|  
|`random_device`|No|Sì|No|No|  
  
 <sup>* Se è fornito un seeding noto.</sup>  
  
 Anche se lo standard C++ ISO non richiede che `random_device` sia sicuro a livello di crittografia, Visual Studio è implementato in modo da offrire questo tipo di sicurezza. La definizione "sicuro a livello di crittografia" non implica alcuna garanzia, ma fa riferimento a un livello minimo di entropia e, quindi, al livello di prevedibilità, fornito da un determinato algoritmo di creazione di sequenze casuali. Per altre informazioni, vedere l'articolo di Wikipedia relativo al [generatore di numeri pseudocasuali crittograficamente sicuro](http://go.microsoft.com/fwlink/LinkId=398017).) Poiché non è richiesto dallo standard C++ ISO, è possibile che altre piattaforme implementino `random_device` come semplice generatore di numeri pseudocasuali (non crittograficamente sicuro) e che sia possibile usarlo solo come origine di seeding per un altro generatore. Quando si usa `random_device` in codice destinato a più piattaforme, verificare la documentazione relativa alle piattaforme specifiche.  
  
 Per definizione, i risultati di `random_device` non sono riproducibili e, come effetto collaterale, è possibile che l'esecuzione risulti significativamente più lenta rispetto ad altri generatori URNG. La maggior parte delle applicazioni che non devono essere crittograficamente sicure usano `mt19937` o un motore simile, anche se è consigliabile eseguirne il seeding tramite una chiamata a `random_device`, come illustrato nell'[esempio di codice](#code).  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)


