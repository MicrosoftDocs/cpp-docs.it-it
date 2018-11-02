---
title: Interfaccia Platform::IBoxArray
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Value
helpviewer_keywords:
- Platform::IBoxArray
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
ms.openlocfilehash: a35a8b7d9f23bcb624755353e27e52de4b873c5d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50497023"
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

### <a name="remarks"></a>Note

`IBoxArray` è di C + + / nome CX `Windows::Foundation::IReferenceArray`.

### <a name="members"></a>Membri

L'interfaccia `IBoxArray` eredita dall'interfaccia `IValueType` . `IBoxArray` dispone anche di questi membri:

|Metodo|Descrizione|
|------------|-----------------|
|[Valore](#value)|Restituisce la matrice di tipo unboxed archiviata in precedenza in questa istanza di `IBoxArray` .|

## <a name="value"></a> Proprietà iboxarray:: value

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

### <a name="remarks"></a>Note

Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).

## <a name="see-also"></a>Vedere anche

[Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)