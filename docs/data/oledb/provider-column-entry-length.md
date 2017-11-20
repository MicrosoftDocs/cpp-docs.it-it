---
title: PROVIDER_COLUMN_ENTRY_LENGTH | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: PROVIDER_COLUMN_ENTRY_LENGTH
dev_langs: C++
helpviewer_keywords: PROVIDER_COLUMN_ENTRY_LENGTH macro
ms.assetid: b4a67246-c049-4622-bb65-242cc8cae4be
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0a2d976dd079eb0100d4eb7cf56ef7c9dcfd0175
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="providercolumnentrylength"></a>PROVIDER_COLUMN_ENTRY_LENGTH
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
PROVIDER_COLUMN_ENTRY_LENGTH(  
name  
, ordinal, size, member )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `size`  
 [in] Le dimensioni di colonna in byte.  
  
 `member`  
 [in] La variabile membro in `dataClass` che archivia i dati della colonna.  
  
## <a name="remarks"></a>Note  
 Consente di specificare la dimensione della colonna.  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)