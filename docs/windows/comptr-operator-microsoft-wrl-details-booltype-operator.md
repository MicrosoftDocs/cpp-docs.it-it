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
ms.openlocfilehash: 1a4ec737c3f24899e50220c3e862283b88a826b9
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461164"
---
# <a name="comptroperator-microsoftwrldetailsbooltype-operator"></a>Operatore ComPtr::operator Microsoft::WRL::Details::BoolType
Indica o meno una **ComPtr** gestisce la durata dell'oggetto di un'interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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