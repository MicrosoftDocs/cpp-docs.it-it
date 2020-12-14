---
title: Allineamento (C11)
description: Descrive l'allineamento del tipo Microsoft Visual C
ms.date: 12/10/2020
helpviewer_keywords:
- _Alignof keyword [C]
- _Alignas keyword [C]
- memory, alignment
ms.openlocfilehash: 051987ae705f84d7d4972398f742143f14b53e2b
ms.sourcegitcommit: be469dd87453255b0e35e333712c8207b09b3dd4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/14/2020
ms.locfileid: "97440661"
---
# <a name="alignment-c11"></a>Allineamento (C11)

Una delle funzionalità di basso livello di C è la possibilità di specificare l'allineamento preciso degli oggetti in memoria per sfruttare al massimo l'architettura hardware.

Le CPU leggono e scrivono memoria in modo più efficiente quando i dati vengono archiviati in un indirizzo che rappresenta un multiplo della dimensione dei dati. Ad esempio, è possibile accedere a un intero a 4 byte in modo più efficiente se viene archiviato in un indirizzo che corrisponde a un multiplo di 4. Quando i dati non sono allineati, la CPU esegue più lavoro per accedere ai dati.

Per impostazione predefinita, il compilatore allinea i dati in base alle dimensioni: **`char`** su un limite di 1 byte, **`short`** su un limite di 2 byte,, **`int`** **`long`** e **`float`** su un limite di 4 byte, **`double`** su un limite di 8 byte e così via.

Inoltre, allineando i dati utilizzati di frequente con le dimensioni della riga della cache del processore, è possibile migliorare le prestazioni della cache. Se, ad esempio, si definisce una struttura la cui dimensione è inferiore a 32 byte, potrebbe essere necessario l'allineamento a 32 byte per garantire che le istanze della struttura vengano memorizzate nella cache in modo efficiente.

In genere, non è necessario preoccuparsi dell'allineamento. Il compilatore allinea in genere i dati sui limiti naturali basati sul processore di destinazione e sulle dimensioni dei dati. I dati sono allineati con limiti fino a 4 byte su processori a 32 bit e limiti di 8 byte su processori a 64 bit. In alcuni casi, tuttavia, è possibile ottenere miglioramenti delle prestazioni o risparmi di memoria specificando un allineamento personalizzato per le strutture di dati.

Usare la parola chiave C11 **`_Alignof`** per ottenere l'allineamento preferito di un tipo o una variabile e **`_Alignas`** per specificare un allineamento personalizzato per una variabile o un tipo definito dall'utente.

Le macro pratici **`alignof`** e **`alignas`** , definite in `<stdalign.h>` , vengono mappate direttamente a **`_Alignof`** e **`_Alignas`** , rispettivamente. Queste macro corrispondono alle parole chiave usate in C++. Pertanto, l'utilizzo delle macro anziché delle parole chiave C può essere utile per la portabilità del codice se si condivide il codice tra le due lingue.

## <a name="alignas-and-_alignas-c11"></a>`alignas` e `_Alignas` (C11)

Utilizzare **`alignas`** o **`_Alignas`** per specificare l'allineamento personalizzato per una variabile o un tipo definito dall'utente. Possono essere applicati a uno struct, un'Unione, un'enumerazione o una variabile.

### <a name="alignas-syntax"></a>Sintassi `alignas`

```c
alignas(type)
alignas(constant-expression)
_Alignas(type)
_Alignas(constant-expression)
```

### <a name="remarks"></a>Commenti

`_Alignas` non può essere utilizzato nella dichiarazione di un typedef, di un campo di bit, di una funzione, di un parametro di funzione o di un oggetto dichiarato con l' `register` identificatore.

Specificare un allineamento che rappresenta una potenza di due, ad esempio 1, 2, 4, 8, 16 e così via. Non usare un valore inferiore alla dimensione del tipo.

Gli struct e le unioni hanno un allineamento uguale all'allineamento più grande di qualsiasi membro. I byte di riempimento vengono aggiunti all'interno di struct per garantire che vengano soddisfatti i singoli requisiti di allineamento dei membri.

Se sono presenti più **`alignas`**  identificatori in una dichiarazione, ad esempio uno struct con diversi membri con **`alignas`** identificatori diversi, l'allineamento dello struct sarà quello di quello più grande.

### <a name="alignas-example"></a>`alignas` esempio

Questo esempio usa la macro convenience **`alignof`** perché è portabile in C++. Il comportamento è lo stesso se si usa `_Alignof` .

```c
// Compile with /std:c11

#include <stdio.h>
#include <stdalign.h>

typedef struct 
{
    int value; // aligns on a 4-byte boundary. There will be 28 bytes of padding between value and alignas
    alignas(32) char alignedMemory[32]; // assuming a 32 byte friendly cache alignment
} cacheFriendly; // this struct will be 32-byte aligned because alignedMemory is 32-byte alligned and is the largest alignment specified in the struct

int main()
{
    printf("sizeof(cacheFriendly): %d\n", sizeof(cacheFriendly)); // 4 bytes for int value + 32 bytes for alignedMemory[] + padding to ensure  alignment
    printf("alignof(cacheFriendly): %d\n", alignof(cacheFriendly)); // 32 because alignedMemory[] is aligned on a 32-byte boundary

    /* output
        sizeof(cacheFriendly): 64
        alignof(cacheFriendly): 32
    */
}
```

## <a name="alignof-and-_alignof-c11"></a>`alignof` e `_Alignof` (C11)

`_Alignof` Restituisce l'allineamento in byte del tipo specificato. Restituisce un valore di tipo `size_t` .

### <a name="alignof-syntax"></a>Sintassi `alignof`

```cpp
alignof(type)
_Alignof(type)
```

### <a name="alignof-example"></a>`alignof` esempio

Questo esempio usa la macro convenience **`alignof`** perché è portabile in C++. Il comportamento è lo stesso se si usa `_Alignof` .

```c
// Compile with /std:c11

#include <stdalign.h>
#include <stdio.h>

int main()
{
    size_t alignment = alignof(short);
    printf("alignof(short) = %d\n", alignment); // 2
    printf("alignof(int) = %d\n", alignof(int)); // 4
    printf("alignof(long) = %d\n", alignof(long)); // 4
    printf("alignof(float) = %d\n", alignof(float)); // 4
    printf("alignof(double) = %d\n", alignof(double)); // 8

    typedef struct
    {
        int a;
        double b;
    } test;

    printf("alignof(test) = %d\n", alignof(test)); // 8 because that is the alignment of the largest element in the structure

    /* output
        
       alignof(short) = 2
       alignof(int) = 4
       alignof(long) = 4
       alignof(float) = 4
       alignof(double) = 8
       alignof(test) = 8
    */
}
```

## <a name="requirements"></a>Requisiti

[std: è necessario c++ 11](../build/reference/std-specify-language-standard-version.md) o versione successiva.

Windows SDK versione 10.0.20201.0 o successiva. Questa versione è attualmente una build Insider, che è possibile scaricare da [download di Windows Insider Preview](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK). Per istruzioni sull'installazione e sull'uso di questo SDK, vedere [C11 e C17: introduzione](https://devblogs.microsoft.com/cppblog/c11-and-c17-standard-support-arriving-in-msvc/#c11-and-c17-getting-started) .

## <a name="see-also"></a>Vedere anche

[`/std` (Specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)\
[C++ `alignof` e `alignas`](../cpp/alignment-cpp-declarations.md#alignof-and-alignas)\
[Gestione del compilatore dell'allineamento dei dati](../cpp/alignment-cpp-declarations.md#compiler-handling-of-data-alignment)