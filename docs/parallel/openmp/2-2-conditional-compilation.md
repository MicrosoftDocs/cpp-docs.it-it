---
title: "2.2 Conditional Compilation | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8f9c914d-736c-48cf-899d-c8029dbe1e32
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.2 Conditional Compilation
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_**OPENMP** il nome della macro è definito dalle implementazioni OpenMP\-compiacenti ad esempio la costante decimale yyyymm, che verrà l'anno e il mese della specifica approvata.  Questa macro non deve essere l'argomento relativo a **\#define** oppure  **\#undef** direttiva per il preprocessore.  
  
```  
#ifdef _OPENMP  
iam = omp_get_thread_num() + index;  
#endif  
```  
  
 Se i fornitori definiscono le estensioni in OpenMP, possono specificare le macro già definite.