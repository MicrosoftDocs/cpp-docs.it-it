---
title: "spazio dei nomi predefinito | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "default_CPP"
dev_langs: 
  - "C++"
ms.assetid: 4712e9dc-57ba-43cc-811e-022e1dae4de8
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# spazio dei nomi predefinito
Lo spazio dei nomi `default` definisce l'ambito dei tipi incorporati supportati da [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\).  
  
## Sintassi  
  
```  
namespace default;  
```  
  
## Membri  
 Tutti i tipi incorporati ereditano i membri seguenti.  
  
|||  
|-|-|  
|[Metodo default::\(type\_name\)::Equals](../cppcx/default-type-name-equals-method.md)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[Metodo default::\(type\_name\)::GetHashCode](../cppcx/default-type-name-gethashcode-method.md)|Restituisce il codice hash per l'istanza.|  
|[Metodo default::\(type\_name\)::GetType](../cppcx/default-type-name-gettype-method.md)|Restituisce una stringa che rappresenta il tipo corrente.|  
|[Metodo default::\(type\_name\)::ToString](../cppcx/default-type-name-tostring-method.md)|Restituisce una stringa che rappresenta il tipo corrente.|  
  
### Tipi incorporati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`char16`|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode \(UTF\-16\).|  
|`float32`|Numero a virgola mobile IEEE 754 a 32 bit.|  
|`float64`|Numero a virgola mobile IEEE 754 a 64 bit.|  
|`int16`|Intero con segno a 16 bit.|  
|`int32`|Intero con segno a 32 bit.|  
|`int64`|Intero con segno a 64 bit.|  
|`int8`|Valore numerico con segno a 8 bit.|  
|`uint16`|Intero senza segno a 16 bit.|  
|`uint32`|Intero senza segno a 32 bit.|  
|`uint64`|Intero senza segno a 64 bit.|  
|`uint8`|Valore numerico senza segno a 8 bit.|  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)