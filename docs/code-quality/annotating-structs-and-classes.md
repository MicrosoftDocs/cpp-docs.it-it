---
title: Annotazioni di struct e classi
ms.date: 06/28/2019
ms.topic: conceptual
f1_keywords:
- _Field_size_bytes_part_
- _Field_size_bytes_full_opt_
- _Field_size_bytes_
- _Field_size_opt_
- _Field_size_part_
- _Field_size_bytes_part_opt_
- _Field_range_
- _Field_size_part_opt_
- _Field_size_
- _Field_size_bytes_opt_
- _Struct_size_bytes_
- _Field_size_bytes_full_
- _Field_size_full_
- _Field_size_full_opt_
- _Field_z_
ms.assetid: b8278a4a-c86e-4845-aa2a-70da21a1dd52
ms.openlocfilehash: fe177e6afea088b59b16bfbd0bff6fa00b526222
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765121"
---
# <a name="annotating-structs-and-classes"></a>Annotazioni di struct e classi

È possibile annotare i membri struct e di classe utilizzando le annotazioni che operano come invarianti, si presume che siano true per qualsiasi chiamata di funzione o entrata/uscita di funzione che include la struttura contenitore come parametro o valore restituito.

## <a name="struct-and-class-annotations"></a>Annotazioni di struct e classi

- `_Field_range_(low, high)`

     Il campo si trova nell'intervallo (inclusivo) da `low` a `high` .  Equivalente ad applicare `_Satisfies_(_Curr_ >= low && _Curr_ <= high)` all'oggetto annotato utilizzando le pre/postcondizioni appropriate.

- `_Field_size_(size)`, `_Field_size_opt_(size)`, `_Field_size_bytes_(size)`, `_Field_size_bytes_opt_(size)`

     Campo con una dimensione scrivibile in elementi (o byte) come specificato da `size`.

- `_Field_size_part_(size, count)`, `_Field_size_part_opt_(size, count)`,         `_Field_size_bytes_part_(size, count)`, `_Field_size_bytes_part_opt_(size, count)`

     Campo con una dimensione scrivibile in elementi (o byte) come specificato da `size` e `count` degli elementi (byte) che sono leggibili.

- `_Field_size_full_(size)`, `_Field_size_full_opt_(size)`, `_Field_size_bytes_full_(size)`, `_Field_size_bytes_full_opt_(size)`

     Campo che contiene sia dimensione leggibile che modificabile in elementi (o byte) come specificato da `size`.

- `_Field_z_`

     Campo con una stringa con terminazione null.

- `_Struct_size_bytes_(size)`

     Si applica a struct o a una dichiarazione di classe.  Indica che un oggetto valido di tale tipo può essere maggiore rispetto al tipo dichiarato, con il numero di byte specificati da `size`.  Ad esempio:

    ```cpp

    typedef _Struct_size_bytes_(nSize)
    struct MyStruct {
        size_t nSize;
        ...
    };

    ```

     Le dimensioni del buffer, in byte, di un parametro `pM` di tipo `MyStruct *` , vengono quindi considerate:

    ```cpp
    min(pM->nSize, sizeof(MyStruct))
    ```

## <a name="example"></a>Esempio

```cpp
#include <sal.h>

// This _Struct_size_bytes_ is equivalent to what below _Field_size_ means.
_Struct_size_bytes_(__builtin_offsetof(MyBuffer, buffer) + bufferSize * sizeof(int))
struct MyBuffer
{
    static int MaxBufferSize;

    _Field_z_
    const char* name;

    int firstField;

    // ... other fields

    _Field_range_(1, MaxBufferSize)
    int bufferSize;

    _Field_size_(bufferSize)        // Preferred way - easier to read and maintain.
    int buffer[]; // Using C99 Flexible array member
};
```

Note per questo esempio:

- `_Field_z_` equivale a: `_Null_terminated_`.  `_Field_z_` per il campo nome specifica che il campo nome è una stringa con terminazione null.
- `_Field_range_` per `bufferSize` specifica che il valore di `bufferSize` deve essere compreso tra 1 e `MaxBufferSize` (inclusi).
- I risultati finali delle `_Struct_size_bytes_` `_Field_size_` annotazioni e sono equivalenti. Per le strutture o le classi che presentano un layout simile, `_Field_size_` è più facile da leggere e gestire, perché contiene meno riferimenti e calcoli rispetto all' `_Struct_size_bytes_` annotazione equivalente. `_Field_size_` non richiede la conversione in dimensioni in byte. Se le dimensioni in byte sono l'unica opzione, ad esempio per un campo puntatore void, `_Field_size_bytes_` può essere utilizzato. Se sia `_Struct_size_bytes_` che `_Field_size_` esistono, entrambi saranno disponibili per gli strumenti di. Se le due annotazioni non sono consentite, è possibile utilizzare lo strumento.

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)
