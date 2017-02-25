---
title: "__p__fmode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__p__fmode"
apilocation: 
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__p__fmode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__p__fmode"
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# __p__fmode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Punta alla variabile globale `_fmode`, che specifica *la modalità di conversione di file* predefinita per operazioni di I\/O dei file.  
  
## Sintassi  
  
```cpp  
int* __p__fmode(  
   );  
```  
  
## Valore restituito  
 Puntatore alla variabile globale `_fmode`.  
  
## Note  
 La funzione `__p__fmode` è solo per utilizzo interno e non deve essere chiamata dal codice utente.  
  
 La modalità di conversione di file specifica una conversione `binary` o `text` per la funzione [\_open](../c-runtime-library/reference/open-wopen.md) e le operazioni [\_pipe](../c-runtime-library/reference/pipe.md) di I\/O.  Per ulteriori informazioni, vedere [\_fmode](../c-runtime-library/fmode.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_p\_\_fmode|stdlib.h|