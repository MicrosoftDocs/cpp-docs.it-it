---
title: "Formato a virgola mobile IEEE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "double (tipo di dati), rappresentazione a virgola mobile"
  - "float (parola chiave)"
  - "numeri a virgola mobile, rappresentazione IEEE"
  - "IEEE (rappresentazione a virgola mobile)"
  - "long double"
  - "real*10 (valore)"
  - "real*4 (valore)"
  - "real*8 (valore)"
ms.assetid: 537833e8-fe05-49fc-8169-55fd0314b195
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Formato a virgola mobile IEEE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Microsoft Visual C\+\+ è conforme agli standard numerici IEEE.  Esistono tre varietà interne di numeri reali.  In Visual C\+\+ vengono utilizzati numeri di tipo real\*4 e real\*8.  Il tipo real\*4 viene dichiarato mediante la parola **float**.  Il tipo real\*8 viene dichiarato mediante la parola **double**.  Nella programmazione di applicazioni Windows a 32 bit il tipo di dati `long double` è associato a **double**.  È comunque presente un supporto in linguaggio assembly per i calcoli che utilizzano il tipo di dati real\*10.  
  
 I valori vengono archiviati come segue:  
  
|Valore|Formato di archiviazione|  
|------------|------------------------------|  
|real\*4|1 bit per il segno, 8 bit per l'esponente, 23 bit per la mantissa|  
|real\*8|1 bit per il segno, 11 bit per l'esponente, 52 bit per la mantissa|  
|real\*10|1 bit per il segno, 15 bit per l'esponente, 64 bit per la mantissa|  
  
 Nei formati real\*4 e real\*8 viene utilizzato un 1 iniziale nella mantissa che non viene archiviato in memoria. Per questo motivo le mantisse sono in effetti di 24 o 53 bit, sebbene vengano archiviati solo 23 o 52 bit.  Con il formato real\*10 viene invece archiviato anche questo bit.  
  
 Il valore degli esponenti viene distorto della metà rispetto al valore possibile.  Questo significa che per ottenere l'esponente effettivo è necessario sottrarre il valore di distorsione dall'esponente archiviato.  Se l'esponente archiviato è inferiore al valore di distorsione, si tratta di un esponente negativo.  
  
 I valori degli esponenti vengono distorti come indicato di seguito:  
  
|Esponente|Valore di distorsione|  
|---------------|---------------------------|  
|8 bit \(real\*4\)|127|  
|11 bit \(real\*8\)|1023|  
|15 bit \(real\*10\)|16383|  
  
 Questi esponenti non sono potenze di dieci, bensì di due,  Ovvero gli esponenti archiviati di 8 bit possono avere valori fino a 127.  Il valore 2\*\*127 equivale all'incirca a 10\*\*38, che rappresenta il limite effettivo di real\*4.  
  
 La mantissa è archiviata come frazione binaria nella forma 1,XXX... .  Questa frazione presenta un valore maggiore o uguale a 1 e minore di 2.  Si noti che i numeri reali sono sempre archiviati in forma normalizzata, ovvero la mantissa viene spostata a sinistra in modo che il bit più significativo della mantissa sia sempre 1.  Poiché questo bit è sempre 1, viene supposto \(non archiviato\) nei formati real\*4 e real\*8.  Si suppone inoltre che la virgola binaria \(non decimale\) si trovi subito a destra dell'1 iniziale.  
  
 Il formato delle diverse dimensioni è quindi il seguente:  
  
