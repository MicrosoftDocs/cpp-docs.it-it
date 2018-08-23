---
title: 'Metodo ftmbase:: GetUnmarshalClass | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass
dev_langs:
- C++
helpviewer_keywords:
- GetUnmarshalClass method
ms.assetid: 535fc539-5b97-4967-b158-f7568f13d341
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c76c2d75f3d8c2e872b29d9ecf07841c99027713
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599503"
---
# <a name="ftmbasegetunmarshalclass-method"></a>Metodo FtmBase::GetUnmarshalClass

Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica la DLL per creare un'istanza del proxy non inizializzata.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHODIMP GetUnmarshalClass(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out CLSID *pCid
) override;
```

### <a name="parameters"></a>Parametri

*riid*  
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling.

*PV*  
Puntatore all'interfaccia da sottoporre a marshalling; può essere NULL se il chiamante non ha un puntatore all'interfaccia desiderata.

*dwDestContext*  
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

L'unmarshaling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*  
Riservato per utilizzi futuri; deve essere NULL.

*mshlflags*  
Quando questa operazione viene completata, puntatore al CLSID da utilizzare per creare un proxy nel processo client.

*pCid*

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario S_FALSE.

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe FtmBase](../windows/ftmbase-class.md)