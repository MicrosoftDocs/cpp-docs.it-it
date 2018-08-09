---
title: 'Metodo asyncbase:: Checkvalidstateforresultscall | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall
dev_langs:
- C++
helpviewer_keywords:
- CheckValidStateForResultsCall method
ms.assetid: 87ca6805-bff1-4063-b855-6dd26132deff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dfa3b7222a25ed56d014cc90dbffa5f57a2c9436
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39651908"
---
# <a name="asyncbasecheckvalidstateforresultscall-method"></a>Metodo AsyncBase::CheckValidStateForResultsCall
Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato asincrono corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline HRESULT CheckValidStateForResultsCall();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se i risultati possono essere raccolti; in caso contrario, E_ILLEGAL_METHOD_CALLE_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)