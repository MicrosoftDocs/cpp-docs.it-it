---
title: Convenzioni del software x64
ms.date: 12/17/2018
helpviewer_keywords:
- x64 coding conventions
- Visual C++, x64 calling conventions
ms.assetid: 750f3d97-1706-4840-b2fc-41a007329a08
ms.openlocfilehash: 11d29b6c31ccecfe5b9c51c2f9311213bd4a6732
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865600"
---
# <a name="x64-software-conventions"></a>Convenzioni del software x64

In questa sezione viene C++ descritta la metodologia della convenzione di chiamata per x64, l'estensione a 64 bit per l'architettura x86.

## <a name="overview-of-x64-calling-conventions"></a>Panoramica delle convenzioni di chiamata x64

Due differenze importanti tra x86 e x64 sono la funzionalità di indirizzamento a 64 bit e un set flat di registri a 16 64 bit per uso generale. Dato il set di registri espanso, x64 usa la convenzione di chiamata [__fastcall](../cpp/fastcall.md) e un modello di gestione delle eccezioni basato su RISC. La convenzione `__fastcall` usa i registri per i primi quattro argomenti e il stack frame per passare argomenti aggiuntivi. Per informazioni dettagliate sulla convenzione di chiamata x64, inclusi l'utilizzo del registro, i parametri dello stack, i valori restituiti e la rimozione dello stack, vedere [convenzione di chiamata x64](x64-calling-convention.md).

## <a name="enable-optimization-for-x64"></a>Abilitare l'ottimizzazione per x64

L'opzione del compilatore seguente consente di ottimizzare l'applicazione per x64:

- [/favor (ottimizza per le specifiche di architettura)](../build/reference/favor-optimize-for-architecture-specifics.md)

## <a name="types-and-storage"></a>Tipi e archiviazione

In questa sezione vengono descritte l'enumerazione e l'archiviazione dei tipi di dati per l'architettura x64.

### <a name="scalar-types"></a>Tipi scalari

Sebbene sia possibile accedere ai dati con qualsiasi allineamento, è consigliabile allineare i dati sul relativo limite naturale o su alcuni più per evitare perdite di prestazioni. Le enumerazioni sono numeri interi costanti e vengono considerate come interi a 32 bit. La tabella seguente descrive la definizione del tipo e l'archiviazione consigliata per i dati in relazione all'allineamento usando i valori di allineamento seguenti:

- Byte-8 bit

- Word-16 bit

- Parola doppia-32 bit

- Quadrupla-64 bit

- Octaword-128 bit

|||||
|-|-|-|-|
|Tipo scalare|Tipo di dati C|Dimensioni di archiviazione (in byte)|Allineamento consigliato|
|**INT8**|**char**|1|Byte|
|**UINT8**|**unsigned char**|1|Byte|
|**INT16**|**short**|2|Word|
|**UINT16**|**short senza segno**|2|Word|
|**INT32**|**int**, **Long**|4|Parola doppia|
|**UINT32**|**unsigned int, unsigned long**|4|Parola doppia|
|**INT64**|**__int64**|8|Quadrupla|
|**UINT64**|**unsigned __int64**|8|Quadrupla|
|**FP32 (precisione singola)**|**float**|4|Parola doppia|
|**FP64 (precisione doppia)**|**double**|8|Quadrupla|
|**PUNTATORE**|__\*__|8|Quadrupla|
|**__m64**|**__m64 struct**|8|Quadrupla|
|**__m128**|**__m128 struct**|16|Octaword|

### <a name="aggregates-and-unions"></a>Aggregati e unioni

Altri tipi, ad esempio matrici, strutture e unioni, presentano requisiti di allineamento più restrittivi che assicurano la coerenza dell'archiviazione e del recupero dei dati. Di seguito sono riportate le definizioni per matrice, struttura e Unione:

- Array

   Contiene un gruppo ordinato di oggetti dati adiacenti. Ogni oggetto viene chiamato *elemento*. Tutti gli elementi all'interno di una matrice hanno le stesse dimensioni e il tipo di dati.

- Struttura

   Contiene un gruppo ordinato di oggetti dati. Diversamente dagli elementi di una matrice, gli oggetti dati all'interno di una struttura possono avere tipi di dati e dimensioni diversi. Ogni oggetto dati in una struttura è denominato *membro*.

