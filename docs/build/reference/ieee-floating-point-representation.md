---
title: A virgola mobile IEEE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- float keyword
- real*8 value
- floating-point numbers, IEEE representation
- double data type, floating-point representation
- IEEE floating point representation
- real*10 value
- long double
- real*4 value
ms.assetid: 537833e8-fe05-49fc-8169-55fd0314b195
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d209d1c2a7429515383f8ebe80c621d6f2b15890
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ieee-floating-point-representation"></a>Formato a virgola mobile IEEE
Microsoft Visual C++ è coerente con gli standard numerici IEEE. Esistono tre varietà interne di numeri reali. Reale\*4 e real\*8 vengono utilizzati in Visual C++. Reale\*4 viene dichiarata utilizzando la parola **float**. Reale\*8 viene dichiarata utilizzando la parola **double**. Nella programmazione Windows a 32 bit, il `long double` esegue il mapping al tipo di dati **double**. È, tuttavia, supporto del linguaggio assembly per i calcoli utilizzando il reale * il tipo di dati di 10.  
  
 I valori vengono archiviati come indicato di seguito:  
  
|Valore|Archiviato come|  
|-----------|---------------|  
|real * 4|il segno, esponente a 8 bit, mantissa a 23 bit.|  
|real * 8|il segno, esponente a 11 bit, mantissa a 52 bit|  
|real*10|il segno, esponente a 15 bit, 64-bit mantissa|  
  
 In real * 4 e real\*8 formati, è utilizzato un 1 iniziale nella mantissa che non verrà archiviata in memoria, quindi le mantisse sono in effetti 24 o 53 bit, anche se vengono archiviati solo 23 o 52 bit. Il reale\*formato 10 memorizza effettivamente questo bit.  
  
 Gli esponenti sono influenzati dalla metà del valore possibile. Ciò significa che si sottrae il valore di distorsione dall'esponente archiviato per ottenere l'esponente effettivo. Se l'esponente archiviato è minore di differenza di, è un esponente negativo.  
  
 Gli esponenti sono influenzati come segue:  
  
|Esponente|Valore di distorsione|  
|--------------|---------------|  
|8 bit (real * 4)|127|  
|11 bit (real * 8)|1023|  
|15 bit (real * 10)|16383|  
  
 Questi esponenti non sono potenze di 10; sono potenze di due. Vale a dire gli esponenti a 8 bit archiviati possono essere fino a 127. Il valore 2 * * 127 equivale approssimativamente a 10\*\*38, ovvero il limite effettivo di reale\*4.  
  
 La mantissa viene archiviata come frazione binaria del form... 1, xxx. Questa frazione ha un valore maggiore o uguale a 1 e minore di 2. Si noti che i numeri reali sono sempre archiviati in forma normalizzata; vale a dire la mantissa viene spostato a sinistra in modo che il bit più significativo della mantissa è sempre 1. Poiché questo bit è sempre 1, si presuppone (non archiviato) in real * 4 e real\*8 formati. Il punto (non decimale) binario viene considerato a destra di 1 iniziali.  
  
 Il formato, quindi, per le varie dimensioni è come segue:  
  
|Formato|BYTE 1|2 BYTE|BYTE 3|4 BYTE|...|N BYTE|  
|------------|------------|------------|------------|------------|---------|------------|  
|real * 4|`SXXX XXXX`|`XMMM MMMM`|`MMMM MMMM`|`MMMM MMMM`|||  
|real * 8|`SXXX XXXX`|`XXXX MMMM`|`MMMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
|real*10|`SXXX XXXX`|`XXXX XXXX`|`1MMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
  
 `S` rappresenta il bit di segno, il `X`del sono i bit dell'esponente e `M`del sono i bit di mantissa. Si presuppone che il bit più a sinistra in real * 4 e real\*8 formati, ma è presente come "1" in 3 BYTE del valore reale\*formato 10.  
  
 Per spostare il punto di binario correttamente, innanzitutto distorsione l'esponente e quindi spostare il punto binario a destra o sinistra del numero di bit appropriato.  
  
