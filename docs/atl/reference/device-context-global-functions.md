---
title: Funzioni globali di contesto di dispositivo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlwin/ATL::AtlCreateTargetDC
dev_langs:
- C++
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9aa685604580423262ab694d1285897cd29eef63
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="device-context-global-functions"></a>Funzioni globali di contesto di dispositivo
Questa funzione crea un contesto di dispositivo per un determinato dispositivo.  
  
|||  
|-|-|  
|[AtlCreateTargetDC](#atlcreatetargetdc)|Crea un contesto di dispositivo.|  
  
##  <a name="atlcreatetargetdc"></a>AtlCreateTargetDC  
 Crea un contesto di dispositivo per il dispositivo specificato nella [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) struttura.  
  
```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```  
  
### <a name="parameters"></a>Parametri  
 *HDC*  
 [in] L'handle di un contesto di dispositivo, esistente o **NULL**.  
  
 `ptd`  
 [in] Un puntatore al **DVTARGETDEVICE** struttura contenente informazioni sul dispositivo di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per un contesto di dispositivo per il dispositivo specificato nella **DVTARGETDEVICE**. Se non è specificato, restituisce l'handle per il dispositivo di visualizzazione predefinito.  
  
### <a name="remarks"></a>Note  
 Se la struttura è **NULL** e *hdc* è **NULL**, crea un contesto di dispositivo per il dispositivo di visualizzazione predefinito.  
  
 Se *hdc* non **NULL** e `ptd` è **NULL**, la funzione restituisce esistente *hdc*.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
   
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
