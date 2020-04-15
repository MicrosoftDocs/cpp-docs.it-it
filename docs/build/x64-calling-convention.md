---
title: Convenzione di chiamata x64
description: Dettagli della convenzione di chiamata ABI x64 predefinita.
ms.date: 12/17/2018
ms.assetid: 41ca3554-b2e3-4868-9a84-f1b46e6e21d9
ms.openlocfilehash: caf22172ea5e9c20280bce8e508d72fd30c00c5b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335134"
---
# <a name="x64-calling-convention"></a>Convenzione di chiamata x64

In questa sezione vengono descritti i processi e le convenzioni standard utilizzati da una funzione (il chiamante) per effettuare chiamate in un'altra funzione (il chiamato) nel codice x64.

## <a name="calling-convention-defaults"></a>Impostazioni predefinite della convenzione di chiamataCalling convention defaults

L'interfaccia ABI (Application Binary Interface) x64 utilizza una convenzione di chiamata rapida a quattro registri per impostazione predefinita. Lo spazio viene allocato nello stack di chiamate come archivio shadow per i chiamatori per salvare i registri. Esiste una stretta corrispondenza uno-a-uno tra gli argomenti di una chiamata di funzione e i registri utilizzati per tali argomenti. Qualsiasi argomento che non rientra in 8 byte o non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Un singolo argomento non viene mai distribuito tra più registri. Lo stack di registro x87 è inutilizzato e può essere utilizzato dal chiamato, ma deve essere considerato volatile tra le chiamate di funzione. Tutte le operazioni a virgola mobile vengono eseguite utilizzando i 16 registri XMM. Gli argomenti Integer vengono passati nei registri RCX, RDX, R8 e R9. Gli argomenti a virgola mobile vengono passati in XMM0L, XMM1L, XMM2L e XMM3L. Gli argomenti a 16 byte vengono passati per riferimento. Il passaggio dei parametri è descritto in dettaglio in [Passaggio di](#parameter-passing)parametri . Oltre a questi registri, RAX, R10, R11, XMM4 e XMM5 sono considerati volatili. Tutti gli altri registri non sono volatili. L'utilizzo del registro è documentato in dettaglio in [Utilizzo del registro](../build/x64-software-conventions.md#register-usage) e [Registri salvati dal chiamante/chiamato](#callercallee-saved-registers).

Per le funzioni con prototipo, tutti gli argomenti vengono convertiti nei tipi di chiamato previsti prima del passaggio. Il chiamante è responsabile dell'allocazione di spazio per i parametri al destinatario della chiamata e deve sempre allocare spazio sufficiente per archiviare quattro parametri di registro, anche se il chiamato non accetta molti parametri. Questa convenzione semplifica il supporto per le funzioni del linguaggio C senza prototipo e le funzioni vararg C/C. Per le funzioni vararg o senza prototipo, tutti i valori a virgola mobile devono essere duplicati nel registro generico corrispondente. Tutti i parametri oltre i primi quattro devono essere archiviati nello stack dopo l'archivio shadow prima della chiamata. I dettagli della funzione Vararg sono disponibili in [Varargs](#varargs). Le informazioni sulle funzioni senza prototipo sono descritte in dettaglio in [Funzioni senza prototipo](#unprototyped-functions).

## <a name="alignment"></a>Alignment

La maggior parte delle strutture sono allineate al loro allineamento naturale. Le eccezioni principali sono `malloc` il `alloca` puntatore dello stack e/ la memoria, che sono allineati a 16 byte per migliorare le prestazioni. L'allineamento superiore a 16 byte deve essere eseguito manualmente, ma poiché 16 byte è una dimensione di allineamento comune per le operazioni XMM, questo valore dovrebbe funzionare per la maggior parte del codice. Per ulteriori informazioni sul layout e sull'allineamento della struttura, vedere [Tipi e archiviazione](../build/x64-software-conventions.md#types-and-storage). Per informazioni sul layout dello stack, vedere [Utilizzo dello stack x64](../build/stack-usage.md).

## <a name="unwindability"></a>Srotolabilità

Le funzioni foglia sono funzioni che non modificano i registri non volatili. Una funzione non foglia può modificare RSP non volatile, ad esempio, chiamando una funzione o allocando spazio dello stack aggiuntivo per le variabili locali. Per recuperare i registri non volatili quando viene gestita un'eccezione, le funzioni non foglia devono essere annotate con dati statici che descrivono come riattivare correttamente la funzione in corrispondenza di un'istruzione arbitraria. Questi dati vengono archiviati come *pdata*, o dati di routine, che a loro volta si riferiscono a *xdata*, i dati di gestione delle eccezioni. Xdata contiene le informazioni di rimozione e può puntare a pdata aggiuntivi o a una funzione del gestore eccezioni. I prologhi e gli epiloghi sono altamente limitati in modo che possano essere descritti correttamente in xdata. Il puntatore dello stack deve essere allineato a 16 byte in qualsiasi area del codice che non fa parte di un epilogo o di un prologo, ad eccezione delle funzioni foglia. Le funzioni foglia possono essere annullate semplicemente simulando un ritorno, quindi pdata e xdata non sono necessari. Per informazioni dettagliate sulla struttura corretta dei prologhi e degli epiloghi delle funzioni, vedere [x64 prologo ed epilogo](../build/prolog-and-epilog.md). Per ulteriori informazioni sulla gestione delle eccezioni e sulla gestione delle eccezioni e la rimozione di pdata e xdata, vedere [Gestione delle eccezioni x64](../build/exception-handling-x64.md).

## <a name="parameter-passing"></a>Passaggio dei parametri

I primi quattro argomenti integer vengono passati nei registri. I valori interi vengono passati in ordine da sinistra a destra rispettivamente in RCX, RDX, R8 e R9. Gli argomenti cinque e superiori vengono passati nello stack. Tutti gli argomenti sono giustificati a destra nei registri, quindi il chiamato può ignorare i bit superiori del registro e accedere solo alla parte del registro necessaria.

Tutti gli argomenti a virgola mobile e a precisione doppia nei primi quattro parametri vengono passati in XMM0 - XMM3, a seconda della posizione. I registri integer RCX, RDX, R8 e R9 che verrebbero normalmente utilizzati per tali posizioni vengono ignorati, tranne nel caso di argomenti varargs. Per informazioni dettagliate, vedere [Varargs](#varargs). Analogamente, i registri XMM0 - XMM3 vengono ignorati quando l'argomento corrispondente è un tipo intero o puntatore.

[__m128](../cpp/m128.md) tipi, matrici e stringhe non vengono mai passati per valore immediato. Al contrario, un puntatore viene passato alla memoria allocata dal chiamante. Le strutture e le unioni di dimensioni 8, 16, 32 o 64 bit e tipi di __m64 vengono passate come se fossero numeri interi della stessa dimensione. Gli struct o le unioni di altre dimensioni vengono passati come puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione \_passati come puntatore, incluso _m128, la memoria temporanea allocata dal chiamante deve essere allineata a 16 byte.

Le funzioni intrinseche che non allocano spazio dello stack e non chiamano altre funzioni, talvolta usano altri registri volatili per passare argomenti di registro aggiuntivi. Questa ottimizzazione è resa possibile dall'associazione stretta tra il compilatore e l'implementazione della funzione intrinseca.

Il destinatario della chiamata è responsabile del dump dei parametri di registro nel relativo spazio shadow, se necessario.

Nella tabella seguente vengono riepilogate le modalità di passati dei parametri:

|Tipo di parametro|Come è passato|
|--------------------|----------------|
|Virgola mobile|Primi 4 parametri - da XMM0 a XMM3. Altri passati in pila.|
|Integer|Primi 4 parametri - RCX, RDX, R8, R9. Altri passati in pila.|
|Aggregati (8, 16, 32 o 64 bit) e __m64|Primi 4 parametri - RCX, RDX, R8, R9. Altri passati in pila.|
|Aggregati (altro)|Per puntatore. Primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|
|__m128|Per puntatore. Primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|

### <a name="example-of-argument-passing-1---all-integers"></a>Esempio di passaggio di argomenti 1 - tutti i numeri interiExample of argument passing 1 - all integers

```cpp
func1(int a, int b, int c, int d, int e);
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack
```

### <a name="example-of-argument-passing-2---all-floats"></a>Esempio di passaggio di argomenti 2 - tutti i float

```cpp
func2(float a, double b, float c, double d, float e);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack
```

### <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio di passaggio di argomenti 3 - int e float misti

```cpp
func3(int a, double b, int c, float d);
// a in RCX, b in XMM1, c in R8, d in XMM3
```

### <a name="example-of-argument-passing-4--__m64-__m128-and-aggregates"></a>Esempio di passaggio di \_argomenti 4 -__m64, _m128 e aggregazioniExample of argument passing 4 -__m64, _m128, and aggregates

```cpp
func4(__m64 a, _m128 b, struct c, float d);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3
```

## <a name="varargs"></a>Varargs

Se i parametri vengono passati tramite varargs (ad esempio, i solchi argomenti), si applica la normale convenzione di passaggio dei parametri di registro, inclusa la fuoriuscita del quinto e degli argomenti successivi nello stack. È responsabilità del chiamato scaricare gli argomenti che hanno il loro indirizzo preso. Solo per i valori a virgola mobile, sia il registro integer che il registro a virgola mobile devono contenere il valore, nel caso in cui il chiamato si aspetti il valore nei registri integer.

## <a name="unprototyped-functions"></a>Funzioni senza prototipoUnprototyped functions

Per le funzioni non completamente prototipate, il chiamante passa valori integer come numeri interi e valori a virgola mobile come precisione doppia. Solo per i valori a virgola mobile, sia il registro integer che il registro a virgola mobile contengono il valore float nel caso in cui il chiamato si aspetti il valore nei registri integer.

```cpp
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## <a name="return-values"></a>Valori restituiti

Un valore restituito scalare che può essere contenuto in 64 bit viene restituito tramite RAX; sono inclusi i tipi di __m64. I tipi non scalari, inclusi i tipi float, double e vector come [__m128](../cpp/m128.md), [__m128i](../cpp/m128i.md), [__m128d](../cpp/m128d.md) vengono restituiti in XMM0. Lo stato dei bit non usati nel valore restituito in RAX o XMM0 non è definito.

I tipi definiti dall'utente possono essere restituiti per valore dalle funzioni globali e dalle funzioni membro statiche. Per restituire un tipo definito dall'utente per valore in RAX, deve avere una lunghezza di 1, 2, 4, 8, 16, 32 o 64 bit. Deve inoltre non avere un costruttore definito dall'utente, un distruttore o un operatore di assegnazione di copia. nessun membro dati non statico privato o protetto; nessun membro dati non statico di tipo riferimento; nessuna classe base; nessuna funzione virtuale; e nessun membro dati che non soddisfi anche questi requisiti. (Si tratta in sostanza della definizione di un tipo POD C++03. Dal momento che la definizione è stata modificata nello `std::is_pod` standard di C, non è consigliabile usare per questo test.) In caso contrario, il chiamante si assume la responsabilità di allocare memoria e passare un puntatore per il valore restituito come primo argomento. Gli argomenti successivi vengono quindi spostati verso destra di un argomento. È necessario che lo stesso puntatore sia restituito dal computer chiamato in RAX.

Questi esempi mostrano in che modo vengono passati i parametri e i valori restituiti per le funzioni con le dichiarazioni specificate:

### <a name="example-of-return-value-1---64-bit-result"></a>Esempio di valore restituito 1 - risultato a 64 bitExample of return value 1 - 64-bit result

```Output
__int64 func1(int a, float b, int c, int d, int e);
// Caller passes a in RCX, b in XMM1, c in R8, d in R9, e pushed on stack,
// callee returns __int64 result in RAX.
```

### <a name="example-of-return-value-2---128-bit-result"></a>Esempio di valore restituito 2 - risultato a 128 bit

```Output
__m128 func2(float a, double b, int c, __m64 d);
// Caller passes a in XMM0, b in XMM1, c in R8, d in R9,
// callee returns __m128 result in XMM0.
```

### <a name="example-of-return-value-3---user-type-result-by-pointer"></a>Esempio di valore restituito 3 - risultato del tipo di utente per puntatoreExample of return value 3 - user type result by pointer

```Output
struct Struct1 {
   int j, k, l;    // Struct1 exceeds 64 bits.
};
Struct1 func3(int a, double b, int c, float d);
// Caller allocates memory for Struct1 returned and passes pointer in RCX,
// a in RDX, b in XMM2, c in R9, d pushed on the stack;
// callee returns pointer to Struct1 result in RAX.
```

### <a name="example-of-return-value-4---user-type-result-by-value"></a>Esempio di valore restituito 4 - risultato del tipo di utente per valoreExample of return value 4 - user type result by value

```Output
struct Struct2 {
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.
};
Struct2 func4(int a, double b, int c, float d);
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;
// callee returns Struct2 result by value in RAX.
```

## <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante/destinatario di chiamata

I registri RAX, RCX, RDX, R8, R9, R10, R11, XMM0-5 e le parti superiori di YMM0-15 e .MM0-15 sono considerati volatili e devono essere considerati distrutti durante le chiamate di funzione (a meno che non sia altrimenti dimostrabile in sicurezza dall'analisi come l'ottimizzazione dell'intero programma). In AVX512VL, i registri 16-31 sono volatili.

I registri RBX, RBP, RDI, RSI, RSP, R12, R13, R14, R15 e XMM6-15 sono considerati non volatili e devono essere salvati e ripristinati da una funzione che li utilizza.

## <a name="function-pointers"></a>Puntatori funzione

I puntatori a funzione sono semplicemente puntatori all'etichetta della rispettiva funzione. Non esistono requisiti sommari (TOC) per i puntatori a funzione.

## <a name="floating-point-support-for-older-code"></a>Supporto a virgola mobile per il codice precedente

I registri dello stack MMX e a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti attraverso i cambi di contesto. Non esiste alcuna convenzione di chiamata esplicita per questi registri. L'uso di questi registri è severamente vietato nel codice in modalità kernel.

## <a name="fpcsr"></a>FpCsr

Lo stato del registro include anche la parola di controllo FPU x87. La convenzione di chiamata impone che questo registro sia non volatile.

Il registro delle parole di controllo FPU x87 è impostato sui seguenti valori standard all'inizio dell'esecuzione del programma:

| Registra\[bit] | Impostazione |
|-|-|
| FPCSR\[0:6] | Le eccezioni mascherano tutti gli 1 (tutte le eccezioni mascherate) |
| FPCSR\[7] | Riservato - 0 |
| FPCSR\[8:9] | Precision Eprecision Control - 10B (precisione doppia) |
| FPCSR\[10:11] | Controllo di arrotondamento - 0 (arrotondamento al più vicino) |
| FPCSR\[12] | Controllo Infinito - 0 (non utilizzato) |

Un chiamato che modifica uno qualsiasi dei campi all'interno di FPCSR deve ripristinarli prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinarli ai valori standard prima di richiamare un chiamato, a meno che il chiamato non si aspetti i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

1. Nelle funzioni in cui lo scopo documentato della funzione specificata è modificare i flag FpCsr non volatili.

1. Quando è dimostrabilmente corretto che la violazione di queste regole si traduca in un programma che si comporta allo stesso modo di un programma in cui queste regole non vengono violate, ad esempio, attraverso l'analisi di tutto il programma.

## <a name="mxcsr"></a>MxCsr

Lo stato del registro include anche MxCsr. La convenzione di chiamata divide questo registro in una parte volatile e una parte non volatile. La parte volatile è costituita dai sei\[flag di stato, in MXCSR 0:5], mentre il resto del registro, MXCSR\[6:15], è considerato non volatile.

La parte non volatile è impostata sui seguenti valori standard all'inizio dell'esecuzione del programma:

| Registra\[bit] | Impostazione |
|-|-|
| MXCSR\[6] | I denormali sono zeri - 0 |
| MXCSR\[7:12] | Le eccezioni mascherano tutti gli 1 (tutte le eccezioni mascherate) |
| MXCSR\[13:14] | Controllo di arrotondamento - 0 (arrotondamento al più vicino) |
| MXCSR\[15] | Sciacquare a zero per underflow mascherato - 0 (disattivato) |

Un chiamato che modifica uno qualsiasi dei campi non volatili all'interno di MXCSR deve ripristinarli prima di tornare al chiamante. Inoltre, un chiamante che ha modificato uno di questi campi deve ripristinarli ai valori standard prima di richiamare un chiamato, a meno che il chiamato non si aspetti i valori modificati.

Esistono due eccezioni alle regole relative alla non volatilità dei flag di controllo:

- Nelle funzioni in cui lo scopo documentato della funzione specificata è modificare i flag MxCsr non volatili.

- Quando è dimostrabilmente corretto che la violazione di queste regole si traduca in un programma che si comporta allo stesso modo di un programma in cui queste regole non vengono violate, ad esempio, attraverso l'analisi di tutto il programma.

Non è possibile fare ipotesi sullo stato della parte volatile di MXCSR attraverso un limite di funzione, a meno che non sia descritto in modo specifico nella documentazione di una funzione.

## <a name="setjmplongjmp"></a>setjmp/longjmp

Quando si include setjmpex.h o setjmp.h, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) o [longjmp](../c-runtime-library/reference/longjmp.md) generano una rimozione che richiama i distruttori e `__finally` le chiamate.  Questo comportamento è diverso da x86, in `__finally` cui l'inclusione di setjmp.h comporta che le clausole e i distruttori non vengano richiamati.

Una chiamata `setjmp` a mantiene il puntatore dello stack corrente, i registri non volatili e i registri MxCsr.  Chiamate `longjmp` per tornare al `setjmp` sito di chiamata più recente e reimposta il puntatore dello stack, i registri non `setjmp` volatili e i registri MxCsr, sullo stato mantenuto dalla chiamata più recente.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)
