---
title: "__inbyte | Microsoft Docs"
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
  - "__inbyte"
  - "__inbyte_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in (istruzione)"
  - "__inbyte (funzione intrinseca)"
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __inbyte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `in` , restituendo un byte letti dalla porta specificata da `Port`.  
  
## Sintassi  
  
```  
unsigned char __inbyte(  
   unsigned short Port  
);  
```  
  
#### Parametri  
 \[in\] `Port`  
 La porta da leggere.  
  
## Valore restituito  
 Il byte letti dalla porta specificata.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__inbyte`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Note  
 Questa procedura è disponibile solo come intrinseci.  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)