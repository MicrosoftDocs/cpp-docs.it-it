---
title: COLUMN_NAME_STATUS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: COLUMN_NAME_STATUS
dev_langs: C++
helpviewer_keywords: COLUMN_NAME_STATUS macro
ms.assetid: a6204755-6739-4116-b414-9b8fa7ab6549
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f4905af5cd691bbfebef22bea42743ef95ab65be
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="columnnamestatus"></a>COLUMN_NAME_STATUS
Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta inoltre stato della colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
COLUMN_NAME_STATUS(  
pszName  
,   
data  
,   
status )  
```  
  
#### <a name="parameters"></a>Parametri  
 `pszName`  
 [in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile effettuare questa operazione inserisce una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *status*  
 [in] Variabile da associare allo stato della colonna.  
  
## <a name="remarks"></a>Note  
 Vedere [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su dove il **column_name _\***  vengono utilizzate le macro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN_NAME](../../data/oledb/column-name.md)   
 [COLUMN_NAME_EX](../../data/oledb/column-name-ex.md)   
 [COLUMN_NAME_LENGTH](../../data/oledb/column-name-length.md)   
 [COLUMN_NAME_LENGTH_STATUS](../../data/oledb/column-name-length-status.md)   
 [COLUMN_NAME_PS](../../data/oledb/column-name-ps.md)   
 [COLUMN_NAME_PS_LENGTH](../../data/oledb/column-name-ps-length.md)   
 [COLUMN_NAME_PS_STATUS](../../data/oledb/column-name-ps-status.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)   
 [COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)   
 [COLUMN_NAME_TYPE_PS](../../data/oledb/column-name-type-ps.md)   
 [COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)   
 [COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)