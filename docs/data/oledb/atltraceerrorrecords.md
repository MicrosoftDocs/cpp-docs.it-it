---
title: AtlTraceErrorRecords | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 024a4331b71b3414aa7d83f27ecaca4e5d2f11de
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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