---
title: x64 convenzioni del software
ms.date: 12/17/2018
helpviewer_keywords:
- x64 coding conventions
- Visual C++, x64 calling conventions
ms.assetid: 750f3d97-1706-4840-b2fc-41a007329a08
ms.openlocfilehash: 11d29b6c31ccecfe5b9c51c2f9311213bd4a6732
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62313855"
---
# <a name="x64-software-conventions"></a>x64 convenzioni del software

Questa sezione viene descritto il C++ metodologia della convenzione di chiamata per x64, l'estensione a 64 bit per x86 architettura.

## <a name="overview-of-x64-calling-conventions"></a>Panoramica delle convenzioni di chiamata x64

Due importanti differenze tra x86 e x64 sono le funzionalità di indirizzamento a 64 bit e un set semplice pari a 16 bit 64 registri per uso generale. Dato il set di registri espanso, x64 Usa la [fastcall](../cpp/fastcall.md) convenzione di chiamata e un modello di gestione delle eccezioni basato su RISC. Il `__fastcall` convenzione utilizza i registri per i primi quattro argomenti e lo stack frame per passare argomenti aggiuntivi. Per informazioni dettagliate su x64 convenzione di chiamata, inclusi l'uso dei registri, stack di parametri, restituisce i valori e la rimozione dello stack, vedere [convenzione di chiamata x64](x64-calling-convention.md).

## <a name="enable-optimization-for-x64"></a>Abilitare l'ottimizzazione per x64

L'opzione del compilatore seguente consente di ottimizzare l'applicazione per x64:

- [/favor (ottimizza per le specifiche di architettura)](../build/reference/favor-optimize-for-architecture-specifics.md)

## <a name="types-and-storage"></a>Tipi e archiviazione

In questa sezione vengono descritti l'enumerazione e l'archiviazione dei tipi di dati per x64 architettura.

### <a name="scalar-types"></a>tipi scalari

Sebbene sia possibile accedere ai dati con alcun allineamento, si consiglia di allineare i dati nei relativi limiti naturali, o alcuni multipli, per evitare la perdita di prestazioni. Le enumerazioni sono valori interi costanti e vengono trattate come interi a 32 bit. La tabella seguente descrive la definizione del tipo e l'archiviazione consigliato per i dati relativamente all'allineamento con i valori di allineamento seguenti:

- Byte - 8 bit

- Word - 16 bit

- Double Word - 32 bit

- Parola quadrupla - 64 bit

- Octaword - 128 bit

|||||
|-|-|-|-|
|Tipi scalari|Tipo di dati C|Dimensioni di archiviazione (in byte)|Allineamento consigliato|
|**INT8**|**char**|1|Byte|
|**UINT8**|**unsigned char**|1|Byte|
|**INT16**|**short**|2|Word|
|**UINT16**|**unsigned short**|2|Word|
|**INT32**|**int**, **long**|4|Double Word|
|**UINT32**|**valore unsigned int, long senza segno**|4|Double Word|
|**INT64**|**__int64**|8|Parola quadrupla|
|**UINT64**|**unsigned __int64**|8|Parola quadrupla|
|**FP32 (precisione singola)**|**float**|4|Double Word|
|**FP64 (precisione doppia)**|**double**|8|Parola quadrupla|
|**POINTER**|__\*__|8|Parola quadrupla|
|**__m64**|**struct __m64**|8|Parola quadrupla|
|**__m128**|**struct __m128**|16|Octaword|

### <a name="aggregates-and-unions"></a>Aggregati e unioni

Altri tipi, ad esempio matrici, strutture e unioni, avere più rigorosi requisiti di allineamento che garantiscono coerenti con l'unione e aggregazione archiviazione e recupero dei dati. Di seguito sono le definizioni di matrice, la struttura e unione:

- Matrice

   Contiene un gruppo ordinato di oggetti di dati adiacenti. Ogni oggetto viene chiamato un *elemento*. Tutti gli elementi all'interno di una matrice hanno lo stesso tipo di dati e dimensioni.

- Struttura

   Contiene un gruppo ordinato di oggetti dati. A differenza degli elementi di una matrice, gli oggetti di dati all'interno di una struttura possono avere dimensioni e tipi di dati diversi. Viene chiamato ogni oggetto dati in una struttura di un *membro*.

- Unione

   Oggetto che contiene un set di membri denominati di. I membri del set denominato possono essere di qualsiasi tipo. L'archiviazione allocata per un'unione è uguale all'archiviazione necessaria per il membro più grande di tale unione, oltre a eventuali spaziature interne necessarie per l'allineamento.

La tabella seguente illustra l'allineamento consigliato per i membri di strutture e unioni scalari.

