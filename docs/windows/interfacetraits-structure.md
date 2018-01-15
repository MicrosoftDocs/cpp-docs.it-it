---
title: InterfaceTraits (struttura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::InterfaceTraits
dev_langs: C++
helpviewer_keywords: InterfaceTraits structure
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c28c7c1eef2fc278a0667ec4b7c635005331467
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="interfacetraits-structure"></a>InterfaceTraits (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename I0  
>  
struct __declspec(novtable) InterfaceTraits;  
template<  
   typename CloakedType  
>  
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
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)