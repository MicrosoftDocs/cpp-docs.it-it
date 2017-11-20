---
title: 'IRowsetUpdateImpl:: SetData | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SetData
- IRowsetUpdateImpl::SetData
- IRowsetUpdateImpl.SetData
- ATL::IRowsetUpdateImpl::SetData
- ATL.IRowsetUpdateImpl.SetData
dev_langs: C++
helpviewer_keywords: SetData method
ms.assetid: 7288a8d1-a7cf-4957-b832-0f3b18fd0da4
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e098db995bad0d99e47d6108436a5324d2920e9d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetupdateimplsetdata"></a>IRowsetUpdateImpl::SetData
Imposta i valori dei dati in una o più colonne.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD ( SetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetChange:: SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Questo metodo esegue l'override di [IRowsetChangeImpl:: SetData](../../data/oledb/irowsetchangeimpl-setdata.md) metodo ma include la memorizzazione nella cache dei dati originali per consentire l'elaborazione immediata o posticipata dell'operazione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)