---
title: Classe SafeIntException | Microsoft Docs
ms.custom: ''
ms.date: 09/27/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeIntException Class
- SafeIntException
- SafeIntException.SafeIntException
- SafeIntException::SafeIntException
dev_langs:
- C++
helpviewer_keywords:
- SafeIntException class
- SafeIntException, constructor
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4ffd82f80b8af0b53ca86ca3daded84580e1e07b
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235737"
---
# <a name="safeintexception-class"></a>Classe SafeIntException

Il `SafeInt` utilizzato dalla classe `SafeIntException` per identificare il motivo per cui non è possibile completare un'operazione matematica.

## <a name="syntax"></a>Sintassi

```cpp
class SafeIntException;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                    | Descrizione
------------------------------------------------------- | ------------------------------------
[SafeIntException::SafeIntException](#safeintexception) | Crea un oggetto `SafeIntException`.

## <a name="remarks"></a>Note

Il [classe SafeInt](../windows/safeint-class.md) è l'unica classe che utilizza il `SafeIntException` classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SafeIntException`

## <a name="requirements"></a>Requisiti

**Intestazione:** SafeInt. h

**Namespace:** MSL:: Utilities

## <a name="safeintexception"></a>SafeIntException:: SafeIntException

Crea un oggetto `SafeIntException`.

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### <a name="parameters"></a>Parametri

*Codice*<br/>
[in] Un valore di dati enumerato che descrive l'errore che si sono verificati.

### <a name="remarks"></a>Note

I valori possibili per *codice* sono definiti nel file di SafeInt. h. Per praticità, i valori possibili sono inoltre elencati di seguito.

- `SafeIntNoError`
- `SafeIntArithmeticOverflow`
- `SafeIntDivideByZero`
