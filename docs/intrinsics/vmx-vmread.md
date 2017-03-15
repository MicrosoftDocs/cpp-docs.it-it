---
title: "__vmx_vmread | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__vmx_vmread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMREAD (istruzione)"
  - "__vmx_vmread (funzione intrinseca)"
ms.assetid: 08bdd7a0-6435-4ea6-b9a0-f592d870e5aa
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __vmx_vmread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Legge un campo specificato dalla struttura di controllo corrente della macchina \(VMCS\) virtuale e lo inserisce nella posizione specificata.  
  
## Sintassi  
  
```  
unsigned char __vmx_vmread(  
   size_t Field,  
   size_t *FieldValue  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `Field`|il campo di VMCS da leggere.|  
|\[in\] `FieldValue`|Un puntatore al percorso per archiviare il valore di leggere dal campo di VMCS specificato dal parametro di `Field` .|  
  
## Valore restituito  
  
|Valore|Significato|  
|------------|-----------------|  
|0|L'operazione è riuscita.|  
|1|L'operazione non riesce con lo stato esteso disponibile in `VM-instruction error field` corrente VMCS.|  
|2|L'operazione non riesce senza stato disponibile.|  
  
## Note  
 La funzione di `__vmx_vmread` equivale all'istruzione macchina di `VMREAD` .  Il valore del parametro di `Field` è un indice codificato del campo come descritto nella documentazione Intel.  Per ulteriori informazioni, la ricerca del documento, “caratteristica tecnica di virtualizzazione Intel per l'architettura di IA\-32 Intel,„ numero di documento C97063\-002, [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) nel sito, quindi consultare l'appendice C del documento.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__vmx_vmread`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_vmx\_vmwrite](../intrinsics/vmx-vmwrite.md)