---
description: 'Altre informazioni su: _countof Macro'
title: Macro _countof
ms.date: 03/22/2018
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _countof
- countof
helpviewer_keywords:
- countof macro
- _countof macro
ms.assetid: 86198767-f7e5-4beb-898d-3cbbf60350a3
ms.openlocfilehash: 190f47aa7bb6bcf6bbd9478cce9df90aca81b437
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146458"
---
# <a name="_countof-macro"></a>Macro _countof

Calcola il numero di elementi in una matrice allocata in modo statico.

## <a name="syntax"></a>Sintassi

```C
#define _countof(array) (sizeof(array) / sizeof(array[0]))
```

### <a name="parameters"></a>Parametri

*array*<br/>
Il nome di una matrice.

## <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice, espresso come **size_t**.

## <a name="remarks"></a>Commenti

**_countof** viene implementato come macro del preprocessore di tipo funzione. La versione C++ dispone di un altro modello di macchina per rilevare in fase di compilazione se viene passato un puntatore anziché una matrice dichiarata in modo statico.

Verificare che la *matrice* sia effettivamente una matrice, non un puntatore. In C, **_countof** produce risultati errati se la *matrice* è un puntatore. In C++ non è possibile compilare **_countof** se la *matrice* è un puntatore.  Una matrice passata come parametro a una funzione *decade in un puntatore, il* che significa che all'interno della funzione non è possibile usare **_countof** per determinare l'extent della matrice.

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
