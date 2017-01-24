---
title: "__vmx_vmresume | Microsoft Docs"
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
  - "__vmx_vmresume"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__vmx_vmresume (funzione intrinseca)"
  - "VMRESUME (istruzione)"
ms.assetid: 233fe1b6-c727-493a-a484-1b2363732281
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_vmresume
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Riprende l'operazione non radice VMX usando la struttura di controllo della macchina virtuale corrente \(VMCS, Virtual machine Control Structure\).  
  
## Sintassi  
  
```  
unsigned char __vmx_vmresume(  
   void);  
```  
  
## Valore restituito  
  
|Valore|Significato|  
|------------|-----------------|  
|0|Operazione completata.|  
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|  
|2|Operazione non riuscita senza stato disponibile.|  
  
## Note  
 Un'applicazione può eseguire un'operazione di accesso VM con la funzione [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md) o `__vmx_vmresume`. La funzione `__vmx_vmlaunch` può essere usata solo con una VMCS il cui stato di avvio è `Clear` e la funzione `__vmx_vmresume` può essere usata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, usare la funzione [\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato di avvio di una VMCS su `Clear` e quindi usare la funzione `__vmx_vmlaunch` per la prima operazione di accesso VM e la funzione `__vmx_vmresume` per le operazioni di accesso VM successive.  
  
 La funzione `__vmx_vmresume` è equivalente alle `VMRESUME` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento PDF sulle specifiche tecniche di virtualizzazione Intel per l'architettura Intel IA\-32, numero documento C97063\-002 sul sito [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127).  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__vmx_vmresume`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmlaunch](../intrinsics/vmx-vmlaunch.md)   
 [\_\_vmx\_vmclear](../intrinsics/vmx-vmclear.md)