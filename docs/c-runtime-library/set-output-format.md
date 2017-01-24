---
title: "_set_output_format | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_output_format"
apilocation: 
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "set_output_format"
  - "_set_output_format"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_output_format (funzione)"
  - "_TWO_DIGIT_EXPONENT (costante)"
  - "formattazione di output"
  - "set_output_format (funzione)"
  - "TWO_DIGIT_EXPONENT (costante)"
ms.assetid: 1cb48df8-44b4-4400-bd27-287831d6b3ff
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_output_format
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di personalizzare i formati di output usati dalle funzioni di I\/O formattate.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## Sintassi  
  
```  
unsigned int _set_output_format(  
   unsigned int format  
);  
```  
  
#### Parametri  
 \[in\] `format`  
 Valore che rappresenta il formato da usare.  
  
## Valore restituito  
 Formato di output precedente.  
  
## Note  
 `_set_output_format` viene usato per configurare l'output delle funzioni di I\/O formattate, come [printf\_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md). Attualmente, l'unica convenzione di formattazione che può essere modificata da questa funzione è il numero di cifre visualizzate negli esponenti dell'output di numeri a virgola mobile.  
  
 Per impostazione predefinita, l'output di numeri a virgola restituito da funzioni quali `printf_s`, `wprintf_s` e dalle funzioni correlate nella libreria C standard di Visual C\+\+ stampa tre cifre per l'esponente, anche se non sono necessarie tre cifre per rappresentare il valore dell'esponente. Per arrivare a tre cifre, vengono aggiunti zeri.`_set_output_format` consente di modificare questo comportamento in modo da stampare solo due cifre per l'esponente a meno che le dimensioni dell'esponente non ne richiedano una terza.  
  
 Per abilitare gli esponenti a due cifre, chiamare questa funzione con il parametro `_TWO_DIGIT_EXPONENT`, come illustrato nell'esempio. Per abilitare gli esponenti a due cifre, chiamare questa funzione con l'argomento 0.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_output_format`|\<stdio.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Esempio  
  
```  
// crt_set_output_format.c #include <stdio.h> void printvalues(double x, double y) { printf_s("%11.4e %11.4e\n", x, y); printf_s("%11.4E %11.4E\n", x, y); printf_s("%11.4g %11.4g\n", x, y); printf_s("%11.4G %11.4G\n", x, y); } int main() { double x = 1.211E-5; double y = 2.3056E-112; unsigned int old_exponent_format; // Use the default format printvalues(x, y); // Enable two-digit exponent format old_exponent_format = _set_output_format(_TWO_DIGIT_EXPONENT); printvalues(x, y); // Disable two-digit exponent format _set_output_format( old_exponent_format ); printvalues(x, y); }  
```  
  
```Output  
1.2110e-005 2.3056e-112 1.2110E-005 2.3056E-112 1.211e-005  2.306e-112 1.211E-005  2.306E-112 1.2110e-05 2.3056e-112 1.2110E-05 2.3056E-112 1.211e-05  2.306e-112 1.211E-05  2.306E-112 1.2110e-005 2.3056e-112 1.2110E-005 2.3056E-112 1.211e-005  2.306e-112 1.211E-005  2.306E-112  
```  
  
## Vedere anche  
 [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)   
 [\_get\_output\_format](../c-runtime-library/get-output-format.md)