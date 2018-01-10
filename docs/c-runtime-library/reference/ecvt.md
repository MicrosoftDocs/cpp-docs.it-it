---
title: _ecvt | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _ecvt
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
f1_keywords: _ecvt
dev_langs: C++
helpviewer_keywords:
- _ecvt function
- numbers, converting
- converting double numbers
- ecvt function
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 237924bce3bb4b659e72cec060738035d91c7cbc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ecvt"></a>_ecvt
Converte un numero `double` in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](../../c-runtime-library/reference/ecvt-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_ecvt(   
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
 Numero di cifre archiviate.  
  
 `dec`  
 Posizione del separatore decimale archiviata.  
  
 `sign`  
 Segno del numero convertito.  
  
## <a name="return-value"></a>Valore restituito  
 `_ecvt` restituisce un puntatore alla stringa di cifre; NULL in caso di errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_ecvt` converte un numero a virgola mobile in una stringa di caratteri. Il parametro `value` è il numero a virgola mobile da convertire. Questa funzione consente di archiviare fino a `count` cifre di `value` come stringa e aggiunge un carattere null ('\0'). Se il numero di cifre in `value` supera `count`, la cifra meno significativa viene arrotondata. Se ci sono meno di `count` cifre, la stringa viene riempita con zeri.  
  
 Il numero totale di cifre restituito da `_ecvt` non supererà `_CVTBUFSIZE`.  
  
 Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di `value` possono essere ottenuti da `dec` e `sign` dopo la chiamata. Il parametro `dec` punta a un valore intero che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro `sign` punta a un valore intero che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.  
  
 La differenza tra `_ecvt` e `_fcvt` consiste nell'interpretazione del parametro `count`. `_ecvt` interpreta `count` come numero totale di cifre nella stringa di output, mentre `_fcvt` interpreta `count` come numero di cifre dopo il separatore decimale.  
  
 `_ecvt` e `_fcvt` usano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente.  
  
 Questa funzione convalida i relativi parametri. Se `dec` o `sign` è NULL oppure `count` è 0, viene richiamato il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito NULL.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_ecvt`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_ecvt.c  
// compile with: /W3  
// This program uses _ecvt to convert a  
// floating-point number to a character string.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int     decimal,   sign;  
   char    *buffer;  
   int     precision = 10;  
   double  source = 3.1415926535;  
  
   buffer = _ecvt( source, precision, &decimal, &sign ); // C4996  
   // Note: _ecvt is deprecated; consider using _ecvt_s instead  
   printf( "source: %2.10f   buffer: '%s'  decimal: %d  sign: %d\n",  
           source, buffer, decimal, sign );  
}  
```  
  
```Output  
source: 3.1415926535   buffer: '3141592654'  decimal: 1  sign: 0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [_fcvt](../../c-runtime-library/reference/fcvt.md)   
 [_gcvt](../../c-runtime-library/reference/gcvt.md)