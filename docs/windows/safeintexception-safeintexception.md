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
ms.openlocfilehash: 7c5fd1e2194ece9435b219a410c8ad49eb95137a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598558"
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

[in] *codice*  
Un valore di dati enumerato che descrive l'errore che si sono verificati.

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