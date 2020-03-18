---
title: Interfaccia Platform::IBoxArray
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::IBoxArray
- VCCORLIB/Platform::IBoxArray::Value
helpviewer_keywords:
- Platform::IBoxArray
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
ms.openlocfilehash: 493770cab092c2bb719d47e5d3a9d6a9f0646489
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79444163"
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

### <a name="remarks"></a>Osservazioni

`IBoxArray` è il C++nome del/CX di `Windows::Foundation::IReferenceArray`.

### <a name="members"></a>Members

L'interfaccia `IBoxArray` eredita dall'interfaccia `IValueType` . `IBoxArray` dispone anche di questi membri:

|Metodo|Descrizione|
|------------|-----------------|
|[Valore](#value)|Restituisce la matrice di tipo unboxed archiviata in precedenza in questa istanza di `IBoxArray` .|

## <a name="value"></a>Proprietà IBoxArray:: value

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

### <a name="remarks"></a>Osservazioni

Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).

## <a name="see-also"></a>Vedere anche

[Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)
