---
title: 'Metodo chaininterfaces:: Verify | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces::Verify
dev_langs:
- C++
helpviewer_keywords:
- Verify method
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c83479434a936f32fb0f7367d8cd02c6676c74e7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860694"
---
# <a name="chaininterfacesverify-method"></a>Metodo ChainInterfaces::Verify
Verifica che ogni interfaccia definita dai parametri di modello `I0` tramite `I9` eredita da IUnknown e/o IInspectable e che `I0` eredita da `I1` tramite `I9`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW __forceinline static void Verify();  
```  
  
## <a name="remarks"></a>Note  
 Se l'operazione di verifica non riesce, un `static_assert` genera un messaggio di errore che descrive l'errore.  
  
## <a name="remarks"></a>Note  
 Parametri di modello `I0` e `I1` sono necessari e i parametri `I2` tramite `I9` sono facoltativi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)