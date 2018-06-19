---
title: 'CXMLAccessor:: GetXMLRowData | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 147a79a4d9db17ac0f418356ba45909d02d93c06
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103151"
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