---
title: Classe CEnumerator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CEnumerator
dev_langs: C++
helpviewer_keywords: CEnumerator class
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a64ac02e7b16bfab70966ffaf2a1897ae955f8c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cenumerator-class"></a>Classe CEnumerator
Usa un oggetto enumeratore OLE DB che espone il [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) interfaccia per restituire un set di righe che descrivono tutte le origini dati e gli enumeratori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Trova](../../data/oledb/cenumerator-find.md)|Esegue una ricerca attraverso i provider disponibili (origini dati) per cercare un elemento con il nome specificato.|  
|[GetMoniker](../../data/oledb/cenumerator-getmoniker.md)|Recupera l'interfaccia `IMoniker` per il record corrente.|  
|[Apri](../../data/oledb/cenumerator-open.md)|Apre l'enumeratore.|  
  
## <a name="remarks"></a>Note  
 È possibile recuperare il **ISourcesRowset** dati indirettamente da questa classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:**atldbcli. h  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)