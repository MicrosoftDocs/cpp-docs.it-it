---
title: Funzione ActivateInstance | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Windows::Foundation::ActivateInstance
- client/ABI::Windows::Foundation::ActivateInstance
dev_langs:
- C++
helpviewer_keywords:
- ActivateInstance function
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c0bf945dd8225ca3c153d7f497ded6b83ebd022d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855575"
---
# <a name="activateinstance-function"></a>ActivateInstance (funzione)
Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
inline HRESULT ActivateInstance(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo da attivare.  
  
 `activatableClassId`  
 Il nome dell'ID di classe che definisce parametro `T`.  
  
 `instance`  
 Al termine di questa operazione, un riferimento a un'istanza di `T`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, un errore HRESULT che indica la causa dell'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** spazio  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)