---
title: 'SafeIntException:: SafeIntException | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeIntException
- SafeIntException.SafeIntException
- SafeIntException::SafeIntException
dev_langs:
- C++
helpviewer_keywords:
- SafeIntException, constructor
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 749ef965520732c37457613f44e0a23e213023db
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45700973"
---
# <a name="safeintexceptionsafeintexception"></a>SafeIntException::SafeIntException

Crea una **SafeIntException** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### <a name="parameters"></a>Parametri

*Codice*<br/>
[in] Un valore di dati enumerato che descrive l'errore che si sono verificati.

## <a name="remarks"></a>Note

I valori possibili per *codice* sono definiti nel file di SafeInt. h. Per praticità, i valori possibili sono inoltre elencati di seguito.

- `SafeIntNoError`

- `SafeIntArithmeticOverflow`

- `SafeIntDivideByZero`

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** MSL:: Utilities

## <a name="see-also"></a>Vedere anche

[Libreria SafeInt](../windows/safeint-library.md)  
[Classe SafeIntException](../windows/safeintexception-class.md)  
[Classe SafeInt](../windows/safeint-class.md)