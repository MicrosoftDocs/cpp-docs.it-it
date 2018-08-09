---
title: ActivationFactory (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- ActivationFactory class
ms.assetid: 5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 43e4932f93c4b9954343df2aecd4db3b13ebc147
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649205"
---
# <a name="activationfactory-class"></a>ActivationFactory (classe)
Abilita l'attivazione di una o più classi da Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ActivationFactory : public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference>, false>;  
```  
  
### <a name="parameters"></a>Parametri  
 *I0*  
 L'interfaccia di zero.  
  
 *I1*  
 La prima interfaccia.  
  
 *I2*  
 La seconda interfaccia.  
  
## <a name="remarks"></a>Note  
 **ActivationFactory** fornisce i metodi di registrazione e la funzionalità di base per il `IActivationFactory` interfaccia. **ActivationFactory** consente inoltre di fornire un'implementazione della factory personalizzata.  
  
 Simbolicamente, il frammento di codice seguente viene illustrato come utilizzare ActivationFactory.  
  
 [!code-cpp[wrl-microsoft__wrl__activationfactory#1](../windows/codesnippet/CPP/activationfactory-class_1.cpp)]  
  
 Il frammento di codice seguente viene illustrato come utilizzare il [implementa](../windows/implements-structure.md) struttura per specificare più di tre ID di interfaccia.  
  
 `struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ActivationFactory::ActivationFactory](../windows/activationfactory-activationfactory-constructor.md)|Inizializza la **ActivationFactory** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ActivationFactory::AddRef](../windows/activationfactory-addref-method.md)|Incrementa il conteggio dei riferimenti dell'oggetto corrente **ActivationFactory** oggetto.|  
|[Metodo ActivationFactory::GetIids](../windows/activationfactory-getiids-method.md)|Recupera una matrice di ID di interfaccia implementata.|  
|[Metodo ActivationFactory::GetRuntimeClassName](../windows/activationfactory-getruntimeclassname-method.md)|Ottiene il nome della classe di runtime dell'oggetto a cui l'oggetto corrente **ActivationFactory** crea un'istanza.|  
|[Metodo ActivationFactory::GetTrustLevel](../windows/activationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità dell'oggetto a cui l'oggetto corrente **ActivationFactory** crea un'istanza.|  
|[Metodo ActivationFactory::QueryInterface](../windows/activationfactory-queryinterface-method.md)|Recupera un puntatore all'interfaccia specificata.|  
|[Metodo ActivationFactory::Release](../windows/activationfactory-release-method.md)|Decrementa il conteggio dei riferimenti dell'oggetto corrente **ActivationFactory** oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `RuntimeClassBase`  
  
 `ImplementsHelper`  
  
 `DontUseNewUseMake`  
  
 `RuntimeClassFlags`  
  
 `RuntimeClassBaseT`  
  
 `RuntimeClass`  
  
 `ActivationFactory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)