---
title: "iscsym, iscsymf, iscsym, iswcsym, iscsymf, iswcsymf, iscsym_l, iswcsym_l, iscsymf_l, iswcsymf_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_iswcsym_l"
  - "__iswcsym"
  - "__iscsym"
  - "_iswcsymf_l"
  - "_iscsym_l"
  - "__iswcsymf"
  - "__iscsymf"
  - "_iscsymf_l"
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
  - "_iswcsym_l"
  - "_iswcsymf_l"
  - "iscsymf"
  - "iswcsymf"
  - "__iswcsym"
  - "__iswcsymf"
  - "iscsym"
  - "iswcsym"
  - "__iscsym"
  - "_iscsym_l"
  - "_iscsymf_l"
  - "__iscsymf"
  - "ctype/iscsym"
  - "ctype/iscsymf"
  - "ctype/__iscsym"
  - "ctype/__iscsymf"
  - "ctype/__iscsym_l"
  - "ctype/__iscsymf_l"
  - "ctype/__iswcsym"
  - "ctype/__iswcsymf"
  - "ctype/__iswcsym_l"
  - "ctype/__iswcsymf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "iscsymf_l (funzione)"
  - "iswsym_l (funzione)"
  - "_iswcsym_l (funzione)"
  - "iscsym_l (funzione)"
  - "_iscsymf_l (funzione)"
  - "_iswcsymf_l (funzione)"
  - "_iscsym_l (funzione)"
  - "__iscsym (funzione)"
  - "__iswcsymf (funzione)"
  - "iswsymf_l (funzione)"
  - "__iscsymf (funzione)"
  - "__iswcsym (funzione)"
  - "iscsym (funzione)"
  - "iscsymf (funzione)"
ms.assetid: 944dfb99-f2b8-498c-9f55-dbcf370d0a2c
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# iscsym, iscsymf, iscsym, iswcsym, iscsymf, iswcsymf, iscsym_l, iswcsym_l, iscsymf_l, iswcsymf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determinare se un Integer rappresenta un carattere che può essere utilizzato in un identificatore.  
  
## Sintassi  
  
```  
int __iscsym(   
   int c   
);  
int __iswcsym(   
   wint_t c   
);  
int __iscsymf(   
   int c   
);  
int __iswcsymf(   
   wint_t c   
);  
int _iscsym_l(   
   int c,  
   _locale_t locale  
);  
int _iswcsym_l(   
   wint_t c,  
   _locale_t locale  
);  
int _iscsymf_l(   
   int c,  
   _locale_t locale  
);  
int _iswcsymf_l(   
   wint_t c,  
   _locale_t locale  
);  
#define iscsym __iscsym  
#define iscsymf __iscsymf  
```  
  
#### Parametri  
 `c`  
 Valore Integer da testare.`c` deve essere nell'intervallo compreso tra 0 e 255 per la versione di caratteri narrow della funzione.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Entrambi `__iscsym` e `__iswcsym` restituiscono un valore diverso da zero se `c` è una lettera, un carattere di sottolineatura o una cifra. Entrambi `__iscsymf` e `__iswcsymf` restituiscono un valore diverso da zero se `c` è una lettera o un carattere di sottolineatura. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test. Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Note  
 Queste routine sono definite come macro, a meno che non è definito il \_CTYPE\_DISABLE\_MACROS macro del preprocessore. Quando si utilizzano le versioni di macro di queste routine, gli argomenti possono essere valutati più volte. Prestare attenzione quando si utilizzano espressioni con effetti collaterali nell'elenco degli argomenti.  
  
 Per garantire la compatibilità, `iscsym` e `iscsymf` sono definiti come macro solo quando [\_\_STDC\_\_](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario sono indefiniti.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`iscsym`, `iscsymf`, `__iscsym`, `__iswcsym`, `__iscsymf`, `__iswcsymf`, `_iscsym_l`, `_iswcsym_l`, `_iscsymf_l`, `_iswcsymf_l`|C: \< CType. h \><br /><br /> C\+\+: \< cctype \> o \< CType. h \>|  
  
 Il `iscsym`, `iscsymf`, `__iscsym`, `__iswcsym`, `__iscsymf`, `__iswcsymf`, `_iscsym_l`, `_iswcsym_l`, `_iscsymf_l`, e `_iswcsymf_l` routine sono specifici di Microsoft. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)