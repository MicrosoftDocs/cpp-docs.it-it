---
title: Ottimizzazione a virgola mobile di Microsoft Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 03/09/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 35c9263fa6252469124eefb0dfd575ef5bd2ac34
ms.sourcegitcommit: 5e932a0e110e80bc241e5f69e3a1a7504bfab1f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/21/2018
---
# <a name="microsoft-visual-c-floating-point-optimization"></a>Ottimizzazione a virgola mobile di Microsoft Visual C++

Ottenere un handle per l'ottimizzazione di codice a virgola mobile utilizzando il metodo del compilatore Microsoft C++ di gestione della semantica della virgola mobile. Creare applicazioni veloci assicurando che vengono eseguite ottimizzazioni provvisoria solo sul codice a virgola mobile.

## <a name="optimization-of-floating-point-code-in-c"></a>Ottimizzazione del codice a virgola mobile in C++

Un compilatore C++ ottimizzazione converte non solo codice sorgente in codice macchina, organizza le istruzioni del computer in modo da migliorare l'efficienza e/o ridurre le dimensioni. Sfortunatamente, molti ottimizzazioni comuni non sono necessariamente sicuri quando applicato a calcoli a virgola mobile. Un buon esempio di questo può essere visualizzato con l'algoritmo di somma seguente, tratto dal David Goldberg, "Ciò che ogni Computer Scientist deve sapere sulle aritmetica a virgola mobile", *Computing sondaggi*, marzo 1991, pg. 203:

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0, C=0, Y, T;
   for (int i=0; i<n; i++)
   {
      Y = A[i] - C;
      T = sum + Y;
      C = T - sum - Y;
      sum = T;
   }
   return sum;
}
```

Questa funzione aggiunge n **float** valori nell'oggetto vector matrice `A`. All'interno del corpo di ciclo, l'algoritmo calcola un valore di "correzione" che viene quindi applicato al passaggio successivo della somma. Questo metodo riduce significativamente gli errori di arrotondamento cumulativi rispetto a una somma semplice, mantenendo la complessità della fase o (n).

Un compilatore C++ naïve potrebbe supporre che aritmetica a virgola mobile segue le stesse regole algebriche come numero reale aritmetica. Un compilatore di questo tipo potrebbe quindi erroneamente concludere che

> C = T - sum - Y = = > (sum + Y) - sum - Y = = > 0;

Vale a dire che il valore percepito di C è sempre un costante zero. Se questo valore costante viene quindi propagato nelle espressioni successive, il corpo del ciclo viene ridotta a una somma semplice. Per essere preciso,

> Y = [i] - C = = > Y = [i]<br/>T = sum + Y = = > T = sum + [i]<br/>somma = T = = > somma = sum + [i]

Di conseguenza, per il compilatore naïve, una trasformazione logico del `KahanSum` funzione sarebbe:

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0; // C, Y & T are now unused
   for (int i=0; i<n; i++)
      sum = sum + A[i];
   return sum;
}
```

Anche se è più veloce perché l'algoritmo trasformato *non è una rappresentazione accurata di intento del programmatore*. La correzione degli errori create con destrezza è stato rimosso completamente e ciò che resta con un algoritmo di somma semplice e diretto con tutti i relativi errore associato.

Un compilatore C++ sofisticato sarebbe naturalmente algebriche che le regole di reale aritmetica non si applicano in genere a aritmetica a virgola mobile. Tuttavia, anche un compilatore C++ sofisticato potrebbe comunque in modo non corretto interpretare intento del programmatore.

Prendere in considerazione un'ottimizzazione comune che tenta di mantenere tutti i valori nei registri presto (denominato "registrazione" un valore). Nel `KahanSum` esempio, questa ottimizzazione potrebbe provare a essere registrate le variabili `C`, `Y` e `T` poiché vengono utilizzati solo all'interno del corpo del ciclo. Se la precisione di registro è 52bits (double) anziché 23bits (singolo), questa ottimizzazione in modo efficace tipo Alza di livello `C`, `Y` e `T` in cui digitare **doppie**. Se la variabile di somma non è in modo analogo registrate, questo rimarrà codificato in precisione singola. Ciò consente di trasformare la semantica di `KahanSum` al seguente

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0;
   double C=0, Y, T; // now held in-register
   for (int i=0; i<n; i++)
   {
      Y = A[i] - C;
      T = sum + Y;
      C = T - sum - Y;
      sum = (float) T;
   }
   return sum;
}
```

Sebbene `Y`, `T` e `C` vengono ora calcolate una precisione più elevata, questa nuova codifica potrebbe produrre un risultato meno accurato dipende dai valori specificati in `A[]`. Pertanto anche apparentemente innocue ottimizzazioni potrebbero avere conseguenze negative.

Questi tipi di problemi di ottimizzazione non sono limitati a codice a virgola mobile "complesso". Gli algoritmi a virgola mobile anche semplici potrebbero non riuscire quando ottimizzato in modo non corretto. Si consideri un algoritmo semplice e diretto sommatoria:

```cpp
float Sum( const float A[], int n )
{
   float sum=0;
   for (int i=0; i<n; i++)
      sum = sum + A[i];
   return sum;
}
```

Perché alcune unità a virgola mobile sono in grado di eseguire più operazioni contemporaneamente, un compilatore possibile scegliere di avviare un'ottimizzazione riduzione scalare. Questa ottimizzazione consente di trasformare in modo efficace la funzione Sum semplice dall'alto in quanto segue:

```cpp
float Sum( const float A[], int n )
{
   int n4 = n-n%4; // or n4=n4&(~3)
   int i;
   float sum=0, sum1=0, sum2=0, sum3=0;
   for (i=0; i<n4; i+=4)
   {
      sum = sum + A[i];
      sum1 = sum1 + A[i+1];
      sum2 = sum2 + A[i+2];
      sum3 = sum3 + A[i+3];
   }
   sum = sum + sum1 + sum2 + sum3;
   for (; i<n; i++)
      sum = sum + A[i];
   return sum;
}
```

La funzione adesso gestisce quattro somme separate, che possono essere elaborate contemporaneamente in ogni passaggio. Anche se la funzione ottimizzata ora è molto più veloce, i risultati ottimizzati possono essere piuttosto diversi dai risultati non ottimizzata. In questa modifica, il compilatore presuppone associativa addizione a virgola mobile; vale a dire che le due espressioni sono equivalenti: `(a + b) + c == a + (b + c)`. Tuttavia, un'associatività da non sempre valere anche per numeri a virgola mobile. Anziché calcolare la somma come:

```cpp
sum = A[0]+A[1]+A[2]+...+A[n-1];
```

la funzione trasformata ora calcola il risultato come

```cpp
sum = (A[0]+A[4]+A[8]+...)
    + (A[1]+A[5]+A[9]+...)
    + (A[2]+A[6]+A[10]+...)
    + (A[3]+A[7]+A[11]+...);
