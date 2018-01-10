---
title: Classe CBookmark | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CBookmark
- ATL::CBookmark<nSize>
- CBookmark
- ATL.CBookmark<nSize>
- ATL::CBookmark
dev_langs: C++
helpviewer_keywords: CBookmark class
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dba5f98912fc69bac5554a4c6231f77e17e99d98
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cbookmark-class"></a>Classe CBookmark
Contiene il valore di un segnalibro nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template < DBLENGTH nSize = 0 >  
class CBookmark : public CBookmarkBase  
template < >  
class CBookmark< 0 > : public CBookmarkBase  
```  
  
#### <a name="parameters"></a>Parametri  
 `nSize`  
 Le dimensioni del buffer del segnalibro, in byte. Quando `nSize` è zero, verrà creato in modo dinamico il buffer di segnalibro in fase di esecuzione.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CBookmark](../../data/oledb/cbookmark-class.md)|Il costruttore|  
|[GetBuffer](../../data/oledb/cbookmark-getbuffer.md)|Recupera il puntatore al buffer.|  
|[GetSize](../../data/oledb/cbookmark-getsize.md)|Recupera la dimensione del buffer in byte.|  
|[SetBookmark](../../data/oledb/cbookmark-setbookmark.md)|Imposta il valore del segnalibro.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cbookmark-operator-equal.md)|Assegna un `CBookmark` classe a un'altra.|  
  
## <a name="remarks"></a>Note  
 **CBookmark\<0 >** è una specializzazione di modello di `CBookmark`; il buffer viene creato dinamicamente in fase di esecuzione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)