---
title: 'Metodo chaininterfaces:: Verify | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::ChainInterfaces::Verify
dev_langs: C++
helpviewer_keywords: Verify method
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d34d117091fd8807dfefda074e510910bf059560
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)