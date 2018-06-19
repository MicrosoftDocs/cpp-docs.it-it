---
title: InterfaceTraits (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits
dev_langs:
- C++
helpviewer_keywords:
- InterfaceTraits structure
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4203fbb639b06e7e421809f9d901c70933d586d1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878684"
---
# <a name="interfacetraits-structure"></a>InterfaceTraits (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename I0  
>  
struct __declspec(novtable) InterfaceTraits;  
template<typename CloakedType>  
struct __declspec(novtable) InterfaceTraits<CloakedIid<CloakedType>>;  
  
template<>  
struct __declspec(novtable) InterfaceTraits<Nil>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `I0`  
 Il nome di un'interfaccia.  
  
 `CloakedType`  
 Per RuntimeClass, Implements e ChainInterfaces, un'interfaccia che non sarà nell'elenco di supportati gli ID di interfaccia.  
  
## <a name="remarks"></a>Note  
 Caratteristiche comuni di implementa di un'interfaccia.  
  
 Il secondo modello è una specializzazione per le interfacce mascherate. Il terzo modello è una specializzazione per i parametri null.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Base`|Sinonimo del parametro di modello `I0`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo InterfaceTraits::CanCastTo](../windows/interfacetraits-cancastto-method.md)|Indica se il puntatore specificato può essere convertito in un puntatore a `Base`.|  
|[Metodo InterfaceTraits::CastToBase](../windows/interfacetraits-casttobase-method.md)|Esegue il cast il puntatore specificato a un puntatore a `Base`.|  
|[Metodo InterfaceTraits::CastToUnknown](../windows/interfacetraits-casttounknown-method.md)|Esegue il cast il puntatore specificato a un puntatore a IUnknown.|  
|[Metodo InterfaceTraits::FillArrayWithIid](../windows/interfacetraits-fillarraywithiid-method.md)|Assegna l'ID di interfaccia di `Base` all'elemento della matrice specificata dall'argomento dell'indice.|  
|[Metodo InterfaceTraits::Verify](../windows/interfacetraits-verify-method.md)|Verifica che Base è derivata in modo corretto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante InterfaceTraits::IidCount](../windows/interfacetraits-iidcount-constant.md)|Contiene il numero di ID associato all'oggetto InterfaceTraits corrente di interfaccia.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `InterfaceTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)