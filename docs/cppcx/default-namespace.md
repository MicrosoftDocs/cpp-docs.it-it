---
title: spazio dei nomi predefinito | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 4712e9dc-57ba-43cc-811e-022e1dae4de8
caps.latest.revision: "6"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 9d1c04acc5754627906448db9ac4f3afd65fbe7c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="default-namespace"></a>spazio dei nomi predefinito
Il `default` dello spazio dei nomi definisce l'ambito dei tipi incorporati supportati da C + + CX.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace default;  
```  
  
### <a name="members"></a>Membri  
 Tutti i tipi incorporati ereditano i membri seguenti.  
  
|||  
|-|-|  
|[default::(type_name)::Equals](../cppcx/default-type-name-equals-method.md)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|  
|[default::(type_name)::GetHashCode](../cppcx/default-type-name-gethashcode-method.md)|Restituisce il codice hash per l'istanza.|  
|[Metodo default::(type_name)::GetType](../cppcx/default-type-name-gettype-method.md)|Restituisce una stringa che rappresenta il tipo corrente.|  
|[default::(type_name)::ToString](../cppcx/default-type-name-tostring-method.md)|Restituisce una stringa che rappresenta il tipo corrente.|  
  
### <a name="built-in-types"></a>Tipi incorporati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`char16`|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|  
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
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** vccorlib.h  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)