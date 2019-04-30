---
title: 'Librerie protette: Libreria standard C++'
ms.date: 11/04/2016
f1_keywords:
- _SCL_SECURE_NO_DEPRECATE
helpviewer_keywords:
- Safe Libraries
- Safe Libraries, C++ Standard Library
- Safe C++ Standard Library
ms.assetid: 3993340f-1f29-4d81-b3f5-52a52bc8e148
ms.openlocfilehash: 340d300efb442fedb18b738c275bc0a79f874991
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409733"
---
# <a name="safe-libraries-c-standard-library"></a>Librerie protette: Libreria standard C++

Sono stati apportati diversi miglioramenti alle librerie fornite con Visual C++, inclusa la libreria standard C++, in modo da renderle più sicure.

Nella libreria standard C++ vari metodi sono stati identificati come potenzialmente non sicuri perché potrebbero causare un sovraccarico buffer o altri problemi relativi al codice. L'uso di questi metodi è sconsigliato, mentre sono stati creati in sostituzione metodi nuovi e più sicuri. Questi metodi terminano tutti in `_s`.

Sono stati apportati anche vari miglioramenti per rendere gli iteratori e gli algoritmi più sicuri. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md), [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md) e [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

La tabella seguente elenca i metodi della libreria standard C++ potenzialmente non sicuri, nonché il relativo equivalente più sicuro:

|Metodo potenzialmente non sicuro|Equivalente più sicuro|
|-------------------------------|----------------------|
|[copy](../standard-library/basic-string-class.md#copy)|[basic_string::_Copy_s](../standard-library/basic-string-class.md#copy_s)|
|[copy](../standard-library/char-traits-struct.md#copy)|[char_traits::_Copy_s](../standard-library/char-traits-struct.md#copy_s)|

Se si chiama uno dei metodi potenzialmente non sicuri elencati qui sopra o se si usano gli iteratori in modo non corretto, il compilatore genererà l'[Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Per informazioni su come disabilitare questi avvisi, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## <a name="in-this-section"></a>In questa sezione

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)

[_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md)

[Checked Iterators](../standard-library/checked-iterators.md)

[Debug Iterator Support](../standard-library/debug-iterator-support.md)

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
