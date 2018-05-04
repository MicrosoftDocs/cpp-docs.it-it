---
title: Macro _countof | Microsoft Docs
ms.custom: ''
ms.date: 03/22/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _countof
- countof
dev_langs:
- C++
helpviewer_keywords:
- countof macro
- _countof macro
ms.assetid: 86198767-f7e5-4beb-898d-3cbbf60350a3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f30df64b045e2af6181d343a4eafb962d22eaa05
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="countof-macro"></a>Macro _countof

Calcola il numero di elementi in una matrice allocata staticamente.

## <a name="syntax"></a>Sintassi

```C
#define _countof(array) (sizeof(array) / sizeof(array[0]))
```

### <a name="parameters"></a>Parametri

*array*<br/>
Il nome di una matrice.

## <a name="return-value"></a>Valore restituito

Il numero di elementi nella matrice, espresso come un **size_t**.

## <a name="remarks"></a>Note

**countof** viene implementato come macro del preprocessore simile a funzione. La versione di C++ è macchine modello aggiuntivi da rilevare in fase di compilazione se viene passato un puntatore anziché una matrice di dichiarati in modo statico.

Assicurarsi che *matrice* è effettivamente una matrice, non un puntatore. Nel linguaggio C **countof** produce risultati errati se *matrice* è un puntatore. In C++ **countof** compilazione se non viene completata *matrice* è un puntatore.  Una matrice passata come parametro a una funzione *decade a un puntatore*, il che significa che all'interno della funzione, non è possibile utilizzare **countof** per determinare l'entità della matrice.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**_countof**|\<stdlib.h>|

## <a name="example"></a>Esempio

```cpp
// crt_countof.cpp
#define _UNICODE
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int main( void )
{
   _TCHAR arr[20], *p;
   printf( "sizeof(arr) = %zu bytes\n", sizeof(arr) );
   printf( "_countof(arr) = %zu elements\n", _countof(arr) );
   // In C++, the following line would generate a compile-time error:
   // printf( "%zu\n", _countof(p) ); // error C2784 (because p is a pointer)

   _tcscpy_s( arr, _countof(arr), _T("a string") );
   // unlike sizeof, _countof works here for both narrow- and wide-character strings
}
```

```Output
sizeof(arr) = 40 bytes
_countof(arr) = 20 elements
```

## <a name="see-also"></a>Vedere anche

[Operatore sizeof](../../cpp/sizeof-operator.md)<br/>
