---
title: "_vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vcprintf_p"
  - "_vcwprintf_p_l"
  - "_vcprintf_p_l"
  - "_vcwprintf_p"
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
  - "vcwprintf_p"
  - "vcprintf_p_l"
  - "_vcprintf_p"
  - "_vcprintf_p_l"
  - "vcwprintf_p_l"
  - "vcprintf_p"
  - "_vcwprintf_p"
  - "_vcwprintf_p_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_vcprintf_p (funzione)"
  - "_vcprintf_p_l (funzione)"
  - "_vcwprintf_p (funzione)"
  - "_vcwprintf_p_l (funzione)"
  - "_vtcprintf_p (funzione)"
  - "_vtcprintf_p_l (funzione)"
  - "vcprintf_p (funzione)"
  - "vcprintf_p_l (funzione)"
  - "vcwprintf_p (funzione)"
  - "vcwprintf_p_l (funzione)"
  - "vtcprintf_p (funzione)"
  - "vtcprintf_p_l (funzione)"
ms.assetid: 611024cc-90e7-41db-8e85-145ca95012b1
caps.latest.revision: 20
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive l'output formattato nella console usando un puntatore a un elenco di argomenti e supporta i parametri posizionali nella stringa di formato.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _vcprintf_p(  
   const char* format,  
   va_list argptr  
);  
int _vcprintf_p_l(  
   const char* format,  
   locale_t locale,  
   va_list argptr  
);  
int _vcwprintf_p(  
   const wchar_t* format,  
   va_list argptr  
);  
int _vcwprintf_p_l(  
   const wchar_t* format,  
   locale_t locale,  
   va_list argptr  
);  
```  
  
#### Parametri  
 `format`  
 Specifica del formato.  
  
 `argptr`  
 Un puntatore a un elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per ulteriori informazioni, vedere [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 Il numero di caratteri che vengono scritti o un valore negativo se si verifica un errore di output.  Se `format` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito \-1.  
  
## Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi usa la funzione `_putch` per formattare e scrivere i dati specificati nella console.  \(`_vcwprintf_p` usa `_putwch` anziché `_putch`.  `_vcwprintf_p` è la versione a caratteri wide di `_vcprintf_p`.  Accetta una stringa di caratteri wide come argomento\).  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali correnti.  
  
 Eventuali `argument` vengono convertiti ed emessi in base alla specifica del formato corrispondente in `format`.  La specifica del formato supporta i parametri posizionali in modo da poter specificare l'ordine in cui gli argomenti vengono usati nella stringa di formato.  Per altre informazioni, vedere [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 Queste funzioni non convertono i caratteri di avanzamento di riga in combinazioni di caratteri di ritorno a capo ed avanzamento di riga \(CR e LF\) quando vengono restituiti.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 Queste funzioni convalidano il puntatore di input e la stringa di formato.  Se `format` o `argument` è `NULL` o se la stringa di formato contiene caratteri di formattazione non validi, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vtcprintf_p`|`_vcprintf_p`|`_vcprintf_p`|`_vcwprintf_p`|  
|`_vtcprintf_p_l`|`_vcprintf_p_l`|`_vcprintf_p_l`|`_vcwprintf_p_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_vcprintf_p`, `_vcprintf_p_l`|\<conio.h\> e \<stdarg.h\>|  
|`_vcwprintf_p`, `_vcwprintf_p_l`|\<conio.h\> e \<stdarg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_vcprintf_p.c  
// compile with: /c  
#include <conio.h>  
#include <stdarg.h>  
  
// An error formatting function that's used to print to the console.  
int eprintf(const char* format, ...)  
{  
  va_list args;  
  va_start(args, format);  
  return _vcprintf_p(format, args);  
}  
  
int main()  
{  
   int n = eprintf("parameter 2 = %2$d; parameter 1 = %1$s\r\n",  
      "one", 222);  
   _cprintf_s("%d characters printed\r\n");  
}  
```  
  
  **parameter 2 \= 222; parameter 1 \= one**  
**38 characters printed**   
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)   
 [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md)