```

Per alcuni valori di `A[]`, questo ordinamento diversi di operazioni di aggiunta può produrre risultati imprevisti. A complicare ulteriormente il tutto, alcuni programmatori possono scegliere di anticipare tali ottimizzazioni e compensare loro in modo appropriato. In questo caso, un programma può costruire la matrice `A` in un ordine diverso, in modo che la somma ottimizzata produce i risultati previsti. Inoltre, in molte circostanze l'accuratezza del risultato ottimizzato può essere "sufficientemente vicino". Ciò vale soprattutto quando l'ottimizzazione offre vantaggi significativi velocità. Videogiochi, ad esempio, richiedere velocità molto possibile ma non richiedono spesso accurati calcoli a virgola mobile. I responsabili del compilatore devono pertanto forniscono un meccanismo per i programmatori controllare gli obiettivi spesso diversi di velocità e accuratezza.

Alcuni compilatori di risolvere il compromesso tra velocità e precisione, fornendo un'opzione separata per ogni tipo di ottimizzazione. Ciò consente agli sviluppatori di disabilitare le ottimizzazioni che causano modifiche con precisione a virgola mobile per la propria applicazione particolare. Sebbene questa soluzione può offrire un livello elevato di controllo rispetto al compilatore, introduce numerosi problemi aggiuntivi:

- Spesso risulta chiaro che cambia per abilitare o disabilitare.
- La disabilitazione di tutte le ottimizzazioni singola potrebbero compromettere le prestazioni del codice non a virgola mobile a.
- Ogni commutatore aggiuntive comporta molte combinazioni di commutatore nuova; il numero di combinazioni rapidamente diventa difficile da gestire.

Pertanto, anche fornendo commutatori separati per ogni ottimizzazione potrebbe sembrare interessante, utilizzano tali compilatori può essere complesso e affidabile.

Molti compilatori C++ offrono un *coerenza* modello a virgola mobile, (tramite un **/Op** o **/fltconsistency** commutatore) che consente agli sviluppatori di creare applicazioni conformi con la semantica a virgola mobile strict. Quando attivata, questo modello impedisce il compilatore di usare la maggior parte delle ottimizzazioni su calcoli a virgola mobile consentendo allo stesso tali ottimizzazioni per il codice non a virgola mobile. Il modello di coerenza, tuttavia, presenta un dark-side. Per restituire i risultati prevedibili in diverse architetture FPU, quasi tutte le implementazioni di **/Op** le espressioni intermedie arrotondamento all'utente specificato precisione; ad esempio, si consideri l'espressione seguente:

```cpp
float a, b, c, d, e;
// . . .
a = b * c + d * e;
```

Per produrre risultati coerenti e ripetibili sotto **/Op**, questa espressione viene valutata come se venisse implementata come segue:

```cpp
float x = b  *c;
float y = d * e;
a = x + y;
```

Il risultato finale ora presenta errori di arrotondamento e con precisione singola *a ogni passaggio di valutazione dell'espressione*. Sebbene questa interpretazione rigorosamente non violino le regole di semantica di C++, è quasi mai il modo migliore per valutare le espressioni a virgola mobile. È in genere preferibile intermedie comporta più alto come precisione come pratica di calcolo. Ad esempio, sarebbe migliore calcolare l'espressione `a = b * c + d * e` in una precisione maggiore, come in

```cpp
double x = b * c;
double y = d * e;
double z = x + y;
a = (float)z;
```

o, meglio ancora

```cpp
long double x = b * c;
long double y = d * e
long double z = x + y;
a = (float)z;
```

Quando si calcolano i risultati intermedi in una precisione maggiore, il risultato finale è significativamente più accurato. Paradossalmente, adottando un modello di coerenza, la probabilità di errore viene aumentata esattamente quando l'utente tenta di ridurre errore disabilitando le ottimizzazioni unsafe. In questo modo il modello di coerenza può compromettere l'efficienza e nel contempo non fornisce alcuna garanzia di aumentare l'accuratezza. Per i programmatori numerici gravi, ciò non sembra un compromesso molto efficaci per ed è il principale motivo che il modello non viene in genere anche ricevuto.

Partire dalla versione 8.0 (Visual C++® 2005), Microsoft C++ il compilatore fornisce migliore alternativa. Consente ai programmatori di selezionare una delle tre modalità a virgola mobile generale: /fp: precise, /fp: fast e /fp: strict.

- In /fp: precise, vengono eseguite solo le ottimizzazioni-safe sul codice a virgola mobile e, a differenza **/Op**, calcoli intermedi vengono eseguiti in modo coerente a livello la massima precisione pratica.
- modalità /fp: fast rilassa a virgola mobile e regole che consentono di ottimizzazione più aggressiva a scapito della precisione.
- /fp: la modalità strict fornisce tutte della correttezza generale /fp: precise durante l'abilitazione la semantica delle eccezioni a virgola mobile e impedendo trasformazioni non valide in presenza di FPU ambiente modifiche (ad esempio, per la precisione di registro, arrotondamento direzione e così via).

La semantica delle eccezioni a virgola mobile può essere controllata in modo indipendente da un'opzione della riga di comando o un pragma del compilatore. Per impostazione predefinita, la semantica delle eccezioni a virgola mobile è disabilitata in /fp: precise e abilitati in /fp: strict. Il compilatore fornisce inoltre controllare FPU ambiente sensibilità e alcune ottimizzazioni specifiche a virgola mobile, ad esempio contrazioni. Questo modello semplice offre agli sviluppatori un notevole controllo sulla compilazione di codice a virgola mobile senza l'onere troppe opzioni del compilatore o la prospettiva di effetti collaterali indesiderati.

## <a name="the-fpprecise-mode-for-floating-point-semantics"></a>Fp: modalità precise per la semantica della virgola mobile

La modalità di semantica della virgola mobile predefinita è /fp: precise. Quando viene selezionata questa modalità, il compilatore strettamente conformi a un set di regole di sicurezza per l'ottimizzazione delle operazioni a virgola mobile. Queste regole consentono al compilatore di generare codice macchina efficiente, mantenendo l'accuratezza dei calcoli a virgola mobile. Per facilitare la produzione di fast programmi, il /fp: precisa modello disabilita la semantica delle eccezioni a virgola mobile (anche se essi possono essere abilitate in modo esplicito). Microsoft ha selezionato /fp: precise come modalità predefinita a virgola mobile, poiché crea programmi rapide e accurati.

Per richiedere in modo esplicito il /fp: modalità precise utilizzando il compilatore della riga di comando, usare il [/fp: precise](fp-specify-floating-point-behavior.md) passare:

> CL /fp: precise source.cpp

Ciò indica al compilatore di utilizzare /fp: precisa semantica durante la generazione di codice per il file source.cpp. Il /fp: precisa modello può essere richiamato anche in base a ogni singola dalla funzione utilizzando il [float_control (pragma) del compilatore](#the-float-control-pragma).

Sotto il /fp: modalità precise, il compilatore non vengono eseguite le ottimizzazioni che studi l'accuratezza dei calcoli a virgola mobile. Il compilatore verrà sempre correttamente l'arrotondamento in assegnazioni, cast di tipo e chiamate di funzione e arrotondamento intermedio verrà sempre eseguita alla stessa precisione come registra l'unità FPU. Le ottimizzazioni provvisoria, ad esempio forme contratte, sono abilitate per impostazione predefinita. La semantica delle eccezioni e sensibilità ambiente FPU sono disabilitate per impostazione predefinita.

|/fp: precisa semantica|Descrizione|
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, cast di tipo, e chiamate di funzione. Le espressioni intermedie verranno valutate al registro precisione.|
|Trasformazioni algebriche|Una stretta osservanza di algebra a virgola mobile non associativo, non pacchetto di distribuzione, a meno che non è garantita una trasformazione sempre producono gli stessi risultati.|
|Forme contratte|È consentito per impostazione predefinita. Per altre informazioni, vedere sezione [fp_contract (pragma)](#the-fp-contract-pragma).|
|Ordine di valutazione a virgola mobile|Il compilatore potrebbe riordinare la valutazione delle espressioni a virgola mobile a condizione che i risultati finali non vengono modificati.|
|L'accesso all'ambiente FPU|Disattivata per impostazione predefinita. Per altre informazioni, vedere sezione [il pragma fenv_access](#the-fenv-access-pragma). Viene utilizzata la precisione predefinita e la modalità di arrotondamento.|
|Semantica delle eccezioni a virgola mobile|Disattivata per impostazione predefinita. Per altre informazioni, vedere [/fp: tranne](fp-specify-floating-point-behavior.md).|

### <a name="rounding-semantics-for-floating-point-expressions-under-fpprecise"></a>Arrotondamento semantica per le espressioni a virgola mobile in /fp: precise

Il /fp: precisa modello viene sempre eseguita calcoli intermedi in precisione pratica più alto, arrotondamento in modo esplicito solo in determinati momenti nella valutazione dell'espressione. Arrotondamento sempre alla precisione specificata dall'utente si verifica in quattro punti: (a) quando viene effettuata un'assegnazione, (b) quando viene eseguito un cast di tipo, (c) quando un valore a virgola mobile viene passato come argomento a una funzione e (d) quando viene restituito un valore a virgola mobile da un funzione. Poiché i calcoli intermedi vengono sempre eseguiti precisione register, l'accuratezza dei risultati intermedi è dipende dalla piattaforma (sebbene precisione sarà sempre almeno più accurata l'utente specificato precisione).

Si consideri l'espressione di assegnazione nel codice seguente. L'espressione sul lato destro dell'operatore di assegnazione '=' verrà calcolato durante la precisione di registro e arrotondato in modo esplicito al tipo del lato sinistro dell'assegnazione.

```cpp
float a, b, c, d;
double x;
...
x = a*b + c*d;
```

viene calcolata come

```cpp
float a, b, c, d;
double x;
...
register tmp1 = a*b;
register tmp2 = c*d;
register tmp3 = tmp1+tmp2;
x = (double) tmp3;
```

Per eseguire l'arrotondamento in modo esplicito un risultato intermedio, introdurre un cast di tipo. Ad esempio, se il codice precedente viene modificato mediante l'aggiunta esplicita il cast di tipo, l'espressione intermedia (c * 1!d) verrà arrotondato al tipo del cast di tipo.

```cpp
float a, b, c, d;
double x;
// . . .
x = a*b + (float)(c*d);
```

viene calcolata come

```cpp
float a, b, c, d;
double x;
// . . .
register tmp1 = a*b;
float tmp2 = c*d;
register tmp3 = tmp1+tmp2;
x = (double) tmp3;
```

Una delle implicazioni di questo metodo di arrotondamento è che alcune trasformazioni apparentemente equivalente in realtà non hanno una semantica identica. Ad esempio, la seguente trasformazione suddivide un'espressione di assegnazione singola in due espressioni di assegnazione.

```cpp
float a, b, c, d;
// . . .
a = b*(c+d);
```

NON è equivalente a

```cpp
float a, b, c, d;
// . . .
a = c+d;
a = b*a;
```

Allo stesso modo:

```cpp
a = b*(c+d);
```

NON è equivalente a

```cpp
a = b*(a=c+d);
```

Queste codifiche non hanno una semantica equivalente perché ognuno le codifiche secondo hanno introdotto un'operazione di assegnazione aggiuntive e pertanto un arrotondamento aggiuntive punto.

Quando una funzione restituisce un valore a virgola mobile, il valore verrà arrotondato al tipo della funzione. Quando un valore a virgola mobile viene passato come parametro a una funzione, il valore verrà arrotondato al tipo del parametro. Ad esempio:

```cpp
float sumsqr(float a, float b)
{
   return a*a + b*b;
}
```

viene calcolata come

```cpp
float sumsqr(float a, float b)
{
    register tmp3 = a*a;
    register tmp4 = b*b;
    register tmp5 = tmp3+tmp4;
    return (float) tmp5;
}
```

Allo stesso modo:

```cpp
float w, x, y, z;
double c;
...
c = symsqr(w*x+y, z);
```

viene calcolata come

```cpp
float x, y, z;
double c;
...
register tmp1 = w*x;
register tmp2 = tmp1+y;
float tmp3 = tmp2;
c = symsqr( tmp3, z);
```

### <a name="architecture-specific-rounding-under-fpprecise"></a>Arrotondamento specifici per l'architettura in /fp: precise

|Processore|Precisione per le espressioni intermedie di arrotondamento|
|-|-|
|x86|Le espressioni intermedie vengono calcolate nella precisione a 53 bit predefinita con un intervallo esteso fornito da un esponente a 16 bit. Quando questi valori 53:16 sono "distribuiti" per la memoria (come può verificarsi anche durante una chiamata di funzione), l'intervallo esteso esponente verrà limitato a 11 bit. Vale a dire, vengono eseguito il cast valori stati distribuiti nel formato standard e precisione doppia con solo un esponente a 11 bit.<br/>Un utente può passare alla precisione a 64 bit estesa per l'arrotondamento intermedia modificando la parola di controllo a virgola mobile usando `_controlfp` e abilitando l'accesso all'ambiente FPU (vedere [il pragma fenv_access](#the-fenv-access-pragma)). Tuttavia, quando vengono passati valori di precisione estesa registro per la memoria, i risultati intermedi ancora essere arrotondati a precisione doppia.<br/>Questa particolare semantica è soggette a modifiche.|
|amd64|Semantica FP su amd64 è leggermente diversa da altre piattaforme. Per motivi di prestazioni, le operazioni intermedi vengono calcolate nella precisione più ampia degli operandi anziché alla precisione più larga disponibile.  Per imporre i calcoli per essere calcolata con una precisione più ampia rispetto a operandi, gli utenti devono presentare un'operazione cast su almeno un operando in una sottoespressione.<br/>Questa particolare semantica è soggette a modifiche.|

### <a name="algebraic-transformations-under-fpprecise"></a>Trasformazioni algebriche in /fp: precise

Quando il /fp: precise è abilitata, il compilatore non verrà mai eseguire trasformazioni algebriche *, a meno che il risultato finale è probabilmente identico*. Molte delle regole algebriche familiare per numero reale aritmetici non contengono sempre per i calcoli a virgola mobile. Ad esempio, le espressioni seguenti sono equivalenti per Reals, ma non necessariamente per gli elementi mobili.

|Form|Descrizione|
|-|-|
|`(a+b)+c = a+(b+c)`|Regola associativa per l'aggiunta|
|`(a*b)*c = a*(b*c)`|Associativa regola per la moltiplicazione|
|`a*(b+c) = a*b + b*c`|Distribuzione di moltiplicazione su aggiunta|
|`(a+b)(a-b) = a*a-b*b`|Eseguire il Factoring algebriche|
|`a/b = a*(1/b)`|Divisione per moltiplicativo|
|`a*1.0 = a`|Identità moltiplicativa|

Come illustrato nell'esempio introduzione con la funzione `KahanSum`, il compilatore potrebbe essere tentato di eseguire trasformazioni algebriche diverse per produrre programmi notevolmente più veloci. Anche se le ottimizzazioni dipende da tali trasformazioni algebriche sono quasi sempre corrette, esistono casi per la quale siano perfettamente sicure. Ad esempio, è talvolta utile per sostituire la divisione per un *costante* valore con moltiplicazione per la moltiplicazione-inverso della costante:

```cpp
const double four = 4.0;
double a, b;
...

