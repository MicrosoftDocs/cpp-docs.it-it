---
title: "__vmx_vmptrld | Microsoft Docs"
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
  - "__vmx_vmptrld"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__vmx_vmptrld (funzione intrinseca)"
  - "VMPTRLD (istruzione)"
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_vmptrld
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Carica il puntatore a una struttura di controllo corrente della macchina \(VMCS\) virtuale dall'indirizzo specificato.  
  
## Sintassi  
  
```  
int __vmx_vmptrld(   
   unsigned __int64 *VmcsPhysicalAddress   
);  
```  
  
#### Parametri  
 \[in\] \*`VmcsPhysicalAddress`  
 L'indirizzo dove il puntatore di VMCS viene archiviato.  
  
## Valore restituito  
 0  
 L'operazione è riuscita.  
  
 1  
 L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.  
  
 2  
 L'operazione non riesce senza stato disponibile.  
  
## Note  
 Il puntatore di VMCS è un indirizzo fisico a 64 bit.  
  
 La funzione di `__vmx_vmptrld` equivale all'istruzione macchina di `VMPTRLD` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel,„ numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_vmptrld`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmptrst](../intrinsics/vmx-vmptrst.md)