---
title: Build di rilascio di C++ - Visual Studio
ms.date: 12/10/2018
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: cf11e63354502be000ba5f7259d9e36dfa774060
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038160"
---
# <a name="release-builds"></a>Build di rilascio

Una build di rilascio utilizza ottimizzazioni. Quando si usano le ottimizzazioni per creare una build di rilascio, il compilatore non genera informazioni sul debug simbolici. Chiama l'assenza di informazioni sul debug simbolici, oltre al fatto che il codice non viene generato per la traccia e ASSERZIONE, significa che le dimensioni del file eseguibile sono ridotto e pertanto è più veloce.

## <a name="in-this-section"></a>Contenuto della sezione

[Problemi comuni durante la creazione di una build di rilascio](common-problems-when-creating-a-release-build.md)<br/>
[Correzione dei problemi della build di rilascio](fixing-release-build-problems.md)<br/>
[Utilizzo di VERIFY invece di ASSERT](using-verify-instead-of-assert.md)<br/>
[Utilizzo della compilazione di debug per il controllo della sovrascrittura di memoria](using-the-debug-build-to-check-for-memory-overwrite.md)<br/>
[Procedura: Eseguire il debug di una Build di rilascio](how-to-debug-a-release-build.md)<br/>
[Controllo delle sovrascritture di memoria](checking-for-memory-overwrites.md)<br/>
[Ottimizzazione del codice](optimizing-your-code.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)