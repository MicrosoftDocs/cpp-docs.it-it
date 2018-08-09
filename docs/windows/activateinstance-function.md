---
title: ActivateInstance (funzione) | Microsoft Docs
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
ms.openlocfilehash: 93b1c8fa12e06984a2bffdd90419c481d8897b94
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646241"
---
# <a name="activateinstance-function"></a>ActivateInstance (funzione)
Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T>  
inline HRESULT ActivateInstance(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Un tipo da attivare.  
  
 *activatableClassId*  
 Il nome dell'ID di classe che definisce i parametri *T*.  
  
 *Istanza*  
 Al termine di questa operazione, un riferimento a un'istanza di *T*.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica la causa dell'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** spazio  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)