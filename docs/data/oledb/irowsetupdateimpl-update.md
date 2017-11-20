---
title: 'IRowsetUpdateImpl:: Update | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::IRowsetUpdateImpl::Update
- IRowsetUpdateImpl::Update
- IRowsetUpdateImpl.Update
- ATL.IRowsetUpdateImpl.Update
dev_langs: C++
helpviewer_keywords: Update method
ms.assetid: 9ec6884d-aa9c-4871-a803-c048f162403c
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ef3b93f85139ae0499d7e6679f39c8c885dbf4b2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetupdateimplupdate"></a>IRowsetUpdateImpl::Update
Consente di trasmettere le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD ( Update )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBCOUNTITEM* pcRows,  
   HROW** prgRows,  
   DBROWSTATUS** prgRowStatus   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hReserved`  
 [in] Corrisponde alla `hChapter` parametro [IRowsetUpdate:: Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate:: Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Le modifiche vengono trasmesse tramite la chiamata [IRowsetChangeImpl:: FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md). Il consumer deve chiamare [CRowset:: Update](../../data/oledb/crowset-update.md) rendere effettive le modifiche. Impostare *prgRowstatus* su un valore appropriato, come descritto in [stati righe](https://msdn.microsoft.com/en-us/library/ms722752.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)