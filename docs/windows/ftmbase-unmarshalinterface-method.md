---
title: 'Metodo ftmbase:: UnmarshalInterface | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::UnmarshalInterface
dev_langs:
- C++
helpviewer_keywords:
- UnmarshalInterface method
ms.assetid: 6850a621-e9a6-4001-bc1e-bd5d1b121adc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 964ce5cc33b51c54446874522317814279cdd960
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ftmbaseunmarshalinterface-method"></a>Metodo FtmBase::UnmarshalInterface
Inizializza un nuovo proxy e restituisce un puntatore a interfaccia a tale proxy.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP UnmarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __deref_out void **ppv  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `pStm`  
 Puntatore al flusso dal quale il puntatore di interfaccia si desidera effettuare l'unmarshalling.  
  
 `riid`  
 Riferimento all'identificatore dell'interfaccia per effettuare l'unmarshalling.  
  
 `ppv`  
 Al termine di questa operazione, l'indirizzo di una variabile puntatore che riceve il puntatore di interfaccia richiesto `riid`. Se questa operazione ha esito positivo, *`ppv` contiene il puntatore dell'interfaccia richiesta dell'interfaccia per effettuare l'unmarshalling.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_NOINTERFACE o E_FAIL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** . h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)