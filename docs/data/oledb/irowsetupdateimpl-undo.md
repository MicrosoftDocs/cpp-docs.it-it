---
title: 'IRowsetUpdateImpl:: Undo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetUpdateImpl.Undo
- ATL::IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl.Undo
dev_langs: C++
helpviewer_keywords: Undo method
ms.assetid: f3dc7764-050c-4322-9b2f-9ca772a0fb88
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a0ad20f5d326d89ce004254713c861bec784b3d5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetupdateimplundo"></a>IRowsetUpdateImpl::Undo
Annulla le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD ( Undo )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[ ],  
   DBCOUNTITEM* pcRowsUndone,  
   HROW** prgRowsUndone,  
   DBROWSTATUS** prgRowStatus   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hReserved`  
 [in] Corrisponde alla `hChapter` parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 *pcRowsUndone*  
 [out] Corrisponde alla `pcRows` parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 *prgRowsUndone*  
 [in] Corrisponde alla *prgRows* parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)