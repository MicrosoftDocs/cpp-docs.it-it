---
title: 'Metodo comptr:: Asweak | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::AsWeak
dev_langs:
- C++
helpviewer_keywords:
- AsWeak method
ms.assetid: 23e29dcd-39cb-423f-abe6-6df4428213bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 78f6eb9f3d0acf6a28479593d64616fa6881be76
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648090"
---
# <a name="comptrasweak-method"></a>Metodo ComPtr::AsWeak
Restituisce un riferimento debole all'oggetto corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HRESULT AsWeak(  
   _Out_ WeakRef* pWeakRef  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *pWeakRef*  
 Quando questa operazione viene completata, un puntatore a un oggetto di riferimento debole.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)