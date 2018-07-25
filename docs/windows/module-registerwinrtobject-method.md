---
title: 'Metodo Module:: registerwinrtobject | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::RegisterWinRTObject
dev_langs:
- C++
helpviewer_keywords:
- RegisterWinRTObject method
ms.assetid: a2782c9c-b9c5-4e4b-9c8d-ef513aea20c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 097bf70ebd280d9494ff70ea1d80f53615f3d898
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874954"
---
# <a name="moduleregisterwinrtobject-method"></a>Metodo Module::RegisterWinRTObject
Registra uno o più oggetti di Windows Runtime in modo da altre applicazioni di connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT RegisterWinRTObject(const wchar_t* serverName,  
   wchar_t** activatableClassIds,  
   WINRT_REGISTRATION_COOKIE* cookie,  
   unsigned int count)  
```  
  
#### <a name="parameters"></a>Parametri  
 `serverName`  
 Un nome che specifica un subset di oggetti interessati dall'operazione.  
  
 `activatableClassIds`  
 Matrice di CLSID attivabile da registrare.  
  
 `cookie`  
 Un valore che identifica gli oggetti della classe che sono stati registrati. Questo valore viene utilizzato in un secondo momento per revocare la registrazione.  
  
 `count`  
 Il numero di oggetti da registrare.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)