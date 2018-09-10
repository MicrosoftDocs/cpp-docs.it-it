---
title: 'Classe platform:: accessdeniedexception | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::AccessDeniedException
- VCCORLIB/Platform::AccessDeniedException::AccessDeniedException
dev_langs:
- C++
helpviewer_keywords:
- Platform::AccessDeniedException
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c87cdc55359fbdd4855a062a3b1b56384c3be574
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44104186"
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

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Classe Platform::COMException](../cppcx/platform-comexception-class.md)