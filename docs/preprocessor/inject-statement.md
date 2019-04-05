---
title: inject_statement
ms.date: 10/18/2018
f1_keywords:
- inject_statement
helpviewer_keywords:
- inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
ms.openlocfilehash: 237ca796028aad7aff55442eb2806fe400330a29
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59034287"
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

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)