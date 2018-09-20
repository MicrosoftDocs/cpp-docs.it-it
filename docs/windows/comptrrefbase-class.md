---
title: ComPtrRefBase (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase
dev_langs:
- C++
helpviewer_keywords:
- ComPtrRefBase class
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3ca2cb8cdc748abcac61bd548491187095b71a3f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415317"
---
# <a name="comptrrefbase-class"></a>ComPtrRefBase (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename T
>
class ComPtrRefBase;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto [ComPtr\<T >](../windows/comptr-class.md) tipo o un tipo derivato da essa, non soltanto l'interfaccia rappresentata dal **ComPtr**.

## <a name="remarks"></a>Note

Rappresenta la classe base per il [ComPtrRef](../windows/comptrref-class.md) classe.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`InterfaceType`|Un sinonimo per il tipo di parametro di modello *T*.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore ComPtrRefBase::operator IInspectable**](../windows/comptrrefbase-operator-iinspectable-star-star-operator.md)|L'oggetto corrente viene eseguito il cast [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un oggetto-puntatore-al `IInspectable` interfaccia.|
|[Operatore ComPtrRefBase::operator IUnknown**](../windows/comptrrefbase-operator-iunknown-star-star-operator.md)|L'oggetto corrente viene eseguito il cast [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un oggetto-puntatore-al `IUnknown` interfaccia.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro dati ComPtrRefBase::ptr_](../windows/comptrrefbase-ptr-data-member.md)|Puntatore al tipo specificato dal parametro di modello corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)