---
title: Escludi attributo di importazione
ms.date: 08/29/2019
f1_keywords:
- exclude
helpviewer_keywords:
- exclude attribute
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
ms.openlocfilehash: 6a3625ee0dd44f3e2731e1240fea5f3dd4ed109e
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218714"
---
# <a name="exclude-import-attribute"></a>Escludi attributo di importazione

**C++Specifico**

Esclude gli elementi dai file di intestazione della libreria dei tipi generati.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **Exclude (** "*name1*" [ **,** "*name2*"...] **)**

### <a name="parameters"></a>Parametri

*Name1*\
Primo elemento da escludere.

*Name2*\
Opzionale Secondo e i successivi elementi da escludere, se necessario.

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. Questo attributo può assumere un numero qualsiasi di argomenti, ognuno dei quali è un elemento della libreria dei tipi di primo livello da escludere.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
