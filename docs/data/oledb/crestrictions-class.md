---
title: Classe CRestrictions | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CRestrictions
- CRestrictions
- ATL.CRestrictions
dev_langs: C++
helpviewer_keywords: CRestrictions class
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 23b01a776a624f0fa463c7071e164b70111b2e8b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crestrictions-class"></a>Classe CRestrictions
Una classe generica che consente di specificare le restrizioni per i set di righe dello schema.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <   
   class T,   
   short nRestrictions,   
   const GUID* pguid   
>  
class CRestrictions : public CSchemaRowset <   
   T,   
   nRestrictions   
>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe utilizzata per la funzione di accesso.  
  
 `nRestrictions`  
 Il numero di colonne di restrizione per il set di righe dello schema.  
  
 `pguid`  
 Puntatore al GUID per lo schema.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Apri](../../data/oledb/crestrictions-open.md)|Restituisce un set in base alle restrizioni fornito dall'utente di risultati.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbsch. h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)