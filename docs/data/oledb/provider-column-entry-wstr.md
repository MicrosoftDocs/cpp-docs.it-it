---
title: PROVIDER_COLUMN_ENTRY_WSTR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: PROVIDER_COLUMN_ENTRY_WSTR
dev_langs: C++
helpviewer_keywords: PROVIDER_COLUMN_ENTRY_WSTR macro
ms.assetid: 70630bd5-d782-473b-9777-aebbbf5321c5
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cee2a21b91a01e73c980bd29902ad3cec85c6e82
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="providercolumnentrywstr"></a>PROVIDER_COLUMN_ENTRY_WSTR
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
PROVIDER_COLUMN_ENTRY_WSTR(  
name  
, ordinal, member )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `member`  
 [in] La variabile membro nella classe di dati che archiviano i dati.  
  
## <a name="remarks"></a>Note  
 Utilizzare questa macro quando i dati della colonna sono una stringa di caratteri Unicode con terminazione di un valore null [DBTYPE_WSTR](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)