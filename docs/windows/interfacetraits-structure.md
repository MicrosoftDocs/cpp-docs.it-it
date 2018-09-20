---
title: InterfaceTraits (struttura) | Microsoft Docs
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
ms.openlocfilehash: cb8eb8fbc4199ccdaf5717e465f202c0e4ec296e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437647"
---
# <a name="interfacetraits-structure"></a>InterfaceTraits (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<
   typename I0
>
struct __declspec(novtable) InterfaceTraits;
template<typename CloakedType>
struct __declspec(novtable) InterfaceTraits<CloakedIid<CloakedType>>;

template<>
struct __declspec(novtable) InterfaceTraits<Nil>;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
Il nome di un'interfaccia.

*CloakedType*<br/>
Per la `RuntimeClass`, `Implements` e `ChainInterfaces`, un'interfaccia che non sarà nell'elenco di ID di interfaccia è supportata.

## <a name="remarks"></a>Note

Caratteristiche comuni implementa un'interfaccia.

Il secondo modello è una specializzazione per interfacce mascherate. Il terzo modello è una specializzazione per i parametri di tipo Nil.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`Base`|Un sinonimo per il *I0* parametro di modello.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo InterfaceTraits::CanCastTo](../windows/interfacetraits-cancastto-method.md)|Indica se il puntatore specificato può essere convertito in un puntatore a `Base`.|
|[Metodo InterfaceTraits::CastToBase](../windows/interfacetraits-casttobase-method.md)|Viene eseguito il cast il puntatore specificato a un puntatore a `Base`.|
|[Metodo InterfaceTraits::CastToUnknown](../windows/interfacetraits-casttounknown-method.md)|Viene eseguito il cast il puntatore specificato a un puntatore a `IUnknown`.|
|[Metodo InterfaceTraits::FillArrayWithIid](../windows/interfacetraits-fillarraywithiid-method.md)|Assegna l'ID dell'interfaccia `Base` all'elemento della matrice specificata dall'argomento dell'indice.|
|[Metodo InterfaceTraits::Verify](../windows/interfacetraits-verify-method.md)|Verifica che `Base` viene derivato correttamente.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Costante InterfaceTraits::IidCount](../windows/interfacetraits-iidcount-constant.md)|Contiene il numero ID associato all'oggetto corrente di interfaccia **InterfaceTraits** oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)