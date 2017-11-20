---
title: 'Costruttore comptrref:: Comptrref | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::Details::ComPtrRef::ComPtrRef
dev_langs: C++
helpviewer_keywords: ComPtrRef, constructor
ms.assetid: ce2d2533-fef6-4b2d-b088-6f3db01df5a5
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1a23af63156650aa215ca65610a3c8f54bf39461
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comptrrefcomptrref-constructor"></a>Costruttore ComPtrRef::ComPtrRef
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ComPtrRef(  
   _In_opt_ T* ptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `ptr`  
 Il valore sottostante di un altro oggetto ComPtrRef.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza della classe ComPtrRef dal puntatore specificato a un altro oggetto ComPtrRef.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Comptrref (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)