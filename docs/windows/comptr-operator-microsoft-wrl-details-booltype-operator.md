---
title: 'Operatore booltype comptr:: operator | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d5efd641e5c908e5f1c4d4a3cdb78cd146b634f5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptroperator-microsoftwrldetailsbooltype-operator"></a>Operatore ComPtr::operator Microsoft::WRL::Details::BoolType
Indica se un ComPtr gestisce o meno la durata degli oggetti di un'interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se è associata a questo ComPtr, l'indirizzo di un'interfaccia di [boolstruct::](../windows/boolstruct-member-data-member.md) (membro dati); in caso contrario, `nullptr`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)   
 [Metodo ComPtr::Get](../windows/comptr-get-method.md)