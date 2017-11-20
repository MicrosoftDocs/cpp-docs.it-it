---
title: Classe IColumnsInfoImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IColumnsInfoImpl<T>
- ATL::IColumnsInfoImpl
- IColumnsInfoImpl
- ATL.IColumnsInfoImpl
- ATL::IColumnsInfoImpl<T>
dev_langs: C++
helpviewer_keywords: IColumnsInfoImpl class
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: dea39c02dbf89ff18bc10cb538fe243a2cd4a5f5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="icolumnsinfoimpl-class"></a>Classe IColumnsInfoImpl
Fornisce un'implementazione del [IColumnsInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T>  
class ATL_NO_VTABLE IColumnsInfoImpl :   
   public IColumnsInfo,    
   public CDBIDOps  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IColumnsInfoImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetColumnInfo](../../data/oledb/icolumnsinfoimpl-getcolumninfo.md)|Restituisce i metadati della colonna necessari per la maggior parte dei consumer.|  
|[MapColumnIDs](../../data/oledb/icolumnsinfoimpl-mapcolumnids.md)|Restituisce una matrice di numeri ordinali delle colonne in un set di righe identificato dall'ID di colonna specificati.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria nel set di righe e i comandi. Per modificare il comportamento del proprio provider `IColumnsInfo` implementazione, è necessario modificare la mappa delle colonne del provider.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)