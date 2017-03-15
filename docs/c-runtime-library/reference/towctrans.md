---
title: "towctrans | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "towctrans"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "towctrans"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "towctrans (funzione)"
ms.assetid: 1ed1e70d-7b31-490f-a7d9-42564b5924ca
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# towctrans
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasforma un carattere.  
  
## Sintassi  
  
```  
wint_t towctrans(  
   wint_t c,  
   wctrans_t category   
);  
```  
  
#### Parametri  
 `c`  
 Il carattere che si desidera trasformare.  
  
 `category`  
 Un identificatore che contiene il valore restituito da [wctrans](../../c-runtime-library/reference/wctrans.md).  
  
## Valore restituito  
 Il carattere `c`, dopo `towctrans` ha utilizzato la regola di trasformazione in `category`.  
  
## Note  
 Il valore di `category` deve essere stato restituito da una chiamata precedente a [wctrans](../../c-runtime-library/reference/wctrans.md) completata con successo.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`towctrans`|\<wctype.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere `wctrans` per un esempio di utilizzo di `towctrans`.  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)