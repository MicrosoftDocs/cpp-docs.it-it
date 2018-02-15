---
title: 'CXMLAccessor:: GetXMLRowData | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CXMLAccessor::GetXMLRowData
- ATL.CXMLAccessor.GetXMLRowData
- CXMLAccessor::GetXMLRowData
- CXMLAccessor.GetXMLRowData
- GetXMLRowData
dev_langs:
- C++
helpviewer_keywords:
- GetXMLRowData method
ms.assetid: 156b66e3-42fd-491c-8943-38cf5e36f687
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b4b0307b649b702ad78ddb90d9985e14df2331b1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cxmlaccessorgetxmlrowdata"></a>CXMLAccessor::GetXMLRowData
Recupera l'intero contenuto di una tabella come dati stringa in formato XML, dalla riga.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetXMLRowData(CSimpleStringW& strOutput,   
   bool bAppend = false) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `strOutput`  
 [out] Un riferimento a un buffer contenente i dati della tabella da recuperare. I dati vengono formattati come dati stringa con i nomi di tag XML che corrispondono a nomi di colonna dell'archivio dati.  
  
 *bAppend*  
 [in] Valore booleano che specifica se aggiungere una stringa alla fine dei dati di output.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 Di seguito viene illustrato come i dati di riga vengono formattati in XML. `DATA` di seguito rappresenta i dati della riga. Utilizzare i metodi per passare alla riga desiderata di spostamento.  
  
 `<row>`  
  
 `<column name>DATA</column name>`  
  
 `</row>`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)