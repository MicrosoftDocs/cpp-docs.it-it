---
title: 'Metodo comptr:: Detach | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method
ms.assetid: b9016775-1ade-4581-be1f-0d6f9c2ca658
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4d4a84131a6159c665e3947d7b642ab0592b2e36
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465438"
---
# <a name="comptrdetach-method"></a>Metodo ComPtr::Detach
Rimuove l'associazione di questo **ComPtr** oggetto dall'interfaccia da essa rappresentato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
T* Detach();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore all'interfaccia rappresentata da questo **ComPtr** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)