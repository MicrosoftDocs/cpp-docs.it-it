---
title: align (C++)
ms.date: 12/17/2018
f1_keywords:
- align_cpp
helpviewer_keywords:
- align __declspec keyword
- __declspec keyword [C++], align
ms.assetid: 9cb63f58-658b-4425-ac47-af8eabfc5878
ms.openlocfilehash: 227053fbfa4190dc6227ba7096a7c76aef30bb54
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181551"
---
# <a name="align-c"></a>align (C++)

In Visual Studio 2015 e versioni successive usare l'identificatore `alignas` standard C++ 11 per controllare l'allineamento. Per ulteriori informazioni, vedere [allineamento](../cpp/alignment-cpp-declarations.md).

**Sezione specifica Microsoft**

Usare `__declspec(align(#))` per controllare con precisione l'allineamento dei dati definiti dall'utente (ad esempio, le allocazioni statiche o i dati automatici di una funzione).

## <a name="syntax"></a>Sintassi

> *dichiaratore* **__declspec (align (** *#* **))**

## <a name="remarks"></a>Osservazioni

La scrittura di applicazioni che usano le più recenti istruzioni del processore porta alla luce nuovi vincoli e problemi. In particolare, numerose nuove istruzioni richiedono l'allineamento dei dati su limiti di 16 byte. Allineando i dati usati di frequente alle dimensioni di riga della cache di un processore specifico, è inoltre possibile migliorare le prestazioni della cache. Ad esempio, se si definisce una struttura la cui dimensione è minore di 32 byte, è possibile allinearla a 32 byte per garantire che gli oggetti di tale struttura siano archiviati nella cache in modo efficiente.

\# è il valore di allineamento. Le voci valide sono numeri interi potenze di 2, da 1 a 8192 (byte), ad esempio 2, 4, 8, 16, 32 o 64. `declarator` rappresenta i dati che si stanno dichiarando come allineati.

Per informazioni su come restituire un valore di tipo `size_t` che rappresenta il requisito di allineamento del tipo, vedere [__alignof](../cpp/alignof-operator.md). Per informazioni su come dichiarare i puntatori non allineati quando sono destinati a processori a 64 bit, vedere [__unaligned](../cpp/unaligned.md).

È possibile utilizzare `__declspec(align(#))` quando si definisce uno **struct**, un' **Unione**o una **classe**oppure quando si dichiara una variabile.

Il compilatore non garantisce né tenta di mantenere l'attributo di allineamento dei dati durante un'operazione di copia o di trasformazione dei dati. Ad esempio, [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) può copiare uno struct dichiarato con `__declspec(align(#))` in qualsiasi posizione. Si noti che gli allocatori ordinari, ad esempio [malloc](../c-runtime-library/reference/malloc.md), C++ [operator new](new-operator-cpp.md)e gli allocatori Win32, restituiscono memoria che in genere non è sufficientemente allineata per `__declspec(align(#))` strutture o matrici di strutture. Per garantire che la destinazione di un'operazione di copia o di trasformazione dei dati sia allineata correttamente, utilizzare [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)o scrivere un allocatore personalizzato.

Non è possibile specificare l'allineamento per i parametri di funzione. Quando i dati con un attributo di allineamento vengono passati dal valore nello stack, l'allineamento viene controllato dalla convenzione di chiamata. Se l'allineamento dei dati è importante nella funzione chiamata, copiare il parametro nella memoria correttamente allineata prima dell'uso.

Senza `__declspec(align(#))`, il compilatore allinea in genere i dati su limiti naturali basati sul processore di destinazione e sulle dimensioni dei dati, fino a limiti di 4 byte su processori a 32 bit e limiti di 8 byte su processori a 64 bit. I dati presenti nelle classi o nelle strutture vengono allineati nella stessa classe o struttura in base al valore minimo dell'allineamento naturale e all'impostazione di compressione corrente (da #pragma `pack` o dall'opzione del compilatore `/Zp`).

L'esempio seguente illustra l'uso di `__declspec(align(#))`:

```cpp
__declspec(align(32)) struct Str1{
   int a, b, c, d, e;
};
```

Questo tipo ha ora un attributo di allineamento a 32 byte, il che significa che tutte le istanze statiche e automatiche iniziano con un limite di 32 byte. I tipi di struttura aggiuntivi dichiarati con questo tipo come membro conservano l'attributo di allineamento di questo tipo, ovvero qualsiasi struttura con `Str1` come elemento dispone di un attributo di allineamento di almeno 32.

Si noti che `sizeof(struct Str1)` è uguale a 32. Ciò implica che se viene creata una matrice di oggetti Str1 e la base della matrice è allineata a 32 byte, tutti i membri della matrice verranno allineati a 32 byte. Per creare una matrice con base correttamente allineata nella memoria dinamica, usare [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)o scrivere un allocatore personalizzato.

Il valore di `sizeof` per tutte le strutture corrisponde all'offset del membro finale più la dimensione dello stesso membro, arrotondata al multiplo più vicino del valore di allineamento del membro più grande o del valore di allineamento dell'intera struttura, a seconda di quale sia il valore più grande.

Il compilatore usa le seguenti regole per l'allineamento della struttura:

- A meno che non venga sottoposto a override con `__declspec(align(#))`, l'allineamento di un membro di struttura scalare corrisponde al valore minimo della propria dimensione e della compressione corrente.

- A meno che non venga sottoposto a override con `__declspec(align(#))`, l'allineamento di una struttura corrisponde al valore massimo dell'allineamento dei propri membri.

- Un membro della struttura viene posizionato in corrispondenza di un offset dall'inizio della relativa struttura padre, che corrisponde al multiplo più piccolo dell'allineamento maggiore o uguale all'offset della fine del membro precedente.

- La dimensione di una struttura corrisponde al multiplo più piccolo dell'allineamento maggiore o uguale all'offset della fine dell'ultimo membro presente.

`__declspec(align(#))` può solo aumentare le restrizioni di allineamento.

Per altre informazioni, vedere:

- [Esempi di allineamento](#vclrfalignexamples)

- [Definizione di nuovi tipi con __declspec (align (#))](#vclrf_declspecaligntypedef)

- [Allineamento dei dati nell'archiviazione thread-local](#vclrfthreadlocalstorageallocation)

- [Funzionamento dell'allineamento con la compressione dei dati](#vclrfhowalignworkswithdatapacking)

- [Esempi di allineamento della struttura](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

## <a name="align-examples"></a><a name="vclrfalignexamples"></a>Esempi di allineamento

Negli esempi seguenti viene illustrato come `__declspec(align(#))` influisce sulla dimensione e sull'allineamento delle strutture di dati. Negli esempi si presuppongono le seguenti definizioni:

```cpp
#define CACHE_LINE  32
#define CACHE_ALIGN __declspec(align(CACHE_LINE))
```

Nell'esempio seguente, la struttura `S1` viene definita con `__declspec(align(32))`. Tutti gli usi di `S1` per una definizione di variabile o in altre dichiarazioni dei tipi sono allineati a 32 byte. `sizeof(struct S1)` restituisce 32 e `S1` ha 16 byte di riempimento, coerentemente alla necessità di avere 16 byte per contenere i quattro Integer. Ogni membro **int** richiede l'allineamento a 4 byte, ma l'allineamento della struttura stessa viene dichiarato come 32. pertanto l'allineamento globale è a 32.

```cpp
struct CACHE_ALIGN S1 { // cache align all instances of S1
   int a, b, c, d;
};
struct S1 s1;   // s1 is 32-byte cache aligned
```

Nell'esempio seguente, `sizeof(struct S2)` restituisce 16, che corrisponde alla somma delle dimensioni del membro, visto che tale valore è un multiplo del requisito di allineamento maggiore (un multiplo di 8).

```cpp
__declspec(align(8)) struct S2 {
   int a, b, c, d;
};
```

Nell'esempio seguente, `sizeof(struct S3)` restituisce 64.

```cpp
struct S3 {
   struct S1 s1;   // S3 inherits cache alignment requirement
                  // from S1 declaration
   int a;         // a is now cache aligned because of s1
                  // 28 bytes of trailing padding
};
```

Nell'esempio seguente, si noti che `a` ha l'allineamento del tipo naturale, in questo caso, a 4 byte. `S1`, però, deve essere allineato a 32 byte. Ventotto byte di spaziatura seguono `a`, in modo che `s1` inizi con un valore dell'offset pari a 32. `S4` eredita quindi il requisito di allineamento di `S1`, dato che è il requisito di allineamento con il valore maggiore nella struttura. `sizeof(struct S4)` restituisce 64.

```cpp
struct S4 {
   int a;
   // 28 bytes padding
    struct S1 s1;      // S4 inherits cache alignment requirement of S1
};
```

Le seguenti tre dichiarazioni di variabile usano anche `__declspec(align(#))`. In ogni caso, la variabile deve essere allineata a 32 byte. Nel caso della matrice, l'indirizzo di base della matrice, non tutti i membri della matrice, è allineato a 32 byte. Il valore di `sizeof` per ogni membro della matrice non è interessato dall'uso di `__declspec(align(#))`.

```cpp
CACHE_ALIGN int i;
CACHE_ALIGN int array[128];
CACHE_ALIGN struct s2 s;
```

Per allineare ogni membro di una matrice, è necessario usare un codice simile a quello indicato di seguito:

```cpp
typedef CACHE_ALIGN struct { int a; } S5;
S5 array[10];
```

Nell'esempio seguente, si noti che l'allineamento della struttura e l'allineamento del primo elemento hanno lo stesso effetto:

```cpp
CACHE_ALIGN struct S6 {
   int a;
   int b;
};

struct S7 {
   CACHE_ALIGN int a;
               int b;
};
```

`S6` e `S7` dispongono delle stesse caratteristiche di allineamento, allocazione e dimensione.

Nell'esempio seguente, l'allineamento degli indirizzi iniziali di a, b, c e d sono, rispettivamente, 4, 1, 4 e 1.

```cpp
void fn() {
   int a;
   char b;
   long c;
   char d[10]
}
```

Se la memoria viene allocata nell'heap, l'allineamento dipende dalla funzione di allocazione che viene chiamata.  Ad esempio, se si usa `malloc`, il risultato dipende dalla dimensione dell'operando. Se *arg* > = 8, la memoria restituita è allineata a 8 byte. Se *arg* < 8, l'allineamento della memoria restituita è la prima potenza di 2 minore di *arg*. Ad esempio, se si usa malloc(7), l'allineamento sarà a 4 byte.

## <a name="defining-new-types-with-__declspecalign"></a><a name="vclrf_declspecaligntypedef"></a>Definizione di nuovi tipi con __declspec (align (#))

È possibile definire un tipo con una caratteristica di allineamento.

Ad esempio, è possibile definire un `struct` con un valore di allineamento in questo modo:

```cpp
struct aType {int a; int b;};
typedef __declspec(align(32)) struct aType bType;
```

A questo punto, `aType` e `bType` hanno le stesse dimensioni (8 byte) ma le variabili di tipo `bType` sono allineate a 32 byte.

## <a name="aligning-data-in-thread-local-storage"></a><a name="vclrfthreadlocalstorageallocation"></a>Allineamento dei dati nell'archiviazione thread-local

L'archiviazione locale di thread (TLS, Thread-Local Storage) statici creata con l'attributo `__declspec(thread)` e inserita nella sezione TLS dell'immagine funziona per l'allineamento esattamente come i dati statici normali. Per creare dati TLS, il sistema operativo alloca memoria con la stessa dimensione della sezione TLS e rispetta l'attributo di allineamento della sezione TLS.

L'esempio seguente illustra vari modi per inserire i dati allineati nell'archiviazione locale dei thread.

```cpp
// put an aligned integer in TLS
__declspec(thread) __declspec(align(32)) int a;

// define an aligned structure and put a variable of the struct type
// into TLS
__declspec(thread) __declspec(align(32)) struct F1 { int a; int b; } a;

// create an aligned structure
struct CACHE_ALIGN S9 {
   int a;
   int b;
};
// put a variable of the structure type into TLS
__declspec(thread) struct S9 a;
```

## <a name="how-align-works-with-data-packing"></a><a name="vclrfhowalignworkswithdatapacking"></a>Funzionamento dell'allineamento con la compressione dei dati

L'opzione del compilatore `/Zp` e il pragma `pack` hanno l'effetto di comprimere i dati per la struttura e i membri di Unione. Questo esempio Mostra come `/Zp` e `__declspec(align(#))` interagiscono tra loro:

```cpp
struct S {
   char a;
   short b;
   double c;
   CACHE_ALIGN double d;
   char e;
   double f;
};
```

Nella tabella seguente è indicato l'offset di ciascun membro in corrispondenza di una varietà di valori `/Zp` (o #pragma `pack`), per illustrare le modalità di interazione tra i due.

|Variabile|/Zp1|/Zp2|/Zp4|/Zp8|
|--------------|-----------|-----------|-----------|-----------|
|a|0|0|0|0|
|b|1|2|2|2|
|c|3|4|4|8|
|d|32|32|32|32|
|e|40|40|40|40|
|f|41|42|44|48|
|sizeof(S)|64|64|64|64|

Per altre informazioni, vedere [/Zp (Allineamento membri struct)](../build/reference/zp-struct-member-alignment.md).

L'offset di un oggetto è basato sull'offset tra l'oggetto precedente e l'impostazione di compressione corrente, a meno che l'oggetto non abbia un attributo `__declspec(align(#))`. In quest'ultimo caso, l'allineamento è basato sull'offset tra l'oggetto precedente e il valore `__declspec(align(#))` dell'oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Panoramica delle convenzioni ABI ARM](../build/overview-of-arm-abi-conventions.md)<br/>
[Convenzioni del software x64](../build/x64-software-conventions.md)
