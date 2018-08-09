---
title: 'Operatore comptr:: booltype operatore | Microsoft Docs'
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
ms.openlocfilehash: bb5735eeb9cd4048596588765468fbb9c5e07496
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652601"
---
# <a name="comptroperator-microsoftwrldetailsbooltype-operator"></a>Operatore ComPtr::operator Microsoft::WRL::Details::BoolType
Indica o meno una **ComPtr** gestisce la durata dell'oggetto di un'interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se un'interfaccia è associata a questo **ComPtr**, l'indirizzo del [boolstruct::](../windows/boolstruct-member-data-member.md) membro dati; in caso contrario, **nullptr**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtr (classe)](../windows/comptr-class.md)   
 [Metodo ComPtr::Get](../windows/comptr-get-method.md)