||||
|-|-|-|
|Tipi scalari|Tipo di dati C|Allineamento richiesto|
|**INT8**|**char**|Byte|
|**UINT8**|**unsigned char**|Byte|
|**INT16**|**short**|Word|
|**UINT16**|**unsigned short**|Word|
|**INT32**|**int**, **long**|Double Word|
|**UINT32**|**valore unsigned int, long senza segno**|Double Word|
|**INT64**|**__int64**|Parola quadrupla|
|**UINT64**|**unsigned __int64**|Parola quadrupla|
|**FP32 (precisione singola)**|**float**|Double Word|
|**FP64 (precisione doppia)**|**double**|Parola quadrupla|
|**POINTER**|<strong>\*</strong>|Parola quadrupla|
|**__m64**|**struct __m64**|Parola quadrupla|
|**__m128**|**struct __m128**|Octaword|

Si applicano le regole di allineamento di aggregazione seguenti:

- L'allineamento di una matrice è quello utilizzato per l'allineamento di uno degli elementi della matrice.

- L'allineamento dell'inizio di una struttura o un'unione è l'allineamento massimo tra i singoli membri. Ogni membro all'interno della struttura o unione deve essere inserito il relativo allineamento corretto come definito nella tabella precedente, che può richiedere una spaziatura interna implicita, a seconda del membro precedente.

- Dimensione della struttura deve essere un numero intero multiplo dell'allineamento, che può richiedere una spaziatura interna dopo l'ultimo membro. Poiché le strutture e unioni discriminate possono essere raggruppati in matrici, ogni elemento della matrice di una struttura o unione deve iniziare e terminare in corrispondenza di consentire il corretto allineamento stabilito in precedenza.

- È possibile allineare i dati in modo da superare i requisiti di allineamento, purché le regole precedenti vengono mantenute.

- Un singolo compilatore può regolare la compressione di una struttura per motivi di dimensioni. Ad esempio [/Zp (Allineamento membri Struct)](../build/reference/zp-struct-member-alignment.md) consente la regolazione della compressione di strutture.

### <a name="examples-of-structure-alignment"></a>Esempi di allineamento di strutture

I quattro esempi seguenti dichiarano che una struttura allineata o unione e presentati illustrano il layout di tale struttura o unione in memoria. Ogni colonna in una figura rappresenta un byte di memoria e il numero della colonna indica lo spostamento di tale byte. Il nome nella seconda riga di ogni figura corrisponde al nome di una variabile nella dichiarazione. Colonne ombreggiate indicano il riempimento necessario per ottenere l'allineamento specificato.

#### <a name="example-1"></a>Esempio 1

```C
// Total size = 2 bytes, alignment = 2 bytes (word).

_declspec(align(2)) struct {
    short a;      // +0; size = 2 bytes
}
```

![Layout della struttura esempio 1 conversione AMD](../build/media/vcamd_conv_ex_1_block.png "layout struttura esempio 1 di conversione AMD")

#### <a name="example-2"></a>Esempio 2

```C
// Total size = 24 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) struct {
    int a;       // +0; size = 4 bytes
    double b;    // +8; size = 8 bytes
    short c;     // +16; size = 2 bytes
}
```

![Layout della struttura esempio 2 conversione AMD](../build/media/vcamd_conv_ex_2_block.png "layout struttura esempio 2 di conversione AMD")

#### <a name="example-3"></a>Esempio 3

```C
// Total size = 12 bytes, alignment = 4 bytes (doubleword).

_declspec(align(4)) struct {
    char a;       // +0; size = 1 byte
    short b;      // +2; size = 2 bytes
    char c;       // +4; size = 1 byte
    int d;        // +8; size = 4 bytes
}
```

![Layout della struttura esempio 2 conversione AMD](../build/media/vcamd_conv_ex_3_block.png "layout struttura esempio 2 di conversione AMD")

#### <a name="example-4"></a>Esempio 4

```C
// Total size = 8 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) union {
    char *p;      // +0; size = 8 bytes
    short s;      // +0; size = 2 bytes
    long l;       // +0; size = 4 bytes
}
```

![Layouit union esempio 4 di conversione AMD](../build/media/vcamd_conv_ex_4_block.png "layouit union esempio 4 di conversione AMD")

### <a name="bitfields"></a>Campi di bit

I campi di bit di struttura sono limitati a 64 bit e possono essere di tipo signed int, int senza segno, int64 o unsigned int64. I campi di bit che superano il limite di tipo ignorerà bits per allineare il campo di bit per l'allineamento di tipo next. Ad esempio, i campi di bit integer non possono superare un limite a 32 bit.

### <a name="conflicts-with-the-x86-compiler"></a>JE v konfliktu x86 compilatore

Tipi di dati che sono maggiori di 4 byte non vengono automaticamente allineate su stack quando si usa x86 compilatore di compilare un'applicazione. Poiché l'architettura di x86 compilatore è uno stack allineata a 4 byte, qualsiasi valore superiore a 4 byte, ad esempio, un valore integer a 64 bit, non può essere allineato automaticamente a un indirizzo di 8 byte.

Utilizzo dei dati non allineati con due implicazioni.

- Potrebbe richiedere più tempo per accedere a percorsi non allineata non superiore a quello necessario per accedere ai percorsi allineati.

