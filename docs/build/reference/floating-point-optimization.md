---
title: Ottimizzazione virgola mobile MSVC
ms.date: 03/09/2018
ms.topic: conceptual
ms.openlocfilehash: 78c5c310f2f348b5cfa5a92feb65e265d28560d9
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57814371"
---
# <a name="microsoft-visual-c-floating-point-optimization"></a>Ottimizzazione a virgola mobile di Microsoft Visual C++

Ottenere un handle sull'ottimizzazione del codice a virgola mobile usando il metodo del compilatore Microsoft C++ di gestione della semantica della virgola mobile. Creare applicazioni veloci assicurando che vengano eseguite ottimizzazioni sicura solo sul codice a virgola mobile.

## <a name="optimization-of-floating-point-code-in-c"></a>Ottimizzazione del codice a virgola mobile in C++

Un compilatore C++ di ottimizzazione si traduce non solo il codice sorgente in codice macchina, ne predispone le istruzioni del computer in modo da migliorare l'efficienza e/o ridurre le dimensioni. Sfortunatamente, molti ottimizzazioni comuni non sono necessariamente sicuri quando applicato a calcoli a virgola mobile. Un buon esempio di questo oggetto può essere verificato con l'algoritmo di somma seguente, tratto dal David Goldberg, "Ciò che ogni Computer Scientist devono conoscere sulla aritmetica a virgola mobile", *Computing Surveys*, marzo 1991, pg. 203:

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

Questa funzione consente di aggiungere n **float** valori del vettore di matrice `A`. All'interno del corpo di ciclo, l'algoritmo calcola un valore di "correzione" che viene quindi applicato al passaggio successivo della somma. Questo metodo riduce notevolmente gli errori di arrotondamento cumulativi rispetto a una semplice somma, mantenendo la complessità di tempo o (n).

Un compilatore C++ Naive potrebbe supporre che aritmetica a virgola mobile segue le stesse regole algebriche come numero reale aritmetica. Un compilatore di questo tipo potrebbe quindi erroneamente concludere che

> C = T - sum - Y = = > (somma + Y) - sum - Y = = > 0.

Vale a dire che il valore percepito del C è sempre un costante zero. Se questo valore costante viene quindi propagato nelle espressioni successive, il corpo del ciclo viene ridotto a una somma semplice. Per essere precisi,

> Y = A[i] - C ==> Y = A[i]<br/>T = sum + Y ==> T = sum + A[i]<br/>sum = T ==> sum = sum + A[i]

Di conseguenza, al compilatore Naive, una trasformazione logico del `KahanSum` funzione sarebbe:

```cpp
float KahanSum( const float A[], int n )
{
   float sum=0; // C, Y & T are now unused
   for (int i=0; i<n; i++)
      sum = sum + A[i];
   return sum;
}
```

Anche se è più veloce perché l'algoritmo trasformato *non è una rappresentazione accurata dell'intento del programmatore*. La correzione degli errori appositamente è stata rimossa completamente, e ciò che resta un algoritmo di somma semplice e diretto con tutti i relativi errore associato.

Naturalmente un compilatore C++ sofisticato saprebbe algebrici che le regole del reale aritmetica non a livello generale verranno applicate a aritmetica a virgola mobile. Tuttavia, anche un compilatore C++ sofisticato comunque in modo non corretto potrebbe interpretare intento del programmatore.

Prendere in considerazione un'ottimizzazione comune che tenta di mantenere tutti i valori nei registri minor (chiamato "registrazione" un valore). Nel `KahanSum` esempio, questa ottimizzazione potrebbe provare a essere registrate le variabili `C`, `Y` e `T` quanto vengono usati solo all'interno del corpo del ciclo. Se la precisione register è 52bits (double) anziché 23bits (singolo), questa ottimizzazione in modo efficace tipo Alza di livello `C`, `Y` e `T` per digitare **double**. Se la variabile di somma non è allo stesso modo registrate, rimarrà con codifica e precisione singola. Ciò consente di trasformare la semantica di `KahanSum` al seguente

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

Sebbene `Y`, `T` e `C` vengono ora calcolate una precisione superiore, questa nuova codifica potrebbe produrre un risultato meno accurato dipende dai valori specificati in `A[]`. In questo modo anche apparentemente innocue ottimizzazioni potrebbero avere conseguenze negative.

Questi tipi di problemi di ottimizzazione non sono limitati al codice a virgola mobile "complesso". Neanche i semplici algoritmi a virgola mobile possono non riuscire quando ottimizzato in modo non corretto. Si consideri un semplice algoritmo direct-somma:

```cpp
float Sum( const float A[], int n )
{
   float sum=0;
   for (int i=0; i<n; i++)
      sum = sum + A[i];
   return sum;
}
```

Poiché alcune unità a virgola mobile sono in grado di eseguire più operazioni contemporaneamente, un compilatore potrebbe scegliere di coinvolgere un'ottimizzazione riduzione scalare. Questa ottimizzazione consente di trasformare in modo efficace la funzione Sum semplice in precedenza in quanto segue:

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

La funzione gestisce ora quattro somme separati, che possono essere elaborate contemporaneamente in ogni passaggio. Anche se la funzione ottimizzata è ora molto più veloce, i risultati ottimizzati possono essere piuttosto diversi dai risultati non ottimizzata. In questa modifica, il compilatore presuppone addizione a virgola mobile associativa; vale a dire che questi due espressioni sono equivalenti: `(a + b) + c == a + (b + c)`. Tuttavia, associatività degli operatori non sempre restituire true per numeri a virgola mobile. Anziché la somma come:

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

Per alcuni valori di `A[]`, questo ordinamento diversi di operazioni di addizione può produrre risultati imprevisti. Quadro è ulteriormente complicato, alcuni programmatori possono scegliere di anticipare tali ottimizzazioni e proposito in modo appropriato. In questo caso, un programma può costruire la matrice `A` in un ordine diverso, in modo che la somma ottimizzata produce i risultati previsti. Inoltre, in molte circostanze l'accuratezza dei risultati dell'ottimizzazione può essere "sufficientemente vicino". Ciò è particolarmente vero quando l'ottimizzazione offre vantaggi significativi velocità. Videogiochi, ad esempio, richiedono molto più veloci possibili ma spesso non richiedono calcoli a virgola mobile e altamente accurati. Responsabili del compilatore devono pertanto fornire un meccanismo per i programmatori di controllare gli obiettivi di velocità e precisione spesso molto diversi.

Alcuni compilatori di risolvere il compromesso tra velocità e la precisione, fornendo un'opzione separata per ogni tipo di ottimizzazione. Ciò consente agli sviluppatori di disabilitare le ottimizzazioni che causano modifiche per la precisione a virgola mobile e per la propria applicazione specifico. Mentre questa soluzione può offrire un elevato livello di controllo rispetto al compilatore, presenta diversi problemi aggiuntivi:

- Spesso è chiaro quale passa per abilitare o disabilitare.
- La disabilitazione di tutte le ottimizzazioni singola potrebbero compromettere le prestazioni del codice non a virgola mobile e.
- Ogni opzione aggiuntiva comporta molte combinazioni di commutatore nuovo; il numero di combinazioni rapidamente diventa difficile da gestire.

Pertanto, fornendo commutatori separati per ogni ottimizzazione potrebbe sembrare interessante, con questi compilatori può essere complesso e non affidabili.

