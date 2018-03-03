---
title: 'Comptr:: operator&amp; operatore | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator&
dev_langs:
- C++
helpviewer_keywords:
- operator& operator
ms.assetid: 2d77fda6-f4b2-45c1-8a0e-fbc355013531
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cc5234f10a16141fd91193d634f0d306886aff71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptroperatoramp-operator"></a>Comptr:: operator&amp; (operatore)
Rilascia l'interfaccia associata a questo `ComPtr` dell'oggetto e quindi recupera l'indirizzo del `ComPtr` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&()  
  
const Details::ComPtrRef<const WeakRef> operator&() const  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento debole all'oggetto corrente `ComPtr`.  
  
## <a name="remarks"></a>Note  
 Questo metodo è diverso da [comptr:: Getaddressof](../windows/comptr-getaddressof-method.md) in quanto questo metodo rilascia un riferimento al puntatore di interfaccia. Utilizzare `ComPtr::GetAddressOf` quando si richiedono l'indirizzo del puntatore a interfaccia ma non si desidera rilasciare tale interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)