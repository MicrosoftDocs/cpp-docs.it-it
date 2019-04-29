---
title: Classe Platform::WrongThreadException
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::WrongThreadException
- VCCORLIB/Platform::WrongThreadException::WrongThreadException
helpviewer_keywords:
- Platform::WrongThreadException
ms.assetid: c193f97e-0392-4535-a4c4-0711e4e4a836
ms.openlocfilehash: dde8c9afff6be083580042a958f59e057bc44350
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396080"
---
# <a name="platformwrongthreadexception-class"></a>Classe Platform::WrongThreadException

Generata quando un thread esegue una chiamata tramite un puntatore a interfaccia per un oggetto proxy che non appartiene all'apartment del thread.

## <a name="syntax"></a>Sintassi

```cpp
public ref class WrongThreadException : COMException,    IException,    IPrintable,    IEquatable
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md).

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Classe Platform::COMException](../cppcx/platform-comexception-class.md)