Molti compilatori C++ offrono un *coerenza* modello a virgola mobile, (tramite un **/op.** o **/fltconsistency** commutatore) che consente agli sviluppatori di creare programmi compatibili con con la semantica ridotta a virgola mobile. Quando attivata, questo modello impedisce al compilatore di utilizzando la maggior parte delle ottimizzazioni su calcoli a virgola mobile, consentendo di tali ottimizzazioni per il codice non a virgola mobile. Il modello di coerenza, tuttavia, ha un lato scuro. Per non restituire risultati prevedibili in architetture FPU diversi, quasi tutte le implementazioni di **/op.** round espressioni intermedie all'utente specificato precisione, ad esempio, si consideri l'espressione seguente:

```cpp
float a, b, c, d, e;
// . . .
a = b * c + d * e;
```

Per produrre risultati coerenti e ripetibili sotto **/op.**, questa espressione viene valutata come se venisse implementata come indicato di seguito:

```cpp
float x = b  *c;
float y = d * e;
a = x + y;
```

Il risultato finale risente ora di errori di arrotondamento e con precisione singola *a ogni passaggio di valutazione dell'espressione*. Sebbene questa interpretazione rigorosamente non violino le regole di semantica di C++, è quasi mai il modo migliore per valutare le espressioni a virgola mobile. È in genere preferibile compute intermedie comporta il precisione come pratico più alto. Ad esempio, sarebbe meglio calcolare l'espressione `a = b * c + d * e` in una precisione superiore, come in

```cpp
double x = b * c;
double y = d * e;
double z = x + y;
a = (float)z;
```

o meglio ancora

```cpp
long double x = b * c;
long double y = d * e
long double z = x + y;
a = (float)z;
```

Quando si calcolano i risultati intermedi in una precisione superiore, il risultato finale è significativamente più accurato. Adottando un modello di coerenza, Ironicamente, la probabilità di errore viene aumentata con precisione quando l'utente tenta di ridurre l'errore disabilitando le ottimizzazioni non sicure. In questo modo il modello di coerenza può compromettere l'efficienza fornendo nel contempo alcuna garanzia di una maggiore accuratezza. Per i programmatori numerici gravi, questo non sembra un ottimo compromesso ed è il motivo principale che il modello non viene in genere anche ricevuto.

Partire dalla versione 8.0 (Visual C++® 2005), Microsoft C++ il compilatore fornisce un'alternativa molto migliore. Consente ai programmatori di selezionare una delle tre modalità a virgola mobile generale: /fp: precise, /fp: fast e /fp: strict.

- In /fp: precise, vengono eseguite solo sicuro ottimizzazioni sul codice a virgola mobile e, a differenza **/op.**, calcoli intermedi vengono eseguiti in modo coerente con la precisione pratica più elevata.
- modalità /fp: fast rilassa a virgola mobile e regole che consentono di ottimizzazione più aggressiva a scapito della precisione.
- /fp: modalità strict fornisce tutti la correttezza generale del /fp: precise, abilitare la semantica delle eccezioni a virgola mobile e impedire le trasformazioni non valide in presenza di modifiche all'ambiente FPU (ad esempio, le modifiche in base alla registrazione precisione, arrotondamento direzione e così via).

La semantica delle eccezioni a virgola mobile può essere controllata in modo indipendente da un'opzione della riga di comando o un pragma del compilatore. Per impostazione predefinita, la semantica delle eccezioni a virgola mobile è disabilitata in /fp: precise e abilitati in /fp: strict. Il compilatore consente anche di controllare sensibilità ambiente FPU e alcune ottimizzazioni specifiche a virgola mobile, ad esempio termini più semplici. Questo modello molto semplice offre agli sviluppatori un elevato livello di controllo tramite la compilazione del codice a virgola mobile senza l'onere di opzioni del compilatore che un numero eccessivo o la prospettiva di effetti collaterali indesiderati.

## <a name="the-fpprecise-mode-for-floating-point-semantics"></a>Fp: modalità precise per la semantica della virgola mobile

La modalità di semantica della virgola mobile predefinita è /fp: precise. Quando viene selezionata questa modalità, il compilatore strettamente conformi a un set di regole di sicurezza durante l'ottimizzazione di operazioni a virgola mobile. Queste regole consentono al compilatore di generare codice macchina efficace mantenendo l'accuratezza dei calcoli a virgola mobile. Per facilitare la produzione di veloci programmi, il /fp: precisa modello disabilita la semantica delle eccezioni a virgola mobile (anche se essi può essere abilitate in modo esplicito). Microsoft ha selezionato /fp: precise come la modalità a virgola mobile predefinita perché crea programmi sia rapido e accurati.

Per richiedere in modo esplicito il fp: modalità precise utilizzando il compilatore della riga di comando, usare il [/fp: precise](fp-specify-floating-point-behavior.md) passare:

> CL /fp: precise source.cpp

