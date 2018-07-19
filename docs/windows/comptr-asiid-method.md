---
title: 'Metodo comptr:: Asiid | Microsoft Docs'
ms.custom: ''
ms.date: 07/11/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: d5a3cdb2-796d-4410-966a-847c0e8fb226
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db5bc6b2547fb77dd887f96b6c33dee536e43f77
ms.sourcegitcommit: 76fd30ff3e0352e2206460503b61f45897e60e4f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/13/2018
ms.locfileid: "39025903"
---
# <a name="comptrasiid-method"></a>Metodo ComPtr::AsIID
Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IUnknown>* p  
) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `p`  
 Se l'oggetto presenta un'interfaccia il cui ID corrisponde `riid`, un puntatore indiretto doppio per l'interfaccia specificata dal `riid` parametro; in caso contrario, un puntatore a IUnknown.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)