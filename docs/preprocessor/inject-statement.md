---
title: inject_statement
ms.date: 10/18/2018
f1_keywords:
- inject_statement
helpviewer_keywords:
- inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
ms.openlocfilehash: cf7d06eddb5ae6d08f57fb82613d97c7dcc36074
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566712"
---
# <a name="injectstatement"></a>inject_statement

**Sezione specifica C++**

Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.

## <a name="syntax"></a>Sintassi

```
inject_statement("source_text")
```

### <a name="parameters"></a>Parametri

*source_text*<br/>
Testo di origine da inserire nel file di intestazione della libreria dei tipi.

## <a name="remarks"></a>Note

Il testo viene inserito all'inizio della dichiarazione dello spazio dei nomi che esegue il wrapping del contenuto della libreria dei tipi nel file di intestazione.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)