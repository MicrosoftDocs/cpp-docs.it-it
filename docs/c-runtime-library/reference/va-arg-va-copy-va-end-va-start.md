---
title: "va_arg, va_copy, va_end, va_start | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "va_arg"
  - "va_end"
  - "va_copy"
  - "va_start"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "va_arg"
  - "va_start"
  - "va_list"
  - "va_alist"
  - "va_dcl"
  - "va_copy"
  - "va_end"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "elenchi di argomenti variabili, l'accesso"
  - "va_start (macro)"
  - "va_arg (macro)"
  - "va_end (macro)"
  - "argomenti [C++], elenchi di argomenti"
  - "va_list (macro)"
  - "va_dcl (macro)"
  - "va_alist (macro)"
  - "va_copy (macro)"
ms.assetid: a700dbbd-bfe5-4077-87b6-3a07af74a907
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# va_arg, va_copy, va_end, va_start
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Elenchi di accessi argomento variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      type va_arg(  
   va_list arg_ptr,  
   type   
);void va_copy(  
   va_list dest,  
   va_list src  
); // (ISO C99 and later)  
void va_end(  
   va_list arg_ptr   
);  
void va_start(  
   va_list arg_ptr,  
   prev_param   
); // (ANSI C89 and later)  
void va_start(  
   arg_ptr   
);  // (Pre-ANSI C89 standardization version)  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Tipo di argomento da recuperare.  
  
 `arg_ptr`  
 Puntatore all'elenco di argomenti.  
  
 `dest`  
 Puntatore all'elenco di argomenti per l'inizializzazione `src`  
  
 `src`  
 Puntatore all'elenco di argomenti in cui copiare inizializzato `dest`.  
  
 `prev_param`  
 Parametro che precede il primo argomento facoltativo.  
  
## <a name="return-value"></a>Valore restituito  
 `va_arg` Restituisce l'argomento corrente. `va_copy`, `va_start` e `va_end` non restituiscono valori.  
  
## <a name="remarks"></a>Note  
 Il `va_arg`, `va_copy`, `va_end`, e `va_start` macro offrono un modo portabile per accedere agli argomenti a una funzione quando la funzione accetta un numero variabile di argomenti. Esistono due versioni delle macro: macro definite in STDARG. H è conforme a ISO C99 standard; macro definite in VARARGS. H sono deprecate, ma vengono mantenuti per compatibilità con il codice che è stato scritto prima il C89 ANSI standard.  
  
 Queste macro presuppongono che la funzione accetta un numero fisso di argomenti obbligatori, seguito da un numero variabile di argomenti facoltativi. Gli argomenti obbligatori vengono dichiarati come parametri comuni per la funzione e sono accessibili tramite i nomi dei parametri. Gli argomenti facoltativi sono accessibili tramite le macro in STDARG. H (o VARARGS. H per codice che è stato scritto prima lo standard ANSI C89), che imposta un puntatore al primo argomento facoltativo nell'elenco di argomenti, recupera gli argomenti nell'elenco e reimposta il puntatore del mouse al termine dell'elaborazione degli argomenti.  
  
 C standard macro, definite in STDARG. H, vengono usate come segue:  
  
-   `va_start` imposta `arg_ptr` per il primo argomento facoltativo nell'elenco di argomenti passati alla funzione. L'argomento `arg_ptr` deve avere il `va_list` tipo. L'argomento `prev_param` è il nome del parametro obbligatorio che precede il primo argomento facoltativo nell'elenco di argomenti. Se `prev_param` viene dichiarata con la classe di archiviazione, il comportamento della macro non è definito. `va_start` prima è necessario utilizzare `va_arg` viene utilizzato per la prima volta.  
  
-   `va_arg` Recupera un valore di `type` dal percorso specificato da `arg_ptr`, e incrementa `arg_ptr` in modo da puntare all'argomento successivo nell'elenco utilizzando la dimensione di `type` per determinare quando si avvia l'argomento successivo. `va_arg` può essere utilizzato qualsiasi numero di volte in cui nella funzione per recuperare gli argomenti nell'elenco.  
  
-   `va_copy` Crea una copia di un elenco di argomenti nello stato corrente. Il `src` parametro deve essere già stato inizializzato con `va_start`; potrebbero essere stati aggiornato con `va_arg` chiama, ma è necessario non sono state reimpostate con `va_end`. L'argomento successivo verrà recuperato da `va_arg` da `dest` corrisponde all'argomento successivo che viene recuperato dalla `src`.  
  
