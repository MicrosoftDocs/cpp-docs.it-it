---
title: 'Metodo ftmbase:: ReleaseMarshalData | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData
dev_langs:
- C++
helpviewer_keywords:
- ReleaseMarshalData method
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bad01416427d10a7bc8c6fdf96fce28948e6a833
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649367"
---
# <a name="ftmbasereleasemarshaldata-method"></a>Metodo FtmBase::ReleaseMarshalData
Elimina un pacchetto viene eseguito il marshalling dei dati.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHODIMP ReleaseMarshalData(  
   __in IStream *pStm  
) override;  
```  
  
### <a name="parameters"></a>Parametri  
 *pStm*  
 Puntatore a un flusso che contiene il pacchetto di dati da distruggere.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)