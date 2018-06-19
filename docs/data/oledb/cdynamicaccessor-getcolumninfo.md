---
title: CDynamicAccessor::GetColumnInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- GetColumnInfo
- ATL.CDynamicAccessor.GetColumnInfo
- ATL::CDynamicAccessor::GetColumnInfo
- CDynamicAccessor.GetColumnInfo
- CDynamicAccessor::GetColumnInfo
dev_langs:
- C++
helpviewer_keywords:
- GetColumnInfo method
ms.assetid: 7f2102ea-b7cc-4714-812f-3ca2857f4b9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0c9fe862f08fc9ecfa280dcbb55f48e14427d6ed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091894"
---
# <a name="cdynamicaccessorgetcolumninfo"></a>CDynamicAccessor::GetColumnInfo
Restituisce i metadati della colonna necessari per la maggior parte dei consumer.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetColumnInfo(IRowset* pRowset,   
   DBORDINAL* pColumns,   
   DBCOLUMNINFO** ppColumnInfo,   
   OLECHAR** ppStringsBuffer) throw();  
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