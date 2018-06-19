---
title: Classe lock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::lock
- msclr.lock
- lock
dev_langs:
- C++
helpviewer_keywords:
- lock class
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a860f79b740e0f34eef33b7a96e0236835f1f6b3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33129697"
---
# <a name="lock-class"></a>Classe lock
Questa classe consente di automatizzare l'acquisizione di un blocco per sincronizzare l'accesso a un oggetto da più thread.  Quando costruito viene acquisito il blocco e quando si rilascia il blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ref class lock;  
```  
  
## <a name="remarks"></a>Note  
 `lock` è disponibile solo per gli oggetti CLR e possono essere usate solo nel codice CLR.  
  
 Internamente, la classe utilizza blocco <xref:System.Threading.Monitor> per sincronizzare l'accesso. Vedere questo argomento per informazioni più dettagliate sulla sincronizzazione.  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\lock.h >  
  
 **Namespace** msclr  
  
## <a name="see-also"></a>Vedere anche  
 [lock](../dotnet/lock.md)   
 [Membri lock](../dotnet/lock-members.md)