---
title: Funzione CreateClassFactory | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateClassFactory
dev_langs:
- C++
helpviewer_keywords:
- CreateClassFactory function
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ff853fce39b2052b82df921bf6743b0db361408c
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461325"
---
# <a name="createclassfactory-function"></a>CreateClassFactory (funzione)
Crea una factory che produce istanze della classe specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Factory>  
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(  
   _In_ unsigned int *flags,   
   _In_ const CreatorMap* entry,   
   REFIID riid,   
   _Outptr_ IUnknown **ppFactory  
) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *flags*  
 Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione.  
  
 *entry*  
 Puntatore a un [CreatorMap](../windows/creatormap-structure.md) che contiene informazioni di inizializzazione e la registrazione sul parametro *riid*.  
  
 *riid*  
 Riferimento all'ID di interfaccia.  
  
 *ppFactory*  
 Se questa operazione viene completata correttamente, un puntatore a una class factory.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Viene generato un errore di asserzione se il parametro di modello *Factory* non deriva dall'interfaccia `IClassFactory`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)