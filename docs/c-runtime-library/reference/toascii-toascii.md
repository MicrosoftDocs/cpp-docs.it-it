---
title: "ToAscii, ToAscii | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__toascii"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__toascii"
  - "toascii"
  - "ctype/toascii"
  - "ctype/__toascii"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "toascii (funzione)"
  - "conversione di stringhe, caratteri ASCII"
  - "__toascii (funzione)"
  - "Caratteri ASCII, la conversione in"
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# ToAscii, ToAscii
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire caratteri ASCII a 7 bit dal troncamento.  
  
## Sintassi  
  
```  
int __toascii(  
   int c   
);  
#define toascii __toascii  
```  
  
#### Parametri  
 `c`  
 Carattere da convertire.  
  
## Valore restituito  
 `__toascii` Converte il valore di `c` per il codice ASCII a 7 bit intervallo e restituisce il risultato. Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 Il `__toascii` routine converte il carattere specificato in un carattere ASCII, verrà troncato a 7 bit di ordine inferiore. Non viene applicata alcuna trasformazione di altri.  
  
 Il `__toascii` routine è definita come macro, a meno che non è definito il \_CTYPE\_DISABLE\_MACROS macro del preprocessore. Per garantire la compatibilità, `toascii` è definito come macro solo quando [\_\_STDC\_\_](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario non è stato definito.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`toascii`, `__toascii`|C: \< CType. h \><br /><br /> C\+\+: \< cctype \> o \< CType. h \>|  
  
 Il `toascii` \(macro\) è un'estensione POSIX, e `__toascii` è un'implementazione specifica di Microsoft dell'estensione POSIX. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Funzioni to](../../c-runtime-library/to-functions.md)