a = b/four;
```

Possono essere trasformati in

```cpp
const double four = 4.0;
const double tmp0 = 1/4.0;
double a, b;
...
a = b*tmp0;
```

Si tratta di una trasformazione sicuro perché query optimizer può determinare in fase di compilazione che x / 4.0 = = x*(1/4.0) per tutti i valori a virgola mobile di x, inclusi valori infiniti e NaN. Tramite la sostituzione di un'operazione di divisione con una moltiplicazione, il compilatore può salvare diversi cicli: in particolar modo nei FPUs che non implementano direttamente la divisione, ma richiedono al compilatore di generare una combinazione di approssimazione reciproco e aggiungere moltiplicare istruzioni. Il compilatore può eseguire questo tipo un'ottimizzazione in /fp: precise solo quando la sostituzione della moltiplicazione esatto l'elemento stesso risultato come la divisione. Il compilatore può inoltre eseguire trasformazioni semplice in /fp: precise, purché i risultati sono identici. Sono inclusi:

|Form|Descrizione
|-|-|
|`(a+b) == (b+a)`|Regola commutativa per l'aggiunta|
|`(a*b) == (b*a)`|Commutativa regola per la moltiplicazione|
|`1.0*x*y == x*1.0*y == x*y*1.0 == x*y`|Moltiplicazione per 1,0|
|`x/1.0*y == x*y/1.0 == x*y`|Divisione per 1,0|
|`2.0*x == x+x`|Moltiplicazione per 2.0|

### <a name="contractions-under-fpprecise"></a>Forme contratte in /fp: precise

Una funzionalità chiave dell'architettura di molte unità a virgola mobile moderna è la possibilità di eseguire una moltiplicazione seguita da un'aggiunta come una singola operazione senza errori di arrotondamento intermedi. Ad esempio, l'architettura Intel Itanium vengono fornite istruzioni per combinare ognuna di queste operazioni ternarie (un*b + c), (un*b, c) e (c-a * b), in una singola istruzione a virgola mobile (fma, fms e fnma rispettivamente). Queste istruzioni singole sono più velocemente rispetto all'esecuzione separata multiply e aggiungere le istruzioni e sono più accurate poiché non esiste alcun arrotondamento intermedio del prodotto. Questa ottimizzazione può velocizzare le funzioni contenenti diversi con interfoliazione multiply in modo significativo e operazioni di aggiunta. Ad esempio, si consideri il seguente algoritmo che calcola il prodotto scalare di due vettori di n-dimensionale.

```cpp
float dotProduct( float x[], float y[], int n )
{
   float p=0.0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}
```

Questo calcolo può essere eseguito una serie di moltiplicare-aggiungere le istruzioni del modulo p = p + x [i] * y [i].

L'ottimizzazione contrazione può essere controllata in modo indipendente tramite il `fp_contract` pragma del compilatore. Per impostazione predefinita, il /fp: precisa modello consente contrazioni poiché essi migliorare sia la precisione e velocità. In /fp: precise, il compilatore non verrà mai contratto un'espressione con arrotondamento esplicita.
Esempi

```cpp
float a, b, c, d, e, t;
...
d = a*b + c;         // may be contracted
d += a*b;            // may be contracted
d = a*b + e*d;       // may be contracted into a mult followed by a mult-add
etc...

d = (float)a*b + c;  // won't be contracted because of explicit rounding

