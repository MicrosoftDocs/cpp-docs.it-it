---
title: 'CTable:: Open | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CTable.Open
- ATL::CTable::Open
- CTable::Open
- CTable.Open
dev_langs: C++
helpviewer_keywords: Open method
ms.assetid: 5d006d95-74d7-4e2b-b243-a33bc53b5455
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1b9edfb63c29298eb2805372cbb1303144a084f0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ctableopen"></a>CTable::Open
Apre la tabella.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCWSTR wszTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
HRESULT Open(  
   const CSession& session,  
   LPCSTR szTableName,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
HRESULT Open(  
   const CSession& session,  
   DBID& dbid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG ulPropSets = 0  
) throw ( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in] La sessione per cui la tabella è aperta.  
  
 *wszTableName*  
 [in] Il nome della tabella da aprire, passato come stringa Unicode.  
  
 *szTableName*  
 [in] Il nome della tabella da aprire, passato come una stringa ANSI.  
  
 *DBID*  
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