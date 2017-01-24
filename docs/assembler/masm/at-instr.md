---
title: "@InStr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "@InStr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "@InStr symbol"
ms.assetid: 980d5b9f-2b88-4306-8955-df6cd2133e68
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# @InStr
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Macro funzione di cui cercare la prima occorrenza *stringa2* in *stringa1*, inizio a *percorso* da *stringa1*.  se *percorso* non viene visualizzata, la ricerca inizia all'inizio di *stringa1*.  Restituisce un Integer o 0 di posizione se *stringa2* non viene trovato.  
  
## Sintassi  
  
```  
  
@InStr( [[position]], string1, string2 )  
```  
  
## Vedere anche  
 [Symbols Reference](../../assembler/masm/symbols-reference.md)