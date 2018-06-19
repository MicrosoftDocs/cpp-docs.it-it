---
title: CRowset::SetData | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CRowset<TAccessor>.SetData
- SetData
- ATL::CRowset::SetData
- CRowset<TAccessor>.SetData
- CRowset::SetData
- ATL.CRowset.SetData
- CRowset.SetData
- CRowset<TAccessor>::SetData
- ATL::CRowset<TAccessor>::SetData
dev_langs:
- C++
helpviewer_keywords:
- SetData method
ms.assetid: 68125142-8510-4132-9393-e39efd39c784
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b8885c6e64fa7e7e22f6858d916a8e1afa8738d6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098472"
---
# <a name="crowsetsetdata"></a>CRowset::SetData
Imposta i valori dei dati in una o più colonne di una riga.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT SetData() const throw();   


HRESULT SetData(int nAccessor) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nAccessor`  
 [in] Il numero della funzione di accesso da utilizzare per l'accesso ai dati.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Per il `SetData` form che accetta alcun argomento, tutte le funzioni di accesso vengono utilizzati per l'aggiornamento. In genere si chiama **SetData** per impostare i valori dei dati nelle colonne in una riga, quindi chiamare [aggiornamento](../../data/oledb/crowset-update.md) per trasmettere le modifiche.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetChange`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetChange** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
 L'operazione di impostazione potrebbe non riuscire se una o più colonne non è accessibile in scrittura. Modificare la mappa del cursore per risolvere il problema.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset::Update](../../data/oledb/crowset-update.md)