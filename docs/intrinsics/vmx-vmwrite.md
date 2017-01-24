---
title: "__vmx_vmwrite | Microsoft Docs"
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
  - "__vmx_vmwrite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__vmx_vmwrite (funzione intrinseca)"
  - "VMWRITE (istruzione)"
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __vmx_vmwrite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Scrive il valore specificato nel campo specificato nella struttura di controllo corrente della macchina \(VMCS\) virtuale.  
  
## Sintassi  
  
```  
unsigned char __vmx_vmwrite(   
   size_t Field,  
   size_t FieldValue  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `Field`|Il campo di VMCS da scrivere.|  
|\[in\] `FieldValue`|Il valore nel campo di VMCS.|  
  
## Valore restituito  
 0  
 L'operazione è riuscita.  
  
 1  
 L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.  
  
 2  
 L'operazione non riesce senza stato disponibile.  
  
## Note  
 La funzione di `__vmx_vmwrite` equivale all'istruzione macchina di `VMWRITE` .  Il valore del parametro di `Field` è un indice codificato del campo come descritto nella documentazione Intel.  Per ulteriori informazioni, la ricerca del documento, “la caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel, il numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) al sito e quindi consultano l'appendice C del documento.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_vmwrite`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmread](../intrinsics/vmx-vmread.md)