---
description: 'Altre informazioni su: classe Platform:: AccessDeniedException'
title: Classe Platform::AccessDeniedException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::AccessDeniedException
- VCCORLIB/Platform::AccessDeniedException::AccessDeniedException
helpviewer_keywords:
- Platform::AccessDeniedException
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
ms.openlocfilehash: 2dd1e543093000521bceb0abed128a1dac27a6e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276789"
---
# <a name="platformaccessdeniedexception-class"></a>Classe Platform::AccessDeniedException

Generata quando viene negato l'accesso a una risorsa o a una funzionalità.

## <a name="syntax"></a>Sintassi

```cpp
public ref class AccessDeniedException : COMException,    IException,    IPrintable,   IEquatable
```

### <a name="remarks"></a>Osservazioni

Quando incontri questa eccezione, assicurati di aver richiesto la funzionalità appropriata e di aver inserito le necessarie dichiarazioni nel manifesto del pacchetto della tua app. Per ulteriori informazioni, vedi [COMException](../cppcx/platform-comexception-class.md) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="see-also"></a>Vedi anche

[Classe Platform:: COMException](../cppcx/platform-comexception-class.md)
