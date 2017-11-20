---
title: 'Metodo comptr:: Getaddressof | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::ComPtr::GetAddressOf
dev_langs: C++
helpviewer_keywords: GetAddressOf method
ms.assetid: 972a41d0-c2ef-4ae3-b2cd-77cc45156ac9
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4a14a6366d1f8e6c5917835e750b5fddc45310d3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comptrgetaddressof-method"></a>Metodo ComPtr::GetAddressOf
Recupera l'indirizzo del membro dati [ptr_](../windows/comptr-ptr-data-member.md) , che contiene un puntatore all'interfaccia rappresentata da questo ComPtr.  
  
## <a name="syntax"></a>Sintassi  
  
```  
T* const* GetAddressOf() const;  
T** GetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo di una variabile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)