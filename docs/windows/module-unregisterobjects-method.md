---
title: 'Metodo Module:: unregisterobjects | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::UnregisterObjects
dev_langs: C++
helpviewer_keywords: UnregisterObjects method
ms.assetid: 3d8119a7-991d-45e9-b8c5-ed36c0be0332
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d7e55afb96805fba6558cb900d2421a86379791c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="moduleunregisterobjects-method"></a>Metodo Module::UnregisterObjects
Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non è possibile connettersi a essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT UnregisterObjects(  
   ModuleBase* module,  
   const wchar_t* serverName);  
```  
  
#### <a name="parameters"></a>Parametri  
 `module`  
 Puntatore a un modulo.  
  
 `serverName`  
 Un nome valido che specifica un subset di oggetti interessati dall'operazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per questa operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)