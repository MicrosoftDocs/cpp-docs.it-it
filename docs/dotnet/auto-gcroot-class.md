---
title: "Classe auto_gcroot | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::auto_gcroot"
  - "msclr.auto_gcroot"
  - "auto_gcroot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_gcroot"
ms.assetid: b5790912-265d-463e-a486-47302e91042a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe auto_gcroot
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gestione delle risorse automatica \(come [Classe auto\_ptr](../standard-library/auto-ptr-class.md)\) che può essere utilizzata per incorporare un handle virtuale in un tipo nativo.  
  
## Sintassi  
  
```  
template<typename _element_type>  
class auto_gcroot;  
```  
  
#### Parametri  
 `_element_type`  
 Il tipo gestito da incorporare.  
  
## Requisiti  
 msclr \<\\ auto\_gcroot.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [auto\_gcroot](../dotnet/auto-gcroot.md)   
 [Membri auto\_gcroot](../dotnet/auto-gcroot-members.md)   
 [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)   
 [Classe auto\_handle](../dotnet/auto-handle-class.md)