---
title: 'Metodo Module:: GetClassObject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GetClassObject
dev_langs:
- C++
helpviewer_keywords:
- GetClassObject method
ms.assetid: 95b0de1b-f728-4f96-9f44-f6ea71ce56e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 90a1b527d12e581c42fc9519e56d453f845e0b63
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46419719"
---
# <a name="modulegetclassobject-method"></a>Metodo Module::GetClassObject

Recupera una cache di class factory.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT GetClassObject(
   REFCLSID clsid,
   REFIID riid,
   _Deref_out_ void **ppv,
   wchar_t* serverName = nullptr
);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID della classe.

*riid*<br/>
ID di interfaccia richiesto.

*ppv*<br/>
Puntatore all'oggetto restituito.

*ServerName*<br/>
Il nome del server specificato in entrambi i `ActivatableClassWithFactory`, `ActivatableClassWithFactoryEx`, o `ActivatableClass` macro; o **nullptr** per ottenere il nome del server predefinito.

## <a name="return-value"></a>Valore restituito

## <a name="remarks"></a>Note

Usare questo metodo solo per COM, non il Runtime di Windows. Questo metodo espone solo `IClassFactory` metodi.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)