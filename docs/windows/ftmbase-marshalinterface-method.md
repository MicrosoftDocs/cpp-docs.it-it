---
title: 'Metodo ftmbase:: MarshalInterface | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: ftm/Microsoft::WRL::FtmBase::MarshalInterface
dev_langs: C++
helpviewer_keywords: MarshalInterface method
ms.assetid: fc8421b4-06e4-4925-b908-c285fe4790d2
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9df1e5d7559b434c1af0f1feff3b73b8141a8865
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ftmbasemarshalinterface-method"></a>Metodo FtmBase::MarshalInterface
Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHODIMP MarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags  
) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `pStm`  
 Puntatore al flusso da utilizzare durante il marshalling.  
  
 `riid`  
 Riferimento all'identificatore dell'interfaccia da cui effettuare il marshalling. Questa interfaccia deve essere derivata dall'interfaccia IUnknown.  
  
 `pv`  
 Puntatore al puntatore a interfaccia deve essere sottoposto a marshalling; può essere NULL se il chiamante non dispone di un puntatore a interfaccia desiderato.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata è essere sottoposta a unmarshalling.  
  
 Specificare uno o più valori di enumerazione MSHCTX.  
  
 Unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nel processo corrente (MSHCTX_LOCAL) nello stesso computer.  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere zero.  
  
 `mshlflags`  
 Specifica se i dati di cui effettuare il marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scrivere in una tabella globale, in cui può essere recuperato da più client.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK  
 Il puntatore di interfaccia è stato eseguito il marshalling correttamente.  
  
 E_NOINTERFACE  
 L'interfaccia specificata non è supportata.  
  
 STG_E_MEDIUMFULL  
 Il flusso è completo.  
  
 E_FAIL  
 Operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)