-   Dopo che tutti gli argomenti sono stati recuperati, `va_end` Reimposta il puntatore **NULL**. `va_end` deve essere chiamato per ogni elenco di argomenti che viene inizializzato con `va_start` o `va_copy` prima che la funzione restituisce.  
  
> [!NOTE]
>  Le macro in VARARGS. H sono deprecati e viene mantenuta solo per garantire la compatibilità con il codice che è stato scritto prima lo standard ANSI C89. In tutti gli altri casi, utilizzare le macro in STDARGS. H.  
  
 Quando vengono compilati utilizzando [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md), i programmi che utilizzano queste macro potrebbero generare risultati imprevisti a causa delle differenze tra sistemi di tipi nativi e common language runtime (CLR). Considerare questo programma:  
  
```  
#include <stdio.h>  
#include <stdarg.h>  
  
void testit (int i, ...)  
{  
    va_list argptr;  
    va_start(argptr, i);  
  
    if (i == 0)  
    {  
        int n = va_arg(argptr, int);  
        printf("%d\n", n);  
    }  
    else  
    {  
        char *s = va_arg(argptr, char*);  
        printf("%s\n", s);  
    }  
}  
  
int main()  
{  
    testit(0, 0xFFFFFFFF); // 1st problem: 0xffffffff is not an int  
    testit(1, NULL);       // 2nd problem: NULL is not a char*  
}  
```  
  
 Si noti che `testit` prevede che il secondo parametro sia un `int` o `char*`. Gli argomenti passati sono 0xffffffff (un `unsigned int`, non un `int`) e `NULL` (in realtà un `int`, non un `char*`). Quando il programma viene compilato per il codice nativo, produce il seguente output:  
  
```Output  
-1  
  
(null)  
```  
  
 Tuttavia, quando il programma viene compilato mediante **/clr: pure**, il tipo non corrisponde causano la generazione di un'eccezione. La soluzione consiste nell'utilizzare cast espliciti:  
  
```  
int main()  
{  
   testit( 0, (int)0xFFFFFFFF ); // cast unsigned to int  
   testit( 1, (char*)NULL );     // cast int to char*  
}  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< stdio. h > e \< stdarg. h >  
  
 **Intestazione obsoleto:** \< varargs >  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni di [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_va.c  
/* Compile with: cl /W3 /Tc crt_va.c  
 * The program below illustrates passing a variable  
 * number of arguments using the following macros:  
 *      va_start            va_arg              va_copy  
 *      va_end              va_list  
 */  
  
#include <stdio.h>  
#include <stdarg.h>  
#include <math.h>  
  
double deviation(int first, ...);  
  
int main( void )  
{  
    /* Call with 3 integers (-1 is used as terminator). */  
    printf("Deviation is: %f\n", deviation(2, 3, 4, -1 ));  
  
    /* Call with 4 integers. */  
    printf("Deviation is: %f\n", deviation(5, 7, 9, 11, -1));  
  
    /* Call with just -1 terminator. */  
    printf("Deviation is: %f\n", deviation(-1));  
}  
  
/* Returns the standard deviation of a variable list of integers. */  
double deviation(int first, ...)  
{  
    int count = 0, i = first;  
    double mean = 0.0, sum = 0.0;  
    va_list marker;  
    va_list copy;  
  
    va_start(marker, first);     /* Initialize variable arguments. */  
    va_copy(copy, marker);       /* Copy list for the second pass */  
    while (i != -1)  
    {  
        sum += i;  
        count++;  
        i = va_arg(marker, int);  
    }  
    va_end(marker);              /* Reset variable argument list. */  
    mean = sum ? (sum / count) : 0.0;  
  
    i = first;                  /* reset to calculate deviation */  
    sum = 0.0;  
    while (i != -1)  
    {  
        sum += (i - mean)*(i - mean);  
        i = va_arg(copy, int);  
    }  
    va_end(copy);               /* Reset copy of argument list. */  
    return count ? sqrt(sum / count) : 0.0;  
}  
  
```  
  
## <a name="output"></a>Output  
  
```Output  
Deviation is: 0.816497  
Deviation is: 2.236068  
Deviation is: 0.000000  
  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 [Classe System::ParamArrayAttribute](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso agli argomenti](../../c-runtime-library/argument-access.md)   
 [vfprintf, vfprintf_l, vfwprintf, vfwprintf_l](../../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)