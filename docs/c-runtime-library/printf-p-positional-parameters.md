---
title: "Parametri posizionali printf_p | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_printf_p (funzione), parametri posizionali"
  - "printf_p (funzione), parametri posizionali"
ms.assetid: beb4fd85-a7aa-4665-9085-2c907a5b9ab0
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Parametri posizionali printf_p
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I parametri posizionali consentono di specificare in modo numerico gli argomenti da sostituire in un campo in una stringa di formato.  Sono disponibili le seguenti funzioni `printf` di parametro posizionale:  
  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)  
 [\_printf\_p, \_printf\_p\_l, \_wprintf\_p, \_wprintf\_p\_l](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)  
  
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)  
 [\_sprintf\_p, \_sprintf\_p\_l, \_swprintf\_p, \_swprintf\_p\_l](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)  
  
 [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)  
 [\_cprintf\_p, \_cprintf\_p\_l, \_cwprintf\_p, \_cwprintf\_p\_l](../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)  
  
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)  
 [\_fprintf\_p, \_fprintf\_p\_l, \_fwprintf\_p, \_fwprintf\_p\_l](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)  
  
 [vprintf, \_vprintf\_l, vwprintf, \_vwprintf\_l](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)  
 [\_vprintf\_p, \_vprintf\_p\_l, \_vwprintf\_p, \_vwprintf\_p\_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)  
  
 [vfprintf, \_vfprintf\_l, vfwprintf, \_vfwprintf\_l](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)  
 [\_vfprintf\_p, \_vfprintf\_p\_l, \_vfwprintf\_p, \_vfwprintf\_p\_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)  
  
 [vsprintf, \_vsprintf\_l, vswprintf, \_vswprintf\_l, \_\_vswprintf\_l](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)  
 [\_vsprintf\_p, \_vsprintf\_p\_l, \_vswprintf\_p, \_vswprintf\_p\_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)  
  
## Impostazione dei parametri posizionali  
  
##### Indicizzazione dei parametri  
 Per impostazione predefinita le funzioni posizionali si comportano in modo identico a quelle non posizionali, se nessuna formattazione posizionale è presente.  I parametri posizionali vengono specificati utilizzando il formato "`%m$x`", dove `m` indica un numero ordinale che indica la posizione del parametro nell'elenco di parametri, antecedente la stringa di formato, mentre  `x` indica il tipo di carattere del campo di tipo specificato nella funzione `printf`.  I parametri nell'elenco vengono indicizzati a partire dal valore 1 per il primo elemento nell'elenco e così via.  Per ulteriori informazioni relative ai caratteri di campo di tipo, vedere[Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md).  
  
 Per un esempio di questo comportamento:  
  
```  
_printf_p("%1$s %2$s", "November", "10");  
```  
  
 comporterà la stampa di  
  
```  
November 10  
```  
  
 L'ordine dei numeri utilizzati non deve corrispondere all'ordine degli argomenti specificati.  Pertanto, il modello seguente è valido:  
  
```  
_printf_p("%2$s %1$s", "November", "10");  
```  
  
 comporterà la stampa di  
  
```  
10 November  
```  
  
 Un parametro può essere utilizzato più di una sola volta durante la formattazione, a differenza delle stringhe di formato tradizionali, in modo tale che  
  
```  
_printf_p("%1$d times %1$d is %2$d", 10, 100);  
```  
  
 comporterà la stampa di  
  
```  
10 times 10 is 100  
```  
  
 Tuttavia, tutti gli argomenti devono essere utilizzati almeno una volta in un punto della stringa di formato.  
  
 Il numero massimo di parametri posizionali consentiti in una stringa di formato è indicato dal valore `_ARGMAX`.  
  
##### Larghezza e precisione  
 Quando viene utilizzato il simbolo \* per specificare che la larghezza o la precisione devono essere determinati da un argomento, quindi la posizione del valore della larghezza o della precisione deve essere visualizzata subito dopo il simbolo \*.  Di seguito è riportato un esempio:  
  
```  
_printf_p("%1$*2$s","Hello", 10);  
```  
  
 oppure  
  
```  
_printf_p("%2$*1$s",10, "Hello");  
```  
  
##### Combinazione di argomenti posizionali e non posizionali  
 I parametri posizionali non possono essere combinati con i parametri non posizionali nella stessa stringa di formato.  Tuttavia, `printf_p` e l funzioni correlate supportano ancora i parametri non posizionali nelle stringhe di formato che non contengono parametri posizionali.  
  
## Esempio  
  
```  
// positional_args.c  
// Positional arguments allow the specification of the order  
// in which arguments are consumed in a formatting string.  
  
#include <stdio.h>  
  
int main(int argc, char *argv[])  
{  
    int     i = 1,  
            j = 2,  
            k = 3;  
    double  x = 0.1,  
            y = 0.2,  
            z = 0.3;  
    char    *s1 = "abc",  
            *s2 = "def",  
            *s3 = "ghi";  
  
    // If positional arguments are unspecified,  
    // normal input order is used.  
    _printf_p("%d %d %d\n", i, j, k);  
  
    // Positional args are numbers indicating the  
    // argument enclosed in curly braces.  
    _printf_p("%3$d %1$d %2$d\n", i, j, k);  
  
    // The same positional argument may be reused.  
    _printf_p("%1$d %2$d %1$d\n", i, j);  
  
    _printf_p("%1$s %2$s %3$s\n", s1, s2, s3);  
  
    _printf_p("%3$s %1$s %2$s\n", s1, s2, s3);  
}  
```  
  
  **1 2 3**  
**3 1 2**  
**1 2 1**  
**abc def ghi**  
**ghi abc def**   
## Vedere anche  
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifica precisione](../c-runtime-library/precision-specification.md)