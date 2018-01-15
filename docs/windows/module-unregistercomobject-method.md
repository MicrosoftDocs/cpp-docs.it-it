---
title: 'Metodo Module:: unregistercomobject | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::UnregisterCOMObject
dev_langs: C++
helpviewer_keywords: UnregisterCOMObject method
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 45a6dc776feb1534cd7e58240a40cc173e7459de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="moduleunregistercomobject-method"></a>Metodo Module::UnregisterCOMObject
Annulla la registrazione di uno o più oggetti COM, che impedisce altre applicazioni di connettersi a essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual HRESULT UnregisterCOMObject(  
   const wchar_t* serverName,  
   DWORD* cookies,  
   unsigned int count  
```  
  
#### <a name="parameters"></a>Parametri  
 `serverName`  
 (Non utilizzato)  
  
 `cookies`  
 Matrice di puntatori ai valori che identificano gli oggetti della classe per annullare la registrazione. La matrice è stata creata con la [RegisterCOMObject](../windows/module-registercomobject-method.md) metodo.  
  
 `count`  
 Il numero di classi per annullare la registrazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)