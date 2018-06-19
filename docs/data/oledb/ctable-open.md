---
title: 'CTable:: Open | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CTable.Open
- ATL::CTable::Open
- CTable::Open
- CTable.Open
dev_langs:
- C++
helpviewer_keywords:
- Open method
ms.assetid: 5d006d95-74d7-4e2b-b243-a33bc53b5455
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ca271d8a88035151e6845db6b7cb9423c71c73ce
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102238"
---
# <a name="ctableopen"></a>CTable::Open
Apre la tabella.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(const CSession& session,  
   LPCWSTR wszTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  


HRESULT Open(const CSession& session,  
   LPCSTR szTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  


HRESULT Open(const CSession& session,  
   DBID& dbid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0) throw ();  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in] La sessione per cui la tabella è aperta.  
  
 *wszTableName*  
 [in] Il nome della tabella da aprire, passato come stringa Unicode.  
  
 *szTableName*  
 [in] Il nome della tabella da aprire, passato come una stringa ANSI.  
  
 *dbid*  
 [in] Il **DBID** della tabella da aprire.  
  
 *pPropSet*  
 [in] Un puntatore a una matrice di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture contenenti le proprietà e valori da impostare. Vedere [set di proprietà e i gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx) nel *di riferimento per programmatori OLE DB* in Windows SDK. Il valore predefinito null non specifica alcuna proprietà.  
  
 `ulPropSets`  
 [in] Il numero di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture passato il *pPropSet* argomento.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [IOpenRowset:: OPENROWSET](https://msdn.microsoft.com/en-us/library/ms716724.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CTable](../../data/oledb/ctable-class.md)