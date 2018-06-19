---
title: Classe ActivationFactory | Documenti Microsoft
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
ms.openlocfilehash: 6775e9466ed337a070b6a234a4d65bb949a009e4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857955"
---
# <a name="activationfactory-class"></a>ActivationFactory (classe)
Abilita l'attivazione di una o più classi da Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ActivationFactory : public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference>, false>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `I0`  
 L'interfaccia di zero.  
  
 `I1`  
 La prima interfaccia.  
  
 `I2`  
 La seconda interfaccia.  
  
## <a name="remarks"></a>Note  
 ActivationFactory fornisce i metodi di registrazione e le funzionalità di base per l'interfaccia IActivationFactory. ActivationFactory consente inoltre di fornire un'implementazione della factory personalizzata.  
  
 Simbolicamente, il frammento di codice seguente viene illustrato come utilizzare ActivationFactory.  
  
 [!code-cpp[wrl-microsoft__wrl__activationfactory#1](../windows/codesnippet/CPP/activationfactory-class_1.cpp)]  
  
 Frammento di codice seguente viene illustrato come utilizzare il [implementa](../windows/implements-structure.md) struttura per specificare più di tre ID di interfaccia.  
  
 `struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ActivationFactory::ActivationFactory](../windows/activationfactory-activationfactory-constructor.md)|Inizializza la classe ActivationFactory.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ActivationFactory::AddRef](../windows/activationfactory-addref-method.md)|Incrementa il conteggio dei riferimenti dell'oggetto ActivationFactory corrente.|  
|[Metodo ActivationFactory::GetIids](../windows/activationfactory-getiids-method.md)|Recupera una matrice di ID di interfaccia implementato.|  
|[Metodo ActivationFactory::GetRuntimeClassName](../windows/activationfactory-getruntimeclassname-method.md)|Ottiene il nome di classe di runtime dell'oggetto che crea un'istanza di ActivationFactory corrente.|  
|[Metodo ActivationFactory::GetTrustLevel](../windows/activationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità dell'oggetto che crea un'istanza di ActivationFactory corrente.|  
|[Metodo ActivationFactory::QueryInterface](../windows/activationfactory-queryinterface-method.md)|Recupera un puntatore a interfaccia specificato.|  
|[Metodo ActivationFactory::Release](../windows/activationfactory-release-method.md)|Decrementa il conteggio dei riferimenti dell'oggetto ActivationFactory corrente.|  
  
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
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)