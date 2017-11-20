---
title: Classe lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- msclr::lock
- msclr.lock
- lock
dev_langs: C++
helpviewer_keywords: lock class
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 2c9e21612c227081e3558a8f7f3161f922711c20
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lock-class"></a>Classe lock
Questa classe consente di automatizzare l'acquisizione di un blocco per sincronizzare l'accesso a un oggetto da più thread.  Quando costruito viene acquisito il blocco e quando si rilascia il blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ref class lock;  
```  
  
## <a name="remarks"></a>Note  
 `lock`è disponibile solo per gli oggetti CLR e può essere utilizzato solo nel codice CLR.  
  
 Internamente, la classe utilizza blocco <xref:System.Threading.Monitor> per sincronizzare l'accesso. Vedere questo argomento per informazioni più dettagliate sulla sincronizzazione.  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\lock.h >  
  
 **Namespace** msclr  
  
## <a name="see-also"></a>Vedere anche  
 [blocco](../dotnet/lock.md)   
 [Membri lock](../dotnet/lock-members.md)