- Percorsi non allineate non sono utilizzabile in operazioni con interlock.

Se si richiede un allineamento più rigido, utilizzare `__declspec(align(N))` le dichiarazioni di variabili. Ciò indica al compilatore di allineare in modo dinamico lo stack per soddisfare le specifiche. Tuttavia, in modo dinamico la regolazione dello stack in fase di esecuzione potrebbe rallentare l'esecuzione dell'applicazione.

## <a name="register-usage"></a>Utilizzo dei registri

X64 architettura fornisce 16 registri per utilizzo generico (in seguito indicati come registri integer), nonché 16 registri XMM/YMM registra disponibili per l'uso con virgola mobile. I registri volatili sono registri temporanei che il chiamante suppone vengano eliminati con una chiamata. I registri non volatili devono conservare i relativi valori durante le chiamate di funzione e, se usati, devono essere salvati dal chiamante.

### <a name="register-volatility-and-preservation"></a>Registrare la volatilità e conservazione

Nella tabella seguente viene descritto il modo in cui ogni registro viene usato durante le chiamate di funzione:

||||
|-|-|-|
|Registrazione|Status|Usa|
|RAX|Volatile|Registro del valore restituito|
|RCX|Volatile|Primo argomento Integer|
|RDX|Volatile|Secondo argomento Integer|
|R8|Volatile|Terzo argomento Integer|
|R9|Volatile|Quarto argomento Integer|
|R10:R11|Volatile|Deve essere mantenuto in base alle esigenze del chiamante. Viene usato nelle istruzioni syscall/sysret.|
|R12:R15|Non volatile|Deve essere mantenuto dal chiamato.|
|RDI|Non volatile|Deve essere mantenuto dal chiamato.|
|RSI|Non volatile|Deve essere mantenuto dal chiamato.|
|RBX|Non volatile|Deve essere mantenuto dal chiamato.|
|RBP|Non volatile|Può essere usato come puntatore ai frame. Deve essere mantenuto dal chiamato.|
|RSP|Non volatile|Puntatore dello stack|
|XMM0, YMM0|Volatile|Primo argomento FP; primo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM1, YMM1|Volatile|Secondo argomento FP; secondo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM2, YMM2|Volatile|Terzo argomento FP; terzo argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM3, YMM3|Volatile|Quarto argomento FP; quarto argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM4, YMM4|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; quinto argomento tipo vettore quando si usa `__vectorcall`.|
|XMM5, YMM5|Volatile|Deve essere mantenuto in base alle esigenze del chiamante; sesto argomento di tipo vettore quando si usa `__vectorcall`.|
|XMM6:XMM15, YMM6:YMM15|Non volatile (XMM), volatile (metà superiore di YMM)|Deve essere mantenuto dal chiamato. I registri YMM devono essere mantenuti in base alle esigenze del chiamante.|

In uscita dalla funzione e in ingresso nella funzione di libreria di Runtime C chiamate e le chiamate di sistema di Windows, il flag di direzione della CPU dovrebbe register flag da cancellare.

## <a name="stack-usage"></a>Utilizzo dello stack

Per informazioni dettagliate sull'allocazione dello stack, allineamento, i tipi di funzione e gli stack frame su x64, vedere [x64 dello stack utilizzo](stack-usage.md).

## <a name="prolog-and-epilog"></a>Prologo ed epilogo

Ogni funzione che alloca lo spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o Usa la gestione delle eccezioni deve contenere un prologo della query il cui indirizzo di limiti è descritti nei dati di rimozione associati alla voce della tabella rispettiva funzione ed epiloghi in ogni uscita per una funzione. Per informazioni dettagliate sul prologo della query necessaria e codice di epilogo in x64, vedere [x64 prologo ed epilogo](prolog-and-epilog.md).

## <a name="x64-exception-handling"></a>x64 la gestione delle eccezioni

Per informazioni sulle convenzioni e le strutture dati usate per implementare la gestione delle eccezioni strutturata e comportamento su x64 di gestione delle eccezioni C++, vedere [x64 la gestione delle eccezioni](exception-handling-x64.md).

## <a name="intrinsics-and-inline-assembly"></a>Assembly inline e le funzioni intrinseche

Uno dei vincoli per x64 compilatore è non disporre di alcun supporto per l'assembler inline. Ciò significa che le funzioni che non è possibile scrivere in C o C++ sia dovranno essere scritti come subroutine o funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni, mentre altri no. Funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.

Gli intrinseci supportati dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="image-format"></a>Formato di immagine

X64 è formato immagine eseguibile PE32 +. Le immagini eseguibili (DLL ed exe) sono limitate a una dimensione massima di 2 gigabyte, in modo relativo degli indirizzi con uno spostamento a 32 bit può essere utilizzato per indirizzare dati di immagine statica. Questi dati includono la tabella IAT, le costanti di stringa, dati statici globali e così via.

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
