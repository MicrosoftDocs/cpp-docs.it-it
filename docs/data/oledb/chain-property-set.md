---
title: CHAIN_PROPERTY_SET | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CHAIN_PROPERTY_SET
dev_langs: C++
helpviewer_keywords: CHAIN_PROPERTY_SET macro
ms.assetid: 2bcf6d7d-f4e5-480d-9140-1e32a0994c94
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 95a3c2fb12742600822720702d274f251b044cc7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="chainpropertyset"></a>CHAIN_PROPERTY_SET
Questa macro unisce i gruppi di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
CHAIN_PROPERTY_SET(  
ChainClass   
)  
  
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