---
title: 'Metodo chaininterfaces:: Fillarraywithiid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: f1ce699c-dfb6-40a9-9ea0-e6703d3cf971
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7e6283b86b8e225771f259df9b5377fffa3667fa
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855942"
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
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)