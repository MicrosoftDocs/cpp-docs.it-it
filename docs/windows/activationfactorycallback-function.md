---
title: Funzione ActivationFactoryCallback | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::ActivationFactoryCallback
dev_langs:
- C++
helpviewer_keywords:
- ActivationFactoryCallback function
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2f1bae2c503f4e5f0c887a46956248184ece9a1e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857324"
---
# <a name="activationfactorycallback-function"></a>ActivationFactoryCallback (funzione)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(  
   HSTRING activationId,  
   IActivationFactory **ppFactory  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `activationId`  
 Handle per una stringa che specifica il nome di una classe di runtime.  
  
 `ppFactory`  
 Quando questa operazione viene completata, una factory di attivazione corrispondente al parametro `activationId`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. HRESULT di errore probabilmente sono CLASS_E_CLASSNOTAVAILABLE ed E_INVALIDARG.  
  
## <a name="remarks"></a>Note  
 Ottiene la factory di attivazione per l'ID di attivazione specificato.  
  
 Windows Runtime chiama questa funzione di callback per richiedere un oggetto specificato dal nome della classe di runtime.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)