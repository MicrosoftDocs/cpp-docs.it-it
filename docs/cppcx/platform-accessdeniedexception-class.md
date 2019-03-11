---
title: Classe Platform::AccessDeniedException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::AccessDeniedException
- VCCORLIB/Platform::AccessDeniedException::AccessDeniedException
helpviewer_keywords:
- Platform::AccessDeniedException
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
ms.openlocfilehash: 4abbac977a256ff27f99caaf77393450d3ccf858
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57752415"
---
# <a name="platformaccessdeniedexception-class"></a>Classe Platform::AccessDeniedException

Generata quando viene negato l'accesso a una risorsa o a una funzionalità.

## <a name="syntax"></a>Sintassi

```cpp
public ref class AccessDeniedException : COMException,    IException,    IPrintable,   IEquatable
```

### <a name="remarks"></a>Note

Quando incontri questa eccezione, assicurati di aver richiesto la funzionalità appropriata e di aver inserito le necessarie dichiarazioni nel manifesto del pacchetto della tua app. Per ulteriori informazioni, vedi [COMException](../cppcx/platform-comexception-class.md) .

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Classe Platform::COMException](../cppcx/platform-comexception-class.md)
