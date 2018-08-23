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
ms.openlocfilehash: c2d4bccbcd9f3c3b13fa8be0ccc7afa493751cd9
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593539"
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