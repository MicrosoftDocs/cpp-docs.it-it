---
title: 'CRowsetImpl:: Namefromdbid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowsetImpl.NameFromDBID
- CRowsetImpl::NameFromDBID
dev_langs: C++
helpviewer_keywords: NameFromDBID method
ms.assetid: 6aa5b074-90c7-4434-adfd-c64c13e76c78
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8eb218546c299ffa95874bd8a3fcb2b16fa07a2a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetimplnamefromdbid"></a>CRowsetImpl::NameFromDBID
Estrae una stringa da un **DBID** e la copia nel `bstr` passato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT CRowsetBaseImpl::NameFromDBID(  
   DBID* pDBID,  
   CComBSTR& bstr,  
   bool bIndex   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *pDBID*  
 [in] Un puntatore al **DBID** da cui estrarre una stringa.  
  
 `bstr`  
 [in] A [CComBSTR](../../atl/reference/ccombstr-class.md) inserire una copia del riferimento di **DBID** stringa.  
  
 `bIndex`  
 [in] **true** se un indice **DBID**; **false** se una tabella **DBID**.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. A seconda che il **DBID** è una tabella o un indice (indicato da `bIndex`), il metodo verrà restituirlo **quindi DB_E_NOINDEX** o **DB_E_NOTABLE**.  
  
## <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal `CRowsetImpl` le implementazioni di [ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md) e [GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)