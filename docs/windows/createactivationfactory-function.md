---
title: Funzione CreateActivationFactory | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- CreateActivationFactory function
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fd2f65bb86cdd77d4e285cee5603416fa629f940
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466348"
---
# <a name="createactivationfactory-function"></a>CreateActivationFactory (funzione)
Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Factory>  
   inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(  
      _In_ unsigned int *flags,        _In_ const CreatorMap* entry,   
      REFIID riid,   
     _Outptr_ IUnknown **ppFactory) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *flags*  
 Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione.  
  
 *entry*  
 Puntatore a un [CreatorMap](../windows/creatormap-structure.md) che contiene informazioni di inizializzazione e la registrazione sul parametro *riid*.  
  
 *riid*  
 Riferimento all'ID di interfaccia.  
  
 *ppFactory*  
 Se questa operazione viene completata correttamente, un puntatore a una factory di attivazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Viene generato un errore di asserzione se il parametro di modello *Factory* non deriva dall'interfaccia `IActivationFactory`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)