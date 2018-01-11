---
title: Implementa una struttura | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Implements
dev_langs: C++
helpviewer_keywords: Implements structure
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 63da9ea650c34b7b1ed75d351587c39e52a88098
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implements-structure"></a>Implementa la struttura
Implementa QueryInterface e GetIid per le interfacce specificate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename I0,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
struct __declspec(novtable) Implements : Details::ImplementsHelper<RuntimeClassFlags<WinRt>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT>, Details::ImplementsBase;  
template <  
   int flags,  
   typename I0,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8  
>  
struct __declspec(novtable) Implements<RuntimeClassFlags<flags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : Details::ImplementsHelper<RuntimeClassFlags<flags>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT>, Details::ImplementsBase;  
```  
  
#### <a name="parameters"></a>Parametri  
 `I0`  
 ID dell'interfaccia di zero. (Obbligatorio).  
  
 `I1`  
 Il primo ID di interfaccia. (facoltativo)  
  
 `I2`  
 Il secondo ID di interfaccia. (facoltativo)  
  
 `I3`  
 Il terzo ID di interfaccia. (facoltativo)  
  
 `I4`  
 Il quarto ID di interfaccia. (facoltativo)  
  
 `I5`  
 Il quinto ID di interfaccia. (facoltativo)  
  
 `I6`  
 Il sesto ID di interfaccia. (facoltativo)  
  
 `I7`  
 Il settimo ID di interfaccia. (facoltativo)  
  
 `I8`  
 ID dell'interfaccia ottavo. (facoltativo)  
  
 `I9`  
 Il nono ID di interfaccia. (facoltativo)  
  
 `flags`  
 Flag di configurazione per la classe. Uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) le enumerazioni che vengono specificate in un [RuntimeClassFlags](../windows/runtimeclassflags-structure.md) struttura.  
  
## <a name="remarks"></a>Note  
 Deriva dall'elenco delle interfacce specificate e implementa i modelli di supporto per QueryInterface e GetIid.  
  
 Ogni `I0` tramite `I9` parametro interfaccia deve derivare da entrambi IUnknown, IInspectable, o [ChainInterfaces](../windows/chaininterfaces-structure.md) modello. Il `flags` parametro determina se il supporto viene generato per IUnknown o IInspectable.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ClassFlags`|Sinonimo di `RuntimeClassFlags<WinRt>`.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Implements::CanCastTo](../windows/implements-cancastto-method.md)|Ottiene un puntatore a interfaccia specificato.|  
|[Metodo Implements::CastToUnknown](../windows/implements-casttounknown-method.md)|Ottiene un puntatore a interfaccia IUnknown sottostante.|  
|[Metodo Implements::FillArrayWithIid](../windows/implements-fillarraywithiid-method.md)|Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato.|  
  
### <a name="protected-constants"></a>Costanti protette  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante Implements::IidCount](../windows/implements-iidcount-constant.md)|Contiene il numero di ID di interfaccia implementato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `ImplementsBase`  
  
 `ImplementsHelper`  
  
 `Implements`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)