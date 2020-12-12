---
description: 'Altre informazioni su: classe Platform:: WrongThreadException'
title: Classe Platform::WrongThreadException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::WrongThreadException
- VCCORLIB/Platform::WrongThreadException::WrongThreadException
helpviewer_keywords:
- Platform::WrongThreadException
ms.assetid: c193f97e-0392-4535-a4c4-0711e4e4a836
ms.openlocfilehash: a7fbaed7766a3928ca24d56f5233c38d9298d466
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307730"
---
# <a name="platformwrongthreadexception-class"></a>Classe Platform::WrongThreadException

Generata quando un thread esegue una chiamata tramite un puntatore a interfaccia per un oggetto proxy che non appartiene all'apartment del thread.

## <a name="syntax"></a>Sintassi

```cpp
public ref class WrongThreadException : COMException,    IException,    IPrintable,    IEquatable
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="see-also"></a>Vedi anche

[Classe Platform:: COMException](../cppcx/platform-comexception-class.md)
