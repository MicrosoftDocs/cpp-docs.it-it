---
title: attributo di importazione raw_native_types
ms.date: 08/29/2019
f1_keywords:
- raw_native_types
helpviewer_keywords:
- raw_native_types attribute
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
ms.openlocfilehash: eb08a8e7cb081bd7a470c3c1ecf1492a7a65f833
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216063"
---
# <a name="raw_native_types-import-attribute"></a>attributo di importazione raw_native_types

**C++Specifico**

Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e impone invece l'utilizzo di tipi di dati di basso livello.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **raw_native_types**

## <a name="remarks"></a>Note

Per impostazione predefinita, i metodi di gestione degli errori di alto livello utilizzano le classi di supporto com [_bstr_t](../cpp/bstr-t-class.md) e [_variant_t](../cpp/variant-t-class.md) al `BSTR` posto `VARIANT` dei tipi di dati e e dei puntatori di interfaccia com non elaborati. Tali classi includono i dettagli di allocazione e deallocazione dell'archiviazione di memoria per questi tipi di dati e semplificano notevolmente il cast dei tipi e le operazioni di conversione.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
