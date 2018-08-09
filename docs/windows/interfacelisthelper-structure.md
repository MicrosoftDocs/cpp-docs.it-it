---
title: InterfaceListHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceListHelper
dev_langs:
- C++
helpviewer_keywords:
- InterfaceListHelper structure
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a5d4380109c7eb858c2b0eaeeb9156e4003fc581
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40012089"
---
# <a name="interfacelisthelper-structure"></a>InterfaceListHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename T0,  
   typename T1 = Nil,  
   typename T2 = Nil,  
   typename T3 = Nil,  
   typename T4 = Nil,  
   typename T5 = Nil,  
   typename T6 = Nil,  
   typename T7 = Nil,  
   typename T8 = Nil,  
   typename T9 = Nil  
>  
struct InterfaceListHelper;  
  
template <  
   typename T0  
>  
struct InterfaceListHelper<T0, Nil, Nil, Nil, Nil, Nil, Nil, Nil, Nil>;  
```  
  
### <a name="parameters"></a>Parametri  
 *T0*  
 Parametro di modello 0, che è obbligatorio.  
  
 *T1*  
 Parametro di modello 1, che per impostazione predefinita non è specificato.  
  
 *T2*  
 Parametro di modello 2, che per impostazione predefinita non è specificato. Il terzo parametro di modello.  
  
 *T3*  
 Parametro di modello 3, che per impostazione predefinita non è specificato.  
  
 *T4*  
 Parametro di modello 4, che per impostazione predefinita non è specificato.  
  
 *T5*  
 Parametro di modello 5, che per impostazione predefinita non è specificato.  
  
 *T6*  
 Parametro di modello 6, che per impostazione predefinita non è specificato.  
  
 *T7*  
 Parametro di modello 7, che per impostazione predefinita non è specificato.  
  
 *T8*  
 Parametro di modello 8, che per impostazione predefinita non è specificato.  
  
 *T9*  
 Parametro di modello 9, che per impostazione predefinita non è specificato.  
  
## <a name="remarks"></a>Note  
 Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.  
  
 Il **InterfaceListHelper** modello Usa il parametro di modello *T0* per definire il primo membro di dati in un `InterfaceList` struttura, quindi in modo ricorsivo e si applica il  **InterfaceListHelper** modello per i rimanenti parametri del modello. **InterfaceListHelper** si interrompe quando non sono presenti parametri di modello rimanenti.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`TypeT`|Un sinonimo del tipo InterfaceList.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `InterfaceListHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)