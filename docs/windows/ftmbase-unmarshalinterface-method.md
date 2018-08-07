---
title: 'Metodo ftmbase:: UnmarshalInterface | Microsoft Docs'
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
ms.openlocfilehash: d7b34f1af7734fa22db3a9f296bc021917356f8a
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570028"
---
# <a name="ftmbaseunmarshalinterface-method"></a>Metodo FtmBase::UnmarshalInterface
Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP UnmarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __deref_out void **ppv  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 *pStm*  
 Puntatore al flusso da cui il puntatore di interfaccia deve essere sottoposta a unmarshalling.  
  
 *riid*  
 Riferimento all'identificatore dell'interfaccia di essere sottoposta a unmarshalling.  
  
 *ppv*  
 Al termine di questa operazione, l'indirizzo di una variabile puntatore che riceve il puntatore a interfaccia richiesto *riid*. Se questa operazione ha esito positivo, **ppv* contiene il puntatore all'interfaccia richiesta dell'interfaccia di essere sottoposta a unmarshalling.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, E_NOINTERFACE o E_FAIL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)