t = a*b;             // (this assignment rounds a*b to float)
d = t + c;           // won't be contracted because of rounding of a*b
```

### <a name="order-of-floating-point-expression-evaluation-under-fpprecise"></a>Ordine di valutazione dell'espressione a virgola mobile in /fp: precise

Le ottimizzazioni che mantiene l'ordine di valutazione dell'espressione a virgola mobile sono sempre sicure e sono pertanto consentite in fp: modalità precise. Si consideri la seguente funzione che calcola il prodotto scalare di due vettori di n-dimensionale in precisione singola. Il primo blocco di codice riportato di seguito è la funzione originale come può essere codificato dal programmatore, seguita dalla stessa funzione dopo l'ottimizzazione di cicli parziale.

```cpp
//original function
float dotProduct( float x[], float y[], int n )
{
   float p=0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}

//after a partial loop-unrolling
float dotProduct( float x[], float y[], int n )
{
   int n4= n/4*4; // or n4=n&(~3);
   float p=0;
   int i;

   for (i=0; i<n4; i+=4)
   {
      p+=x[i]*y[i];
      p+=x[i+1]*y[i+1];
      p+=x[i+2]*y[i+2];
      p+=x[i+3]*y[i+3];
   }

   // last n%4 elements
   for (; i<n; i++)
      p+=x[i]*y[i];

   return p;
}
```

Il vantaggio principale di questa ottimizzazione è che riduce il numero di diramazioni ciclo condizionale da quanto il 75%. Inoltre, se si aumenta il numero di operazioni all'interno del corpo del ciclo, il compilatore può ora disponibili più opportunità per ottimizzare ulteriormente. Ad esempio, alcuni FPUs potrebbero essere in grado di eseguire la moltiplicazione-aggiuntivo + p = x [i] * y [i] durante il recupero contemporaneamente i valori per x [i+1] e y [i+1] per l'utilizzo nel passaggio successivo. Questo tipo di ottimizzazione infatti perfettamente sicuro per i calcoli a virgola mobile e mantiene l'ordine delle operazioni.

Spesso risulta vantaggioso per il compilatore riordinare le operazioni per produrre codice più veloce. Esaminare il codice seguente:

```cpp
double a, b, c, d;
double x, y, z;
...
x = a*a*a + b*b*b + c*c*c;
...
y = a*a + b*b + c*c;
...
z = a + b + c;
```

Le regole semantiche di C++ indicano che il programma dovrebbe produrre risultati come se sia innanzitutto calcolarla x quindi y e infine z. Si supponga che il compilatore includa solo quattro registri a virgola mobile disponibili. Se il compilatore viene forzato per il calcolo x, y e z in ordine, è possibile scegliere di generare il codice con la semantica seguente:

```cpp
double a, b, c, d;
double x, y, z;
register r0, r1, r2, r3;
...
// Compute x
r0 = a;         // r1 = a*a*a
r1 = r0*r0;
r1 = r1*r0;
r0 = b;         // r2 = b*b*b
r2 = r0*r0;
r2 = r2*r0;
r0 = c;         // r3 = c*c*c
r3 = r0*r0;
r3 = r3*r0;
r0 = r1 + r2;
r0 = r0 + r3;
x = r0;         // x = r1+r2+r3
// . . .
// Compute y
r0 = a;         // r1 = a*a
r1 = r0*r0;
r0 = b;         // r2 = b*b
r2 = r0*r0;
r0 = c;         // r3 = c*c
r3 = r0*r0;
r0 = r1 + r2;
r0 = r0 + r3;
y = r0;         // y = r1+r2+r3
// . . .
// Compute z
r1 = a;
r2 = b;
r3 = c;
r0 = r1 + r2;
r0 = r0 + r3;
z = r0;         // z = r1+r2+r3
```

Sono presenti numerose operazioni di archiviazione con ridondanza chiaramente questa codifica. Se il compilatore rispetta le regole semantiche di C++, questo ordinamento è necessario perché il programma potrebbe accedere all'ambiente di FPU intermedi ogni assegnazione. Tuttavia, le impostazioni predefinite per /fp: precise consentire al compilatore di ottimizzazione come se il programma non accede all'ambiente, che consente di riordinare le espressioni. È quindi libero di rimuovere le ridondanze calcolando i tre valori in ordine inverso, come segue:

```cpp
double a, b, c, d;
double x, y, z;
register r0, r1, r2, r3;
...
// Compute z
r1 = a;
r2 = b;
r3 = c;
r0 = r1+r2;
r0 = r0+r3;
z = r0;
...
// Compute y
r1 = r1*r1;
r2 = r2*r2;
r3 = r3*r3;
r0 = r1+r2;
r0 = r0+r3;
y = r0;
...
// Compute x
r0 = a;
r1 = r1*r0;
r0 = b;
r2 = r2*r0;
r0 = c;
r3 = r3*r0;
r0 = r1+r2;
r0 = r0+r3;
x = r0;
```

Questa codifica è chiaramente superiore, con ridotto il numero di istruzioni a virgola mobile quasi 40%. I risultati per x, y e z sono gli stessi come in precedenza, ma calcolata con un sovraccarico minore.

In /fp: precise, il compilatore potrebbe inoltre *interlacciata* sottoespressioni comuni in modo da produrre codice più veloce. Codice per calcolare le radici di un'equazione quadratica, ad esempio, potrebbe essere scritto come segue:

```cpp
double a, b, c, root0, root1;
...
root0 = (-b + sqrt(b*b-4*a*c))/(2*a);
root1 = (-b - sqrt(b*b-4*a*c))/(2*a);
```

Sebbene queste espressioni si differenziano solo per una singola operazione, il programmatore potrebbe averlo scritto in questo modo per garantire che ogni valore radice verrà calcolato per la massima precisione pratica. In /fp: precise, il compilatore è libero di interlacciata il calcolo del root0 e root1 per rimuovere le sottoespressioni comuni senza perdita di precisione. Ad esempio, di seguito è rimosso diversi passaggi ridondanti continuando a produrre la stessa risposta esatta.

```cpp
double a, b, c, root0, root1;
...
register tmp0 = -b;
register tmp1 = sqrt(b*b-4*a*c);
register tmp2 = 2*a;
root0 = (tmp0+tmp1)/tmp2;
root1 = (tmp0-tmp1)/tmp2;
```

Altre ottimizzazioni potrebbero provare a spostare la valutazione di alcune espressioni indipendenti. Si consideri il seguente algoritmo che contiene un ramo condizionale all'interno di un corpo del ciclo.

```cpp
vector<double> a(n);
double d, s;
// . . .
for (int i=0; i<n; i++)
{
   if (abs(d)>1.0)
      s = s+a[i]/d;
   else
      s = s+a[i]*d;
}
```

Il compilatore potrebbe rilevare che il valore dell'espressione (abs(d) > 1) è invariato rispetto all'interno del corpo del ciclo. Ciò consente al compilatore di "eseguire" if istruzione di fuori del corpo del ciclo, trasformare il codice sopra riportato in quanto segue:

```cpp
vector<double> a(n);
double d, s;
// . . .
if (abs(d)>1.0)
   for (int i=0; i<n; i++)
      s = s+a[i]/d;
else
   for (int i=0; i<n; i++)
      s = s+a[i]*d;
