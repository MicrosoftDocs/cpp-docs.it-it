---
title: "__outbytestring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__outbytestring"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rep outsb (istruzione)"
  - "__outbytestring (funzione intrinseca)"
  - "outsb (istruzione)"
ms.assetid: c9150661-9c18-427f-bae8-710bba6ed78c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# __outbytestring
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `rep outsb` , che invia il primo byte di `Count` dei dati operazioni da `Buffer` alla porta specificata da `Port`.  
  
## Sintassi  
  
```  
void __outbytestring(   
   unsigned short Port,   
   unsigned char* Buffer,   
   unsigned long Count   
);  
```  
  
#### Parametri  
 \[in\] `Port`  
 La porta per inviare i dati a.  
  
 \[in\] `Buffer`  
 i dati da spedire la porta specificata.  
  
 \[in\] `Count`  
 Il numero di byte dei dati da inviare.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__outbytestring`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa procedura è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)