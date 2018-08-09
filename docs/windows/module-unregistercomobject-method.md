---
title: 'Metodo Module:: unregistercomobject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::UnregisterCOMObject
dev_langs:
- C++
helpviewer_keywords:
- UnregisterCOMObject method
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 240ab47099b9e97e9a6bb794083858fe042605d2
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018695"
---
# <a name="moduleunregistercomobject-method"></a>Metodo Module::UnregisterCOMObject
Annulla la registrazione di uno o più oggetti COM, che impedisce che altre applicazioni si connettano a essi.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
virtual HRESULT UnregisterCOMObject(  
   const wchar_t* serverName,  
   DWORD* cookies,  
   unsigned int count  
```  
  
### <a name="parameters"></a>Parametri  
 *ServerName*  
 (Non usato)  
  
 *Cookie*  
 Matrice di puntatori a valori che identificano gli oggetti della classe per cui annullare la registrazione. La matrice è stata creata con il [RegisterCOMObject](../windows/module-registercomobject-method.md) (metodo).  
  
 *count*  
 Il numero di classi per annullare la registrazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo. in caso contrario, un errore HRESULT che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)