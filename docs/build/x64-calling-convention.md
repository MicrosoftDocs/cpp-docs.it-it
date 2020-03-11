---
title: Convenzione di chiamata x64
description: Dettagli della convenzione di chiamata ABI x64 predefinita.
ms.date: 12/17/2018
ms.assetid: 41ca3554-b2e3-4868-9a84-f1b46e6e21d9
ms.openlocfilehash: 2cad00ac7f2cb5fe086fa262a0f512330997391f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856885"
---
# <a name="x64-calling-convention"></a>Convenzione di chiamata x64

In questa sezione vengono descritti i processi e le convenzioni standard utilizzati da una funzione (il chiamante) per effettuare chiamate in un'altra funzione (il chiamato) nel codice x64.

## <a name="calling-convention-defaults"></a>Impostazioni predefinite della convenzione di chiamata

Per impostazione predefinita, l'interfaccia ABI (Application Binary Interface) x64 usa una convenzione di chiamata rapida a quattro registri. Lo spazio viene allocato nello stack di chiamate come archivio shadow per i chiamanti per salvare i registri. Esiste una stretta corrispondenza uno-a-uno tra gli argomenti di una chiamata di funzione e i registri usati per tali argomenti. Qualsiasi argomento che non si adatta a 8 byte oppure non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Un singolo argomento non viene mai distribuito tra più registri. Lo stack di registro x87 non è usato e può essere usato dal chiamato, ma deve essere considerato volatile tra le chiamate di funzione. Tutte le operazioni a virgola mobile vengono eseguite usando i registri di 16 XMM. Gli argomenti Integer vengono passati nei registri RCX, RDX, R8 e R9. Gli argomenti a virgola mobile vengono passati in XMM0L, XMM1L, XMM2L e XMM3L. gli argomenti a 16 byte vengono passati per riferimento. Il passaggio del parametro è descritto in dettaglio nel [passaggio di parametri](#parameter-passing). Oltre a questi registri, RAX, R10, R11, XMM4 e XMM5 sono considerati volatili. Tutti gli altri registri sono non volatili. L'utilizzo del registro è documentato in dettaglio nell' [utilizzo del registro](../build/x64-software-conventions.md#register-usage) e nei [registri salvati del chiamante/chiamato](#callercallee-saved-registers).

