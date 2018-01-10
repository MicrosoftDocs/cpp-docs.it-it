---
title: COLUMN_ENTRY_TYPE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: COLUMN_ENTRY_TYPE
dev_langs: C++
helpviewer_keywords: COLUMN_ENTRY_TYPE macro
ms.assetid: ac424261-ff6c-443b-a197-2cec8d78d738
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cc2501f38ca93192bd0d74a3d49ca829b19cc1ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="columnentrytype"></a>COLUMN_ENTRY_TYPE
Rappresenta un'associazione a una specifica colonna nel database. Supporta `type` parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
COLUMN_ENTRY_TYPE (  
nOrdinal  
,   
wType  
,   
data  
 )  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `nOrdinal`  
 [in] Numero di colonna.  
  
 `wType`  
 [in] Tipo di dati della voce di colonna.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
## <a name="remarks"></a>Note  
 Questa macro è una variante specializzata del [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro che consente di specificare il tipo di dati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)