- Union

   Oggetto che include uno qualsiasi di un set di membri denominati. I membri del set denominato possono essere di qualsiasi tipo. Lo spazio di archiviazione allocato per un'Unione è uguale allo spazio di archiviazione necessario per il membro più grande di tale Unione, oltre a eventuali spaziatura interna necessari per l'allineamento.

Nella tabella seguente viene illustrato l'allineamento fortemente suggerito per i membri scalari di unioni e strutture.

||||
|-|-|-|
|Tipo scalare|Tipo di dati C|Allineamento richiesto|
|**INT8**|**char**|Byte|
|**UINT8**|**unsigned char**|Byte|
|**INT16**|**short**|Word|
|**UINT16**|**short senza segno**|Word|
|**INT32**|**int**, **Long**|Parola doppia|
|**UINT32**|**unsigned int, unsigned long**|Parola doppia|
|**INT64**|**__int64**|Quadrupla|
|**UINT64**|**unsigned __int64**|Quadrupla|
|**FP32 (precisione singola)**|**float**|Parola doppia|
|**FP64 (precisione doppia)**|**double**|Quadrupla|
|**PUNTATORE**|<strong>\*</strong>|Quadrupla|
|**__m64**|**__m64 struct**|Quadrupla|
|**__m128**|**__m128 struct**|Octaword|

Si applicano le seguenti regole di allineamento aggregate:

- L'allineamento di una matrice è uguale all'allineamento di uno degli elementi della matrice.

- L'allineamento dell'inizio di una struttura o di un'Unione è l'allineamento massimo di un singolo membro. Ogni membro all'interno della struttura o dell'Unione deve essere inserito nell'allineamento appropriato, come definito nella tabella precedente, che può richiedere una spaziatura interna implicita, a seconda del membro precedente.

- La dimensione della struttura deve essere un multiplo integrale dell'allineamento, che può richiedere la spaziatura interna dopo l'ultimo membro. Poiché le strutture e le unioni possono essere raggruppate in matrici, ogni elemento della matrice di una struttura o di un'Unione deve iniziare e terminare con l'allineamento appropriato precedentemente determinato.

- È possibile allineare i dati in modo che siano superiori ai requisiti di allineamento purché vengano mantenute le regole precedenti.

