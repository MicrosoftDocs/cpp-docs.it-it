---
description: 'Altre informazioni su: funzioni'
title: Funzioni to
ms.date: 11/04/2016
api_location:
- msvcr120.dll
- msvcr90.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcr100.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- To
helpviewer_keywords:
- to functions
- string conversion, to different characters
- string conversion, case
- lowercase, converting strings
- uppercase, converting strings
- case, converting
- characters, converting
ms.assetid: f636a4c6-8c9f-4be2-baac-064f9dbae300
ms.openlocfilehash: 4e2e8993bfe3ecc85071ab53bcd38c38c9da3370
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326867"
---
# <a name="to-functions"></a>Funzioni to

Ognuna delle funzioni **to** e le relative macro associate, se presenti, convertono un singolo carattere in un altro carattere.

[__toascii](../c-runtime-library/reference/toascii-toascii.md)\
[ToLower, _tolower, towlower](../c-runtime-library/reference/tolower-tolower-towlower-tolower-l-towlower-l.md)\
[toupper, _toupper, towupper](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md)

## <a name="remarks"></a>Commenti

Le conversioni delle funzioni **to** e delle macro sono le seguenti.

|Routine|Macro|Description|
|-------------|-----------|-----------------|
|`__toascii`|`__toascii`|Converte `c` in un carattere ASCII|
|`tolower`|`tolower`|Converte `c` in minuscolo se appropriato|
|`_tolower`|`_tolower`|Converte `c` in minuscolo|
|`towlower`|Nessuno|Converte `c` nella lettera minuscola con carattere wide corrispondente|
|`toupper`|`toupper`|Converte `c` in maiuscolo se appropriato|
|`_toupper`|`_toupper`|Converte `c` in maiuscolo|
|`towupper`|Nessuno|Converte c nella lettera maiuscola con carattere wide corrispondente|

Per usare le versioni funzione delle routine **to** definite anche come macro, rimuovere le definizioni di macro con le direttive `#undef` o non includere CTYPE.H. Se si usa l'opzione del compilatore /Za, il compilatore usa la versione funzione di `toupper` o `tolower`. Le dichiarazioni delle funzioni `toupper` e `tolower` sono in STDLIB.H.

La routine `__toascii` imposta tutti i bit tranne i 7 bit di ordine inferiore di `c` su 0, in modo che il valore convertito rappresenti un carattere nel set di caratteri ASCII. Se `c` rappresenta già un carattere ASCII, `c` rimane invariato.

Le routine `tolower` e `toupper`:

- Sono dipendenti dalla categoria `LC_CTYPE` delle impostazioni locali correnti (`tolower` chiama `isupper` e `toupper` chiama `islower`).

- Convertono `c` se `c` rappresenta una lettera convertibile con la combinazione di maiuscole/minuscole appropriata nelle impostazioni locali correnti ed esiste la combinazione di maiuscole/minuscole opposta per tali impostazioni locali. In caso contrario, `c` non viene modificato.

Le routine `_tolower` e `_toupper`:

- Sono versioni indipendenti dalle impostazioni locali e molto più veloci di `tolower` e **toupper**.

- Può essere utilizzato solo quando i valori di tipo **(**) e () `c`  rispettivamente sono diversi da  `c`   `c` zero.

- Hanno risultati indefiniti se `c` non è una lettera ASCII con la combinazione di maiuscole/minuscole appropriata per la conversione.

Le funzioni `towlower` e `towupper` restituiscono una copia convertita di `c` se e solo se entrambe le condizioni seguenti sono diverse da zero. In caso contrario, `c` non viene modificato.

- `c` è un carattere wide con la combinazione di maiuscole/minuscole appropriata (ovvero, per cui `iswupper` o **iswlower** è rispettivamente diverso da zero).

- È disponibile un carattere wide corrispondente con la combinazione di maiuscole/minuscole di destinazione (ovvero, per cui `iswlower` o **iswupper** è rispettivamente diverso da zero).

## <a name="example"></a>Esempio

```c
// crt_toupper.c
/* This program uses toupper and tolower to
 * analyze all characters between 0x0 and 0x7F. It also
 * applies _toupper and _tolower to any code in this
 * range for which these functions make sense.
 */

#include <ctype.h>
#include <string.h>

char msg[] = "Some of THESE letters are Capitals.";
char *p;

int main( void )
{
   printf( "%s\n", msg );

   /* Reverse case of message. */
   for( p = msg; p < msg + strlen( msg ); p++ )
   {
      if( islower( *p ) )
         putchar( _toupper( *p ) );
      else if( isupper( *p ) )
         putchar( _tolower( *p ) );
      else
         putchar( *p );
   }
}
```

```Output
Some of THESE letters are Capitals.
sOME OF these LETTERS ARE cAPITALS.
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../c-runtime-library/locale.md)<br/>
[is, ISW routines](../c-runtime-library/is-isw-routines.md)
