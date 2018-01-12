---
title: 'CDynamicAccessor:: GetColumnInfo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- GetColumnInfo
- ATL.CDynamicAccessor.GetColumnInfo
- ATL::CDynamicAccessor::GetColumnInfo
- CDynamicAccessor.GetColumnInfo
- CDynamicAccessor::GetColumnInfo
dev_langs: C++
helpviewer_keywords: GetColumnInfo method
ms.assetid: 7f2102ea-b7cc-4714-812f-3ca2857f4b9a
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ece75eeb539dff60b29396e3076cd2465571453a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicaccessorgetcolumninfo"></a>CDynamicAccessor::GetColumnInfo
Restituisce i metadati della colonna necessari per la maggior parte dei consumer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT GetColumnInfo(   
   IRowset* pRowset,   
   DBORDINAL* pColumns,   
   DBCOLUMNINFO** ppColumnInfo,   
   OLECHAR** ppStringsBuffer    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `pRowset`  
 [in] Un puntatore al [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) interfaccia.  
  
 *pColumns*  
 [out] Puntatore alla memoria in cui restituire il numero di colonne nel set di righe; Questo numero include la colonna del segnalibro, se presente.  
  
 *ppColumnInfo*  
 [out] Puntatore alla memoria nel quale restituire una matrice di **DBCOLUMNINFO** strutture. Vedere la sezione "Strutture DBCOLUMNINFO" in [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 `ppStringsBuffer`  
 [out] Puntatore alla memoria in cui si desidera restituire un puntatore all'archiviazione per tutti i valori stringa (nomi utilizzati all'interno *columnid* o per *pwszName*) all'interno di un singolo blocco di allocazione.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Vedere [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *riferimento per programmatori OLE DB* per informazioni sui tipi di dati **DBORDINAL**, **DBCOLUMNINFO**, e **OLECHAR**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)