---
title: Classe SafeIntException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeIntException Class
dev_langs:
- C++
helpviewer_keywords:
- SafeIntException class
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0a0eda94c370f978bd04d7c2de1dd3e06237e490
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437715"
---
# <a name="safeintexception-class"></a>Classe SafeIntException

Il `SafeInt` utilizzato dalla classe **SafeIntException** per identificare il motivo per cui non è possibile completare un'operazione matematica.

## <a name="syntax"></a>Sintassi

```cpp
class SafeIntException;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

[SafeIntException::SafeIntException](../windows/safeintexception-safeintexception.md)<br/>
Crea una **SafeIntException** oggetto.

## <a name="remarks"></a>Note

Il [classe SafeInt](../windows/safeint-class.md) è l'unica classe che usa le **SafeIntException** classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Classe SafeIntException](../windows/safeintexception-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** MSL:: Utilities

## <a name="see-also"></a>Vedere anche

[Libreria SafeInt](../windows/safeint-library.md)<br/>
[Classe SafeInt](../windows/safeint-class.md)