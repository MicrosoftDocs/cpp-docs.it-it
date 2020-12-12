---
description: 'Altre informazioni su: build di rilascio'
title: Build di versioni C++-Visual Studio
ms.date: 12/10/2018
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: 7168fd50421835edc82d0599b22deb9214e28869
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273787"
---
# <a name="release-builds"></a>Build di rilascio

Una build di rilascio usa le ottimizzazioni. Quando si usano le ottimizzazioni per creare una build di rilascio, il compilatore non genera informazioni di debug simbolico. L'assenza di informazioni sul debug simbolico, oltre al fatto che il codice non viene generato per le chiamate di traccia e ASSERT, significa che la dimensione del file eseguibile è ridotta e sarà quindi più veloce.

## <a name="in-this-section"></a>Contenuto della sezione

[Problemi comuni durante la creazione di una build di rilascio](common-problems-when-creating-a-release-build.md)<br/>
[Correzione dei problemi di compilazione della versione](fixing-release-build-problems.md)<br/>
[Utilizzo di VERIFY anziché ASSERT](using-verify-instead-of-assert.md)<br/>
[Uso della build di debug per verificare la sovrascrittura della memoria](using-the-debug-build-to-check-for-memory-overwrite.md)<br/>
[Procedura: eseguire il debug di una build di rilascio](how-to-debug-a-release-build.md)<br/>
[Verifica della sovrascrittura della memoria](checking-for-memory-overwrites.md)<br/>
[Ottimizzazione del codice](optimizing-your-code.md)

## <a name="see-also"></a>Vedi anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)
