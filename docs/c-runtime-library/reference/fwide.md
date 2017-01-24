---
title: "fwide | Microsoft Docs"
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
  - "fwide"
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
  - "fwide"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fwide (funzione)"
ms.assetid: a4641f5b-d74f-4946-95d5-53a64610d28d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# fwide
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Non implementato.  
  
## Sintassi  
  
```  
int fwide(  
   FILE *stream,  
   int mode;  
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore a una struttura di `FILE` \(ignorata\).  
  
 `mode`  
 La nuova larghezza del flusso: positivo per carattere di tipo, negativi per byte, zero per lasciare invariato. \(Questo valore viene ignorato.\)  
  
## Valore restituito  
 Questa funzione attualmente restituisce semplicemente `mode`.  
  
## Note  
 La versione corrente di questa funzione non è conforme allo standard.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fwide`|\<wchar.h\>|  
  
 Per ulteriori informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).