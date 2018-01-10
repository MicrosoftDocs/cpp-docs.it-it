---
title: 'CManualAccessor:: AddBindEntry | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CManualAccessor::AddBindEntry
- ATL.CManualAccessor.AddBindEntry
- CManualAccessor::AddBindEntry
- AddBindEntry
- CManualAccessor.AddBindEntry
dev_langs: C++
helpviewer_keywords: AddBindEntry method
ms.assetid: 8556dda9-dda1-4f67-96bc-6031e6c6a271
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 14a2fbae8ee29728d145b3ff8d20a02b4000b5a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmanualaccessoraddbindentry"></a>CManualAccessor::AddBindEntry
Aggiunge una voce di binding per le colonne di output.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void AddBindEntry(  
   DBORDINAL nOrdinal,  
   DBTYPE wType,  
   DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL   
) throw ( );  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 `nOrdinal`  
 [in] Numero di colonna.  
  
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
  
## <a name="remarks"></a>Note  
 Per utilizzare questa funzione, è necessario chiamare [CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md). Non è possibile aggiungere altre voci rispetto al numero di colonne specificate nella `CreateAccessor`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Esempio DBViewer](../../visual-cpp-samples.md)