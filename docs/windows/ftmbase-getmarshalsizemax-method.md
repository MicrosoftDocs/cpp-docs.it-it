---
title: 'Metodo ftmbase:: GetMarshalSizeMax | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax
dev_langs: C++
helpviewer_keywords: GetMarshalSizeMax method
ms.assetid: b416b1bf-c73e-45d5-abb8-04921c1a0c94
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0d68889531c270db190f861eb20a34783b88987f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)