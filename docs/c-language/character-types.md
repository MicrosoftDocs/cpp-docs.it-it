---
title: "Tipi di carattere | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "dati di tipo carattere [C]"
  - "tipi [C], carattere"
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi di carattere
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una costante carattere Integer non preceduta dalla lettera **L** presenta il tipo `int`.  Il valore di una costante carattere Integer che contiene un carattere singolo è il valore numerico del carattere interpretato come Integer.  Ad esempio, il valore numerico del carattere `a` in formato decimale è 97 e in formato esadecimale 61.  
  
 Da un punto di vista sintattico, una costante carattere "wide" è una costante carattere preceduta dalla lettera **L**.  Una costante carattere "wide" presenta il tipo `wchar_t`, un tipo Integer definito nel file di intestazione STDDEF.H.  Ad esempio:  
  
```  
char    schar =  'x';   /* A character constant          */  
wchar_t wchar = L'x';   /* A wide-character constant for   
                            the same character           */  
```  
  
 Le costanti carattere "wide" hanno un'ampiezza di 16 bit e specificano i membri del set di caratteri di esecuzione esteso.  Consentono di esprimere in alfabeti caratteri che sono troppo grandi per essere rappresentati dal tipo `char`.  Per ulteriori informazioni sui caratteri "wide", vedere [Caratteri multibyte e "wide"](../c-language/multibyte-and-wide-characters.md).  
  
## Vedere anche  
 [Costanti carattere C](../c-language/c-character-constants.md)