---
description: 'Altre informazioni su: inject_statement attributo Import'
title: inject_statement attributo Import
ms.date: 08/29/2019
f1_keywords:
- inject_statement
helpviewer_keywords:
- inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
ms.openlocfilehash: b7ab8059e95ed3799857fe1b899ef2efff729ffb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236425"
---
# <a name="inject_statement-import-attribute"></a>inject_statement attributo Import

**Sezione specifica C++**

Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** inject_statement della *libreria di tipi* **(** "*origine-testo*" **)**

### <a name="parameters"></a>Parametri

*origine-testo*\
Testo di origine da inserire nel file di intestazione della libreria dei tipi.

## <a name="remarks"></a>Commenti

Il testo viene inserito all'inizio della dichiarazione dello spazio dei nomi che esegue il wrapping del contenuto della *libreria dei tipi* nel file di intestazione.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
