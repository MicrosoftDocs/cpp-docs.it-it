---
title: Funzioni &lt;system_error&gt;
ms.date: 03/15/2019
f1_keywords:
- system_error/std::generic_category
- system_error/std::make_error_code
- system_error/std::make_error_condition
- system_error/std::system_category
ms.assetid: 57d6f15f-f0b7-4e2f-80fe-31d3c320ee33
helpviewer_keywords:
- std::generic_category
- std::make_error_code
- std::make_error_condition
- std::system_category
ms.openlocfilehash: 78be83af678b553babbf1cde3d96c1507940b611
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62412111"
---
# <a name="ltsystemerrorgt-functions"></a>Funzioni &lt;system_error&gt;

||||
|-|-|-|
|[generic_category](#generic_category)|[make_error_code](#make_error_code)|[make_error_condition](#make_error_condition)|
|[system_category](#system_category)|||

## <a name="generic_category"></a> generic_category

Rappresenta la categoria di errori generici.

```cpp
const error_category& generic_category() noexcept;
```

### <a name="remarks"></a>Note

Il `generic_category` oggetto è un'implementazione di [error_category](../standard-library/error-category-class.md).

## <a name="make_error_code"></a>  make_error_code

Crea un oggetto codice di errore.

```cpp
error_code make_error_code(std::errc error) noexcept;
```

### <a name="parameters"></a>Parametri

*error*\
Il `std::errc` valore di enumerazione da archiviare nell'oggetto codice di errore.

### <a name="return-value"></a>Valore restituito

Oggetto codice di errore.

### <a name="remarks"></a>Note

## <a name="make_error_condition"></a>  make_error_condition

Crea un oggetto condizione di errore.

```cpp
error_condition make_error_condition(std::errc error) noexcept;
```

### <a name="parameters"></a>Parametri

*error*\
Il `std::errc` valore di enumerazione da archiviare nell'oggetto codice di errore.

### <a name="return-value"></a>Valore restituito

Oggetto condizione di errore.

### <a name="remarks"></a>Note

## <a name="system_category"></a>  system_category

Rappresenta la categoria di errori causati da un overflow di basso livello del sistema.

```cpp
const error_category& system_category() noexcept;
```

### <a name="remarks"></a>Note

Il `system_category` oggetto è un'implementazione di [error_category](../standard-library/error-category-class.md).

## <a name="see-also"></a>Vedere anche

[\<system_error>](../standard-library/system-error.md)<br/>
