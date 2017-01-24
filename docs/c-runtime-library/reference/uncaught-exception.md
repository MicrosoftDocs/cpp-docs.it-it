---
title: "__uncaught_exception | Microsoft Docs"
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
  - "__uncaught_exception"
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
  - "__uncaught_exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__uncaught_exception"
ms.assetid: 4d9b75c6-c9c7-4876-b761-ea9ab1925e96
caps.latest.revision: 2
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __uncaught_exception
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica se una o più eccezioni sono state generate, ma non sono ancora stati gestiti dal blocco corrispondente `catch` di un'istruzione [try\-catch](../../cpp/try-throw-and-catch-statements-cpp.md).  
  
## Sintassi  
  
```cpp  
bool __uncaught_exception(  
   );  
```  
  
## Valore restituito  
 `true` dal momento in cui un'eccezione viene generata in un blocco `try` fino a quando il blocco `catch` di corrispondenza è stato inizializzato; in caso contrario, `false`.  
  
## Note  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_uncaught\_exception|eh.h|  
  
## Vedere anche  
 [Istruzioni try, throw e catch \(C\+\+\)](../../cpp/try-throw-and-catch-statements-cpp.md)