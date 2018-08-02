---
title: 'Operatore comptr:: -&gt; operatore | Microsoft Docs'
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
ms.openlocfilehash: 0ff18dee2b8d951ab9233e92478eb967e4a02eb9
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464298"
---
# <a name="comptroperator-gt-operator"></a>Operatore comptr:: -&gt; operatore
Recupera un puntatore al tipo specificato dal parametro di modello corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore al tipo specificato dal nome del tipo di modello corrente.  
  
## <a name="remarks"></a>Note  
 Questa funzione di supporto rimuove un sovraccarico non necessario quando si utilizza lo STDMETHOD (macro). Questa funzione rende `IUnknown` tipi **privati** anziché **virtuale**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)