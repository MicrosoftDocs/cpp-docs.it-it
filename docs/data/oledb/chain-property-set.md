---
title: CHAIN_PROPERTY_SET | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CHAIN_PROPERTY_SET
dev_langs:
- C++
helpviewer_keywords:
- CHAIN_PROPERTY_SET macro
ms.assetid: 2bcf6d7d-f4e5-480d-9140-1e32a0994c94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9db57535f3f0bc7653c80b83c3e0115727eed707
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="chainpropertyset"></a>CHAIN_PROPERTY_SET
Questa macro unisce i gruppi di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
CHAIN_PROPERTY_SET(ChainClass)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *ChainClass*  
 [in] Il nome della classe di proprietà della catena per. Si tratta di una classe generata dalla creazione guidata progetto ATL che già contiene una mappa (ad esempio una classe di oggetto origine dati, comando o sessione).  
  
## <a name="remarks"></a>Note  
 È possibile concatenare un set di proprietà da un'altra classe per la propria classe, quindi accedere alle proprietà direttamente dalla classe.  
  
> [!CAUTION]
>  Utilizzare questa macro con cautela. Utilizzo non corretto può causare un consumer eseguire i test di conformità OLE DB.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)