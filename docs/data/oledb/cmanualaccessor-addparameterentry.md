---
title: 'CManualAccessor:: AddParameterEntry | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cb97e841cf72abcf49ee2a57ccd78832e7fb95a3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095941"
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