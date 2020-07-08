---
title: Convenzione di chiamata x64
description: Dettagli della convenzione di chiamata predefinita x64.
ms.date: 07/06/2020
ms.assetid: 41ca3554-b2e3-4868-9a84-f1b46e6e21d9
ms.openlocfilehash: 9bfecd0fb154658a299d3dac7d9e45398ebe450b
ms.sourcegitcommit: 85d96eeb1ce41d9e1dea947f65ded672e146238b
ms.contentlocale: it-IT
ms.lasthandoff: 07/07/2020
ms.locfileid: "86058633"
---
# <a name="x64-calling-convention"></a>Convenzione di chiamata x64

In questa sezione vengono descritti i processi e le convenzioni standard utilizzati da una funzione (il chiamante) per effettuare chiamate in un'altra funzione (il chiamato) nel codice x64.

## <a name="calling-convention-defaults"></a>Impostazioni predefinite della convenzione di chiamata

Per impostazione predefinita, l'interfaccia ABI (Application Binary Interface) x64 usa una convenzione di chiamata rapida a quattro registri. Lo spazio viene allocato nello stack di chiamate come archivio shadow per i chiamanti per salvare i registri.

Esiste una stretta corrispondenza uno-a-uno tra gli argomenti di una chiamata di funzione e i registri usati per tali argomenti. Qualsiasi argomento che non si adatta a 8 byte oppure non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Un singolo argomento non viene mai distribuito tra più registri.

Lo stack di registro x87 non è usato. Può essere usato dal chiamato, ma si considera volatile tra le chiamate di funzione. Tutte le operazioni a virgola mobile vengono eseguite usando i registri di 16 XMM.

