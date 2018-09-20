---
title: ChainInterfaces (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces
dev_langs:
- C++
helpviewer_keywords:
- ChainInterfaces structure
ms.assetid: d7415b59-5468-4bef-a3fd-8d82b12f0e9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 88ddd3dd59000b629f6e72933b1a0b02cc582c89
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409871"
---
# <a name="chaininterfaces-structure"></a>ChainInterfaces (struttura)

Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename I0,
   typename I1,
   typename I2 = Details::Nil,
   typename I3 = Details::Nil,
   typename I4 = Details::Nil,
   typename I5 = Details::Nil,
   typename I6 = Details::Nil,
   typename I7 = Details::Nil,
   typename I8 = Details::Nil,
   typename I9 = Details::Nil
>
struct ChainInterfaces : I0;
template <
   typename DerivedType,
   typename BaseType,
   bool hasImplements,
   typename I1,
   typename I2,
   typename I3,
   typename I4,
   typename I5,
   typename I6,
   typename I7,
   typename I8,
   typename I9
>
struct ChainInterfaces<MixIn<DerivedType, BaseType, hasImplements>, I1, I2, I3, I4, I5, I6, I7, I8, I9>;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
(Obbligatorio) Interfaccia ID 0.

*I1*<br/>
(Obbligatorio) Interfaccia ID 1.

*I2*<br/>
(Facoltativo) ID di interfaccia 2.

*I3*<br/>
(Facoltativo) ID di interfaccia 3.

*I4*<br/>
(Facoltativo) ID di interfaccia 4.

*I5*<br/>
(Facoltativo) ID di interfaccia 5.

*I6*<br/>
(Facoltativo) ID di interfaccia 6.

*I7*<br/>
(Facoltativo) ID di interfaccia 7.

*I8*<br/>
(Facoltativo) ID di interfaccia 8.

*I9*<br/>
(Facoltativo) ID di interfaccia 9.

*DerivedType*<br/>
Un tipo derivato.

*BaseType*<br/>
Il tipo di base di un tipo derivato.

*hasImplements*<br/>
Valore booleano che, se **true**, significa che non è possibile utilizzare un [MixIn](../windows/mixin-structure.md) struttura con una classe che deriva dal [implementa](../windows/implements-structure.md) struttura.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Metodo ChainInterfaces::CanCastTo](../windows/chaininterfaces-cancastto-method.md)|Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dal **ChainInterface** i parametri del modello.|
|[Metodo ChainInterfaces::CastToUnknown](../windows/chaininterfaces-casttounknown-method.md)|Viene eseguito il cast del tipo definito per il puntatore di interfaccia di *I0* parametro di modello in un puntatore a `IUnknown`.|
|[Metodo ChainInterfaces::FillArrayWithIid](../windows/chaininterfaces-fillarraywithiid-method.md)|Archivia l'ID di interfaccia definito per il *I0* parametro di modello in una posizione specificata in una matrice specificata di ID di interfaccia.|
|[Metodo ChainInterfaces::Verify](../windows/chaininterfaces-verify-method.md)|Verifica che ogni interfaccia definita dai parametri modello *I0* attraverso *I9* eredita `IUnknown` e/o `IInspectable`e che *I0* eredita da *I1* attraverso *I9*.|

### <a name="protected-constants"></a>Costanti protette

|nome|Descrizione|
|----------|-----------------|
|[Costante ChainInterfaces::IidCount](../windows/chaininterfaces-iidcount-constant.md)|Il numero totale di interfaccia ID contenuti nelle interfacce specificate dai parametri modello *I0* attraverso *I9*.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)