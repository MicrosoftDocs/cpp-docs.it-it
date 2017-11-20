---
title: _set_output_format | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _set_output_format
apilocation:
- msvcrt.dll
- msvcr120.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- msvcr110.dll
- msvcr80.dll
apitype: DLLExport
f1_keywords:
- set_output_format
- _set_output_format
dev_langs: C++
helpviewer_keywords:
- _TWO_DIGIT_EXPONENT constant
- output formatting
- TWO_DIGIT_EXPONENT constant
- _set_output_format function
- set_output_format function
ms.assetid: 1cb48df8-44b4-4400-bd27-287831d6b3ff
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 937a452b145fd3d30518f8c4b786ab79b46d5cea
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setoutputformat"></a>_set_output_format
Consente di personalizzare i formati di output usati dalle funzioni di I/O formattate.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned int _set_output_format(  
   unsigned int format  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `format`  
 Valore che rappresenta il formato da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Formato di output precedente.  
  
## <a name="remarks"></a>Osservazioni  
 `_set_output_format` viene usato per configurare l'output delle funzioni di I/O formattate, come [printf_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md). Attualmente, l'unica convenzione di formattazione che può essere modificata da questa funzione è il numero di cifre visualizzate negli esponenti dell'output di numeri a virgola mobile.  
  
 Per impostazione predefinita, l'output di numeri a virgola restituito da funzioni quali `printf_s`, `wprintf_s`e dalle funzioni correlate nella libreria C standard di Visual C++ stampa tre cifre per l'esponente, anche se non sono necessarie tre cifre per rappresentare il valore dell'esponente. Per arrivare a tre cifre, vengono aggiunti zeri. `_set_output_format` consente di modificare questo comportamento in modo da stampare solo due cifre per l'esponente a meno che le dimensioni dell'esponente non ne richiedano una terza.  
  
 Per abilitare gli esponenti a due cifre, chiamare questa funzione con il parametro `_TWO_DIGIT_EXPONENT`, come illustrato nell'esempio. Per abilitare gli esponenti a due cifre, chiamare questa funzione con l'argomento 0.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_output_format`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_set_output_format.c  
#include <stdio.h>  
  
void printvalues(double x, double y)  
{  
   printf_s("%11.4e %11.4e\n", x, y);  
   printf_s("%11.4E %11.4E\n", x, y);  
   printf_s("%11.4g %11.4g\n", x, y);  
   printf_s("%11.4G %11.4G\n", x, y);  
}  
  
int main()  
{  
   double x = 1.211E-5;  
   double y = 2.3056E-112;  
   unsigned int old_exponent_format;  
  
   // Use the default format  
   printvalues(x, y);  
  
   // Enable two-digit exponent format  
   old_exponent_format = _set_output_format(_TWO_DIGIT_EXPONENT);  
  
   printvalues(x, y);  
  
   // Disable two-digit exponent format  
   _set_output_format( old_exponent_format );  
  
   printvalues(x, y);  
}  
```  
  
```Output  
1.2110e-005 2.3056e-112  
1.2110E-005 2.3056E-112  
 1.211e-005  2.306e-112  
 1.211E-005  2.306E-112  
 1.2110e-05 2.3056e-112  
 1.2110E-05 2.3056E-112  
  1.211e-05  2.306e-112  
  1.211E-05  2.306E-112  
1.2110e-005 2.3056e-112  
1.2110E-005 2.3056E-112  
 1.211e-005  2.306e-112  
 1.211E-005  2.306E-112  
```  
  
## <a name="see-also"></a>Vedere anche  
 [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [_get_output_format](../c-runtime-library/get-output-format.md)