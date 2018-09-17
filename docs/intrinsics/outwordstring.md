---
title: __outwordstring | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __outwordstring
dev_langs:
- C++
helpviewer_keywords:
- rep outsw instruction
- __outwordstring intrinsic
- outsw instruction
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c49f76175ced83fb9a9b7e72e1c1fc7dbb68e20
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720668"
---
# <a name="outwordstring"></a>__outwordstring
**Sezione specifica Microsoft**  
  
 Genera il `rep outsw` (istruzione), che consente di inviare `Count` iniziando in corrispondenza di parole `Buffer` attraverso la porta dei / o specificata da `Port`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __outwordstring(   
   unsigned short Port,   
   unsigned short* Buffer,   
   unsigned long Count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*Porta*<br/>
[in] La porta per inviare i dati.  
  
*Buffer*<br/>
[in] Puntatore ai dati da inviare attraverso la porta specificata.  
  
*Conteggio*<br/>
[in] Il numero di parole da inviare.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__outwordstring`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)