---
title: 'Metodo ftmbase:: GetMarshalSizeMax | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax
dev_langs:
- C++
helpviewer_keywords:
- GetMarshalSizeMax method
ms.assetid: b416b1bf-c73e-45d5-abb8-04921c1a0c94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5a298e63bc67dadf33a5e653d0eecf165a530d82
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ftmbasegetmarshalsizemax-method"></a>Metodo FtmBase::GetMarshalSizeMax
Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling di puntatore a interfaccia specificato per l'oggetto specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP GetMarshalSizeMax(  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags,  
   __out DWORD *pSize  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 Riferimento all'identificatore dell'interfaccia da cui effettuare il marshalling.  
  
 `pv`  
 Puntatore a interfaccia deve essere sottoposto a marshalling; può essere NULL.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata è essere sottoposta a unmarshalling.  
  
 Specificare uno o più valori di enumerazione MSHCTX.  
  
 Attualmente, l'unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nel processo corrente (MSHCTX_LOCAL) nello stesso computer.  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere NULL.  
  
 `mshlflags`  
 Flag che indica se i dati di cui effettuare il marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scrivere in una tabella globale, in cui può essere recuperato da più client. Specificare uno o più valori di enumerazione MSHLFLAGS.  
  
 `pSize`  
 Quando questa operazione viene completata, puntatore per il limite superiore per la quantità di dati da scrivere nel flusso di marshalling.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_FAIL o E_NOINTERFACE.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** . h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)