|Formato|BYTE 1|BYTE 2|BYTE 3|BYTE 4|...|BYTE n|  
|-------------|------------|------------|------------|------------|---------|------------|  
|real\*4|`SXXX XXXX`|`XMMM MMMM`|`MMMM MMMM`|`MMMM MMMM`|||  
|real\*8|`SXXX XXXX`|`XXXX MMMM`|`MMMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
|real\*10|`SXXX XXXX`|`XXXX XXXX`|`1MMM MMMM`|`MMMM MMMM`|...|`MMMM MMMM`|  
  
 `S` rappresenta il bit del segno, le `X` sono i bit dell'esponente e le `M` sono i bit della mantissa.  Tenere presente che nei formati real\*4 e real\*8 il primo bit a sinistra è solo supposto, mentre nel formato real\*10 è presente come "1" nel BYTE 3.  
  
 Per spostare correttamente la virgola binaria, è necessario innanzitutto annullare la distorsione dell'esponente, quindi spostare la virgola binaria verso destra o verso sinistra per il numero di bit appropriato.  
  
## Esempi  
 Di seguito sono riportati alcuni esempi in formato real\*4:  
  
-   Nell'esempio seguente, il bit di segno è zero e l'esponente archiviato è 128 o 100 0000 0 in formato binario, che corrisponde a 127 più 1.  La mantissa archiviata è \(1,\) 000 0000 ... 0000 0000, con un 1 iniziale implicito e una virgola binaria, pertanto la mantissa effettiva è uno.  
  
    ```  
                        SXXX XXXX XMMM MMMM ... MMMM MMMM  
    2   =  1  * 2**1  = 0100 0000 0000 0000 ... 0000 0000 = 4000 0000  
    ```  
  
-   Equivalente a \+2 tranne per il fatto che è stato impostato il bit di segno.  Questo vale per tutti i numeri a virgola mobile in formato IEEE.  
  
    ```  
    -2  = -1  * 2**1  = 1100 0000 0000 0000 ... 0000 0000 = C000 0000  
    ```  
  
-   Stessa mantissa, l'esponente è stato incrementato di uno \(il valore distorto è 129 o 100 0000 1 in formato binario\).  
  
    ```  
    4  =  1  * 2**2  = 0100 0000 1000 0000 ... 0000 0000 = 4080 0000  
    ```  
  
-   Stesso esponente, la mantissa è maggiore della metà: è \(1,\) 100 0000 ...0000 0000, che, dal momento che si tratta di una frazione binaria, corrisponde a 1 1\/2 \(i valori delle cifre frazionarie sono 1\/2, 1\/4, 1\/8 e così via\).  
  
    ```  
    6  = 1.5 * 2**2  = 0100 0000 1100 0000 ... 0000 0000 = 40C0 0000  
    ```  
  
-   Stesso esponente delle altre potenze di due, la mantissa è uno meno due a 127 o 011 1111 1 in formato binario.  
  
    ```  
    1  = 1   * 2**0  = 0011 1111 1000 0000 ... 0000 0000 = 3F80 0000  
    ```  
  
-   L'esponente distorto è 126, 011 1111 0 in formato binario, e la mantissa è \(1,\) 100 0000 ... 0000 0000, che corrisponde a 1 1\/2.  
  
    ```  
    .75 = 1.5 * 2**-1 = 0011 1111 0100 0000 ... 0000 0000 = 3F40 0000  
    ```  
  
-   Esattamente uguale a due, tranne per il fatto che il bit che rappresenta 1\/4 è impostato nella mantissa.  
  
    ```  
    2.5 = 1.25 * 2**1 = 0100 0000 0010 0000 ... 0000 0000 = 4020 0000  
    ```  
  
-   1\/10 è una frazione ripetuta in formato binario.  La mantissa è appena inferiore a 1,6 e l'esponente distorto indica che 1,6 deve essere diviso per 16 \(è 011 1101 1 in formato binario, ovvero 123 in formato decimale\).  L'esponente effettivo è 123 – 127 \= –4, che indica che il fattore per cui moltiplicare è 2\*\*–4 \= 1\/16.  Si noti che la mantissa archiviata è arrotondata per eccesso nell'ultimo bit; si tratta di un tentativo di rappresentare nel modo più accurato possibile il numero non rappresentabile. Il motivo per cui 1\/10 e 1\/100 non sono rappresentabili in modo esatto in formato binario è analogo al motivo per cui 1\/3 non è rappresentabile in modo esatto in formato decimale.  
  
    ```  
    0.1 = 1.6 * 2**-4 = 0011 1101 1100 1100 ... 1100 1101 = 3DCC CCCD  
    ```  
  
-   `0  = 1.0 * 2**-128 = all zeros--a special case.`  
  
## Vedere anche  
 [Causa della possibile perdita di precisione dei numeri a virgola mobile](../../build/reference/why-floating-point-numbers-may-lose-precision.md)