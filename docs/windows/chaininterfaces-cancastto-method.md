---
title: 'Metodo chaininterfaces:: Cancastto | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: 8be44875-53ed-494b-91a0-0f8e399685bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c2286c347fbd68f34fac807e80facca0a0286aa6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860294"
---
# <a name="chaininterfacescancastto-method"></a>Metodo ChainInterfaces::CanCastTo
Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dai parametri di modello non predefinito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline bool CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ppv`  
 Un puntatore per l'ultimo ID di interfaccia che è stato eseguito il cast correttamente.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se tutte le operazioni di cast ha esito positivo. in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)