Gli argomenti Integer vengono passati nei registri RCX, RDX, R8 e R9. Gli argomenti a virgola mobile vengono passati in XMM0L, XMM1L, XMM2L e XMM3L. gli argomenti a 16 byte vengono passati per riferimento. Il passaggio del parametro è descritto in dettaglio nel [passaggio di parametri](#parameter-passing). Questi registri e RAX, R10, R11, XMM4 e XMM5 sono considerati volatili. L'utilizzo del registro è documentato in dettaglio nell' [utilizzo del registro](../build/x64-software-conventions.md#register-usage) e nei [registri salvati del chiamante/chiamato](#callercallee-saved-registers).

Per le funzioni con prototipo, tutti gli argomenti vengono convertiti nei tipi chiamati previsti prima del passaggio. Il chiamante è responsabile dell'allocazione dello spazio per i parametri del chiamato. Il chiamante deve sempre allocare spazio sufficiente per archiviare quattro parametri di registro, anche se il chiamato non accetta tale numero di parametri. Questa convenzione semplifica il supporto di funzioni c/C++ senza prototipo e funzioni C/C++ vararg. Per le funzioni vararg o senza prototipo, è necessario duplicare tutti i valori a virgola mobile nel registro di utilizzo generico corrispondente. Tutti i parametri oltre i primi quattro devono essere archiviati nello stack dopo l'archivio shadow prima della chiamata. I dettagli della funzione vararg sono disponibili in [varargs](#varargs). Le informazioni sulle funzioni senza prototipo sono descritte in dettaglio in [funzioni senza prototipo](#unprototyped-functions).

## <a name="alignment"></a>Allineamento

La maggior parte delle strutture è allineata al rispettivo allineamento naturale. Le eccezioni primarie sono il puntatore dello stack e `malloc` o la `alloca` memoria, che sono allineati a 16 byte per favorire le prestazioni. L'allineamento superiore a 16 byte deve essere eseguito manualmente. Poiché 16 byte è una dimensione di allineamento comune per le operazioni XMM, questo valore dovrebbe funzionare per la maggior parte del codice. Per ulteriori informazioni sul layout e sull'allineamento della struttura, vedere [tipi e archiviazione](../build/x64-software-conventions.md#types-and-storage). Per informazioni sul layout dello stack, vedere [utilizzo dello stack x64](../build/stack-usage.md).

## <a name="unwindability"></a>Rimozione

Le funzioni foglia sono funzioni che non modificano i registri non volatili. Una funzione non foglia può modificare un RSP non volatile, ad esempio chiamando una funzione. In alternativa, è possibile modificare RSP allocando spazio dello stack aggiuntivo per le variabili locali. Per ripristinare i registri non volatili quando viene gestita un'eccezione, le funzioni non foglia vengono annotate con dati statici. I dati descrivono come rimuovere correttamente la funzione in un'istruzione arbitraria. Questi dati vengono archiviati come *pData*, o dati della procedura, che a sua volta fa riferimento a *XData*, i dati di gestione delle eccezioni. XData contiene le informazioni di rimozione e può puntare a pData aggiuntivi o a una funzione del gestore di eccezioni.

I Prolog e epilogo sono altamente limitati, in modo che possano essere descritti correttamente in XData. Il puntatore dello stack deve rimanere a 16 byte allineato in qualsiasi area di codice che non fa parte di un epilogo o di un prologo, tranne che nelle funzioni foglia. Le funzioni foglia possono essere riportate semplicemente simulando un ritorno, quindi pdata e XData non sono necessari. Per informazioni dettagliate sulla struttura corretta dei Prolog delle funzioni e epilogo, vedere il [prologo x64 e l'epilogo](../build/prolog-and-epilog.md). Per ulteriori informazioni sulla gestione delle eccezioni e sulla gestione delle eccezioni e sulla rimozione di pdata e XData, vedere [gestione delle eccezioni x64](../build/exception-handling-x64.md).

## <a name="parameter-passing"></a>Passaggio dei parametri

Per impostazione predefinita, la convenzione di chiamata x64 passa i primi quattro argomenti a una funzione nei registri. I registri utilizzati per questi argomenti dipendono dalla posizione e dal tipo dell'argomento. Gli argomenti rimanenti vengono inseriti nello stack in ordine da destra a sinistra.

Gli argomenti con valori integer nelle quattro posizioni più a sinistra vengono passati in ordine da sinistra a destra in RCX, RDX, R8 e R9, rispettivamente. Gli argomenti quinto e superiore vengono passati nello stack come descritto in precedenza. Tutti gli argomenti Integer nei registri sono giustificati a destra, quindi il chiamato può ignorare i bit superiori del registro e accedere solo alla parte del registro necessaria.

Qualsiasi argomento a virgola mobile e precisione doppia nei primi quattro parametri viene passato in XMM0-XMM3, a seconda della posizione. I valori a virgola mobile vengono inseriti solo nei registri integer RCX, RDX, R8 e R9 quando sono presenti argomenti varargs. Per informazioni dettagliate, vedere [varargs](#varargs). Analogamente, i registri XMM0-XMM3 vengono ignorati quando l'argomento corrispondente è un tipo Integer o puntatore.

[`__m128`](../cpp/m128.md)tipi, matrici e stringhe non vengono mai passati per valore immediato. Viene invece passato un puntatore alla memoria allocata dal chiamante. Gli struct e le unioni di dimensioni 8, 16, 32 o 64 bit e `__m64` i tipi vengono passati come se fossero numeri interi della stessa dimensione. Gli struct o le unioni di altre dimensioni vengono passati come puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione passati come puntatore, incluso `__m128` , la memoria temporanea allocata dal chiamante deve essere allineata a 16 byte.

Le funzioni intrinseche che non allocano lo spazio dello stack e non chiamano altre funzioni, talvolta usano altri registri volatili per passare argomenti di registro aggiuntivi. Questa ottimizzazione è resa possibile dalla stretta associazione tra il compilatore e l'implementazione della funzione intrinseca.

Se necessario, il chiamato è responsabile del dump dei parametri del registro nello spazio Shadow.

La tabella seguente riepiloga il modo in cui i parametri vengono passati, in base al tipo e alla posizione da sinistra:

| Tipo di parametro | Fifth e versioni successive | quarto | terze | second | all'estrema sinistra |
|-|-|-|-|-|-|
| virgola mobile | stack | XMM3 | XMM2 | XMM1 | XMM0 |
| integer | stack | R9 | R8 | RDX | RCX |
| Aggregazioni (8, 16, 32 o 64 bit) e`__m64` | stack | R9 | R8 | RDX | RCX |
| Altre aggregazioni, come puntatori | stack | R9 | R8 | RDX | RCX |
| `__m128`, come puntatore | stack | R9 | R8 | RDX | RCX |

### <a name="example-of-argument-passing-1---all-integers"></a>Esempio di argomento che passa 1-tutti i numeri interi

```cpp
func1(int a, int b, int c, int d, int e, int f);
// a in RCX, b in RDX, c in R8, d in R9, f then e pushed on stack
```

### <a name="example-of-argument-passing-2---all-floats"></a>Esempio di argomento che passa 2-tutti i float

```cpp
func2(float a, double b, float c, double d, float e, float f);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, f then e pushed on stack
```

### <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio di argomento che passa 3-int e float misti

```cpp
func3(int a, double b, int c, float d, int e, float f);
// a in RCX, b in XMM1, c in R8, d in XMM3, f then e pushed on stack
```

### <a name="example-of-argument-passing-4---__m64-__m128-and-aggregates"></a>Esempio di argomenti che passano 4- `__m64` , `__m128` e aggregazioni

```cpp
func4(__m64 a, __m128 b, struct c, float d, __m128 e, __m128 f);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3,
// ptr to f pushed on stack, then ptr to e pushed on stack
```

## <a name="varargs"></a>Varargs

Se i parametri vengono passati tramite varargs, ad esempio gli argomenti con i puntini di sospensione, viene applicata la normale convenzione di passaggio del parametro register. Tale convenzione include la distribuzione del quinto argomento e degli argomenti successivi allo stack. È responsabilità del destinatario eseguire il dump degli argomenti il cui indirizzo è stato eseguito. Solo per i valori a virgola mobile, il registro Integer e il registro a virgola mobile devono contenere il valore, nel caso in cui il chiamato preveda il valore nei registri integer.

## <a name="unprototyped-functions"></a>Funzioni senza prototipo

Per le funzioni non completamente basate su prototipi, il chiamante passa i valori integer come numeri interi e valori a virgola mobile come precisione doppia. Solo per i valori a virgola mobile, il registro Integer e il registro a virgola mobile contengono il valore float nel caso in cui il chiamato preveda il valore nei registri integer.

```cpp
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## <a name="return-values"></a>Valori restituiti

Un valore scalare restituito che può adattarsi a 64 bit, incluso il `__m64` tipo, viene restituito tramite Rax. I tipi non scalari, inclusi i tipi float, Double e Vector, ad esempio [`__m128`](../cpp/m128.md) , [`__m128i`](../cpp/m128i.md) , [`__m128d`](../cpp/m128d.md) vengono restituiti in XMM0. Lo stato dei bit non usati nel valore restituito in RAX o XMM0 non è definito.

I tipi definiti dall'utente possono essere restituiti per valore dalle funzioni globali e dalle funzioni membro statiche. Per restituire un tipo definito dall'utente per valore in RAX, deve avere una lunghezza di 1, 2, 4, 8, 16, 32 o 64 bit. Non deve avere anche un costruttore, un distruttore o un operatore di assegnazione di copia definito dall'utente. Non può avere membri dati non statici privati o protetti, né membri dati non statici di tipo riferimento. Non può avere classi base o funzioni virtuali. Inoltre, può avere solo membri dati che soddisfano questi requisiti. Questa definizione è essenzialmente identica a quella di un tipo POD C++ 03. Poiché la definizione è cambiata nello standard C++ 11, non è consigliabile usare `std::is_pod` per questo test. In caso contrario, il chiamante deve allocare memoria per il valore restituito e passare un puntatore come primo argomento. Gli argomenti rimanenti vengono spostati di un argomento a destra. È necessario che lo stesso puntatore sia restituito dal computer chiamato in RAX.

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

L'ABI x64 considera i registri RAX, RCX, RDX, R8, R9, R10, R11 e XMM0-XMM5 volatile. Se presenti, anche le parti superiori di YMM0-YMM15 e ZMM0-ZMM15 sono volatili. In AVX512VL i 16-31 registri ZMM, YMM e XMM sono anche volatili. Prendere in considerazione la distruzione dei registri volatili per le chiamate di funzione, a meno che non sia altrimenti possibile eseguire un'analisi, ad esempio l'ottimizzazione dell'intero programma

L'ABI x64 considera i registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14, R15 e XMM6-XMM15 nonvolatile. Devono essere salvati e ripristinati da una funzione che li utilizza.

## <a name="function-pointers"></a>Puntatori funzione

I puntatori a funzione sono semplicemente puntatori all'etichetta della rispettiva funzione. Non è previsto alcun requisito Sommario per i puntatori a funzione.

## <a name="floating-point-support-for-older-code"></a>Supporto della virgola mobile per il codice precedente

I registri di stack MMX e a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti attraverso cambi di contesto. Non esiste alcuna convenzione di chiamata esplicita per questi registri. L'uso di questi registri è esclusivamente vietato nel codice in modalità kernel.

## <a name="fpcsr"></a>FPCSR

Lo stato del registro include anche la parola di controllo FPU x87. La convenzione di chiamata impone che questo registro sia non volatile.

Il registro delle parole di controllo FPU x87 viene impostato usando i valori standard seguenti all'inizio dell'esecuzione del programma:

| Bit di registro \[ ] | Impostazione |
|-|-|
| FPCSR \[ 0:6] | Eccezioni maschera tutti i 1 (tutte le eccezioni mascherate) |
| FPCSR \[ 7] | Riservato-0 |
| FPCSR \[ 8:9] | Controllo di precisione-10B (precisione doppia) |
| FPCSR \[ 10:11] | Controllo di arrotondamento-0 (arrotondato al più vicino) |
| FPCSR \[ 12] | Controllo Infinity-0 (non usato) |

Un chiamato che modifica uno dei campi all'interno di FPCSR deve essere ripristinato prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinare i valori standard prima di richiamare un chiamato, a meno che il chiamato non preveda i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

- Nelle funzioni in cui lo scopo documentato della funzione specificata consiste nel modificare i flag FPCSR non volatili.

- Quando la violazione di queste regole risulta corretta, il programma si comporta come un programma che non viola le regole, ad esempio tramite l'analisi di un intero programma.

## <a name="mxcsr"></a>MXCSR

Lo stato del registro include anche MXCSR. La convenzione di chiamata divide il registro in una parte volatile e una parte non volatile. La parte volatile è costituita dai sei flag di stato, in MXCSR \[ 0:5], mentre il resto del Register, MXCSR \[ 6:15], viene considerato non volatile.

La parte non volatile è impostata sui valori standard seguenti all'inizio dell'esecuzione del programma:

| Bit di registro \[ ] | Impostazione |
|-|-|
| MXCSR \[ 6] | I denormalizzati sono zeri-0 |
| MXCSR \[ 7:12] | Eccezioni maschera tutti i 1 (tutte le eccezioni mascherate) |
| MXCSR \[ 13:14] | Controllo di arrotondamento-0 (arrotondato al più vicino) |
| MXCSR \[ 15] | Scarica a zero per underflow mascherato-0 (disattivato) |

Un chiamato che modifica uno dei campi non volatili all'interno di MXCSR deve essere ripristinato prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinare i valori standard prima di richiamare un chiamato, a meno che il chiamato non preveda i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

- Nelle funzioni in cui lo scopo documentato della funzione specificata consiste nel modificare i flag MXCSR non volatili.

- Quando la violazione di queste regole risulta corretta, il programma si comporta come un programma che non viola le regole, ad esempio tramite l'analisi di un intero programma.

Non creare presupposti sullo stato della parte volatile del registro MXCSR attraverso un limite di funzione, a meno che la documentazione della funzione non la descriva in modo esplicito.

## <a name="setjmplongjmp"></a>setjmp/longjmp

Quando si include setjmpex. h o setjmp. h, tutte le chiamate a [`setjmp`](../c-runtime-library/reference/setjmp.md) o [`longjmp`](../c-runtime-library/reference/longjmp.md) generano una rimozione che richiama distruttori e `__finally` chiamate.  Questo comportamento è diverso da x86, dove l'inclusione di setjmp. h comporta la `__finally` mancata chiamata di clausole e distruttori.

Una chiamata a `setjmp` conserva il puntatore dello stack corrente, i registri non volatili e i registri MxCsr.  Chiama per `longjmp` tornare al sito di chiamata più recente `setjmp` e reimposta il puntatore dello stack, i registri non volatili e i registri MxCsr, tornando allo stato come mantenuto dalla chiamata più recente `setjmp` .

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)
