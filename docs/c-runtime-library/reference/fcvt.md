---
title: _fcvt | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _fcvt
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _fcvt
dev_langs:
- C++
helpviewer_keywords:
- converting floating point, to strings
- _fcvt function
- floating-point functions, converting number to string
- fcvt function
- floating-point functions
ms.assetid: 74584c88-f0dd-4907-8fca-52da5df583f5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: def428073c15f3d408174916098573ddff98cde0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fcvt"></a>_fcvt
Converte un numero a virgola mobile in una stringa. È disponibile una versione più sicura di questa funzione. Vedere [_fcvt_s](../../c-runtime-library/reference/fcvt-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_fcvt(   
   double value,  
   int count,  
   int *dec,  
   int *sign   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `value`  
 Numero da convertire.  
  
 `count`  
 Numero di cifre dopo il separatore decimale.  
  
 `dec`  
 Puntatore alla posizione del separatore decimale archiviata.  
  
 `sign`  
 Puntatore all'indicatore di segno archiviato.  
  
## <a name="return-value"></a>Valore restituito  
 `_fcvt` restituisce un puntatore alla stringa di cifre, NULL in caso di errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_fcvt` converte un numero a virgola mobile in una stringa di caratteri che termina con NULL. Il parametro `value` è il numero a virgola mobile da convertire. `_fcvt` archivia le cifre di `value` come stringa e aggiunge un carattere null ('\0'). Il parametro `count` specifica il numero di cifre da archiviare dopo il separatore decimale. Le cifre in eccesso vengono arrotondate a `count` posti. Se ci sono meno di `count` cifre, la stringa viene riempita con zeri.  
  
 Il numero totale di cifre restituito da `_fcvt` non supererà `_CVTBUFSIZE`.  
  
 Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e dal segno dopo la chiamata. Il parametro `dec` punta a un valore intero. Questo valore intero indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro `sign` punta a un numero intero che indica il segno di `value`. L'intero viene impostato su 0 se `value` è positivo e viene impostato su un numero diverso da zero se `value` è negativo.  
  
 La differenza tra `_ecvt` e `_fcvt` consiste nell'interpretazione del parametro `count`. `_ecvt` interpreta `count` come numero totale di cifre nella stringa di output, mentre `_fcvt` interpreta `count` come numero di cifre dopo il separatore decimale.  
  
 `_ecvt` e `_fcvt` usano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste funzioni elimina definitivamente i risultati della chiamata precedente.  
  
 Questa funzione convalida i relativi parametri. Se `dec` o `sign` è NULL oppure `count` è 0, viene richiamato il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito NULL.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fcvt`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fcvt.c  
// compile with: /W3  
// This program converts the constant  
// 3.1415926535 to a string and sets the pointer  
// buffer to point to that string.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int  decimal, sign;  
   char *buffer;  
   double source = 3.1415926535;  
  
   buffer = _fcvt( source, 7, &decimal, &sign ); // C4996  
   // Note: _fcvt is deprecated; consider using _fcvt_s instead  
   printf( "source: %2.10f   buffer: '%s'   decimal: %d   sign: %d\n",  
            source, buffer, decimal, sign );  
}  
```  
  
```Output  
source: 3.1415926535   buffer: '31415927'   decimal: 1   sign: 0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [_ecvt](../../c-runtime-library/reference/ecvt.md)   
 [_gcvt](../../c-runtime-library/reference/gcvt.md)