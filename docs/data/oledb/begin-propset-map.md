---
title: BEGIN_PROPSET_MAP | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- BEGIN_PROPSET_MAP
dev_langs:
- C++
helpviewer_keywords:
- BEGIN_PROPSET_MAP macro
ms.assetid: c3a30618-6025-4d49-8688-a171294d2e93
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ec9dc0b1481a3443c769c81d051d370747f3813d
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="beginpropsetmap"></a>BEGIN_PROPSET_MAP
Segni di inizio della proprietà set di voci della mappa.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROPSET_MAP(Class)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *Classe*  
 [in] La classe in cui viene specificato questo set di proprietà. Nei seguenti oggetti OLE DB, è possibile specificare un set di proprietà:  
  
-   [Oggetti origine dati](https://msdn.microsoft.com/en-us/library/ms721278.aspx)  
  
-   [Oggetti di sessione](https://msdn.microsoft.com/en-us/library/ms711572.aspx)  
  
-   [Comandi](https://msdn.microsoft.com/en-us/library/ms724608.aspx)  
  
## <a name="example"></a>Esempio  
 Di seguito è riportato un esempio di mapping dei set di proprietà:  
  
 [!code-cpp[NVC_OLEDB_Provider#3](../../data/oledb/codesnippet/cpp/begin-propset-map_1.h)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)