---
description: 'Altre informazioni su: Escludi attributo Import'
title: Escludi attributo di importazione
ms.date: 08/29/2019
f1_keywords:
- exclude
helpviewer_keywords:
- exclude attribute
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
ms.openlocfilehash: e856544f812fd5d0b14676beb8423c4350e40da1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269315"
---
# <a name="exclude-import-attribute"></a>Escludi attributo di importazione

**Sezione specifica C++**

Esclude gli elementi dai file di intestazione della libreria dei tipi generati.

## <a name="syntax"></a>Sintassi

> **#import** *Type-Library* **Exclude (** "*name1*" [ **,** "*name2*"...] **)**

### <a name="parameters"></a>Parametri

*Name1*\
Primo elemento da escludere.

*Name2*\
Opzionale Secondo e i successivi elementi da escludere, se necessario.

## <a name="remarks"></a>Commenti

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. Questo attributo può assumere un numero qualsiasi di argomenti, ognuno dei quali è un elemento della libreria dei tipi di primo livello da escludere.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
