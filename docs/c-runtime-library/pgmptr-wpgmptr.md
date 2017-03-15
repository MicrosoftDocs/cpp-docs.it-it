---
title: "_pgmptr, _wpgmptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pgmptr"
  - "_pgmptr"
  - "wpgmptr"
  - "_wpgmptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_pgmptr (funzione)"
  - "_wpgmptr (funzione)"
  - "pgmptr (funzione)"
  - "wpgmptr (funzione)"
ms.assetid: 4d44b515-0eff-4136-8bc4-684195f218f5
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _pgmptr, _wpgmptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Percorso del file eseguibile.  Deprecato; utilizzare [\_get\_pgmptr](../c-runtime-library/reference/get-pgmptr.md) e [\_get\_wpgmptr](../c-runtime-library/reference/get-wpgmptr.md).  
  
## Sintassi  
  
```  
extern char *_pgmptr;  
extern wchar_t *_wpgmptr;  
```  
  
## Note  
 Quando un programma viene eseguito dall'interprete di comando \(Cmd.exe\), `_pgmptr` viene automaticamente inizializzato al percorso completo del file eseguibile.  Ad esempio, se Hello.exe è in C:\\BIN e C:\\BIN nel percorso, `_pgmptr` è impostato su C:\\BIN\\Hello.exe quando si esegue:  
  
```  
C> hello   
```  
  
 Quando un programma non viene eseguito dalla riga di comando, `_pgmptr` è possibile inizializzarlo con il nome del programma \(il nome di base del file senza l'estensione di file\) o ad un nome file, un percorso relativo oppure un percorso completo.  
  
 `_wpgmptr` è l'equivalente a caratteri estesi di `_pgmptr` da utilizzare con i programmi che utilizzano `wmain`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|  
  
## Requisiti  
  
|Variabile|Intestazione obbligatoria|  
|---------------|-------------------------------|  
|`_pgmptr`, `_wpgmptr`|\<stdlib.h\>|  
  
## Esempio  
 Nel programma seguente viene illustrato l'utilizzo di `_pgmptr`.  
  
```  
// crt_pgmptr.c  
// compile with: /W3  
// The following program demonstrates the use of _pgmptr.  
//  
#include <stdio.h>  
#include <stdlib.h>  
int main( void )  
{  
   printf("The full path of the executing program is : %Fs\n",   
     _pgmptr); // C4996  
   // Note: _pgmptr is deprecated; use _get_pgmptr instead  
}  
```  
  
 È possibile utilizzare `_wpgmptr` modificando `%Fs` a `%S` e `main` a `wmain`.  
  
## Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)