---
title: AtlTraceErrorRecords | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.AtlTraceErrorRecords
- ATL::AtlTraceErrorRecords
- AtlTraceErrorRecords
dev_langs:
- C++
helpviewer_keywords:
- AtlTraceErrorRecords function
ms.assetid: b83970b3-dc2a-445c-9142-f52218719905
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: afea3c3ef1f169e5f1cb5fc675c74b54da1be0d8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093347"
---
# <a name="atltraceerrorrecords"></a>AtlTraceErrorRecords
Esegue il dump Record errori OLE DB informazioni per il dispositivo di dump se viene restituito un errore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      inline void AtlTraceErrorRecords(HRESULT hrErr = S_OK);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hErr`  
 [in] Un `HRESULT` restituiti da una funzione membro modelli Consumer OLE DB.  
  
## <a name="remarks"></a>Note  
 Se `hErr` non `S_OK`, `AtlTraceErrorRecords` esegue il dump Record errori OLE DB informazioni per il dispositivo di dump (il **Debug** scheda della finestra di Output o un file). Le informazioni del Record di errore, che viene ottenute dal provider, includono il numero di riga, origine, la descrizione, file della Guida, contesto e GUID per ogni voce di record di errore. `AtlTraceErrorRecords` Queste informazioni solo nelle build di debug di dump. Nelle build di rilascio, è uno stub vuoto ottimizzato out.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)