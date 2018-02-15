---
title: 'Idbcreatecommandimpl:: CreateCommand | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IDBCreateCommandImpl.CreateCommand
- CreateCommand
- IDBCreateCommandImpl::CreateCommand
dev_langs:
- C++
helpviewer_keywords:
- CreateCommand method
ms.assetid: 50ffbf8b-2c07-4bcb-96c5-ffce4519c7f7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 38b9c3963c3e491412de85e7c4f72f2e4525c406
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="idbcreatecommandimplcreatecommand"></a>IDBCreateCommandImpl::CreateCommand
Crea un nuovo comando e restituisce l'interfaccia richiesta.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(CreateCommand)(IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppvCommand);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IDBCreateCommand:: CreateCommand](https://msdn.microsoft.com/en-us/library/ms709772.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* parametri dei nomi diversi, che sono descritte nel **IDBCreateCommand:: CreateCommand**:  
  
|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|  
|--------------------------------|------------------------------------------------|  
|*ppvCommand*|*ppCommand*|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)