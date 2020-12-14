---
description: 'Altre informazioni su: raw_native_types attributo Import'
title: raw_native_types attributo Import
ms.date: 08/29/2019
f1_keywords:
- raw_native_types
helpviewer_keywords:
- raw_native_types attribute
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
ms.openlocfilehash: 64eaadcbb3d9f07d47dd4a33bc16a222cae50f38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240533"
---
# <a name="raw_native_types-import-attribute"></a>raw_native_types attributo Import

**Sezione specifica C++**

Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e impone invece l'utilizzo di tipi di dati di basso livello.

## <a name="syntax"></a>Sintassi

> **#import** **raw_native_types** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Per impostazione predefinita, i metodi di gestione degli errori di alto livello utilizzano le classi di supporto COM [_bstr_t](../cpp/bstr-t-class.md) e [_variant_t](../cpp/variant-t-class.md) al posto dei `BSTR` tipi di `VARIANT` dati e e dei puntatori di interfaccia com non elaborati. Tali classi includono i dettagli di allocazione e deallocazione dell'archiviazione di memoria per questi tipi di dati e semplificano notevolmente il cast dei tipi e le operazioni di conversione.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
