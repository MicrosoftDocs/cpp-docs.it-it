---
title: 'Idbcreatecommandimpl:: CreateCommand | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBCreateCommandImpl.CreateCommand
- CreateCommand
- IDBCreateCommandImpl::CreateCommand
dev_langs:
- C++
helpviewer_keywords:
- CreateCommand method
ms.assetid: 50ffbf8b-2c07-4bcb-96c5-ffce4519c7f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 709f734ad0349ea7908466958e282a8ca2a5c2db
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33101614"
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