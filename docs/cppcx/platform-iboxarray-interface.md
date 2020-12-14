---
description: 'Altre informazioni su: interfaccia Platform:: IBoxArray'
title: Interfaccia Platform::IBoxArray
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::IBoxArray
- VCCORLIB/Platform::IBoxArray::Value
helpviewer_keywords:
- Platform::IBoxArray
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
ms.openlocfilehash: 8b87a00d709bec8af016de4532c7c4ec759d72fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195144"
---
# <a name="platformiboxarray-interface"></a>Interfaccia Platform::IBoxArray

`IBoxArray` è il wrapper per le matrici di tipi di valore passati tramite l'interfaccia ABI (Application Binary Interface) o archiviati in raccolte di elementi `Platform::Object^` come quelli nei controlli XAML.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
interface class IBoxArray
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di valore boxed in ogni elemento della matrice.

### <a name="remarks"></a>Commenti

`IBoxArray` è il nome C++/CX per `Windows::Foundation::IReferenceArray` .

### <a name="members"></a>Membri

L'interfaccia `IBoxArray` eredita dall'interfaccia `IValueType` . `IBoxArray` dispone anche di questi membri:

|Metodo|Descrizione|
|------------|-----------------|
|[Valore](#value)|Restituisce la matrice di tipo unboxed archiviata in precedenza in questa istanza di `IBoxArray` .|

## <a name="iboxarrayvalue-property"></a><a name="value"></a> Proprietà IBoxArray:: value

Restituisce il valore memorizzato in origine in questo oggetto.

### <a name="syntax"></a>Sintassi

```cpp
property T Value {T get();}
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del valore boxed.

### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito

Restituisce il valore memorizzato in origine in questo oggetto.

### <a name="remarks"></a>Commenti

Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).

## <a name="see-also"></a>Vedi anche

[Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)
