---
title: "_abnormal_termination | Microsoft Docs"
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
  - "_abnormal_termination"
apilocation: 
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_abnormal_termination"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_abnormal_termination"
ms.assetid: 952970a4-9586-4c3d-807a-db729448c91c
caps.latest.revision: 2
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _abnormal_termination
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se il blocco `__finally` di [un'istruzione try\-finally](../cpp/try-finally-statement.md) viene inserito mentre il sistema esegue un elenco interno dei gestori di terminazione.  
  
## Sintassi  
  
```cpp  
int   _abnormal_termination(  
   );  
```  
  
## Valore restituito  
 `true` se il sistema *sta rimuovendo lo* stack; in caso contrario, `false`.  
  
## Note  
 Si tratta di una funzione interna utilizzata per gestire eccezioni di rimozione e non deve essere chiamata dal codice utente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_abnormal\_termination|excpt.h|  
  
## Vedere anche  
 [Istruzione try\-finally](../cpp/try-finally-statement.md)