---
title: "__vmx_on | Microsoft Docs"
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
  - "__vmx_on"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMXON (istruzione)"
  - "__vmx_on (funzione intrinseca)"
ms.assetid: 16804991-6a75-4adf-8ec2-bc95acfa4801
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_on
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Attiva l'operazione dell'estensione della macchina virtuale \(VMX\) nel processore.  
  
## Sintassi  
  
```  
unsigned char __vmx_on(  
   unsigned __int64 *VmsSupportPhysicalAddress  
);  
```  
  
#### Parametri  
 \[in\] `VmsSupportPhysicalAddress`  
 Un puntatore a un indirizzo fisico a 64 bit che indica una struttura di controllo della macchina \(VMCS\) virtuale.  
  
## Valore restituito  
  
|Valore|Significato|  
|------------|-----------------|  
|0|L'operazione è riuscita.|  
|1|L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.|  
|2|L'operazione non riesce senza stato disponibile.|  
  
## Note  
 La funzione di `__vmx_on` corrisponde all'istruzione macchina di `VMXON` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel,„ numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_on`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)