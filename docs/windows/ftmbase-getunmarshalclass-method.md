---
title: 'Metodo ftmbase:: GetUnmarshalClass | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass
dev_langs:
- C++
helpviewer_keywords:
- GetUnmarshalClass method
ms.assetid: 535fc539-5b97-4967-b158-f7568f13d341
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 978379c64f22026f19dd76afa39af08402cebc65
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ftmbasegetunmarshalclass-method"></a>Metodo FtmBase::GetUnmarshalClass
Ottiene il CLSID COM viene utilizzato per individuare la DLL contenente il codice per il proxy corrispondente. COM viene caricato la DLL per creare un'istanza del proxy non inizializzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP GetUnmarshalClass(  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags,  
   __out CLSID *pCid  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 Riferimento all'identificatore dell'interfaccia da cui effettuare il marshalling.  
  
 `pv`  
 Puntatore all'interfaccia deve essere sottoposto a marshalling; può essere NULL se il chiamante non dispone di un puntatore a interfaccia desiderato.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata è essere sottoposta a unmarshalling.  
  
 Specificare uno o più valori di enumerazione MSHCTX.  
  
 Unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer del processo corrente (MSHCTX_LOCAL).  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere NULL.  
  
 `mshlflags`  
 Quando questa operazione viene completata, puntatore al CLSID da utilizzare per creare un proxy del processo client.  
  
 `pCid`  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, S_FALSE.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)