---
title: 'Comptr:: operator -&gt; operatore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator->
dev_langs:
- C++
helpviewer_keywords:
- operator-> operator
ms.assetid: 7b7faefd-d1e4-4f31-a77d-17a42e0d6b6a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3cb3571207f328ad044ffd3f2f9b83bcebc7677e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptroperator-gt-operator"></a>Comptr:: operator -&gt; (operatore)
Recupera un puntatore al tipo specificato dal parametro di modello corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al tipo specificato dal nome del tipo di modello corrente.  
  
## <a name="remarks"></a>Note  
 Questa funzione di supporto rimuove inutile causati dall'utilizzo di STDMETHOD (macro). Grazie a questa funzione IUnknown tipi privati anziché virtuale.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)