---
title: 'Metodo asyncbase:: Close | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::Close
dev_langs:
- C++
helpviewer_keywords:
- Close method
ms.assetid: a52b1124-754b-4393-b491-64aae0c22f1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4f3f36656b9316fb6ad980349a836fad31c3a9a0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860795"
---
# <a name="asyncbaseclose-method"></a>Metodo AsyncBase::Close
Termina l'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   Close  
)(void) override;  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione di chiusura o è già chiuso. in caso contrario, E_ILLEGAL_STATE_CHANGE.  
  
## <a name="remarks"></a>Note  
 Close () è un'implementazione predefinita di IAsyncInfo::Close e non funziona effettivo. Per chiudere effettivamente un'operazione asincrona, eseguire l'override del metodo virtuale puro OnClose ().  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)