Per le funzioni con prototipo, tutti gli argomenti vengono convertiti nei tipi chiamati previsti prima del passaggio. Il chiamante è responsabile dell'allocazione dello spazio per i parametri al chiamato e deve sempre allocare spazio sufficiente per archiviare quattro parametri di registro, anche se il chiamato non accetta molti parametri. Questa convenzione semplifica il supporto per le funzioni di linguaggio C senza prototipo e vararg CC++ /Functions. Per le funzioni vararg o senza prototipo, è necessario duplicare tutti i valori a virgola mobile nel registro di utilizzo generico corrispondente. Tutti i parametri oltre i primi quattro devono essere archiviati nello stack dopo l'archivio shadow prima della chiamata. I dettagli della funzione vararg sono disponibili in [varargs](#varargs). Le informazioni sulle funzioni senza prototipo sono descritte in dettaglio in [funzioni senza prototipo](#unprototyped-functions).

## <a name="alignment"></a>Alignment

La maggior parte delle strutture è allineata al rispettivo allineamento naturale. Le eccezioni primarie sono il puntatore dello stack e `malloc` o `alloca` memoria, che sono allineati a 16 byte per facilitare le prestazioni. L'allineamento superiore a 16 byte deve essere eseguito manualmente, ma poiché 16 byte è una dimensione di allineamento comune per le operazioni XMM, questo valore dovrebbe funzionare per la maggior parte del codice. Per ulteriori informazioni sul layout e sull'allineamento della struttura, vedere [tipi e archiviazione](../build/x64-software-conventions.md#types-and-storage). Per informazioni sul layout dello stack, vedere [utilizzo dello stack x64](../build/stack-usage.md).

## <a name="unwindability"></a>Rimozione

Le funzioni foglia sono funzioni che non modificano i registri non volatili. Una funzione non foglia può modificare un RSP non volatile, ad esempio chiamando una funzione o allocando ulteriore spazio dello stack per le variabili locali. Per ripristinare i registri non volatili quando viene gestita un'eccezione, è necessario annotare le funzioni non foglia con i dati statici che descrivono come rimuovere correttamente la funzione in un'istruzione arbitraria. Questi dati vengono archiviati come *pData*, o dati della procedura, che a sua volta fa riferimento a *XData*, i dati di gestione delle eccezioni. XData contiene le informazioni di rimozione e può puntare a pData aggiuntivi o a una funzione del gestore di eccezioni. I Prolog e epilogo sono altamente limitati, in modo che possano essere descritti correttamente in XData. Il puntatore dello stack deve essere allineato a 16 byte in qualsiasi area di codice che non fa parte di un epilogo o di un prologo, tranne che nelle funzioni foglia. Le funzioni foglia possono essere riportate semplicemente simulando un ritorno, quindi pdata e XData non sono necessari. Per informazioni dettagliate sulla struttura corretta dei Prolog delle funzioni e epilogo, vedere il [prologo x64 e l'epilogo](../build/prolog-and-epilog.md). Per ulteriori informazioni sulla gestione delle eccezioni e sulla gestione delle eccezioni e sulla rimozione di pdata e XData, vedere [gestione delle eccezioni x64](../build/exception-handling-x64.md).

## <a name="parameter-passing"></a>Passaggio dei parametri

I primi quattro argomenti Integer vengono passati nei registri. I valori integer vengono passati in ordine da sinistra a destra in RCX, RDX, R8 e R9 rispettivamente. Gli argomenti cinque e versioni successive vengono passati nello stack. Tutti gli argomenti sono giustificati a destra nei registri, quindi il chiamato può ignorare i bit superiori del registro e accedere solo alla parte del registro necessaria.

Qualsiasi argomento a virgola mobile e precisione doppia nei primi quattro parametri viene passato in XMM0-XMM3, a seconda della posizione. Il numero intero registra RCX, RDX, R8 e R9 che verrebbero normalmente usati per tali posizioni, tranne nel caso degli argomenti varargs. Per informazioni dettagliate, vedere [varargs](#varargs). Analogamente, i registri XMM0-XMM3 vengono ignorati quando l'argomento corrispondente è un tipo Integer o puntatore.

[__m128](../cpp/m128.md) tipi, matrici e stringhe non vengono mai passati per valore immediato. Viene invece passato un puntatore alla memoria allocata dal chiamante. Gli struct e le unioni di dimensioni 8, 16, 32 o 64 bit e i tipi di __m64 vengono passati come se fossero numeri interi della stessa dimensione. Gli struct o le unioni di altre dimensioni vengono passati come puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione passati come puntatore, incluso \__m128, la memoria temporanea allocata dal chiamante deve essere allineata a 16 byte.

Le funzioni intrinseche che non allocano lo spazio dello stack e non chiamano altre funzioni, talvolta usano altri registri volatili per passare argomenti di registro aggiuntivi. Questa ottimizzazione è resa possibile dalla stretta associazione tra il compilatore e l'implementazione della funzione intrinseca.

Se necessario, il chiamato è responsabile del dump dei parametri del registro nello spazio Shadow.

La tabella seguente riepiloga il modo in cui vengono passati i parametri:

|Tipo di parametro|Modalità di passaggio|
|--------------------|----------------|
|A virgola mobile|Primi 4 parametri: XMM0 tramite XMM3. Altri passati nello stack.|
|Integer|Primi 4 parametri: RCX, RDX, R8, R9. Altri passati nello stack.|
|Aggregazioni (8, 16, 32 o 64 bit) e __m64|Primi 4 parametri: RCX, RDX, R8, R9. Altri passati nello stack.|
|Funzioni di aggregazione (altro)|Per puntatore. Primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|
|__m128|Per puntatore. Primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|

### <a name="example-of-argument-passing-1---all-integers"></a>Esempio di argomento che passa 1-tutti i numeri interi

```cpp
func1(int a, int b, int c, int d, int e);
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack
```

### <a name="example-of-argument-passing-2---all-floats"></a>Esempio di argomento che passa 2-tutti i float

```cpp
func2(float a, double b, float c, double d, float e);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack
```

### <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio di argomento che passa 3-int e float misti

```cpp
func3(int a, double b, int c, float d);
// a in RCX, b in XMM1, c in R8, d in XMM3
```

### <a name="example-of-argument-passing-4--__m64-__m128-and-aggregates"></a>Esempio di argomento che passa 4-__m64, \__m128 e aggregazioni

```cpp
func4(__m64 a, _m128 b, struct c, float d);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3
```

## <a name="varargs"></a>Varargs

Se i parametri vengono passati tramite varargs (ad esempio, gli argomenti con i puntini di sospensione), viene applicata la normale convenzione di passaggio del parametro Register, inclusa la distribuzione del quinto argomento e degli argomenti successivi allo stack. È responsabilità del destinatario eseguire il dump degli argomenti il cui indirizzo è stato eseguito. Solo per i valori a virgola mobile, il registro Integer e il registro a virgola mobile devono contenere il valore, nel caso in cui il chiamato preveda il valore nei registri integer.

## <a name="unprototyped-functions"></a>Funzioni senza prototipo

Per le funzioni non completamente basate su prototipi, il chiamante passa i valori integer come numeri interi e valori a virgola mobile come precisione doppia. Solo per i valori a virgola mobile, il registro Integer e il registro a virgola mobile contengono il valore float nel caso in cui il chiamato preveda il valore nei registri integer.

```cpp
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## <a name="return-values"></a>Valori restituiti

Un valore scalare restituito che può adattarsi a 64 bit viene restituito tramite RAX; sono inclusi __m64 tipi. I tipi non scalari, inclusi i tipi float, Double e Vector, ad esempio [__m128](../cpp/m128.md), [__m128i](../cpp/m128i.md) [__m128d](../cpp/m128d.md) vengono restituiti in XMM0. Lo stato dei bit non usati nel valore restituito in RAX o XMM0 non è definito.

I tipi definiti dall'utente possono essere restituiti per valore dalle funzioni globali e dalle funzioni membro statiche. Per restituire un tipo definito dall'utente per valore in RAX, deve avere una lunghezza di 1, 2, 4, 8, 16, 32 o 64 bit. Non deve avere anche un costruttore, un distruttore o un operatore di assegnazione di copia definito dall'utente. Nessun membro dati non statico privato o protetto; Nessun membro dati non statico di tipo riferimento. Nessuna classe base; Nessuna funzione virtuale; e nessun membro dati che soddisfi questi requisiti. (Si tratta in sostanza della definizione di un tipo POD C++03. Poiché la definizione è cambiata nello standard C++ 11, non è consigliabile usare `std::is_pod` per questo test.) In caso contrario, il chiamante assume la responsabilità di allocare la memoria e passare un puntatore per il valore restituito come primo argomento. Gli argomenti successivi vengono quindi spostati verso destra di un argomento. È necessario che lo stesso puntatore sia restituito dal computer chiamato in RAX.

Questi esempi mostrano in che modo vengono passati i parametri e i valori restituiti per le funzioni con le dichiarazioni specificate:

### <a name="example-of-return-value-1---64-bit-result"></a>Esempio di risultato del valore restituito a 1-64 bit

```Output
__int64 func1(int a, float b, int c, int d, int e);
// Caller passes a in RCX, b in XMM1, c in R8, d in R9, e pushed on stack,
// callee returns __int64 result in RAX.
```

### <a name="example-of-return-value-2---128-bit-result"></a>Esempio di risultato del valore restituito a 2-128 bit

```Output
__m128 func2(float a, double b, int c, __m64 d);
// Caller passes a in XMM0, b in XMM1, c in R8, d in R9,
// callee returns __m128 result in XMM0.
```

### <a name="example-of-return-value-3---user-type-result-by-pointer"></a>Esempio di valore restituito 3-risultato del tipo di utente per puntatore

```Output
struct Struct1 {
   int j, k, l;    // Struct1 exceeds 64 bits.
};
Struct1 func3(int a, double b, int c, float d);
// Caller allocates memory for Struct1 returned and passes pointer in RCX,
// a in RDX, b in XMM2, c in R9, d pushed on the stack;
// callee returns pointer to Struct1 result in RAX.
```

### <a name="example-of-return-value-4---user-type-result-by-value"></a>Esempio di valore restituito 4-risultato del tipo di utente per valore

```Output
struct Struct2 {
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.
};
Struct2 func4(int a, double b, int c, float d);
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;
// callee returns Struct2 result by value in RAX.
```

## <a name="callercallee-saved-registers"></a>Registri salvati chiamante/chiamato

I registri RAX, RCX, RDX, R8, R9, R10, R11, XMM0-5 e le parti superiori di YMM0-15 e ZMM0-15 sono considerati volatili ed è necessario considerarli eliminati in base alle chiamate di funzione, a meno che non sia altrimenti possibile la sicurezza in base all'analisi, ad esempio l'ottimizzazione dell'intero programma. In AVX512VL i 16-31 registri ZMM, YMM e XMM sono volatili.

I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14, R15 e XMM6-15 sono considerati non volatili e devono essere salvati e ripristinati da una funzione che li utilizza.

## <a name="function-pointers"></a>Puntatori funzione
 
I puntatori a funzione sono semplicemente puntatori all'etichetta della rispettiva funzione. Non sono previsti requisiti Sommario per i puntatori a funzione.

## <a name="floating-point-support-for-older-code"></a>Supporto della virgola mobile per il codice precedente

I registri di stack MMX e a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti attraverso cambi di contesto. Non esiste alcuna convenzione di chiamata esplicita per questi registri. L'uso di questi registri è esclusivamente vietato nel codice in modalità kernel.

## <a name="fpcsr"></a>FpCsr

Lo stato del registro include anche la parola di controllo FPU x87. La convenzione di chiamata impone che questo registro sia non volatile.

Il registro delle parole di controllo FPU x87 è impostato sui valori standard seguenti all'inizio dell'esecuzione del programma:

| Registra\[bits] | Impostazione |
|-|-|
| FPCSR\[0:6] | Eccezioni maschera tutti i 1 (tutte le eccezioni mascherate) |
| FPCSR\[7] | Riservato-0 |
| FPCSR\[8:9] | Controllo di precisione-10B (precisione doppia) |
| FPCSR\[10:11] | Controllo di arrotondamento-0 (arrotondato al più vicino) |
| FPCSR\[12] | Controllo Infinity-0 (non usato) |

Un chiamato che modifica uno dei campi all'interno di FPCSR deve essere ripristinato prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinarne i valori standard prima di richiamare un chiamato a meno che non sia stato specificato dall'accordo che il chiamato prevede i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

1. Nelle funzioni in cui lo scopo documentato della funzione specificata consiste nel modificare i flag FpCsr non volatili.

1. Quando la violazione di queste regole risulta corretta, il programma si comporta come un programma in cui tali regole non vengono violate, ad esempio tramite l'analisi dell'intero programma.

## <a name="mxcsr"></a>MxCsr

Lo stato del registro include anche MxCsr. La convenzione di chiamata divide il registro in una parte volatile e una parte non volatile. La parte volatile è costituita dai sei flag di stato, in MXCSR\[0:5], mentre il resto del registro, MXCSR\[6:15], viene considerato non volatile.

La parte non volatile è impostata sui valori standard seguenti all'inizio dell'esecuzione del programma:

| Registra\[bits] | Impostazione |
|-|-|
| MXCSR\[6] | I denormalizzati sono zeri-0 |
| MXCSR\[7:12] | Eccezioni maschera tutti i 1 (tutte le eccezioni mascherate) |
| MXCSR\[13:14] | Controllo di arrotondamento-0 (arrotondato al più vicino) |
| MXCSR\[15] | Scarica a zero per underflow mascherato-0 (disattivato) |

Un chiamato che modifica uno dei campi non volatili all'interno di MXCSR deve essere ripristinato prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinarne i valori standard prima di richiamare un chiamato a meno che non sia stato specificato dall'accordo che il chiamato prevede i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

- Nelle funzioni in cui lo scopo documentato della funzione specificata consiste nel modificare i flag MxCsr non volatili.

- Quando la violazione di queste regole risulta corretta, il programma si comporta come un programma in cui tali regole non vengono violate, ad esempio tramite l'analisi dell'intero programma.

Non è possibile fare supposizioni sullo stato della parte volatile di MXCSR attraverso un limite di funzione, a meno che non sia specificato in modo specifico nella documentazione di una funzione.

## <a name="setjmplongjmp"></a>setjmp/longjmp

Quando si include setjmpex. h o setjmp. h, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) o [longjmp](../c-runtime-library/reference/longjmp.md) generano una rimozione che richiama distruttori e chiamate `__finally`.  Questo comportamento è diverso da x86, dove l'inclusione di setjmp. h comporta la mancata chiamata di clausole e distruttori `__finally`.

Una chiamata a `setjmp` conserva il puntatore dello stack corrente, i registri non volatili e i registri MxCsr.  Le chiamate a `longjmp` tornare al sito di chiamata `setjmp` più recente e reimpostando il puntatore dello stack, i registri non volatili e i registri MxCsr, tornando allo stato mantenuto dalla chiamata `setjmp` più recente.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)
