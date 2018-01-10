---
title: 'Metodo chaininterfaces:: Fillarraywithiid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid
dev_langs: C++
helpviewer_keywords: FillArrayWithIid method
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 02e78ade52de45cfe06ba9d8cddfe0a2362d1bc9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="chaininterfacesfillarraywithiid-method"></a>Metodo ChainInterfaces::FillArrayWithIid
Archivia l'ID di interfaccia definita per il `I0` parametro di modello in una posizione specificata in una matrice specificata di ID di interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `index`  
 Puntatore a un valore di indice nel `iids` matrice.  
  
 `iids`  
 Matrice di ID di interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)