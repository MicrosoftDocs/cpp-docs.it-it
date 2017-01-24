---
title: "__p__commode | Microsoft Docs"
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
  - "__p__commode"
apilocation: 
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__p__commode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__p__commode"
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
caps.latest.revision: 2
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __p__commode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Punta alla variabile globale `_commode`, che specifica *la modalità di commit di file* predefinita per operazioni di I\/O dei file.  
  
## Sintassi  
  
```cpp  
int * __p__commode(  
   );  
```  
  
## Valore restituito  
 Puntatore alla variabile globale `_commode`.  
  
## Note  
 La funzione `__p__commode` è solo per utilizzo interno e non deve essere chiamata dal codice utente.  
  
 La modalità di commit del file specifica quando i dati critici vengono scritti nel disco.  Per ulteriori informazioni, vedere [fflush](../c-runtime-library/reference/fflush.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_p\_\_commode|internal.h|