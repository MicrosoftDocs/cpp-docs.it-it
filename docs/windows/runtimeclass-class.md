---
title: Classe RuntimeClass | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::RuntimeClass
dev_langs: C++
helpviewer_keywords: RuntimeClass class
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e757712b360ff3ed4de12d8236c75a691a1f0c7c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass
Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il Windows Runtime specificato, COM classico e il supporto dei riferimenti deboli.  
  
 È in genere derivare tipi WRL da `RuntimeClass` poiché questa classe implementa `AddRef`, `Release`, e `QueryInterface`, e consente di gestire il conteggio dei riferimenti generale del modulo.  
  
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
class RuntimeClass : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT, RuntimeClassFlags<WinRt>>;  
  
template <  
   unsigned int classFlags,  
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
class RuntimeClass<RuntimeClassFlags<classFlags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT, RuntimeClassFlags<classFlags> >;  
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
  
 `classFlags`  
 Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione.  Il `__WRL_CONFIGURATION_LEGACY__` macro può essere definita per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definito, le istanze di RuntimeClass sono predefinito dy non agile. Se non è definito, le istanze di RuntimeClass sono agile per impostazione predefinita. Per evitare ambiguità, specificare sempre il RuntimeClassType::FtmBase o RuntimeClassType::InhibitFtmBase.
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore RuntimeClass::RuntimeClass](../windows/runtimeclass-runtimeclass-constructor.md)|Inizializza l'istanza corrente della classe RuntimeClass.|  
|[Distruttore RuntimeClass::~RuntimeClass](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinizializza l'istanza corrente della classe RuntimeClass.|  
  
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
  
 `RuntimeClass`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)
