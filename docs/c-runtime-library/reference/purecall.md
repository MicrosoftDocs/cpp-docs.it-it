---
title: "_purecall | Microsoft Docs"
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
  - "_purecall"
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
  - "purecall"
  - "_purecall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_purecall (funzione)"
  - "purecall (funzione)"
ms.assetid: 56135d9b-3403-4e22-822d-e714523801cc
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _purecall
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il gestore errori chiamata di funzione virtuale pura predefinito. Il compilatore genera codice per chiamare questa funzione quando viene chiamata una funzione membro virtuale pura.  
  
## Sintassi  
  
```  
extern "C" int __cdecl _purecall();  
```  
  
## Note  
 Il `_purecall` funzione è un dettaglio di implementazione specifici di Microsoft del compilatore Microsoft Visual C\+\+. Questa funzione non deve essere chiamato direttamente dal codice e non dispone di alcuna dichiarazione intestazione pubblica. È documentato qui perché si tratta di un'esportazione pubblica della libreria di Runtime C.  
  
 Una chiamata a una funzione virtuale pura è un errore perché non è implementata. Il compilatore genera codice per richiamare il `_purecall` funzione del gestore errori quando viene chiamata una funzione virtuale pura. Per impostazione predefinita, `_purecall` Termina il programma. Prima della chiusura, il `_purecall` funzione richiama un `_purecall_handler` funzione se ne è stato impostato per il processo. È possibile installare il proprio funzione del gestore errori per le chiamate di funzione virtuale pura, a rilevarli per il debug o la creazione di report. Per utilizzare il proprio gestore degli errori, creare una funzione che ha il `_purecall_handler` firma, quindi utilizzare [set\_purecall\_handler](../../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md) per renderlo il gestore corrente.  
  
## Requisiti  
 Il `_purecall` funzione dispone di una dichiarazione di intestazione. Il `_purecall_handler` typedef è definito in \< STDLIB. h \>.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [\_get\_purecall\_handler, set\_purecall\_handler](../../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)