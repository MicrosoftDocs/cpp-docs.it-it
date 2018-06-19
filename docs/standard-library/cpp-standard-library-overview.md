---
title: Panoramica sulla libreria standard di C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- headers, C++ library
- C++ Standard Library
- libraries, Standard C++
- C++ Standard Library, headers
ms.assetid: 7acb83a4-da73-4ad3-bc30-a71289db7f60
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2795ab431930627160b0275866b573aff36bb97b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845320"
---
# <a name="c-standard-library-overview"></a>Panoramica sulla libreria standard C++

Tutte le entità di libreria di C++ sono dichiarate o definite in una o più intestazioni standard. Questa implementazione include due intestazioni aggiuntive, \<hash_map > e \<hash_set >, che non sono necessarie dallo Standard C++. Per un elenco completo di intestazioni supportate da questa implementazione, vedere [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione).

Un'implementazione indipendente della libreria C++ fornisce solo un sottoinsieme di queste intestazioni:

|||
|-|-|
|[\<cstddef>](../standard-library/cstddef.md)|[\<cstdlib>](../standard-library/cstdlib.md) (che dichiara almeno le funzioni `abort`, `atexit` e `exit`)|
|[\<exception>](../standard-library/exception.md)|[\<limits>](../standard-library/limits.md)|
|[\<new>](../standard-library/new.md)|[\<cstdarg>](../standard-library/cstdarg.md)|

Le intestazioni della libreria C++ hanno due suddivisioni più ampie:

- Convenzioni di [iostreams](../standard-library/iostreams-conventions.md).

- Convenzioni di [riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md).

Questa sezione contiene le sezioni seguenti:

- [Using C++ Library Headers](../standard-library/using-cpp-library-headers.md) (Uso delle intestazioni della libreria C++)

- [Convenzioni della libreria C++](../standard-library/cpp-library-conventions.md)

- [iostreams Conventions](../standard-library/iostreams-conventions.md) (Convenzioni di iostream)

- [Avvio e chiusura di un programma C++](../standard-library/cpp-program-startup-and-termination.md)

- [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md) (Librerie protette: libreria standard C++)

- [Checked Iterators](../standard-library/checked-iterators.md) (Iteratori verificati)

- [Debug Iterator Support](../standard-library/debug-iterator-support.md) (Supporto degli iteratori di debug)

- [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)

- [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Sicurezza dei thread nella libreria standard C++)

- [Spazio dei nomi stdext](../standard-library/stdext-namespace.md)

- [Espressioni regolari (C++)](../standard-library/regular-expressions-cpp.md)

Per altre informazioni sulle librerie di runtime di Visual C++, vedere [CRT Library Features](../c-runtime-library/crt-library-features.md) (Funzionalità libreria CRT).

## <a name="see-also"></a>Vedere anche

[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
