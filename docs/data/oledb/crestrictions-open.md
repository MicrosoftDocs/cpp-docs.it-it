---
title: 'CRestrictions:: Open | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRestrictions.Open
- ATL::CRestrictions::Open
- ATL.CRestrictions.Open
- CRestrictions::Open
dev_langs: C++
helpviewer_keywords: Open method
ms.assetid: 0aff0cc3-543a-47d2-8d6b-ebb36926b6db
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bbb0b175a6fa5a6cf93b4fe107884d5bb84f2487
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crestrictionsopen"></a>CRestrictions::Open
Restituisce un set in base alle restrizioni fornito dall'utente di risultati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCTSTR lpszParam 1 = NULL,  
   LPCTSTR lpszParam 2 = NULL,  
   LPCTSTR lpszParam 3 = NULL,  
   LPCTSTR lpszParam 4 = NULL,  
   LPCTSTR lpszParam 5 = NULL,  
   LPCTSTR lpszParam 6 = NULL,  
   LPCTSTR lpszParam 7 = NULL,  
   bool bBind = true  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in] Specifica un oggetto sessione esistente utilizzato per la connessione all'origine dati.  
  
 *lpszParam*  
 [in] Specifica le restrizioni per il set di righe dello schema.  
  
 `bBind`  
 [in] Specifica se associare automaticamente la mappa delle colonne. Il valore predefinito è **true**, che comporta la mappa delle colonne da associare automaticamente. Impostazione `bBind` a **false** impedisce l'associazione automatica di mappa delle colonne in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 È possibile specificare un massimo di sette restrizioni su un set di righe dello schema.  
  
 Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) per informazioni sulle restrizioni definite in ogni set di righe dello schema.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)