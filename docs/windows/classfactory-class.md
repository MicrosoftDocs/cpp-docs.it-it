---
title: Classe ClassFactory | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory
dev_langs:
- C++
helpviewer_keywords:
- ClassFactory class
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8c37c016809d31fcb072f23768e9f54313331016
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="classfactory-class"></a>ClassFactory (classe)
Implementa la funzionalità di base dell'interfaccia IClassFactory.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ClassFactory : public Details::RuntimeClass<  
   typename Details::InterfaceListHelper<IClassFactory,   
   I0,   
   I1,   
   I2,   
   Details::Nil>::TypeT,   
   RuntimeClassFlags<ClassicCom | InhibitWeakReference>,   
      false>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `I0`  
 L'interfaccia di zero.  
  
 `I1`  
 La prima interfaccia.  
  
 `I2`  
 La seconda interfaccia.  
  
## <a name="remarks"></a>Note  
 Utilizzare `ClassFactory` per fornire un'implementazione della factory definita dall'utente.  
  
 Il modello di programmazione seguente viene illustrato come utilizzare il [implementa](../windows/implements-structure.md) struttura per specificare più di tre interfacce in una class factory.  
  
 `struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ClassFactory::ClassFactory](../windows/classfactory-classfactory-constructor.md)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ClassFactory::AddRef](../windows/classfactory-addref-method.md)|Incrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.|  
|[Metodo ClassFactory::LockServer](../windows/classfactory-lockserver-method.md)|Incrementa o decrementa il numero di base di oggetti che vengono rilevate dall'oggetto ClassFactory corrente.|  
|[Metodo ClassFactory::QueryInterface](../windows/classfactory-queryinterface-method.md)|Recupera un puntatore a interfaccia specificato dal parametro.|  
|[Metodo ClassFactory::Release](../windows/classfactory-release-method.md)|Decrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.|  
  
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
  
 `ClassFactory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)   
 [Enumerazione RuntimeClassType](../windows/runtimeclasstype-enumeration.md)