```

Dopo la trasformazione, non è più una diramazione condizionale in uno dei corpi di ciclo, migliorando notevolmente le prestazioni complessive del ciclo. Questo tipo di ottimizzazione è perfettamente sicuro perché la valutazione dell'espressione (abs(d) > 1.0) è indipendente da altre espressioni.

In presenza di eccezioni a virgola mobile oppure l'accesso all'ambiente FPU questi tipi di ottimizzazione sono contraindicated perché viene cambiata il semantica del flusso. Tali ottimizzazioni disponibili solo in fp: modalità precise perché l'accesso all'ambiente FPU e la semantica delle eccezioni a virgola mobile è disabilitata per impostazione predefinita. Le funzioni che accedono l'ambiente FPU possono disabilitare in modo esplicito tali ottimizzazioni tramite il `fenv_access` pragma del compilatore. Allo stesso modo, è necessario utilizzare le funzioni utilizzano eccezioni a virgola mobile il `float_control(except ... )` pragma del compilatore (oppure usare il **/fp: tranne** opzione della riga di comando).

In sintesi, la /fp: precise modalità consente al compilatore di riordinare la valutazione delle espressioni a virgola mobile a condizione che i risultati finali non vengono modificati e che i risultati non siano dipendenti nell'ambiente di FPU o in caso di eccezioni a virgola mobile.

### <a name="fpu-environment-access-under-fpprecise"></a>L'accesso di ambiente FPU con /fp: precise

Quando il /fp: precise è abilitata, il compilatore presuppone che un programma non accedere o modificare l'ambiente di FPU. Come indicato in precedenza, questa ipotesi consente al compilatore di riordinare o spostare le operazioni a virgola mobile per migliorare l'efficienza in /fp: precise.

Alcuni programmi possono modificare la direzione di arrotondamento a virgola mobile tramite la `_controlfp` (funzione). Ad esempio, una o più applicazioni di calcolo superiore e inferiore dei limiti di errore in operazioni aritmetiche eseguendo lo stesso calcolo due volte, innanzitutto durante l'arrotondamento verso l'infinito negativo, quindi while arrotondamento verso l'infinito positivo. Poiché l'unità FPU fornisce un modo pratico per controllare l'arrotondamento, un programmatore può scegliere di modificare la modalità di arrotondamento modificando l'ambiente di FPU. Il codice seguente calcola il che errore esatto associato di una moltiplicazione a virgola mobile e modificando l'ambiente di FPU.

```cpp
double a, b, cLower, cUpper;
// . . .
_controlfp( _RC_DOWN, _MCW_RC );    // round to -&infin;
cLower = a*b;
_controlfp( _RC_UP, _MCW_RC );    // round to +&infin;
cUpper = a*b;
_controlfp( _RC_NEAR, _MCW_RC );    // restore rounding mode
```

In /fp: precise, il compilatore sempre presuppone l'uso dell'ambiente di FPU predefinito, pertanto è gratuito ignorare le chiamate a query optimizer `_controlfp` e ridurre le assegnazioni sopra per cUpper = cLower = un * b; Ciò produrrebbe chiaramente risultati non corretti. Per evitare tali ottimizzazioni, abilitare l'accesso all'ambiente FPU utilizzando il `fenv_access` pragma del compilatore.

Altri programmi potrebbero tentare di rilevare alcuni errori a virgola mobile e controllando la parola di stato dell'unità a virgola mobile. Ad esempio, il codice seguente controlla le condizioni di divisione per zero e inesatto

```cpp
double a, b, c, r;
float x;
// . . .
_clearfp();
r = (a*b + sqrt(b*b-4*a*c))/(2*a);
if (_statusfp() & _SW_ZERODIVIDE)
   handle divide by zero as a special case
_clearfp();
x = r;
if (_statusfp() & _SW_INEXACT)
   handle inexact error as a special case
etc...
```

In /fp: precise, ottimizzazioni che riordino valutazione dell'espressione possono modificare i punti in corrispondenza del quale si verificano alcuni errori. La parola di stato di accesso ai programmi devono consentire l'accesso di ambiente FPU utilizzando il `fenv_access` pragma del compilatore.

Per altre informazioni, vedere sezione [il pragma fenv_access](#the-fenv-access-pragma).

### <a name="floating-point-exception-semantics-under-fpprecise"></a>La semantica delle eccezioni a virgola mobile in /fp: precise

Per impostazione predefinita, la semantica delle eccezioni a virgola mobile è disabilitata in /fp: precise. La maggior parte dei programmatori in C++ preferiscono gestire condizioni a virgola mobile eccezionali senza l'utilizzo di sistema o le eccezioni C++. Inoltre, come indicato in precedenza, la semantica delle eccezioni a virgola mobile disabilitando la maggiore flessibilità del compilatore per l'ottimizzazione delle operazioni a virgola mobile. Utilizzare uno il **/fp: tranne** passare o il `float_control` pragma per abilitare la semantica delle eccezioni a virgola mobile e quando si usa il /fp: precisa modello.

Per altre informazioni, vedere sezione [abilitazione la semantica delle eccezioni a virgola mobile](#enabling-floating-point-exception-semantics).

## <a name="the-fpfast-mode-for-floating-point-semantics"></a>La modalità /fp: fast per semantica della virgola mobile

Quando è abilitata la modalità /fp: fast, il compilatore rilassa le regole tale /fp: precise utilizza per l'ottimizzazione delle operazioni a virgola mobile. Questa modalità è consente al compilatore di ottimizzare ulteriormente il codice a virgola mobile per la velocità a scapito della precisione a virgola mobile e della correttezza. Programmi che non si basano su calcoli a virgola mobile accurati verifichi un miglioramento significativo velocità attivando la modalità /fp: fast.

La modalità a virgola mobile /fp: fast viene abilitata tramite il [/fp: fast](fp-specify-floating-point-behavior.md) opzione del compilatore da riga di comando come indicato di seguito:

> CL /fp: fast source.cpp

Questo esempio si indica al compilatore di usare /fp: fast semantica durante la generazione di codice per il file source.cpp. Il modello /fp: fast può essere richiamato anche in base a ogni singola dalla funzione utilizzando il `float_control` pragma del compilatore.

Per altre informazioni, vedere sezione [float_control (pragma)](#the-float-control-pragma).

Nella modalità /fp: fast, il compilatore può eseguire le ottimizzazioni che modificano l'accuratezza dei calcoli a virgola mobile. Il compilatore potrebbe non correttamente l'arrotondamento in assegnazioni, typecast o chiamate di funzione e arrotondamento intermedio non verrà sempre eseguito. Ottimizzazioni a virgola mobile specifiche, ad esempio forme contratte, sono sempre abilitate. La semantica delle eccezioni a virgola mobile e la sensibilità ambiente FPU sono disabilitati e non disponibile.

|semantica /fp: fast|Descrizione
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, cast di tipo, e chiamate di funzione possono essere ignorate.<br/>Le espressioni intermedie possono essere arrotondate meno registrare precisione in base ai requisiti di prestazioni.|
|Trasformazioni algebriche|Il compilatore può trasformare le espressioni in base al numero reale algebra associativa, distributiva; Queste trasformazioni non sono necessariamente essere accurate o corretto.|
|Forme contratte|Sempre attivata; non può essere disabilitata dal pragma `fp_contract`|
|Ordine di valutazione a virgola mobile|Il compilatore potrebbe riordinare la valutazione delle espressioni a virgola mobile, anche quando tali modifiche potrebbero alterare i risultati finali.|
|L'accesso all'ambiente FPU|Disabilitato. Non disponibile|
|Semantica delle eccezioni a virgola mobile|Disabilitato. Non disponibile|

### <a name="rounding-semantics-for-floating-point-expressions-under-fpfast"></a>Arrotondamento semantica per le espressioni a virgola mobile in /fp: fast

A differenza di /fp: precisa modello, il modello /fp: fast esegue calcoli intermedi precisione più pratico. Arrotondamento alla assegnazioni, cast di tipo e le chiamate di funzione non sempre si verifichi. Ad esempio, la prima funzione seguita introdotta tre variabili di e con precisione singola (`C`, `Y` e `T`). Il compilatore può scegliere di essere registrate queste variabili, in effetti di tipo promozione `C`, `Y` e `T` a precisione doppia.

Funzione originale:

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0, C=0, Y, T;
   for (int i=0; i<n; i++)
   {
      Y = A[i] - C;
      T = sum + Y;
      C = T - sum - Y;
      sum = T;
   }
   return sum;
}
```

