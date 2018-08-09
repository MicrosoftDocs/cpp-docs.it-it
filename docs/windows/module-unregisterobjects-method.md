---
title: 'Metodo Module:: unregisterobjects | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::UnregisterObjects
dev_langs:
- C++
helpviewer_keywords:
- UnregisterObjects method
ms.assetid: 3d8119a7-991d-45e9-b8c5-ed36c0be0332
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c46fad71a42f9f947f020709cdf7851d079edd81
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40014026"
---
# <a name="moduleunregisterobjects-method"></a>Metodo Module::UnregisterObjects
Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non è possibile connettersi a esse.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HRESULT UnregisterObjects(  
   ModuleBase* module,  
   const wchar_t* serverName);  
```  
  
### <a name="parameters"></a>Parametri  
 *modulo*  
 Puntatore a un modulo.  
  
 *ServerName*  
 Nome originale che specifica un subset di oggetti interessati dall'operazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per questa operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)