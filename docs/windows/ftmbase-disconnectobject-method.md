---
title: 'Metodo ftmbase:: DisconnectObject | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: ftm/Microsoft::WRL::FtmBase::DisconnectObject
dev_langs: C++
helpviewer_keywords: DisconnectObject method
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 618590f28dcb82be0bcb9c4407c9aa4eaa2432ce
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ftmbasedisconnectobject-method"></a>Metodo FtmBase::DisconnectObject
Forzatamente rilascia tutte le connessioni esterne a un oggetto. Server l'oggetto chiama l'implementazione dell'oggetto di questo metodo prima di arrestare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP DisconnectObject(  
   __in DWORD dwReserved  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `dwReserved`  
 Riservato per utilizzi futuri; deve essere zero.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)