Ciò indica al compilatore di usare /fp: precisa semantica durante la generazione di codice per il file source.cpp. Il /fp: precisa modello può essere richiamato anche in funzione dalla base usando la [float_control (pragma) del compilatore](#the-float-control-pragma).

Sotto il /fp: precise modalità, il compilatore non esegue mai tutte le ottimizzazioni che impostazione l'accuratezza dei calcoli a virgola mobile. Il compilatore eseguirà sempre l'arrotondamento correttamente in assegnazioni, typecast e chiamate di funzione e arrotondamento intermedio verrà costantemente eseguito con la stessa precisione registra l'unità FPU. Sono abilitate le ottimizzazioni sicuro, ad esempio forme contratte, per impostazione predefinita. La semantica delle eccezioni e alla sensibilità di ambiente FPU sono disabilitati per impostazione predefinita.

|/fp: precisa semantica|Descrizione|
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, typecast e chiamate di funzione. Verranno valutate espressioni intermedie con precisione di registrazione.|
|Trasformazioni algebriche|Aderendo a non-pacchetto di distribuzione, non associativa algebra a virgola mobile, a meno che una trasformazione è sicuramente sempre producono gli stessi risultati.|
|Più ricercati|È consentito per impostazione predefinita. Per altre informazioni, vedere sezione [pragma fp_contract](#the-fp-contract-pragma).|
|Ordine di valutazione a virgola mobile|Il compilatore potrebbe riordinare la valutazione di espressioni a virgola mobile a condizione che i risultati finali non vengono modificati.|
|Accesso all'ambiente FPU|Disattivata per impostazione predefinita. Per altre informazioni, vedere sezione [pragma fenv_access](#the-fenv-access-pragma). Si presuppone che la precisione predefinita e la modalità di arrotondamento.|
|Semantica delle eccezioni a virgola mobile|Disattivata per impostazione predefinita. Per altre informazioni, vedere [/fp: tranne](fp-specify-floating-point-behavior.md).|

### <a name="rounding-semantics-for-floating-point-expressions-under-fpprecise"></a>Arrotondamento semantica per le espressioni a virgola mobile in /fp: precise

Il /fp: precisa modello esegue sempre i calcoli intermedi in precisione pratico più elevato, arrotondamento in modo esplicito solo in determinati punti nella valutazione dell'espressione. Arrotondamento sempre alla precisione specificata dall'utente si verifica in quattro punti: (a) quando viene effettuata un'assegnazione, (b) quando viene eseguito un cast di tipo, (c) quando un valore a virgola mobile viene passato come argomento a una funzione e (d) quando viene restituito un valore a virgola mobile da un funzione. Poiché i calcoli intermedi vengono sempre eseguiti con precisione register, l'accuratezza dei risultati intermedi è dipende dalla piattaforma (anche se la precisione sarà sempre almeno più accurata l'utente specificato precisione).

Si consideri l'espressione di assegnazione nel codice seguente. L'espressione sul lato destro dell'operatore di assegnazione '=' verrà calcolato al registro precisione e quindi arrotondato in modo esplicito al tipo del lato sinistro dell'assegnazione.

```cpp
float a, b, c, d;
double x;
...
x = a*b + c*d;
```

viene calcolato come

```cpp
float a, b, c, d;
double x;
...
register tmp1 = a*b;
register tmp2 = c*d;
register tmp3 = tmp1+tmp2;
x = (double) tmp3;
```

Per completare in modo esplicito un risultato intermedio, introdurre un cast di tipo. Ad esempio, se il codice precedente viene modificato mediante l'aggiunta esplicita cast di tipo, l'espressione intermedia (c * 1!d) verrà arrotondato al tipo del cast di tipo.

```cpp
float a, b, c, d;
double x;
// . . .
x = a*b + (float)(c*d);
```

viene calcolato come

```cpp
float a, b, c, d;
double x;
// . . .
register tmp1 = a*b;
float tmp2 = c*d;
register tmp3 = tmp1+tmp2;
x = (double) tmp3;
```

Una delle implicazioni di questo metodo di arrotondamento è che alcune trasformazioni apparentemente equivalente non è necessario che la semantica identica. Ad esempio, la seguente trasformazione suddivide una singola espressione di assegnazione in due espressioni di assegnazione.

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

Queste codifiche non è equivalente semantica in quanto ognuna le codifiche secondo hanno introdotto un'operazione di assegnazione aggiuntiva e pertanto un arrotondamento altri punti.

Quando una funzione restituisce un valore a virgola mobile, il valore verrà arrotondato al tipo della funzione. Quando un valore a virgola mobile viene passato come parametro a una funzione, il valore verrà arrotondato al tipo del parametro. Ad esempio:

```cpp
float sumsqr(float a, float b)
{
   return a*a + b*b;
}
```

viene calcolato come

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

viene calcolato come

```cpp
float x, y, z;
double c;
...
register tmp1 = w*x;
register tmp2 = tmp1+y;
float tmp3 = tmp2;
c = symsqr( tmp3, z);
```

### <a name="architecture-specific-rounding-under-fpprecise"></a>Specifici dell'architettura di arrotondamento in /fp: precise

|Processore|Precisione per le espressioni intermedie di arrotondamento|
|-|-|
|x86|Espressioni intermedie vengono calcolate con la precisione a 53 bit predefinito con un intervallo esteso fornito da un esponente a 16 bit. Quando questi valori 53:16 sono "distribuiti" per la memoria (come può accadere durante una chiamata di funzione), l'intervallo esteso esponente verrà limitato a 11 bit. Questi valori, ovvero vengono eseguito il cast nel formato standard a precisione doppia con solo un esponente a 11 bit.<br/>Un utente può passare a precisione a 64 bit estesa per l'arrotondamento intermedio modificando la parola di controllo a virgola mobile usando `_controlfp` e abilitando l'accesso all'ambiente FPU (vedere [pragma fenv_access](#the-fenv-access-pragma)). Tuttavia, quando register-valori di precisione estesa sono stati distribuiti per la memoria, i risultati intermedi verranno comunque arrotondati al valore a precisione doppia.<br/>Questo particolare semantica è soggette a modifiche.|
|amd64|La semantica di virgola mobile in amd64 è leggermente diversa da altre piattaforme. Per motivi di prestazioni, operazioni intermedie vengono calcolate con la precisione più ampia degli operandi anziché con la precisione più ampia disponibile.  Per forzare i calcoli per essere calcolata con una precisione maggiore rispetto a operandi, gli utenti devono presentare un'operazione cast in almeno un operando in una sottoespressione.<br/>Questo particolare semantica è soggette a modifiche.|

### <a name="algebraic-transformations-under-fpprecise"></a>Le trasformazioni algebriche in /fp: precise

Quando il fp: modalità precise è abilitata, il compilatore non eseguirà mai trasformazioni algebriche *, a meno che il risultato finale è probabilmente identico*. Molte delle familiari algebriche regole per un numero reale aritmetici non contengono sempre per i calcoli a virgola mobile. Ad esempio, le espressioni seguenti sono equivalenti per Reals, ma non necessariamente per valori a virgola mobile.

|Form|Descrizione|
|-|-|
|`(a+b)+c = a+(b+c)`|Regola associativa per l'aggiunta|
|`(a*b)*c = a*(b*c)`|Regola associativo da preferire per la moltiplicazione|
|`a*(b+c) = a*b + b*c`|Distribuzione di moltiplicazione su aggiunta|
|`(a+b)(a-b) = a*a-b*b`|Eseguire il Factoring algebrici|
|`a/b = a*(1/b)`|Divisione per moltiplicativo|
|`a*1.0 = a`|Identità moltiplicativa|

Come illustrato nell'esempio introduzione con la funzione `KahanSum`, il compilatore potrebbe essere tentato di eseguire trasformazioni algebriche diversi per produrre programmi notevolmente più veloci. Anche se le ottimizzazioni dipende da tali trasformazioni algebriche sono quasi sempre errate, esistono situazioni di cui sono perfettamente sicura. Ad esempio, è talvolta utile per sostituire la divisione per un *costante* valore con moltiplicazione per l'inverso di moltiplicazione-della costante:

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

Si tratta di una trasformazione sicura perché query optimizer può determinare in fase di compilazione che x / 4.0 = = x*(1/4.0) per tutti i valori a virgola mobile di x, inclusi valori infiniti e NaN. Sostituendo un'operazione di divisione con una moltiplicazione, il compilatore può salvare diversi cicli, specialmente su FPUs che non implementano direttamente la divisione, ma richiede al compilatore di generare una combinazione di approssimazione di reciproco e aggiunta multipla istruzioni. Il compilatore può eseguire questo tipo un'ottimizzazione in /fp: precise solo quando la sostituzione della moltiplicazione esatti stesso risultato come la divisione. Il compilatore può anche eseguire semplici trasformazioni in /fp: precise, purché i risultati sono identici. Sono inclusi:

|Form|Descrizione
|-|-|
|`(a+b) == (b+a)`|Regola per l'aggiunta di commutativo|
|`(a*b) == (b*a)`|Commutativo regola per la moltiplicazione|
|`1.0*x*y == x*1.0*y == x*y*1.0 == x*y`|Moltiplicazione per 1,0|
|`x/1.0*y == x*y/1.0 == x*y`|Divisione per 1,0|
|`2.0*x == x+x`|Moltiplicazione per 2.0|

### <a name="contractions-under-fpprecise"></a>Forme contratte in /fp: precise

Una funzionalità chiave dell'architettura di moderno numero di unità a virgola mobile è la possibilità di eseguire una moltiplicazione seguita da un'aggiunta come una singola operazione senza errori di arrotondamento intermedio. Ad esempio, l'architettura Itanium di Intel fornisce istruzioni per ognuna di queste operazioni ternarie, combinare (un*b + c), (una*b + c) e (c-a * b), in una singola istruzione a virgola mobile (fma, fms e fnma rispettivamente). Queste istruzioni singole sono più veloci rispetto all'esecuzione separata moltiplicare e aggiungere le istruzioni e sono più accurate, perché è presente alcun arrotondamento intermedio del prodotto. Questa ottimizzazione può significativamente velocizzare le funzioni contenenti più di tipo interleaved multiply e operazioni di aggiunta. Ad esempio, si consideri il seguente algoritmo che calcola il prodotto scalare di due vettori di n-dimensionale.

```cpp
float dotProduct( float x[], float y[], int n )
{
   float p=0.0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}
```

Questo calcolo può essere eseguito una serie di aggiunta multipla istruzioni del modulo p = p + x [i] * y [i].

L'ottimizzazione contrazione può essere controllata in modo indipendente usando il `fp_contract` pragma del compilatore. Per impostazione predefinita, il /fp: precisa modello consente più ricercati dal momento in cui migliorare sia la precisione e velocità. In /fp: precise, il compilatore mai contatterà un'espressione con arrotondamento esplicita.
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

Le ottimizzazioni che mantiene l'ordine di valutazione dell'espressione a virgola mobile sono sempre sicure e sono pertanto consentite in fp: modalità precise. Si consideri la funzione seguente che calcola il prodotto scalare di due vettori di n-dimensionale di precisione singola. Il primo blocco di codice riportato di seguito è la funzione originale come potrebbe essere codificato dal programmatore, seguita dalla stessa funzione dopo un'ottimizzazione (loop unrolling) ciclo parziale.

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

Il vantaggio principale di questa ottimizzazione è che riduce il numero di ciclo-diramazione condizionale quanto più il 75%. Inoltre, se si aumenta il numero di operazioni all'interno del corpo del ciclo, il compilatore può ora disponibili ulteriori opportunità per ottimizzare ulteriormente. Ad esempio, alcuni FPUs potrebbero essere in grado di eseguire l'aggiunta multipla in p + = x [i] * y e y [i] durante il recupero contemporaneamente i valori di x [i+1] [i+1] per l'uso nel passaggio successivo. Questo tipo di ottimizzazione è perfettamente sicuro per i calcoli a virgola mobile, perché mantiene l'ordine delle operazioni.

Spesso è vantaggioso per il compilatore riordinare le operazioni per produrre codice più veloce. Esaminare il codice seguente:

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

Le regole semantiche di C++ indicano che il programma deve produrre risultati come se calcolata prima di tutto, x e y e infine z. Si supponga che il compilatore ha solo quattro registri a virgola mobile disponibili. Se il compilatore viene imposto di calcolo x, y e z in ordine, può scegliere di generare il codice con la semantica seguente:

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

Esistono diverse operazioni chiaramente ridondanti è questa codifica. Se il compilatore segue esclusivamente le regole semantiche di C++, tale ordinamento è necessario perché il programma potrebbe accedere all'ambiente di FPU intermedi ogni assegnazione. Tuttavia, le impostazioni predefinite per /fp: precise consentono al compilatore di ottimizzare come se il programma non acceda all'ambiente, in modo che possa riordinare queste espressioni. È quindi possibile rimuovere le ridondanze calcolando i tre valori in ordine inverso, come indicato di seguito:

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

Questa codifica è chiaramente superiore, con stato ridotto il numero di istruzioni a virgola mobile da quasi del 40%. I risultati per x, y e z sono uguali come in precedenza, ma calcolata con un minor overhead.

In /fp: precisi, il compilatore può inoltre *interlacciare* sottoespressioni comuni in modo da produrre codice più veloce. Codice per calcolare le radici di un'equazione quadratica, ad esempio, potrebbe essere scritto come indicato di seguito:

```cpp
double a, b, c, root0, root1;
...
root0 = (-b + sqrt(b*b-4*a*c))/(2*a);
root1 = (-b - sqrt(b*b-4*a*c))/(2*a);
```

Anche se queste espressioni si differenziano solo per una singola operazione, il programmatore potrebbe averlo scritto in questo modo di garantire che ogni valore radice verrà calcolata per la precisione di pratico più elevata. In /fp: precise, il compilatore è libero di interlacciata il calcolo del root0 e root1 per rimuovere le sottoespressioni comuni senza perdita di precisione. Ad esempio, di seguito è rimosso diversi passaggi ridondanti con la stessa risposta esatta.

```cpp
double a, b, c, root0, root1;
...
register tmp0 = -b;
register tmp1 = sqrt(b*b-4*a*c);
register tmp2 = 2*a;
root0 = (tmp0+tmp1)/tmp2;
root1 = (tmp0-tmp1)/tmp2;
```

Altre ottimizzazioni potrebbero tentare di spostare la valutazione di alcune espressioni indipendenti. Prendere in considerazione l'algoritmo seguente che contiene un ramo condizionale all'interno di un corpo di ciclo.

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

Il compilatore potrebbe rilevare che il valore dell'espressione (abs(d) > 1) è invariato rispetto all'interno del corpo del ciclo. Ciò consente al compilatore di "esegue il lift" if istruzione di fuori del corpo del ciclo, trasformando il codice sopra riportato in quanto segue:

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

Dopo la trasformazione, non è più un ramo condizionale in uno dei corpi di ciclo, migliorando notevolmente le prestazioni complessive del ciclo. Questo tipo di ottimizzazione è perfettamente sicuro perché la valutazione dell'espressione (abs(d) > 1.0) è indipendente da altre espressioni.

In presenza di accesso all'ambiente FPU o eccezioni a virgola mobile, questi tipi di ottimizzazione sono contraindicated perché modificano il flusso di semantico. Queste ottimizzazioni sono disponibili sotto il fp solo: modalità precise perché la semantica delle eccezioni a virgola mobile e l'accesso all'ambiente FPU è disabilitata per impostazione predefinita. Funzioni di accedere all'ambiente FPU in modo esplicito disabilitare tali ottimizzazioni, usare il `fenv_access` pragma del compilatore. Allo stesso modo, è necessario utilizzare funzioni mediante le eccezioni a virgola mobile e il `float_control(except ... )` pragma del compilatore (oppure usare il **/fp: tranne** opzione della riga di comando).

In sintesi, la virgola mobile: modalità precise consente al compilatore di riordinare la valutazione di espressioni a virgola mobile a condizione che i risultati finali non vengono modificati e che i risultati non siano dipendenti all'ambiente FPU o in caso di eccezioni a virgola mobile.

### <a name="fpu-environment-access-under-fpprecise"></a>Accesso all'ambiente FPU in /fp: precise

Quando il fp: modalità precise è abilitata, il compilatore presuppone che un programma non accedere o modificare l'ambiente FPU. Come indicato in precedenza, questo presupposto consente al compilatore di riordinare o spostare operazioni a virgola mobile per migliorare l'efficienza in /fp: precise.

Alcuni programmi possono modificare la direzione di arrotondamento a virgola mobile tramite il `_controlfp` (funzione). Ad esempio, alcuni programmi di calcolo superiore e inferiore ai limiti di errore nelle operazioni aritmetiche eseguendo lo stesso calcolo due volte, prima di tutto durante l'arrotondamento verso l'infinito negativo, quindi mentre arrotondamento verso l'infinito positivo. Poiché l'unità FPU fornisce un modo pratico per controllare l'arrotondamento, un programmatore potrebbe scegliere di modificare la modalità di arrotondamento, modifica dell'ambiente FPU. Il codice seguente calcola il che errore esatto associato di una moltiplicazione a virgola mobile e modificando l'ambiente FPU.

```cpp
double a, b, cLower, cUpper;
// . . .
_controlfp( _RC_DOWN, _MCW_RC );    // round to -&infin;
cLower = a*b;
_controlfp( _RC_UP, _MCW_RC );    // round to +&infin;
cUpper = a*b;
_controlfp( _RC_NEAR, _MCW_RC );    // restore rounding mode
```

In /fp: precisi, il compilatore presuppone sempre l'ambiente FPU predefinito, in modo che query optimizer è gratuito ignorare le chiamate a `_controlfp` e ridurre le assegnazioni di precedente a cUpper = cLower = un * b; chiaramente ciò potrebbe restituire risultati non corretti. Per evitare tali ottimizzazioni, abilitare l'accesso all'ambiente FPU utilizzando il `fenv_access` pragma del compilatore.

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

In /fp: precise, alle ottimizzazioni di riordinare la valutazione dell'espressione possono modificare i punti che si verificano determinati errori. La parola di stato di accesso ai programmi devono abilitare l'accesso all'ambiente FPU usando il `fenv_access` pragma del compilatore.

Per altre informazioni, vedere sezione [pragma fenv_access](#the-fenv-access-pragma).

### <a name="floating-point-exception-semantics-under-fpprecise"></a>La semantica delle eccezioni a virgola mobile in /fp: precise

Per impostazione predefinita, la semantica delle eccezioni a virgola mobile è disabilitata in /fp: precise. La maggior parte dei programmatori C++ che preferiscono gestire condizioni eccezionali a virgola mobile senza l'utilizzo del sistema o le eccezioni C++. Inoltre, come indicato in precedenza, la semantica delle eccezioni a virgola mobile disabilitando la maggiore flessibilità del compilatore durante l'ottimizzazione di operazioni a virgola mobile. Usare il **/fp: tranne** passare o il `float_control` pragma per abilitare la semantica delle eccezioni a virgola mobile e quando si utilizza la virgola mobile: modello preciso.

Per altre informazioni, vedere sezione [abilitare la semantica delle eccezioni a virgola mobile](#enabling-floating-point-exception-semantics).

## <a name="the-fpfast-mode-for-floating-point-semantics"></a>La modalità /fp: fast per semantica della virgola mobile

Quando è abilitata la modalità /fp: fast, il compilatore riduce le regole tale /fp: precise utilizza durante l'ottimizzazione di operazioni a virgola mobile. Questa modalità è consente al compilatore di ottimizzare ulteriormente il codice a virgola mobile per la velocità a scapito della precisione a virgola mobile e la correttezza. I programmi che non fare affidamento su calcoli a virgola mobile e altamente accurati potrebbero riscontrare un miglioramento della velocità significativo abilitando la modalità /fp: fast.

La modalità a virgola mobile /fp: fast attivata mediante il [/fp: fast](fp-specify-floating-point-behavior.md) opzione del compilatore da riga di comando come indicato di seguito:

> source.cpp /fp: fast CL

Questo esempio si indica al compilatore di usare /fp: fast semantica durante la generazione di codice per il file source.cpp. Il modello /fp: fast può anche essere richiamato in una funzione dalla base usando la `float_control` pragma del compilatore.

Per altre informazioni, vedere sezione [float_control (pragma)](#the-float-control-pragma).

Nella modalità /fp: fast, il compilatore può eseguire le ottimizzazioni che modificano l'accuratezza dei calcoli a virgola mobile. Il compilatore potrebbe non correttamente l'arrotondamento in assegnazioni, typecast o chiamate di funzione e arrotondamento intermedio non verrà sempre eseguito. Ottimizzazioni a virgola mobile specifiche, ad esempio forme contratte, sono sempre abilitate. La semantica delle eccezioni a virgola mobile e alla sensibilità di ambiente FPU sono disabilitati e non è disponibile.

|semantica /fp: fast|Descrizione
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, typecast e chiamate di funzione possono essere ignorate.<br/>Espressioni intermedie possono essere arrotondate in inferiori a registrare la precisione in base ai requisiti di prestazioni.|
|Trasformazioni algebriche|Il compilatore può trasformare espressioni in base a numero reale algebra associativo da preferire, distributiva; Queste trasformazioni non vengono necessariamente essere accurate o corretti.|
|Più ricercati|Sempre abilitato. non può essere disabilitata dal (pragma) `fp_contract`|
|Ordine di valutazione a virgola mobile|Il compilatore potrebbe riordinare la valutazione delle espressioni a virgola mobile, anche quando tali modifiche potrebbero alterare i risultati finali.|
|Accesso all'ambiente FPU|Disabilitato. Non disponibile|
|Semantica delle eccezioni a virgola mobile|Disabilitato. Non disponibile|

### <a name="rounding-semantics-for-floating-point-expressions-under-fpfast"></a>Arrotondamento semantica per le espressioni a virgola mobile in /fp: fast

A differenza di /fp: precisa modello, il modello /fp: fast esegue calcoli intermedi precisione più pratica. Arrotondamento alla assegnazioni, typecast e chiamate di funzione non possono sempre verificarsi. Ad esempio, la prima funzione seguente introdotta tre variabili di precisione singola (`C`, `Y` e `T`). Il compilatore può scegliere di essere registrate queste variabili, in effetti di tipo promozione `C`, `Y` e `T` a precisione doppia.

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

In questo esempio, /fp: fast ha subverted lo scopo della funzione originale. L'elemento finale con ottimizzazione per la conseguenza della variabile `sum`, potrebbe essere piuttosto perturbed dal risultato corretto.

In /fp: fast, il compilatore in genere tenterà di mantenere almeno alla precisione specificata per il codice sorgente. Tuttavia, in alcuni casi il compilatore può scegliere di eseguire espressioni intermedie in un *ridurre la precisione* rispetto a quanto specificato nel codice sorgente. Il primo blocco di codice riportato di seguito chiama ad esempio, una versione a precisione doppia di funzione della radice quadrata. In /fp: fast, in alcune circostanze, ad esempio quando il risultato e gli operandi di funzione sono il cast esplicito a precisione singola, il compilatore potrebbe scegliere di sostituire la chiamata a precisione doppia `sqrt` con una chiamata a una precisione singola `sqrtf`(funzione). Perché i cast di assicurarsi che il valore approfondire `sqrt` e il valore in uscita vengono arrotondate alla precisione singola, cambia solo il posto di arrotondamento. Se il valore di arrivo in sqrt è un valore a precisione doppia e il compilatore ha eseguito questa trasformazione, circa la metà dei bit precisione potrebbe essere errata.

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

Anche se meno precisi, questa ottimizzazione può essere particolarmente utile quando la destinazione di processori che forniscono, ad esempio precisione singola e e versioni intrinseche di funzioni `sqrt`. Solo con precisione quando il compilatore userà tali ottimizzazioni è dipendente di piattaforma e di contesto.

Inoltre, non esiste alcun garantita la coerenza per la precisione dei calcoli intermedi, che possono essere eseguite in qualsiasi livello di precisione disponibile per il compilatore. Anche se il compilatore proverà a mantenere almeno il livello di precisione specificata dal codice, /fp: fast consente a query optimizer di eseguire il downcast calcoli intermedi per produrre codice più veloce o più piccolo del computer. Ad esempio, il compilatore potrebbe ottimizzare ulteriormente il codice precedente per arrotondare alcune delle moltiplicazioni intermediate a precisione singola.

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

Questo tipo di conversione e arrotondamento aggiuntive potrà derivati dall'utilizzo di una minore precisione a virgola mobile e unità, ad esempio SSE2, per eseguire alcuni dei calcoli intermedi. L'accuratezza di arrotondamento /fp: fast viene pertanto dipende dalla piattaforma; il codice che compila anche per un processore necessariamente potrebbe non funzionare bene per un altro processore. Rimarrà all'utente per determinare se i vantaggi di velocità siano prevalenti rispetto agli eventuali problemi di accuratezza.

Se l'ottimizzazione /fp: fast è particolarmente problematico per una funzione specifica, la modalità a virgola mobile può essere usata in locale in /fp: preciso tramite i `float_control` pragma del compilatore.

### <a name="algebraic-transformations-under-fpfast"></a>Trasformazioni algebriche in /fp: fast

La modalità /fp: fast consente al compilatore di adempiere ad alcuni, le trasformazioni algebriche unsafe a virgola mobile punto espressioni. Ad esempio, le seguenti ottimizzazioni unsafe possono essere impiegate in /fp: fast.

||||
|-|-|-|
|Codice originale|Passaggio #1|Passaggio #2
|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = y – a – b;`<br/><br/>`c = x – z;`<br/><br/>`c = x * z;`<br/><br/>`c = x - z;`<br/><br/>`c = x + z;`<br/><br/>`c = z-x;`|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = 0;`<br/><br/>`c = x – 0;`<br/><br/>`c = x * 0;`<br/><br/>`c = x - 0;`<br/><br/>`c = x + 0;`<br/><br/>`c = 0 - x;`|`double a, b, c;`<br/>`double x, y, z;`<br/><br/>`y = (a + b);`<br/>`z = 0;`<br/><br/>`c = x;`<br/><br/>`c = 0;`<br/><br/>`c = x;`<br/><br/>`c = x;`<br/><br/>`c = -x;`|

Nel passaggio 1, il compilatore rileva che `z = y – a – b` è sempre uguale a zero. Sebbene sia tecnicamente un'osservazione non è valida, è consentito in /fp: fast. Il compilatore quindi propaga il valore costante zero per tutte le successive Usa la variabile z. Nel passaggio 2, consente di ottimizzare ulteriormente il compilatore osservando che `x - 0 == x`, `x * 0 == 0`e così via. Anche in questo caso, anche se queste osservazioni non sono necessariamente valide, sono consentite con /fp: fast. Il codice ottimizzato è ora molto più veloce, ma può anche essere notevolmente meno accurato o addirittura non corrette.

Una delle seguenti regole algebriche (non sicure) possono essere impiegata da query optimizer quando è abilitata la modalità /fp: fast:

|||
|-|-|
|Form|Descrizione|
|`(a + b) + c = a + (b + c)`|Regola associativa per l'aggiunta|
|`(a * b) * c = a * (b * c)`|Regola associativo da preferire per la moltiplicazione|
|`a * (b + c) = a * b + b * c`|Distribuzione di moltiplicazione su aggiunta|
|`(a + b)(a - b) = a * a - b * b`|Eseguire il Factoring algebrici|
|`a / b = a * (1 / b)`|Divisione per moltiplicativo|
|`a * 1.0 = a, a / 1.0 = a`|Identità moltiplicativa|
|`a ± 0.0 = a, 0.0 - a = -a`|Identità additiva|
|`a / a = 1.0, a - a = 0.0`|Annullamento|

Se l'ottimizzazione /fp: fast è particolarmente problematico per una determinata funzione, la modalità a virgola mobile può essere usata in locale in /fp: preciso tramite i `float_control` pragma del compilatore.

### <a name="order-of-floating-point-expression-evaluation-under-fpfast"></a>Ordine di valutazione dell'espressione a virgola mobile in /fp: fast

A differenza di /fp: precise, /fp: fast consente al compilatore di riordinare le operazioni a virgola mobile in modo da produrre codice più veloce. Di conseguenza, alcune ottimizzazioni in /fp: fast potrebbero non mantiene l'ordine previsto delle espressioni. Si consideri ad esempio la funzione seguente che calcola il prodotto scalare di due vettori di n-dimensionale.

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

In /fp: fast, query optimizer può eseguire una riduzione scalare del `dotProduct` funzionare in modo efficace trasformando la funzione come indicato di seguito:

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

Nella versione ottimizzata della funzione quattro prodotto separati-somme vengono eseguite contemporaneamente e successivamente aggiunti insieme. Questa ottimizzazione può velocizzare il calcolo del `dotProduct` da tutte quelle un fattore pari a quattro a seconda del processore di destinazione, ma il risultato finale potrebbe non essere corrette in modo da renderlo inutilizzabile. Se tali ottimizzazioni sono particolarmente problematici per singola funzione o unità di conversione, la modalità a virgola mobile può essere usata in locale in /fp: preciso tramite i `float_control` pragma del compilatore.

## <a name="the-fpstrict-mode-for-floating-point-semantics"></a>Il /fp: strict modalità per la semantica della virgola mobile

Quando fp: modalità strict è attivata, il compilatore è conforme a tutte le stesse regole che /fp: precise utilizza durante l'ottimizzazione di operazioni a virgola mobile. Questa modalità, inoltre, consente la semantica delle eccezioni a virgola mobile e tra maiuscole e minuscole all'ambiente FPU e disabilita determinate ottimizzazioni quali termini più semplici. È la modalità Strict di livello massimo dell'operazione.

Fp: è abilitata la modalità a virgola mobile strict usando il [/fp: strict](fp-specify-floating-point-behavior.md) opzione del compilatore da riga di comando come indicato di seguito:

> CL /fp: strict source.cpp

Questo esempio si indica al compilatore di usare /fp: strict semantica durante la generazione di codice per il file source.cpp. Il /fp: strict modello può essere richiamato anche in funzione dalla base usando la `float_control` pragma del compilatore.

Per altre informazioni, vedere sezione [float_control (pragma)](#the-float-control-pragma).

Sotto il fp: modalità strict, il compilatore non esegue mai tutte le ottimizzazioni che impostazione l'accuratezza dei calcoli a virgola mobile. Il compilatore eseguirà sempre l'arrotondamento correttamente in assegnazioni, typecast e chiamate di funzione e arrotondamento intermedio verrà costantemente eseguito con la stessa precisione registra l'unità FPU. La semantica delle eccezioni a virgola mobile e alla sensibilità di ambiente FPU sono abilitate per impostazione predefinita. Alcune funzionalità di ottimizzazione, ad esempio forme contratte, sono disabilitate perché il compilatore non garantisce la correttezza in ogni caso.

|/fp: strict semantica|Descrizione|
|-|-|
|La semantica di arrotondamento|Arrotondamento esplicita alla assegnazioni, typecast e chiamate di funzione<br/>Verranno valutate espressioni intermedie con precisione di registrazione.<br/>Uguale a /fp: precise|
|Trasformazioni algebriche|Aderendo a non-pacchetto di distribuzione, non associativa algebra a virgola mobile, a meno che una trasformazione è sicuramente sempre producono gli stessi risultati.<br/>Uguale a /fp: precise|
|Più ricercati|Sempre disabilitata|
|Ordine di valutazione a virgola mobile|Il compilatore non riordinerà la valutazione di espressioni a virgola mobile|
|Accesso all'ambiente FPU|Sempre abilitato.|
|Semantica delle eccezioni a virgola mobile|Abilitato per impostazione predefinita.|

### <a name="floating-point-exception-semantics-under-fpstrict"></a>La semantica delle eccezioni a virgola mobile in /fp: strict

Per impostazione predefinita, la semantica delle eccezioni a virgola mobile viene abilitata con la /fp: strict modello. Per disabilitare questa semantica, usare il **/fp: tranne-** switch o introdurre un `float_control(except, off)` pragma.

Per altre informazioni, vedere le sezioni [abilitare la semantica delle eccezioni a virgola mobile](#enabling-floating-point-exception-semantics) e [float_control (pragma)](#the-float-control-pragma).

## <a name="the-fenvaccess-pragma"></a>Il pragma fenv_access

Utilizzo:

```cpp
#pragma fenv_access( [ on  | off ] )
```

Il [fenv_access](../../preprocessor/fenv-access.md) pragma consente al compilatore di eseguire alcune ottimizzazioni che potrebbero compromettere i test di flag FPU e cambia la modalità FPU. Quando lo stato di `fenv_access` è disabilitata, il compilatore non può presupporre la modalità FPU predefinite sono valide e che non sono testati i flag FPU. Per impostazione predefinita, l'accesso all'ambiente è disabilitata per il fp: modalità precise, ma che potrà essere esplicitamente attivata utilizzando il pragma. In /fp: strict, `fenv_access` è sempre abilitata e non può essere disabilitata. In /fp: fast, `fenv_access` è sempre disabilitato e non può essere abilitato.

Come descritto in fp: sezione precisa, alcuni programmatori possono modificare la direzione di arrotondamento a virgola mobile usando il `_controlfp` (funzione). Ad esempio, per calcolare i limiti superiore e inferiore di errore nelle operazioni aritmetiche, alcuni programmi eseguono due volte, lo stesso calcolo prima di tutto durante l'arrotondamento verso l'infinito negativo e quindi durante l'arrotondamento verso l'infinito positivo. Poiché l'unità FPU fornisce un modo pratico per controllare l'arrotondamento, un programmatore potrebbe scegliere di modificare la modalità di arrotondamento, modifica dell'ambiente FPU. Il codice seguente calcola il che errore esatto associato di una moltiplicazione a virgola mobile e modificando l'ambiente FPU.

```cpp
double a, b, cLower, cUpper;
// . . .
_controlfp( _RC_DOWN, _MCW_RC );    // round to -infinity
cLower = a*b;
_controlfp( _RC_UP, _MCW_RC );       // round to +infinity
cUpper = a*b;
_controlfp( _RC_NEAR, _MCW_RC );    // restore rounding mode
```

Se disabilitato, il `fenv_access` pragma consente al compilatore di supporre ambiente FPU predefinito; in questo modo è gratuito ignorare le chiamate a query optimizer `_controlfp` riducendo le assegnazioni di precedente a `cUpper = cLower = a*b`. Quando abilitata, tuttavia, `fenv_access` impedisce che tali ottimizzazioni.

I programmi possono verificare anche la parola di stato FPU per rilevare determinati errori a virgola mobile. Ad esempio, il codice seguente controlla le condizioni di divisione per zero e inesatto

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

Quando si `fenv_access` è disabilitata, il compilatore potrebbe riordinare l'ordine di esecuzione delle espressioni a virgola mobile, pertanto probabilmente subverting i controlli di stato FPU. Abilitazione `fenv_access` impedisce che tali ottimizzazioni.

## <a name="the-fpcontract-pragma"></a>Il fp_contract (pragma)

Utilizzo:

```cpp
#pragma fp_contract( [ on | off ] )
```

Come descritto in fp: sezione precisa, contrazione è una caratteristica fondamentale dell'architettura per numero di unità a virgola mobile e moderne. Forme contratte offrono la possibilità di eseguire una moltiplicazione seguita da un'aggiunta come una singola operazione senza errori di arrotondamento intermedio. Queste istruzioni singole sono più veloci rispetto all'esecuzione separata moltiplicare e aggiungere le istruzioni e sono più accurate, perché è presente alcun arrotondamento intermedio del prodotto. Un'operazione di contratto può calcola il valore di `(a*b+c)` come se entrambe le operazioni sono state calcolate a precisione infinita e quindi arrotondate il più vicino al numero a virgola mobile. Questa ottimizzazione può significativamente velocizzare le funzioni contenenti più di tipo interleaved multiply e operazioni di aggiunta. Ad esempio, si consideri il seguente algoritmo che calcola il prodotto scalare di due vettori di n-dimensionale.

```cpp
float dotProduct( float x[], float y[], int n )
{
   float p=0.0;
   for (int i=0; i<n; i++)
      p += x[i]*y[i];
   return p;
}
```

Questo calcolo può essere eseguito una serie di aggiunta multipla istruzioni del modulo `p = p + x[i]*y[i]`.

Il [fp_contract](../../preprocessor/fp-contract.md) pragma specifica se le espressioni a virgola mobile possono entrare in contatto. Per impostazione predefinita, la virgola mobile: modalità precise consente più ricercati dal momento in cui migliorare sia la precisione e velocità. Forme contratte sono sempre abilitati per la modalità /fp: fast. Tuttavia, in quanto più ricercati possono compromettere il rilevamento esplicito di condizioni di errore, il `fp_contract` pragma è sempre disabilitato in fp: modalità strict. Esempi di espressioni che possono essere sviluppate quando il `fp_contract` pragma è abilitato:

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

Il **/fp: precise**, **/fp: fast**, **/fp: strict** e **/fp: tranne** commutatori semantica della virgola mobile in un file per file di controllo base. Il [float_control](../../preprocessor/float-control.md) pragma fornisce controllo di questo tipo in base a una funzione per funzione.

Utilizzo:

```cpp
#pragma float_control(push)
#pragma float_control(pop)
#pragma float_control( precise, on | off [, push] )
#pragma float_control( except, on | off [, push] )
```

I pragma `float_control(push)` e `float_control(pop)` rispettivamente di inserire e visualizzare lo stato corrente della modalità a virgola mobile e l'opzione di eccezione in uno stack. Si noti che lo stato del `fenv_access` e `fp_contract` pragma non sono interessati da `pragma float_control(push/pop)`.

Chiamare il pragma `float_control(precise, on)` abiliterà e `float_control(precise, off)` disabiliterà la semantica di modalità precise. Analogamente, il pragma `float_control(except, on)` abiliterà e `float_control(except, off)` disabiliterà la semantica delle eccezioni. La semantica delle eccezioni può essere abilitata solo quando viene attivata anche semantica precisa. Quando l'opzione facoltativa `push` argomento è presente, gli stati del `float_control` opzioni vengono inviate prima della modifica la semantica.

### <a name="setting-the-floating-point-semantic-mode-on-a-function-by-function-basis"></a>Impostazione della modalità di semantica a virgola mobile in base a una funzione per funzione

Le opzioni della riga di comando sono infatti sintassi abbreviata per impostare le quattro pragma a virgola mobile diversi. Per scegliere in modo esplicito una determinata modalità di semantica a virgola mobile in base a una funzione per funzione, selezionare ciascuno dei quattro pragma a virgola mobile opzione come descritto nella tabella seguente:

||||||
|-|-|-|-|-|
||float_control(precise)|float_control(except)|fp_contract|fenv_access|
|/fp:strict|attivo|attivo|Off|attivo|
|/fp:strict /fp:except-|attivo|Off|Off|attivo|
|/fp:precise|attivo|Off|attivo|Off|
|/fp:precise /fp:except|attivo|attivo|attivo|Off|
|/fp:fast|Off|Off|attivo|Off|

Ad esempio, il seguente Abilita in modo esplicito /fp: fast semantica.

```cpp
#pragma float_control( except, off )   // disable exception semantics
#pragma float_control( precise, off )  // disable precise semantics
#pragma fp_contract(on)                // enable contractions
#pragma fenv_access(off)               // disable fpu environment sensitivity
```

> [!Note]
> La semantica di eccezione deve essere disattivata prima di spegnere la semantica "precisa".

## <a name="enabling-floating-point-exception-semantics"></a>Abilitare la semantica delle eccezioni a virgola mobile

Alcune condizioni a virgola mobile eccezionali, ad esempio divisione per zero, possono causare l'unità FPU segnalare un'eccezione hardware. Eccezioni a virgola mobile sono disabilitate per impostazione predefinita. Le eccezioni a virgola mobile sono abilitate modificando la parola di controllo FPU con la `_controlfp` (funzione). Ad esempio, il codice seguente Abilita l'eccezione a virgola mobile di divisione per zero:

```cpp
_clearfp(); // always call _clearfp before
            // enabling/unmasking a FPU exception
_controlfp( _EM_ZERODIVIDE, _MCW_EM );
```

Quando è abilitata l'eccezione di divisione per zero, qualsiasi operazione di divisione con un denominatore è uguale a zero genererà un'eccezione FPU venga segnalato.

Per ripristinare la parola di controllo FPU per la modalità predefinita, chiamare `_controlfp(_CW_DEFAULT, ~0)`.

Abilitare la semantica delle eccezioni a virgola mobile con il **/fp: tranne** flag non corrisponde all'abilitazione di eccezioni a virgola mobile. Quando la semantica delle eccezioni a virgola mobile è abilitata, il compilatore necessario tenere conto della possibilità che qualsiasi operazione a virgola mobile potrebbe generare un'eccezione. Poiché l'unità FPU è un'unità del processore separato, le istruzioni in esecuzione su unità a virgola mobile possono essere eseguite contemporaneamente a istruzioni su altre unità.

Quando un'eccezione a virgola mobile è abilitata, l'unità FPU arresterà l'esecuzione dell'istruzione che causa l'errore e quindi segnalare una condizione eccezionale, impostare la parola di stato FPU. Quando la CPU raggiunge la successiva istruzione a virgola mobile, viene verificata per tutte le eccezioni FPU in sospeso. Se si verifica un'eccezione in sospeso, il processore intercetta chiamando un gestore di eccezioni fornito dal sistema operativo. Ciò significa che quando un'operazione a virgola mobile rileva una condizione eccezionale, l'eccezione corrispondente non rilevato fino a quando non viene eseguita l'operazione a virgola mobile successiva. Ad esempio, il codice seguente intercetta un'eccezione di divisione per zero:

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

Se si verifica una condizione di divisione per zero nell'espressione un = b/c, l'unità FPU non trap/genera l'eccezione fino all'operazione a virgola mobile successiva nell'espressione 2.0 * b. Ciò produce l'output seguente:

```Output
This line shouldn't be reached when c==0.0
SEH Exception Detected
```

Le funzioni intrinseche printf corrispondente alla prima riga dell'output deve non sono stati raggiunti; è stato raggiunto perché non è stato generato l'eccezione a virgola mobile generata dall'espressione b/c fino al raggiungimento di esecuzione 2.0 * b. Per generare l'eccezione subito dopo l'esecuzione di b/c, il compilatore deve essere introdotto un'istruzione "wait":

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

Questa istruzione "attendere" forza il processore per eseguire la sincronizzazione con lo stato dell'unità a virgola mobile e gestire le eccezioni in sospeso. Il compilatore genererà solo questi "attendere" istruzioni quando semantica della virgola mobile è abilitata. Quando tale semantica è disabilitata, perché sono presenti per impostazione predefinita, i programmi potrebbero verificarsi errori di synchronicity, simili a quello riportato sopra, quando si usano le eccezioni a virgola mobile.

Quando la semantica a virgola mobile è abilitata, il compilatore non introduce solo le istruzioni "wait", anche impedirà al compilatore illegalmente ottimizzazione del codice a virgola mobile in presenza di possibili eccezioni. Questo include tutte le trasformazioni che modificano i punti in corrispondenza del quale vengono generate eccezioni. A causa di questi fattori, l'abilitazione di semantica della virgola mobile può ridurre notevolmente l'efficienza del codice macchina generato con conseguente calo delle prestazioni di un'applicazione.

La semantica delle eccezioni a virgola mobile è abilitata per impostazione predefinita sotto la fp: modalità strict. Per abilitare tale semantica in fp: modalità precise, aggiungere il **/fp: tranne** passare al compilatore della riga di comando. La semantica delle eccezioni a virgola mobile può anche essere abilitata e disabilitata in una funzione dalla base usando la `float_control` pragma.

### <a name="floating-point-exceptions-as-c-exceptions"></a>Eccezioni a virgola mobile come eccezioni C++

Come con tutte le eccezioni hardware, le eccezioni a virgola mobile e intrinsecamente non provocano un'eccezione C++, ma invece generano un'eccezione strutturata. Per eseguire il mapping a virgola mobile e delle eccezioni strutturate delle eccezioni C++, gli utenti possono introdurre un convertitore di eccezioni SEH personalizzato. In primo luogo, introduce un'eccezione C++ corrispondente a ogni eccezione a virgola mobile:

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

Quindi, introdurre una funzione di conversione che consentirà di rilevare un'eccezione SEH a virgola mobile e di generare l'eccezione C++ corrispondente. Per usare questa funzione, impostare il convertitore di gestore di eccezioni strutturate per il thread del processo corrente con il [set_se_translator](../../c-runtime-library/reference/set-se-translator.md) funzione dalla libreria di runtime.

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

Dopo questo mapping viene inizializzato, eccezioni a virgola mobile si comporteranno come se fossero eccezioni C++. Ad esempio:

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

[Che cosa ogni esperto di informatica dovrebbe conoscere su aritmetica a virgola mobile](http://pages.cs.wisc.edu/~david/courses/cs552/S12/handouts/goldberg-floating-point.pdf) da David guerra.

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](../optimizing-your-code.md)<br/>
