---
title: 'CManualAccessor:: CreateAccessor | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CManualAccessor::CreateAccessor
- CreateAccessor
- ATL.CManualAccessor.CreateAccessor
- CManualAccessor.CreateAccessor
- CManualAccessor::CreateAccessor
dev_langs:
- C++
helpviewer_keywords:
- CreateAccessor method
ms.assetid: 594c8d6d-b49a-4818-a9a5-81c8115d4e42
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 93f3094c28efe519903fcc2418d26e0111d945a4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096714"
---
# <a name="cmanualaccessorcreateaccessor"></a>CManualAccessor::CreateAccessor
Alloca memoria per la colonna strutture di associazione e inizializza i membri dati della colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT CreateAccessor(int nBindEntries,   
  void* pBuffer,   
   DBLENGTH nBufferSize) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nBindEntries`  
 [in] Numero di colonne. Questo numero deve corrispondere al numero di chiamate per il [CManualAccessor:: AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md) (funzione).  
  
 `pBuffer`  
 [in] Un puntatore al buffer in cui sono archiviate le colonne di output.  
  
 `nBufferSize`  
 [in] Le dimensioni del buffer in byte.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione prima di chiamare il `CManualAccessor::AddBindEntry` (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Esempio DBViewer](../../visual-cpp-samples.md)