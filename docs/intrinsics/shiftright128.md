---
title: "__shiftright128 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__shiftright128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__shiftright128 intrinsic"
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# __shiftright128
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a destra di un numero di bit specificato da `Shift` e restituisce i 64 bit meno significativi del risultato.  
  
## Sintassi  
  
```  
unsigned __int64 __shiftright128(     unsigned __int64 LowPart,     unsigned __int64 HighPart,     unsigned char Shift  );  
```  
  
#### Parametri  
 \[in\] `LowPart`  
 I 64 bit meno significativi della quantità di 128 bit da spostare.  
  
 \[in\] `HighPart`  
 I 64 bit più significativi della quantità di 128 bit da spostare.  
  
 \[in\] `Shift`  
 Numero di bit da spostare.  
  
## Valore restituito  
 I 64 bit meno significativi del risultato.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__shiftright128`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftright128(0, 1, 64)`, la funzione sposterà la parte più significativa di `0` bit a destra e restituirà la parte meno significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.  
  
## Esempio  
 Per un esempio, vedere [\_\_shiftleft128](../intrinsics/shiftleft128.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_\_shiftleft128](../intrinsics/shiftleft128.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)