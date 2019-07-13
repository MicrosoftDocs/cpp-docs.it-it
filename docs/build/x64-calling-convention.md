---
title: Convenzione di chiamata x64
description: Dettagli della convenzione di chiamata x64 predefinita ABI.
ms.date: 12/17/2018
ms.assetid: 41ca3554-b2e3-4868-9a84-f1b46e6e21d9
ms.openlocfilehash: 2cad00ac7f2cb5fe086fa262a0f512330997391f
ms.sourcegitcommit: 0e3da5cea44437c132b5c2ea522bd229ea000a10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/12/2019
ms.locfileid: "67861152"
---
# <a name="x64-calling-convention"></a>Convenzione di chiamata x64

In questa sezione vengono descritti i processi standard e convenzioni utilizzate in una funzione (il chiamante) per effettuare chiamate in un'altra funzione (il chiamato) x64 codice.

## <a name="calling-convention-defaults"></a>Impostazioni predefinite di convenzione di chiamata

X64 interfaccia applicativa binaria (ABI) usa una convenzione di chiamata di fast-chiamata quattro la registrazione per impostazione predefinita. Lo spazio viene allocato nello stack di chiamate come archivio di ombreggiatura per chiamati salvare i registri. È presente una corrispondenza uno a uno di tipo strict tra gli argomenti da una chiamata di funzione e i registri usati per tali argomenti. Qualsiasi argomento che non si adatta a 8 byte o non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Un singolo argomento mai viene distribuito tra più registri. Stack di registri x87 è inutilizzata e possono essere utilizzati dall'oggetto chiamato, ma deve essere considerato volatile durante le chiamate di funzione. Virgola mobile a tutte le operazioni vengono eseguite usando il 16 registri XMM. Gli argomenti interi vengono passati nei registri, ovvero RCX, RDX, R8 e R9. Gli argomenti vengono passati in XMM0L, XMM1L, XMM2L e XMM3L virgola mobile. gli argomenti di 16 byte vengono passati per riferimento. Passaggio dei parametri sono descritto dettagliatamente [passaggio dei parametri](#parameter-passing). Oltre a questi registri, RAX, R10, R11, XMM4 e XMM5 sono considerati volatile. Tutti gli altri registri vengono non volatili. Uso dei registri è documentata in dettaglio nelle [registrare l'utilizzo](../build/x64-software-conventions.md#register-usage) e [chiamante/chiamato salvato registra](#callercallee-saved-registers).

Per le funzioni con prototipo, tutti gli argomenti vengono convertiti nei tipi previsti dal chiamato prima del passaggio. Il chiamante è responsabile dell'allocazione dello spazio per i parametri per il destinatario della chiamata e deve sempre allocare spazio sufficiente per archiviare i parametri del registro quattro, anche se il chiamato non accetta questo numero di parametri. Questa convenzione semplifica il supporto per le funzioni senza prototipo C-language e funzioni C/C++ vararg. Per le funzioni vararg o senza prototipo, qualsiasi a virgola mobile, i valori devono essere duplicati nel registro per utilizzo generico corrispondente. I parametri oltre i primi quattro devono essere archiviati nello stack dopo che l'ombreggiatura archiviare prima della chiamata. Dettagli funzione vararg sono reperibile nel [Varargs](#varargs). Per informazioni dettagliate, vedere [funzioni senza prototipo](#unprototyped-functions).

## <a name="alignment"></a>Allineamento

La maggior parte delle strutture sono allineate a proprio allineamento naturale. Le principali eccezioni sono il puntatore dello stack e `malloc` o `alloca` memoria, che sono allineati a 16 byte per agevolare le prestazioni. Allineamento di sopra di 16 byte deve essere eseguito manualmente, ma poiché 16 byte è una dimensione di allineamento comuni per le operazioni di registri XMM, questo valore dovrebbe funzionare per gran parte del codice. Per altre informazioni sul layout della struttura e sull'allineamento, vedere [tipi e archiviazione](../build/x64-software-conventions.md#types-and-storage). Per informazioni sul layout dello stack, vedere [x64 dello stack utilizzo](../build/stack-usage.md).

## <a name="unwindability"></a>Modalità di rimozione

Le funzioni foglia sono funzioni che non vengono modificati qualsiasi registri non volatili. Una funzione non foglia potrà modificare RSP non volatili, ad esempio, si chiama una funzione o l'allocazione di spazio dello stack aggiuntive per le variabili locali. Per ripristinare registri non volatili quando un'eccezione gestita, le funzioni foglia devono essere annotate con dati statici che descrive come rimuovere correttamente la funzione in un'istruzione arbitraria. Questi dati vengono archiviati come *pdata*, o dati di routine, che a sua volta fa riferimento a *xdata*, i dati di gestione delle eccezioni. Il xdata contiene le informazioni di rimozione e può puntare a pdata aggiuntivo o una funzione del gestore eccezioni. Prologhi ed epiloghi sono altamente limitata, in modo che possano essere correttamente descritti in xdata. Il puntatore dello stack deve essere allineato a 16 byte in qualsiasi area di codice che non fa parte di un epilogo o di prologo, tranne all'interno delle funzioni foglia. Le funzioni foglia possono essere svuotate semplicemente simulando un ritorno, in modo che non sono richiesti pdata e xdata. Per informazioni dettagliate sulla struttura corretta della funzione prologhi ed epiloghi, vedere [x64 prologo ed epilogo](../build/prolog-and-epilog.md). Per altre informazioni sulla gestione delle eccezioni e l'eccezione, la gestione e la rimozione di pdata e xdata, vedere [x64 la gestione delle eccezioni](../build/exception-handling-x64.md).

## <a name="parameter-passing"></a>Passaggio dei parametri

I primi quattro argomenti integer vengono passati nei registri. I valori interi vengono passati in ordine da sinistra a destra nel RCX, RDX, R8 e R9, rispettivamente. Argomenti 5 e versioni successive vengono passati nello stack. Tutti gli argomenti sono giustificati a destra nei registri, in modo che il chiamato può ignorare i bit superiori del registro e accedere solo la parte del registro necessario.

Eventuali argomenti a virgola mobile e precisione doppia nei primi quattro parametri vengono passati in XMM0 - XMM3, a seconda della posizione. I registri integer, ovvero RCX, RDX, R8 e R9 che normalmente utilizzati per tali posizioni vengono ignorati, tranne nel caso di varargs argomenti. Per informazioni dettagliate, vedere [Varargs](#varargs). Analogamente, il XMM0 - XMM3 registri vengono ignorati quando l'argomento corrispondente è un tipo integer o puntatore.

[__m128](../cpp/m128.md) tipi, matrici e stringhe non vengono mai passate per valore immediato. Al contrario, viene passato un puntatore alla memoria allocata dal chiamante. Gli struct e unioni di dimensioni di 8, 16, 32 o 64 bit e i tipi __m64, vengono passate come se fossero numeri interi della stessa dimensione. Struct o union di altre dimensioni vengono passati come un puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione passati come un puntatore, tra cui \__m128, la memoria temporanea allocata dal chiamante deve essere allineato a 16 byte.

Le funzioni intrinseche non allocano spazio dello stack e che non chiamano altre funzioni, in alcuni casi usano altri registri volatili per passare argomenti dei registri aggiuntivi. Questa ottimizzazione è resa possibile da una stretta associazione tra il compilatore e l'implementazione di una funzione intrinseca.

Il destinatario della chiamata è responsabile per il dump dei parametri del registro nel proprio spazio replicata se necessario.

La tabella seguente riepiloga come parametri vengono passati:

|Tipo di parametro|Modalità di passaggio|
|--------------------|----------------|
|Virgola mobile|I primi 4 parametri - XMM0 XMM3. Gli altri vengono passati nello stack.|
|Integer|I primi 4 parametri - ovvero RCX, RDX, R8 R9. Gli altri vengono passati nello stack.|
|__M64 e le aggregazioni (8, 16, 32 o 64 bit)|I primi 4 parametri - ovvero RCX, RDX, R8 R9. Gli altri vengono passati nello stack.|
|Funzioni di aggregazione (altro)|Dal puntatore. I primi 4 parametri passati come puntatori in ovvero RCX, RDX, R8 e R9|
|__m128|Dal puntatore. I primi 4 parametri passati come puntatori in ovvero RCX, RDX, R8 e R9|

### <a name="example-of-argument-passing-1---all-integers"></a>Esempio 1: tutti i valori interi di passaggio di argomenti

```cpp
func1(int a, int b, int c, int d, int e);
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack
```

### <a name="example-of-argument-passing-2---all-floats"></a>Esempio 2: tutti i valori a virgola mobile di passaggio di argomenti

```cpp
func2(float a, double b, float c, double d, float e);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack
```

### <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio 3: mista valori int e float di passaggio di argomenti

```cpp
func3(int a, double b, int c, float d);
// a in RCX, b in XMM1, c in R8, d in XMM3
```

### <a name="example-of-argument-passing-4--m64-m128-and-aggregates"></a>Esempio 4 di passaggio di argomenti-__m64, \__m128 e funzioni di aggregazione

```cpp
func4(__m64 a, _m128 b, struct c, float d);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3
```

## <a name="varargs"></a>Varargs

Se i parametri vengono passati tramite varargs (ad esempio, gli argomenti sui puntini di sospensione), quindi il convenzione di passaggio dei parametri normali register applica, tra cui la distribuzione dei argomenti quinto e quelli successivi allo stack. È responsabilità del chiamato argomenti dump con gli indirizzi. Per i valori a virgola mobile, il registro integer sia i registri a virgola mobile deve contenere il valore, nel caso in cui il destinatario della chiamata prevede che il valore nei registri integer.

## <a name="unprototyped-functions"></a>Funzioni senza prototipo

Per le funzioni senza prototipo, il chiamante passa i valori interi come valori a virgola mobile e interi come valore a precisione doppia. Per i valori a virgola mobile, il registro integer sia i registri a virgola mobile contengono il valore float nel caso in cui il destinatario della chiamata prevede che il valore nei registri integer.

```cpp
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

## <a name="return-values"></a>Valori restituiti

Viene restituito un valore scalare adattabile in 64 bit con RAX; sono inclusi i tipi __m64. Tra cui float, Double e tipi di vettori, ad esempio i tipi non scalari [__m128](../cpp/m128.md), [__m128i](../cpp/m128i.md), [__m128d](../cpp/m128d.md) vengono restituiti in XMM0. Lo stato dei bit non usati nel valore restituito in RAX o XMM0 non è definito.

I tipi definiti dall'utente possono essere restituiti per valore dalle funzioni globali e dalle funzioni membro statiche. Per restituire un tipo definito dall'utente per valore in RAX, deve avere una lunghezza di 1, 2, 4, 8, 16, 32 o 64 bit. È non necessario che abbia alcun costruttore definito dall'utente, un distruttore o un operatore di assegnazione di copia; non ha membri dati non statici privati o protetti; Nessun membro dati non statici del tipo di riferimento. Nessuna classe di base; Nessuna funzione virtuale; e non ha membri dati che non soddisfano anche questi requisiti. (Si tratta in sostanza della definizione di un tipo POD C++03. Perché la definizione è stata modificata in c++11 standard, non è consigliabile usare `std::is_pod` per questo test.) In caso contrario, il chiamante si assume la responsabilità di allocare la memoria e di passare un puntatore per il valore restituito come primo argomento. Gli argomenti successivi vengono quindi spostati verso destra di un argomento. È necessario che lo stesso puntatore sia restituito dal computer chiamato in RAX.

Questi esempi mostrano in che modo vengono passati i parametri e i valori restituiti per le funzioni con le dichiarazioni specificate:

### <a name="example-of-return-value-1---64-bit-result"></a>Esempio di valore restituito 1 - risultati a 64 bit

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

### <a name="example-of-return-value-3---user-type-result-by-pointer"></a>Esempio di valore restituito 3 – risultato del tipo utente per puntatore

```Output
struct Struct1 {
   int j, k, l;    // Struct1 exceeds 64 bits.
};
Struct1 func3(int a, double b, int c, float d);
// Caller allocates memory for Struct1 returned and passes pointer in RCX,
// a in RDX, b in XMM2, c in R9, d pushed on the stack;
// callee returns pointer to Struct1 result in RAX.
```

### <a name="example-of-return-value-4---user-type-result-by-value"></a>Esempio di valore restituito 4: risultato del tipo di utente per valore

```Output
struct Struct2 {
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.
};
Struct2 func4(int a, double b, int c, float d);
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;
// callee returns Struct2 result by value in RAX.
```

## <a name="callercallee-saved-registers"></a>Registri salvato chiamante/chiamato

I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11, XMM0 a 5 e le parti superiori di da YMM0 a 15 e ZMM0-15 sono considerate volatile e devono essere considerate eliminato definitivamente on le chiamate di funzione (a meno che in caso contrario, la sicurezza-comprovabili dall'analisi, ad esempio Ottimizzazione intero programma). I registri XMM ZMM e YMM 16-31 AVX512VL, sono volatili.

I registri RBX RBP, RDI, RSI, RSP, R12, R13, R14, R15 e XMM6-15 sono considerati non volatile e devono essere salvati e ripristinato da una funzione che li Usa.

## <a name="function-pointers"></a>Puntatori funzione
 
I puntatori a funzione sono semplicemente puntatori all'etichetta della rispettiva funzione. Non esistono alcuna tabella dei requisiti di contenuto (TOC) per puntatori a funzione.

## <a name="floating-point-support-for-older-code"></a>Supporto a virgola mobile per il codice precedente

I registri MMX e stack a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti tra i cambi di contesto. Non vi è alcuna convenzione di chiamata esplicita per questi registri. L'uso di questi registri è proibita nel codice in modalità kernel.

## <a name="fpcsr"></a>FpCsr

Lo stato del registro include anche x87 parola di controllo FPU. La convenzione di chiamata determina questo registro per essere non volatile.

X87 FPU controllo word registro viene impostato sui valori standard seguenti all'inizio di esecuzione del programma:

| Registrare\[bits] | Impostazione |
|-|-|
| FPCSR\[0:6] | Maschera di eccezione tutti 1 (tutte le eccezioni vengono mascherati) |
| FPCSR\[7] | Riservato - 0 |
| FPCSR\[8:9] | 10B - controllo di precisione (precisione doppia) |
| FPCSR\[10:11] | Controllo arrotondamento - 0 (con arrotondamento al più vicino) |
| FPCSR\[12] | Controllo infinito - 0 (non usato) |

Un oggetto chiamato che consente di modificare i campi all'interno di FPCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di richiamare una chiamata a meno che non dal contratto il chiamato si aspetta che i valori modificati.

Esistono due eccezioni alle regole riguardanti il non-volatilità dei flag di controllo:

1. Funzioni in cui lo scopo della funzione specificata documentato consiste nel modificare il FpCsr nonvolatile flag.

1. Quando è probabilmente corretto che comporta la violazione di queste regole in un programma che si comporta come un programma in cui non sono viola queste regole, ad esempio, tramite analisi dell'intero programma.

## <a name="mxcsr"></a>MxCsr

Lo stato del registro include anche registro MxCsr. La convenzione di chiamata divide questo registro in una parte volatile e una parte non volatile. La parte volatile è costituita da flag di sei stato, nel registro MXCSR\[0:5], mentre il resto del registro MXCSR\[6:15], viene considerata non volatile.

La parte non volatile è impostata su valori standard seguenti all'inizio dell'esecuzione del programma:

| Registrare\[bits] | Impostazione |
|-|-|
| MXCSR\[6] | Denormals sono gli zeri - 0 |
| MXCSR\[7:12] | Maschera di eccezione tutti 1 (tutte le eccezioni vengono mascherati) |
| MXCSR\[13:14] | Controllo arrotondamento - 0 (con arrotondamento al più vicino) |
| MXCSR\[15] | Scaricare su zero underflow mascherata - 0 (off) |

Un oggetto chiamato che consente di modificare i campi non volatili all'interno di registro MXCSR necessario ripristinarli prima di restituire al chiamante. Inoltre, un chiamante che ha modificato uno qualsiasi di questi campi deve ripristinare i relativi valori standard prima di richiamare una chiamata a meno che non dal contratto il chiamato si aspetta che i valori modificati.

Esistono due eccezioni alle regole riguardanti il non-volatilità dei flag di controllo:

- Funzioni in cui lo scopo della funzione specificata documentato consiste nel modificare registro MxCsr nonvolatile flag.

- Quando è probabilmente corretto che comporta la violazione di queste regole in un programma che si comporta come un programma in cui non sono viola queste regole, ad esempio, tramite analisi dell'intero programma.

Non possono accadere alcuna ipotesi sullo stato della parte volatile di registro MXCSR attraverso un limite di funzione, a meno che specificamente descritti nella documentazione della funzione.

## <a name="setjmplongjmp"></a>setjmp/longjmp

Quando si include setjmp. h o setjmpex, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) oppure [longjmp](../c-runtime-library/reference/longjmp.md) comportare un'operazione di rimozione che richiama i distruttori e `__finally` chiamate.  Questo comportamento è diverso da x86, in cui setjmp. h incluso comporta `__finally` clausole e i distruttori non richiamati.

Una chiamata a `setjmp` mantiene il puntatore dello stack corrente, registri non volatili e registri MxCsr.  Le chiamate a `longjmp` tornare al più recente `setjmp` chiamare sito e reimposta il puntatore dello stack, i registri non volatili e MxCsr registra, lo stato come mantenuto dal più recente `setjmp` chiamare.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)
