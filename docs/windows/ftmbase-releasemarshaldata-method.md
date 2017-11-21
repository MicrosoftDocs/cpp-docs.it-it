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
ms.openlocfilehash: b225cccdd34302bf6e2fa0e72c01ed7c7a3cd53a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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