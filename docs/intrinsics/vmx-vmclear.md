---
title: "__vmx_vmclear | Microsoft Docs"
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
  - "__vmx_vmclear"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMCLEAR (istruzione)"
  - "__vmx_vmclear (funzione intrinseca)"
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_vmclear
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Inizializza la struttura di controllo specificata della \(VMCS\) macchina virtuale e imposta lo stato originale a `Clear`.  
  
## Sintassi  
  
```  
unsigned char __vmx_vmclear(  
   unsigned __int64 *VmcsPhysicalAddress  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `VmcsPhysicalAddress`|Un puntatore a una posizione di memoria a 64 bit che contiene l'indirizzo fisico di VMCS per cancellare.|  
  
## Valore restituito  
  
|Valore|Significato|  
|------------|-----------------|  
|0|L'operazione è riuscita.|  
|1|L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.|  
|2|L'operazione non riesce senza stato disponibile.|  
  
## Note  
 Un'applicazione può eseguire un'operazione di VM\-immettere utilizzando [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) o la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) .  La funzione di [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere utilizzata solo con un VMCS con lo stato originale viene `Clear`e la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) può essere utilizzata solo con un VMCS con lo stato originale viene `Launched`.  Di conseguenza, utilizzare la funzione di [\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato originale di un VMCS a `Clear`.  Utilizzare la funzione di [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima VM\-immettono l'operazione e la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) per le successive VM\-immette le operazioni.  
  
 La funzione di `__vmx_vmclear` equivale all'istruzione macchina di `VMCLEAR` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel,„ numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_vmclear`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md)   
 [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md)