---
title: 'Metodo ftmbase:: DisconnectObject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::DisconnectObject
dev_langs:
- C++
helpviewer_keywords:
- DisconnectObject method
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f80c7e758b282c0a1976d490483c397eca43b5f5
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39568628"
---
# <a name="ftmbasedisconnectobject-method"></a>Metodo FtmBase::DisconnectObject
Rilascia forzatamente tutte le connessioni esterne a un oggetto. Server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP DisconnectObject(  
   __in DWORD dwReserved  
) override;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 Riservato per utilizzi futuri; deve essere zero.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)