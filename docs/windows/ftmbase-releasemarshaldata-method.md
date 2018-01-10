---
title: 'Metodo ftmbase:: ReleaseMarshalData | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData
dev_langs: C++
helpviewer_keywords: ReleaseMarshalData method
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f10c05aef4700c3f3c9b18c2d728452ee816ee05
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ftmbasereleasemarshaldata-method"></a>Metodo FtmBase::ReleaseMarshalData
Elimina un pacchetto di dati sottoposti a marshalling.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP ReleaseMarshalData(  
   __in IStream *pStm  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `pStm`  
 Puntatore a un flusso che contiene il pacchetto di dati per l'eliminazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)