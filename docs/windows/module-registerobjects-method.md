---
title: 'Metodo Module:: registerobjects | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::RegisterObjects
dev_langs: C++
helpviewer_keywords: RegisterObjects method
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e73a59ff18c16a898ca1a9d7919615a2dec18bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="moduleregisterobjects-method"></a>Metodo Module::RegisterObjects
Registra gli oggetti COM o Windows Runtime in modo da altre applicazioni di connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT RegisterObjects(  
   ModuleBase* module,   
   const wchar_t* serverName);  
```  
  
#### <a name="parameters"></a>Parametri  
 `module`  
 Una matrice di oggetti COM o Windows Runtime.  
  
 `serverName`  
 Nome del server che ha creato gli oggetti.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, HRESULT che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
## <a name="see-also"></a>Vedere anche
[Classe Module](../windows/module-class.md)