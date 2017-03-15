---
title: "_putch, _putwch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_putwch"
  - "_putch"
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
  - "api-ms-win-crt-conio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_putch"
  - "putwch"
  - "_putwch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_putch (funzione)"
  - "_putwch (funzione)"
  - "caratteri, scrittura"
  - "console, scrittura di caratteri"
  - "putch (funzione)"
  - "putwch (funzione)"
ms.assetid: 3babc7cf-e333-405d-8449-c788d61d51aa
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _putch, _putwch
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive un carattere nella console.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
      int _putch(  
int c   
);  
wint_t _putwch(  
   wchar_t c  
);  
```  
  
#### Parametri  
 `c`  
 Carattere da restituire.  
  
## Valore restituito  
 Se ha esito positivo restituisce `c`.  Se `_putch` fallisce, restituisce `EOF`; se **\_putwch** fallisce, restituisce **WEOF**.  
  
## Note  
 Queste funzioni scrivono direttamente il carattere `c`, senza buffering, nella console.  In Windows NT, **\_putwch** scrive caratteri Unicode utilizzando l'impostazione locale corrente della console.  
  
 Le versioni con il suffisso **\_nolock** sono identiche ma non sono protette da interferenze da parte di altre thread.  Per ulteriori informazioni, vedere `_putch_nolock` e `_putwch_nolock`.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|**\_puttch**|`_putch`|`_putch`|**\_putwch**|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_putch`|\<conio.h\>|  
|**\_putwch**|\<conio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio relativo a [\_getch](../../c-runtime-library/reference/getch-getwch.md).  
  
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)   
 [\_getch, \_getwch](../../c-runtime-library/reference/getch-getwch.md)