Registrazione di variabili:

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0;
   double C=0, Y, T; // now held in-register
   for (int i=0; i<n; i++)
   {
      Y = A[i] - C;
      T = sum + Y;
      C = T - sum - Y;
      sum = (float) T;
   }
   return sum;
}
```

In questo esempio, /fp: fast ha subverted lo scopo della funzione originale. Finale ottimizzata risultato, della variabile `sum`, potrebbe essere piuttosto perturbed dal risultato corretto.

In /fp: fast, il compilatore in genere tenterà di mantenere almeno la precisione specificata per il codice sorgente. Tuttavia, in alcuni casi il compilatore possa scegliere di eseguire le espressioni intermedie in un *abbassare precisione* rispetto a quanto specificato nel codice sorgente. Il primo blocco di codice riportato di seguito chiama ad esempio, una versione a precisione doppia della funzione radice quadrata. In /fp: fast, in alcune circostanze, ad esempio quando il risultato e degli operandi della funzione sono esplicitamente il cast di e con precisione singola, il compilatore può scegliere di sostituire la chiamata a precisione doppia `sqrt` con una chiamata a una precisione singola `sqrtf`(funzione). Poiché i cast assicurarsi che il valore verso `sqrt` e il valore in uscita vengono arrotondati a precisione singola, cambia solo il posto di arrotondamento. Se il valore in entrata nella sqrt è un valore di precisione doppia e il compilatore ha eseguito questa trasformazione, fino a metà dei bit precisione potrebbe essere errata.

Funzione originale

```cpp
double sqrt(double);
// . . .
double a, b, c;
float f1, f2;
// . . .
float length = (float)sqrt((float)(a*a + b*b + c*c));
float sum = (float) ((double)f1 + (double)f2);
```

Funzione ottimizzata

```cpp
float sqrtf(float)...
// . . .
double a, b, c;
float f1, f2;
// . . .
double tmp0 = a*a + b*b + c*c;
float tmp1 = tmp0;    // round of parameter value
float length = sqrtf(tmp1); // rounded sqrt result
float sum = f1 + f2;
```

Sebbene sia meno preciso, questa ottimizzazione può essere particolarmente utile quando la destinazione processori che forniscono, ad esempio precisione singola, versioni intrinseche di funzioni `sqrt`. Solo con precisione quando il compilatore utilizzerà tali ottimizzazioni è dipendenti sia della piattaforma e il contesto.

Inoltre, non è non garantita la coerenza per la precisione dei calcoli intermedi, che possono essere eseguite in qualsiasi livello di precisione disponibile al compilatore. Anche se il compilatore proverà a mantenere almeno il livello di precisione come specificato dal codice, /fp: fast consente all'utilità di ottimizzazione downcast calcoli intermedi per produrre codice macchina più veloce o più piccoli. Ad esempio, il compilatore potrebbe ottimizzare il codice precedente per arrotondare alcune moltiplicazioni intermediate a precisione singola.

```cpp
float sqrtf(float)...
// . . .
double a, b, c;
float f1, f2;
// . . .
float tmp0 = a*a;     // round intermediate a*a to single-precision
float tmp1 = b*b;     // round intermediate b*b to single-precision
double tmp2 = c*c;    // do NOT round intermediate c*c to single-precision
float tmp3 = tmp0 + tmp1 + tmp2;
float length = sqrtf(tmp3);
float sum = f1 + f2;
```

Questo tipo di conversione e arrotondamento aggiuntive potrà derivati dall'utilizzo di una minore precisione a virgola mobile a unità, ad esempio SSE2, per eseguire alcuni calcoli intermedi. Dipende dalla piattaforma; viene pertanto la precisione di conversione e arrotondamento /fp: fast il codice che compila anche per un processore necessariamente potrebbe non funzionare bene per un altro processore. Viene rimosso per l'utente per determinare se i vantaggi di velocità siano prevalenti rispetto agli eventuali problemi di accuratezza.

Se ottimizzazione /fp: fast è particolarmente problematico per una funzione specifica, la modalità a virgola mobile può essere disattivata in locale per fp: utilizzando preciso il `float_control` pragma del compilatore.


### <a name="algebraic-transformations-under-fpfast"></a>Trasformazioni algebriche in /fp: fast

La modalità /fp: fast consente al compilatore di eseguire alcuni, le trasformazioni algebriche unsafe in virgola mobile punto espressioni. Ad esempio, le seguenti ottimizzazioni unsafe possono essere impiegate in /fp: fast.

||||
|-|-|-|
|Codice originale|Passaggio 1 #|Passaggio 2 #
|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = y – a – b;`<br/><br/>`c = x – z;`<br/><br/>`c = x * z;`<br/><br/>`c = x - z;`<br/><br/>`c = x + z;`<br/><br/>`c = z-x;`|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = 0;`<br/><br/>`c = x – 0;`<br/><br/>`c = x * 0;`<br/><br/>`c = x - 0;`<br/><br/>`c = x + 0;`<br/><br/>`c = 0 - x;`|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = 0;`<br/><br/>`c = x;`<br/><br/>`c = 0;`<br/><br/>`c = x;`<br/><br/>`c = x;`<br/><br/>`c = -x;`|

Nel passaggio 1, il compilatore rileva che `z = y – a – b` è sempre uguale a zero. Anche se si tratta tecnicamente un'osservazione non valida, è consentito in /fp: fast. Il compilatore quindi propaga il valore di costante zero per tutte le successive Usa la variabile z. Nel passaggio 2, il compilatore ulteriormente Ottimizza mediante l'osservazione che `x - 0 == x`, `x * 0 == 0`e così via. Nuovamente, anche se queste osservazioni non sono necessariamente valide, sono consentite con /fp: fast. Il codice ottimizzato è molto più veloce, ma può essere molto meno accurato o persino non corretto.

Una delle seguenti regole algebriche (unsafe) può essere impiegata da query optimizer quando è abilitata la modalità /fp: fast:

|||
|-|-|
|Form|Descrizione|
|`(a + b) + c = a + (b + c)`|Regola associativa per l'aggiunta|
|`(a * b) * c = a * (b * c)`|Associativa regola per la moltiplicazione|
|`a * (b + c) = a * b + b * c`|Distribuzione di moltiplicazione su aggiunta|
|`(a + b)(a - b) = a * a - b * b`|Eseguire il Factoring algebriche|
|`a / b = a * (1 / b)`|Divisione per moltiplicativo|
|`a * 1.0 = a, a / 1.0 = a`|Identità moltiplicativa|
|`a ± 0.0 = a, 0.0 - a = -a`|Identità additiva|
|`a / a = 1.0, a - a = 0.0`|Annullamento|

Se ottimizzazione /fp: fast è particolarmente problematico per una determinata funzione, la modalità a virgola mobile può essere disattivata localmente per fp: utilizzando preciso il `float_control` pragma del compilatore.

### <a name="order-of-floating-point-expression-evaluation-under-fpfast"></a>Ordine di valutazione dell'espressione a virgola mobile in /fp: fast

A differenza di /fp: precise, /fp: fast consente al compilatore di riordinare le operazioni a virgola mobile in modo da produrre codice più veloce. Di conseguenza, alcune ottimizzazioni in /fp: fast potrebbero non mantenere l'ordine previsto delle espressioni. Ad esempio, si consideri la seguente funzione che calcola il prodotto scalare di due vettori di n-dimensionale.

```cpp
float dotProduct( float x[], float y[],
                  int n )
{
   float p=0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}
```

In /fp: fast, query optimizer può eseguire una riduzione scalare del `dotProduct` funzionare in modo efficace trasformare la funzione come segue:

```cpp
float dotProduct( float x[], float y[],int n )
{
    int n4= n/4*4; // or n4=n&(~3);
    float p=0, p2=0, p3=0, p4=0;
    int i;

    for (i=0; i<n4; i+=4)
    {
        p+=x[i]*y[i];
        p2+=x[i+1]*y[i+1];
        p3+=x[i+2]*y[i+2];
        p4+=x[i+3]*y[i+3];
    }
    p+=p2+p3+p4;

    // last n%4 elements
    for (; i<n; i++)
    p+=x[i]*y[i];

    return p;
}
```

Nella versione ottimizzata di funzione separate prodotto-quattro somme vengono eseguite contemporaneamente e successivamente aggiunti insieme. Questa ottimizzazione può velocizzare il calcolo del `dotProduct` da quanto un fattore di quattro a seconda del processore di destinazione, ma il risultato finale potrebbe non essere corrette in modo da renderlo inutilizzabile. Se tali ottimizzazioni sono particolarmente problematici per singola funzione o unità di conversione, la modalità a virgola mobile può essere disattivata localmente per /fp: precise utilizzando il `float_control` pragma del compilatore.

## <a name="the-fpstrict-mode-for-floating-point-semantics"></a>Il /fp: strict modalità per la semantica della virgola mobile

Quando fp: modalità strict è attivata, il compilatore rispetti le stesse regole che /fp: precise utilizza per l'ottimizzazione delle operazioni a virgola mobile. Questa modalità consente la semantica delle eccezioni a virgola mobile e sensibilità all'ambiente FPU anche e disabilita determinate ottimizzazioni, ad esempio contrazioni. È la modalità più restrittivo dell'operazione.

Fp: la modalità a virgola mobile strict viene abilitata tramite il [/fp: strict](fp-specify-floating-point-behavior.md) opzione del compilatore da riga di comando come indicato di seguito:

> CL /fp: strict source.cpp

Questo esempio si indica al compilatore di usare /fp: strict semantica durante la generazione di codice per il file source.cpp. Il /fp: strict modello può essere richiamato anche in base a ogni singola dalla funzione utilizzando il `float_control` pragma del compilatore.