- Un singolo compilatore può modificare la compressione di una struttura per motivi di dimensioni. Ad esempio [,/ZP (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md) consente di modificare la compressione delle strutture.

### <a name="examples-of-structure-alignment"></a>Esempi di allineamento di strutture

I quattro esempi seguenti dichiarano ognuno una struttura o un'Unione allineata e le figure corrispondenti illustrano il layout della struttura o dell'Unione in memoria. Ogni colonna di una figura rappresenta un byte di memoria e il numero nella colonna indica lo spostamento del byte. Il nome nella seconda riga di ogni figura corrisponde al nome di una variabile nella dichiarazione. Le colonne ombreggiate indicano la spaziatura interna necessaria per ottenere l'allineamento specificato.

#### <a name="example-1"></a>Esempio 1

```C
// Total size = 2 bytes, alignment = 2 bytes (word).

_declspec(align(2)) struct {
    short a;      // +0; size = 2 bytes
}
```

![Esempio di conversione AMD di un layout di struttura](../build/media/vcamd_conv_ex_1_block.png "Esempio di conversione AMD di un layout di struttura")

#### <a name="example-2"></a>Esempio 2

```C
// Total size = 24 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) struct {
    int a;       // +0; size = 4 bytes
    double b;    // +8; size = 8 bytes
    short c;     // +16; size = 2 bytes
}
```

![Esempio di conversione AMD-layout di struttura 2](../build/media/vcamd_conv_ex_2_block.png "Esempio di conversione AMD-layout di struttura 2")

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

![Esempio di conversione AMD-layout di struttura 2](../build/media/vcamd_conv_ex_3_block.png "Esempio di conversione AMD-layout di struttura 2")

#### <a name="example-4"></a>Esempio 4

```C
// Total size = 8 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) union {
    char *p;      // +0; size = 8 bytes
    short s;      // +0; size = 2 bytes
    long l;       // +0; size = 4 bytes
}
```

![Esempio di conversione AMD 4 Union layouit](../build/media/vcamd_conv_ex_4_block.png "Esempio di conversione AMD 4 Union layouit")

### <a name="bitfields"></a>Campi di bit

I campi di bit della struttura sono limitati a 64 bit e possono essere di tipo signed int, unsigned int, Int64 o unsigned int64. I campi di bit che superano il limite del tipo ignoreranno i bit per allineare bit al successivo allineamento del tipo. Ad esempio, Integer campi non può superare una delimitazione a 32 bit.

### <a name="conflicts-with-the-x86-compiler"></a>Conflitti con il compilatore x86

I tipi di dati maggiori di 4 byte non vengono allineati automaticamente nello stack quando si usa il compilatore x86 per compilare un'applicazione. Poiché l'architettura per il compilatore x86 è uno stack allineato a 4 byte, qualsiasi elemento più grande di 4 byte, ad esempio un intero a 64 bit, non può essere allineato automaticamente a un indirizzo a 8 byte.

L'utilizzo di dati non allineati ha due implicazioni.

- L'accesso a posizioni non allineate potrebbe richiedere più tempo del necessario per accedere a posizioni allineate.

- Le posizioni non allineate non possono essere usate nelle operazioni Interlocked.

Se è necessario un allineamento più restrittivo, usare `__declspec(align(N))` sulle dichiarazioni di variabili. In questo modo il compilatore allinea dinamicamente lo stack per soddisfare le specifiche. Tuttavia, la regolazione dinamica dello stack in fase di esecuzione può causare un rallentamento dell'esecuzione dell'applicazione.

## <a name="register-usage"></a>Utilizzo del registro

L'architettura x64 prevede 16 registri di utilizzo generico (in seguito denominati registri integer), oltre a 16 registri XMM/YMM disponibili per l'uso a virgola mobile. I registri volatili sono registri temporanei che il chiamante suppone vengano eliminati con una chiamata. I registri non volatili devono conservare i relativi valori durante le chiamate di funzione e, se usati, devono essere salvati dal chiamante.

### <a name="register-volatility-and-preservation"></a>Registra volatilità e conservazione

Nella tabella seguente viene descritto il modo in cui ogni registro viene usato durante le chiamate di funzione:

||||
|-|-|-|
|Registrazione|Stato|Utilizzo|
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

Quando si esce dalla funzione e sulla voce di funzione per le chiamate della libreria di runtime C e le chiamate di sistema Windows, è previsto che il flag di direzione nel registro dei flag della CPU venga cancellato.

## <a name="stack-usage"></a>Utilizzo dello stack

Per informazioni dettagliate sull'allocazione dello stack, l'allineamento, i tipi di funzione e gli stack frame in x64, vedere [utilizzo dello stack x64](stack-usage.md).

## <a name="prolog-and-epilog"></a>Prologo ed epilogo

Ogni funzione che alloca spazio dello stack, chiama altre funzioni, Salva i registri non volatili o usa la gestione delle eccezioni deve avere un prologo i cui limiti degli indirizzi sono descritti nei dati di rimozione associati alla relativa voce della tabella di funzione e epilogo alle ogni uscita da una funzione. Per informazioni dettagliate sul codice di prologo e di epilogo richiesto su x64, vedere [prologo x64 e epilogo](prolog-and-epilog.md).

## <a name="x64-exception-handling"></a>Gestione delle eccezioni x64

Per informazioni sulle convenzioni e sulle strutture di dati utilizzate per implementare la gestione C++ delle eccezioni strutturata e il comportamento di gestione delle eccezioni in x64, vedere [gestione delle eccezioni x64](exception-handling-x64.md).

## <a name="intrinsics-and-inline-assembly"></a>Funzioni intrinseche e assembly inline

Uno dei vincoli per il compilatore x64 è quello di non avere supporto assembler inline. Ciò significa che le funzioni che non possono essere scritte in C++ C o dovranno essere scritte come subroutine o come funzioni intrinseche supportate dal compilatore. Alcune funzioni sono sensibili alle prestazioni mentre altre non lo sono. Le funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.

Gli intrinseci supportati dal compilatore sono descritti in [intrinseci del compilatore](../intrinsics/compiler-intrinsics.md).

## <a name="image-format"></a>Formato immagine

Il formato di immagine eseguibile x64 è PE32 +. Le immagini eseguibili (sia dll che exe) sono limitate a una dimensione massima di 2 gigabyte, quindi l'indirizzamento relativo con lo spostamento a 32 bit può essere usato per indirizzare i dati di immagini statiche. Questi dati includono la tabella degli indirizzi di importazione, le costanti di stringa, i dati globali statici e così via.

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
