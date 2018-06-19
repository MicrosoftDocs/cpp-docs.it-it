---
title: __writeeflags | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __writeeflags
dev_langs:
- C++
helpviewer_keywords:
- __writeeflags intrinsics
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a2885f2ea103ad43535b11c526b96ed42de45fd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340528"
---
# <a name="writeeflags"></a>__writeeflags
Scrive il valore specificato per il programma di registrazione dello stato e controllo (contenuto).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __writeeflags(unsigned Value);  
void __writeeflags(unsigned __int64 Value);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `Value`|Valore da scrivere nel Registro di contenuto. Il `Value` parametro è a 32 bit a lungo per una piattaforma a 32 bit e a 64 bit a lungo per una piattaforma a 64 bit.|  
  
## <a name="remarks"></a>Note  
 Queste routine sono disponibili solo come funzioni intrinseche.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__writeeflags`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__readeflags](../intrinsics/readeflags.md)