Per altre informazioni, vedere sezione [float_control (pragma)](#the-float-control-pragma).

Sotto il /fp: la modalità strict, il compilatore mai vengono eseguite le ottimizzazioni che studi l'accuratezza dei calcoli a virgola mobile. Il compilatore verrà sempre correttamente l'arrotondamento in assegnazioni, cast di tipo e chiamate di funzione e arrotondamento intermedio verrà sempre eseguita alla stessa precisione come registra l'unità FPU. La semantica delle eccezioni a virgola mobile e sensibilità ambiente FPU sono abilitate per impostazione predefinita. Alcune funzionalità di ottimizzazione, ad esempio forme contratte, sono disabilitati perché il compilatore non garantisce la correttezza in ogni caso.

|/fp: strict semantica|Descrizione|
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, cast di tipo, e chiamate di funzione<br/>Le espressioni intermedie verranno valutate al registro precisione.<br/>Uguale a /fp: precise|
|Trasformazioni algebriche|Una stretta osservanza di algebra a virgola mobile non associativo, non pacchetto di distribuzione, a meno che non è garantita una trasformazione sempre producono gli stessi risultati.<br/>Uguale a /fp: precise|
|Forme contratte|Sempre disabilitata|
|Ordine di valutazione a virgola mobile|Il compilatore non verrà riordinate la valutazione delle espressioni a virgola mobile|
|L'accesso all'ambiente FPU|Sempre abilitata.|
|Semantica delle eccezioni a virgola mobile|Abilitato per impostazione predefinita.|

### <a name="floating-point-exception-semantics-under-fpstrict"></a>La semantica delle eccezioni a virgola mobile in /fp: strict

Per impostazione predefinita, viene abilitata la semantica delle eccezioni a virgola mobile con fp: modello di tipo strict. Per disabilitare questa semantica, utilizzare il **/fp: eccetto-** passare o introdurre una `float_control(except, off)` pragma.

Per altre informazioni, vedere le sezioni [abilitazione la semantica delle eccezioni a virgola mobile](#enabling-floating-point-exception-semantics) e [float_control (pragma)](#the-float-control-pragma).

## <a name="the-fenvaccess-pragma"></a>Il pragma fenv_access

Utilizzo:

```cpp
#pragma fenv_access( [ on  | off ] )
```

Il [fenv_access](../../preprocessor/fenv-access.md) pragma consente al compilatore di determinate ottimizzazioni che potrebbero compromettere test dei flag FPU e cambia la modalità FPU. Quando lo stato di `fenv_access` è disabilitata, il compilatore può assumere la modalità FPU predefinite sono valide e che non sono testati i flag FPU. Per impostazione predefinita, l'accesso all'ambiente è disabilitata per il /fp: precise modalità, anche se può essere abilitato in modo esplicito utilizzando il pragma. In /fp: strict, `fenv_access` è sempre abilitata e non può essere disabilitata. In /fp: fast, `fenv_access` è sempre disabilitato e non può essere abilitato.

Come descritto in fp: sezione preciso, alcuni programmatori possono modificare la direzione di arrotondamento a virgola mobile utilizzando il `_controlfp` (funzione). Ad esempio, per calcolare i limiti superiore e inferiore di errore in operazioni aritmetiche, alcuni programmi eseguono due volte lo stesso calcolo innanzitutto durante arrotondamento verso l'infinito negativo, quindi durante l'arrotondamento verso l'infinito positivo. Poiché l'unità FPU fornisce un modo pratico per controllare l'arrotondamento, un programmatore può scegliere di modificare la modalità di arrotondamento modificando l'ambiente di FPU. Il codice seguente calcola il che errore esatto associato di una moltiplicazione a virgola mobile e modificando l'ambiente di FPU.

```cpp
double a, b, cLower, cUpper;
// . . .
_controlfp( _RC_DOWN, _MCW_RC );    // round to -infinity
cLower = a*b;
_controlfp( _RC_UP, _MCW_RC );       // round to +infinity
cUpper = a*b;
_controlfp( _RC_NEAR, _MCW_RC );    // restore rounding mode
```

Se disabilitato, il `fenv_access` pragma consente al compilatore di supporre l'ambiente di FPU predefinito; pertanto è disponibile ignorare le chiamate a query optimizer `_controlfp` e ridurre le assegnazioni sopra per `cUpper = cLower = a*b`. Quando abilitata, tuttavia, `fenv_access` impedisce che tali ottimizzazioni.

Programmi è anche possono controllare la parola di stato FPU per rilevare alcuni errori a virgola mobile. Ad esempio, il codice seguente controlla le condizioni di divisione per zero e inesatto

```cpp
double a, b, c, r;
float x;
// . . .
_clearfp();
r = (a*b + sqrt(b*b-4*a*c))/(2*a);
if (_statusfp() & _SW_ZERODIVIDE)
   handle divide by zero as a special case
_clearfp();
x = (a*b + sqrt(b*b-4*a*c))/(2*a);
if (_statusfp() & _SW_INEXACT)
   handle inexact error as a special case
etc...
```

Quando `fenv_access` è disabilitata, il compilatore potrebbe ottimizzare l'ordine di esecuzione delle espressioni a virgola mobile, pertanto subverting probabilmente i controlli di stato FPU. Abilitazione `fenv_access` impedisce che tali ottimizzazioni.

## <a name="the-fpcontract-pragma"></a>Fp_contract (pragma)

Utilizzo:

```cpp
#pragma fp_contract( [ on | off ] )
```

Come descritto in fp: sezione preciso, contrazione è una funzionalità fondamentale dell'architettura per molte unità a virgola mobile moderne. Forme contratte offrono la possibilità di eseguire una moltiplicazione seguita da un'aggiunta come una singola operazione senza errori di arrotondamento intermedi. Queste istruzioni singole sono più velocemente rispetto all'esecuzione separata multiply e aggiungere le istruzioni e sono più accurate poiché non esiste alcun arrotondamento intermedio del prodotto. Un'operazione di contratto possono calcola il valore di `(a*b+c)` come se entrambe le operazioni sono state calcolate a precisione infinita e quindi arrotondate il più vicino al numero a virgola mobile. Questa ottimizzazione può velocizzare le funzioni contenenti diversi con interfoliazione multiply in modo significativo e operazioni di aggiunta. Ad esempio, si consideri il seguente algoritmo che calcola il prodotto scalare di due vettori di n-dimensionale.

```cpp
float dotProduct( float x[], float y[], int n )
{
   float p=0.0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}
```

Questo calcolo può essere eseguito una serie di moltiplicare-aggiungere le istruzioni del modulo `p = p + x[i]*y[i]`.

Il [fp_contract](../../preprocessor/fp-contract.md) pragma specifica se è possano ridurre espressioni a virgola mobile. Per impostazione predefinita, il /fp: precise modalità consente di utilizzare contrazioni poiché essi migliorare sia la precisione e velocità. Forme contratte sono sempre abilitati per la modalità /fp: fast. Tuttavia, poiché contrazioni possono compromettere il rilevamento esplicito delle condizioni di errore, il `fp_contract` pragma è sempre disabilitato in fp: la modalità strict. Esempi di espressioni che possono essere contratte quando il `fp_contract` pragma è abilitato:

```cpp
float a, b, c, d, e, t;
...
d = a*b + c;         // may be contracted
d += a*b;            // may be contracted
d = a*b + e*d;       // may be contracted into a mult followed by a mult-add etc...

d = (float)a*b + c;  // won't be contracted because of explicit rounding

t = a*b;             // (this assignment rounds a*b to float)
d = t + c;           // won't be contracted because of rounding of a*b
```

## <a name="the-floatcontrol-pragma"></a>Float_control (pragma)

Il **/fp: precise**, **/fp: fast**, **/fp: strict** e **/fp: tranne** commutatori semantica della virgola mobile in un file dal file di controllo base. Il [float_control](../../preprocessor/float-control.md) pragma fornisce controllo di questo tipo in base a una funzione dalla funzione.

Utilizzo:

```cpp
#pragma float_control(push)
#pragma float_control(pop)
#pragma float_control( precise, on | off [, push] )
#pragma float_control( except, on | off [, push] )
```

I pragma `float_control(push)` e `float_control(pop)` rispettivamente push e pull lo stato corrente della modalità a virgola mobile e l'opzione di eccezione in uno stack. Si noti che lo stato del `fenv_access` e `fp_contract` pragma non sono interessati da `pragma float_control(push/pop)`.

Chiamare il pragma `float_control(precise, on)` abiliterà e `float_control(precise, off)` disabiliterà la semantica di modalità precise. Analogamente, il pragma `float_control(except, on)` abiliterà e `float_control(except, off)` disabiliterà la semantica delle eccezioni. La semantica delle eccezioni può essere abilitata solo quando viene attivata anche semantica precisa. Quando l'opzione facoltativa `push` argomento è presente, gli stati del `float_control` opzioni vengono inserite prima di modificare la semantica.

### <a name="setting-the-floating-point-semantic-mode-on-a-function-by-function-basis"></a>Impostazione della modalità di semantica a virgola mobile in base a una funzione per funzione

Le opzioni della riga di comando siano effettivamente a sintassi abbreviata per impostare le quattro pragma a virgola mobile diversi. Per scegliere in modo esplicito una specifica modalità semantica a virgola mobile in base a una funzione dalla funzione, selezionare ciascuno dei quattro pragma a virgola mobile opzione come descritto nella tabella seguente:

||||||
|-|-|-|-|-|
||float_control(precise)|float_control(except)|fp_contract|fenv_access|
|/fp: strict|attivo|attivo|Disattivato|attivo|
|/fp: strict /fp: eccezione-|attivo|Disattivato|Disattivato|attivo|
|/fp: precise|attivo|Disattivato|attivo|Disattivato|
|/fp: precise /fp: tranne|attivo|attivo|attivo|Disattivato|
|/fp: fast|Disattivato|Disattivato|attivo|Disattivato|

Ad esempio, il seguente Abilita in modo esplicito /fp: fast semantica.

```cpp
#pragma float_control( except, off )   // disable exception semantics
#pragma float_control( precise, off )  // disable precise semantics
#pragma fp_contract(on)                // enable contractions
#pragma fenv_access(off)               // disable fpu environment sensitivity
```

> [!Note]
> La semantica delle eccezioni deve essere spenta prima di spegnere la semantica "precisa".

## <a name="enabling-floating-point-exception-semantics"></a>Abilitare la semantica delle eccezioni a virgola mobile

Alcune condizioni a virgola mobile eccezionali, ad esempio divisione per zero, possono causare l'unità FPU segnalare un'eccezione hardware. Eccezioni a virgola mobile sono disabilitate per impostazione predefinita. Vengono abilitate le eccezioni a virgola mobile modificando la parola di controllo FPU con il `_controlfp` (funzione). Il codice seguente consente ad esempio, l'eccezione a virgola mobile di divisione per zero:

```cpp
_clearfp(); // always call _clearfp before
            // enabling/unmasking a FPU exception
_controlfp( _EM_ZERODIVIDE, _MCW_EM );
```

Quando è abilitata l'eccezione di divisione per zero, qualsiasi operazione di divisione con un denominatore pari a zero genererà un'eccezione di FPU venga segnalato.

Per ripristinare la parola di controllo FPU per la modalità predefinita, chiamare `_controlfp(_CW_DEFAULT, ~0)`.

Abilitare la semantica delle eccezioni a virgola mobile e con il **/fp: tranne** flag non corrisponde all'abilitazione di eccezioni a virgola mobile. Quando la semantica delle eccezioni a virgola mobile è abilitata, il compilatore deve considerazione la possibilità che qualsiasi operazione a virgola mobile potrebbe generare un'eccezione. Poiché l'unità FPU è un'unità del processore separati, le istruzioni in esecuzione su unità a virgola mobile possono essere eseguite contemporaneamente a istruzioni su altre unità.

Quando un'eccezione a virgola mobile è abilitata, l'unità FPU arresterà l'esecuzione dell'istruzione che causa l'errore e quindi segnalare una condizione eccezionale impostando la parola di stato FPU. Quando la CPU raggiunge l'istruzione successiva a virgola mobile, viene verificata per tutte le eccezioni FPU in sospeso. Se si verifica un'eccezione in sospeso, il processore vengono intercettati chiamando un gestore di eccezioni fornito dal sistema operativo. Ciò significa che quando un'operazione a virgola mobile rileva una condizione eccezionale, l'eccezione corrispondente non verrà rilevato fino a quando non viene eseguita la successiva operazione a virgola mobile. Ad esempio, il codice seguente vengono intercettati un'eccezione di divisione per zero:

```cpp
double a, b, c;
// . . .
// ...unmasking of FPU exceptions omitted...
__try
{
   b/c; // assume c==0.0
   printf("This line shouldn't be reached when c==0.0\n");
   c = 2.0*b;
}
__except( EXCEPTION_EXECUTE_HANDLER )
{
   printf("SEH Exception Detected\n");
}
// . . .
```

Se si verifica una condizione di divisione per zero nell'espressione un = b/c, l'unità FPU non trap/genera l'eccezione fino alla successiva operazione a virgola mobile nell'espressione 2.0 * b. Ciò produce il seguente output:

```Output
This line shouldn't be reached when c==0.0
SEH Exception Detected
```

Deve printf corrispondente alla prima riga dell'output non sono state raggiunte; è stato raggiunto perché non è stata generata l'eccezione a virgola mobile dovuto l'espressione b/c fino al raggiungimento di esecuzione 2.0 * b. Per generare l'eccezione subito dopo l'esecuzione di b/c, il compilatore deve essere introdotto un'istruzione "wait":

```cpp
// . . .
   __try
   {
      b/c; // assume this expression will cause a "divide-by-zero" exception
      __asm fwait;
      printf("This line shouldn't be reached when c==0.0\n");
      c = 2.0*b;
   }
// . . .
```

Questa istruzione "wait" forza il processore per eseguire la sincronizzazione con lo stato della FPU e gestire tutte le eccezioni in sospeso. Il compilatore genererà solo questi "wait" istruzioni quando è abilitata semantica della virgola mobile. Quando questa semantica è disabilitata, sono presenti per impostazione predefinita, i programmi possono riscontrare errori synchronicity, simili a quello precedente, quando si utilizza le eccezioni a virgola mobile.

Quando la semantica a virgola mobile è abilitata, il compilatore non verrà introdotti solo istruzioni "wait", anche impedirà il compilatore illegalmente ottimizzazione del codice a virgola mobile in presenza di possibili eccezioni. Sono incluse tutte le trasformazioni che modificano i punti in corrispondenza del quale vengono generate eccezioni. A causa di questi fattori, l'abilitazione di semantica della virgola mobile può ridurre notevolmente l'efficienza del codice macchina generato conseguente calo delle prestazioni dell'applicazione.

La semantica delle eccezioni a virgola mobile è abilitata per impostazione predefinita in fp: la modalità strict. Per abilitare questa semantica in fp: modalità precise, aggiungere il **/fp: tranne** passare al compilatore da riga di comando. La semantica delle eccezioni a virgola mobile può anche essere abilitata e disabilitata in base a ogni singola dalla funzione utilizzando il `float_control` pragma.

### <a name="floating-point-exceptions-as-c-exceptions"></a>Eccezioni a virgola mobile come eccezioni di C++

Come con tutte le eccezioni hardware, le eccezioni a virgola mobile non causano per sé un'eccezione C++, ma invece attivano un'eccezione strutturata. Per mappare le eccezioni strutturate a virgola mobile a eccezioni C++, gli utenti possono introdurre una funzione di conversione di eccezione SEH personalizzato. In primo luogo, introduce un'eccezione C++ corrispondente a ogni eccezione a virgola mobile:

```cpp
class float_exception : public std::exception {};

class fe_denormal_operand : public float_exception {};
class fe_divide_by_zero : public float_exception {};
class fe_inexact_result : public float_exception {};
class fe_invalid_operation : public float_exception {};
class fe_overflow : public float_exception {};
class fe_stack_check : public float_exception {};
class fe_underflow : public float_exception {};
```

Quindi, introdurre una funzione di conversione che rileverà un'eccezione SEH a virgola mobile e generare l'eccezione C++ corrispondente. Per utilizzare questa funzione, impostare il convertitore di gestore di eccezioni strutturato per il thread del processo corrente con il [set_se_translator](../../c-runtime-library/reference/set-se-translator.md) funzione dalla libreria di runtime.

```cpp
void se_fe_trans_func( unsigned int u, EXCEPTION_POINTERS* pExp )
{
    switch (u)
    {
    case STATUS_FLOAT_DENORMAL_OPERAND:   throw fe_denormal_operand();
    case STATUS_FLOAT_DIVIDE_BY_ZERO:     throw fe_divide_by_zero();
   etc...
    };
}
// . . .
_set_se_translator(se_fe_trans_func);
```

Dopo questo mapping viene inizializzato, le eccezioni a virgola mobile si comporteranno come se fossero le eccezioni C++. Ad esempio:

```cpp
try
{
   // floating-point code that might throw divide-by-zero
   // or other floating-point exception
}
catch(fe_divide_by_zero)
{
    cout << "fe_divide_by_zero exception detected" << endl;
}
catch(float_exception)
{
    cout << "float_exception exception detected" << endl;
}
```

## <a name="references"></a>Riferimenti

[Che cosa esperto ogni Computer necessario essere a conoscenza aritmetica a virgola mobile](http://pages.cs.wisc.edu/~david/courses/cs552/S12/handouts/goldberg-floating-point.pdf) da David guerra.

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](optimizing-your-code.md)<br/>
