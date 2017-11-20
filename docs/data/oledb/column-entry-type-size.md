---
title: COLUMN_ENTRY_TYPE_SIZE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: COLUMN_ENTRY_TYPE_SIZE
dev_langs: C++
helpviewer_keywords: COLUMN_ENTRY_TYPE_SIZE macro
ms.assetid: d8b169e8-af22-464b-8cb3-eaa346f7a739
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0bfcb73413aff9cab90c0e4bec3623053f0759c7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="columnentrytypesize"></a>COLUMN_ENTRY_TYPE_SIZE
Rappresenta un'associazione a una specifica colonna nel database. Supporta `type` e `size` parametri.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
COLUMN_ENTRY_TYPE_SIZE(  
nOrdinal  
,   
wType  
,   
nLength  
,   
data  
 )  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `nOrdinal`  
 [in] Numero di colonna.  
  
 `wType`  
 [in] Tipo di dati della voce di colonna.  
  
 `nLength`  
 [in] Dimensione della voce di colonna in byte.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
## <a name="remarks"></a>Note  
 Questa macro è una variante specializzata del [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro che consente di specificare la dimensione dei dati e il tipo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)