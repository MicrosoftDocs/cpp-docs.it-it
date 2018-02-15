---
title: 'CManualAccessor:: AddParameterEntry | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CManualAccessor::AddParameterEntry
- ATL.CManualAccessor.AddParameterEntry
- CManualAccessor.AddParameterEntry
- AddParameterEntry
- ATL::CManualAccessor::AddParameterEntry
dev_langs:
- C++
helpviewer_keywords:
- AddParameterEntry method
ms.assetid: 9048b164-052b-41b1-a861-227fc529e0b5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e0b730ad81eb827fb86b77b95d4abb96ac73b3c3
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cmanualaccessoraddparameterentry"></a>CManualAccessor::AddParameterEntry
Aggiunge una voce di parametro per le strutture di voce di parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```
void AddParameterEntry(DBORDINAL nOrdinal,  
   DBTYPE wType,  DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL,  
   DBPARAMIO eParamIO = DBPARAMIO_INPUT) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 `nOrdinal`  
 [in] Numero di parametro.  
  
 `wType`  
 [in] Tipo di dati.  
  
 `nColumnSize`  
 [in] Dimensioni di colonna in byte.  
  
 `pData`  
 [in] Puntatore a dati della colonna memorizzati nel buffer.  
  
 `pLength`  
 [in] Puntatore alla lunghezza di campo, se necessario.  
  
 `pStatus`  
 [in] Puntatore alla variabile da associare allo stato della colonna, se necessario.  
  
 *eParamIO*  
 [in] Specifica se il parametro a cui è associato l'associazione è un parametro di input, input/output o di output.  
  
## <a name="remarks"></a>Note  
 Per utilizzare questa funzione, è necessario chiamare [CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [CManualAccessor::AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md)   
 [Esempio DBViewer](../../visual-cpp-samples.md)