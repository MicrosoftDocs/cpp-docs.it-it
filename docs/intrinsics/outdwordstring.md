---
title: __outdwordstring | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __outdwordstring
dev_langs:
- C++
helpviewer_keywords:
- outsd instruction
- __outdwordstring intrinsic
- rep outsd instruction
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ff43920400028e0fb13fc17615fb58cc551726b
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704223"
---
# <a name="outdwordstring"></a>__outdwordstring
**Sezione specifica Microsoft**  
  
 Genera il `rep outsd` (istruzione), che consente di inviare `Count` Double Word a partire `Buffer` attraverso la porta dei / o specificata da `Port`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __outdwordstring(   
   unsigned short Port,   
   unsigned long* Buffer,   
   unsigned long Count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*Porta*<br/>
[in] La porta per inviare i dati.  
  
*Buffer*<br/>
[in] Puntatore ai dati da inviare attraverso la porta specificata.  
  
*Conteggio*<br/>
[in] Il numero di parole doppie per l'invio.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__outdwordstring`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)