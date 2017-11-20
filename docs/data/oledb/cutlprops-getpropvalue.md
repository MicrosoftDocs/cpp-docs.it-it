---
title: 'CUtlProps:: GetPropValue | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CUtlProps::GetPropValue
- CUtlProps.GetPropValue
- GetPropValue
dev_langs: C++
helpviewer_keywords: GetPropValue method
ms.assetid: 9a3fbadb-7814-48f7-96a4-b960fc4ecf2e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 857738960ff6a141bbde363a7db1193e6f5e21f7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cutlpropsgetpropvalue"></a>CUtlProps::GetPropValue
Ottiene una proprietà da un set di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      OUT_OF_LINE HRESULT GetPropValue(  
   const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pguidPropSet`  
 [in] GUID per il set di proprietà.  
  
 `dwPropId`  
 [in] L'indice della proprietà.  
  
 `pvValue`  
 [out] Puntatore a una variabile variant contenente il nuovo valore della proprietà.  
  
## <a name="return-value"></a>Valore restituito  
 `Failure`in caso di errore e `S_OK` se ha esito positivo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)