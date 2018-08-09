---
title: 'Metodo chaininterfaces:: Cancastto | Microsoft Docs'
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
ms.openlocfilehash: ff24ac92e5e84cb85127ef6e33805928fabd6f60
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647531"
---
# <a name="chaininterfacescancastto-method"></a>Metodo ChainInterfaces::CanCastTo
Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dai parametri di modello diverso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
__forceinline bool CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 ID di interfaccia.  
  
 *ppv*  
 Un puntatore all'ID di interfaccia ultimo che è stato eseguito il cast correttamente.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se tutte le operazioni di cast ha esito positivo; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)