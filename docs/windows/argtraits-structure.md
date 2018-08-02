---
title: ArgTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraits
dev_langs:
- C++
helpviewer_keywords:
- ArgTraits structure
ms.assetid: 58ae4115-c1bc-48c8-b01b-e60554841c30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 667aa3d2d29e4ce541d957b20b2246380e237a6b
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462043"
---
# <a name="argtraits-structure"></a>ArgTraits (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename TMemberFunction>  
struct ArgTraits;  
template<typename TDelegateInterface>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(void)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8,  
   typename TArg9  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>;  
```  
  
#### <a name="parameters"></a>Parametri  
 *TMemberFunction*  
 Parametro TypeName per una struttura ArgTraits che non può corrispondere a qualsiasi `Invoke` firma del metodo.  
  
 *TDelegateInterface*  
 Un'interfaccia di delegato.  
  
 *TArg1*  
 Il tipo del primo argomento del `Invoke` (metodo).  
  
 *TArg2*  
 Il tipo del secondo argomento del `Invoke` (metodo).  
  
 *TArg3*  
 Il tipo del terzo argomento del `Invoke` (metodo).  
  
 *TArg4*  
 Il tipo del quarto argomento del `Invoke` (metodo).  
  
 *TArg5*  
 Il tipo del quinto argomento del `Invoke` (metodo).  
  
 *TArg6*  
 Il tipo del sesto argomento del `Invoke` (metodo).  
  
 *TArg7*  
 Il tipo del settimo argomento del `Invoke` (metodo).  
  
 *TArg8*  
 Il tipo dell'ottavo argomento del `Invoke` (metodo).  
  
 *TArg9*  
 Il tipo del nono argomento del `Invoke` (metodo).  
  
## <a name="remarks"></a>Note  
 Il `ArgTraits` struttura dichiara un delegato specificato dell'interfaccia e una funzione membro anonimo che include un numero specificato di parametri.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Arg1Type`|Typedef per TArg1.|  
|`Arg2Type`|Typedef per TArg2.|  
|`Arg3Type`|Typedef per TArg3.|  
|`Arg4Type`|Typedef per TArg4.|  
|`Arg5Type`|Typedef per TArg5.|  
|`Arg6Type`|Typedef per TArg6.|  
|`Arg7Type`|Typedef per TArg7.|  
|`Arg8Type`|Typedef per TArg8.|  
|`Arg9Type`|Typedef per TArg9.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante ArgTraits::args](../windows/argtraits-args-constant.md)|Conta il numero di parametri di `Invoke` metodo di un'interfaccia di delegato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ArgTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)