## <a name="examples"></a>Esempi  
 Di seguito sono riportati alcuni esempi reale * 4 formato:  
  
-   Nell'esempio seguente, il bit di segno è pari a zero e l'esponente archiviato è 128 o 100 0000 0 in formato binario, ovvero 127 più 1. La mantissa archiviata è (1). 000 0000 ... 0000 0000, che ha un implicita iniziale binario e 1 punto, pertanto la mantissa effettiva è uno.  
  
    ```  
                        SXXX XXXX XMMM MMMM ... MMMM MMMM  
    2   =  1  * 2**1  = 0100 0000 0000 0000 ... 0000 0000 = 4000 0000  
    ```  
  
-   Uguale a + 2, ad eccezione del fatto che sia stato impostato il bit di segno. Questo vale per tutti i numeri a virgola mobile formato IEEE.  
  
    ```  
    -2  = -1  * 2**1  = 1100 0000 0000 0000 ... 0000 0000 = C000 0000  
    ```  
  
-   Mantissa stesso esponente aumenta di uno (il valore distorto è 129 o 100 0000 1 in formato binario.  
  
    ```  
    4  =  1  * 2**2  = 0100 0000 1000 0000 ... 0000 0000 = 4080 0000  
    ```  
  
-   Esponente stesso mantissa è maggiore della metà:, (1). 100 0000... 0000 0000, ovvero, poiché si tratta di una frazione binaria, 1 1/2 (i valori delle cifre frazionarie sono 1/2, 1/4, 1/8 e così via).  
  
    ```  
    6  = 1.5 * 2**2  = 0100 0000 1100 0000 ... 0000 0000 = 40C0 0000  
    ```  
  
-   Stesso esponente delle altre potenze di due, la mantissa è minore di due 127 o 011 1111 1 in formato binario.  
  
    ```  
    1  = 1   * 2**0  = 0011 1111 1000 0000 ... 0000 0000 = 3F80 0000  
    ```  
  
-   L'esponente distorto è 126, 011 1111 0 in formato binario e la mantissa è (1). 100 0000 ... 0000 0000, 1 1/2.  
  
    ```  
    .75 = 1.5 * 2**-1 = 0011 1111 0100 0000 ... 0000 0000 = 3F40 0000  
    ```  
  
-   Esattamente come due meno che il bit che rappresenta 1/4 viene impostato nella mantissa.  
  
    ```  
    2.5 = 1.25 * 2**1 = 0100 0000 0010 0000 ... 0000 0000 = 4020 0000  
    ```  
  
-   1/10 è una frazione ripetuta in formato binario. La mantissa è appena inferiore a 1,6 e l'esponente distorto indica che 1,6 deve essere diviso per 16 (è 011 1101 1 in formato binario, che corrisponde a 123 in decimali). L'esponente effettivo è 123 127 = - 4, ovvero un fattore in base al quale moltiplicare 2 * * -4 = 1/16. Si noti che la mantissa archiviata viene arrotondata per eccesso nell'ultimo bit, ovvero un tentativo per rappresentare il numero non rappresentabile più accuratamente possibile. (Il motivo di 1/10 e 1/100 sono non esattamente rappresentabile in formato binario è simile al motivo che non corrispondono esattamente rappresentabile in formato decimale 1/3.)  
  
    ```  
    0.1 = 1.6 * 2**-4 = 0011 1101 1100 1100 ... 1100 1101 = 3DCC CCCD  
    ```  
  
-   `0  = 1.0 * 2**-128 = all zeros--a special case.`  
  
## <a name="see-also"></a>Vedere anche  
 [Causa della possibile perdita di precisione dei numeri a virgola mobile](../../build/reference/why-floating-point-numbers-may-lose-precision.md)