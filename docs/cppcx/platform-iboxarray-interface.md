---
title: 'Interfaccia platform:: iboxarray | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Value
dev_langs:
- C++
helpviewer_keywords:
- Platform::IBoxArray
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 66e3ff5a2daf0ddef41ea478b55ca2fc67298c01
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108448"
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