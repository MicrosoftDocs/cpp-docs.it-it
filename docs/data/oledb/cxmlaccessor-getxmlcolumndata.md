---
title: 'CXMLAccessor:: GetXMLColumnData | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CXMLAccessor.GetXMLColumnData
- CXMLAccessor::GetXMLColumnData
- CXMLAccessor.GetXMLColumnData
- ATL::CXMLAccessor::GetXMLColumnData
- GetXMLColumnData
dev_langs:
- C++
helpviewer_keywords:
- GetXMLColumnData method
ms.assetid: 719e8efe-8758-4af7-a855-0e44ea196546
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ad3921a25e01f3269fe50f37fbc227a60e12cb43
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cxmlaccessorgetxmlcolumndata"></a>CXMLAccessor::GetXMLColumnData
Recupera le informazioni sul tipo di colonna di una tabella di dati stringa in formato XML, dalla colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetXMLColumnData(CSimpleStringW& strOutput) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `strOutput`  
 [out] Un riferimento a un buffer di stringa contenente le informazioni sul tipo di colonna da recuperare. La stringa viene formattata con nomi di tag XML che corrispondono a nomi di colonna dell'archivio dati.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Di seguito viene illustrato come le informazioni sul tipo di colonna è formattati in XML. `type` Specifica il tipo di dati della colonna. Si noti che i tipi di dati sono basati sui tipi di dati OLE DB, non quelli del database di cui si accede.  
  
 `<columninfo>`  
  
 `<column type = I2/> ColumnName`  
  
 `</columninfo>`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)