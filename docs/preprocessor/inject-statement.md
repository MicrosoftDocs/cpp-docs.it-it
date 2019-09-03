---
title: attributo di importazione inject_statement
ms.date: 08/29/2019
f1_keywords:
- inject_statement
helpviewer_keywords:
- inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
ms.openlocfilehash: 25dee621ff8af2c9a39e605b9da2c29d80f9570a
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220999"
---
# <a name="inject_statement-import-attribute"></a>attributo di importazione inject_statement

**C++Specifico**

Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **inject_statement (** "*origine-testo*" **)**

### <a name="parameters"></a>Parametri

*origine-testo*\
Testo di origine da inserire nel file di intestazione della libreria dei tipi.

## <a name="remarks"></a>Note

Il testo viene inserito all'inizio della dichiarazione dello spazio dei nomi che esegue il wrapping del contenuto della *libreria dei tipi* nel file di intestazione.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
