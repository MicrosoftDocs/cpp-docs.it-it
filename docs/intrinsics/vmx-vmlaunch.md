---
title: "__vmx_vmlaunch | Microsoft Docs"
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
  - "__vmx_vmlaunch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMLAUNCH (istruzione)"
  - "__vmx_vmlaunch (funzione intrinseca)"
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_vmlaunch
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Posizionamento dell'applicazione chiamante VMX nello stato di operazione non radice \(VM invio\) tramite la struttura di controllo corrente della macchina \(VMCS\) virtuale.  
  
## Sintassi  
  
```  
unsigned char __vmx_vmlaunch(  
   void);  
```  
  
## Valore restituito  
  
|Valore|Significato|  
|------------|-----------------|  
|0|L'operazione è riuscita.|  
|1|L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.|  
|2|L'operazione non riesce senza stato disponibile.|  
  
## Note  
 Un'applicazione può eseguire un'operazione di VM\-immettere utilizzando [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) o la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) .  La funzione di [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere utilizzata solo con un VMCS con lo stato originale viene `Clear`e la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) può essere utilizzata solo con un VMCS con lo stato originale viene `Launched`.  Di conseguenza, utilizzare la funzione di [\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato originale di un VMCS a `Clear`quindi utilizzare la funzione di [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima VM\-immettono l'operazione e la funzione di [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md) per le successive VM\-immette le operazioni.  
  
 La funzione di `__vmx_vmlaunch` equivale all'istruzione macchina di `VMLAUNCH` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel,„ numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_vmlaunch`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmresume](../intrinsics/vmx-vmresume.md)   
 [\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md)