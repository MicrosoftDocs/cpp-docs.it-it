---
title: Build di rilascio di C++ - Visual Studio
ms.date: 12/10/2018
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: 6167c024ae76952573475a815f24d2cf4be01119
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57828039"
---
# <a name="release-builds"></a>Build di rilascio

Una build di rilascio utilizza ottimizzazioni. Quando si usano le ottimizzazioni per creare una build di rilascio, il compilatore non genera informazioni sul debug simbolici. Chiama l'assenza di informazioni sul debug simbolici, oltre al fatto che il codice non viene generato per la traccia e ASSERZIONE, significa che le dimensioni del file eseguibile sono ridotto e pertanto è più veloce.

## <a name="in-this-section"></a>Contenuto della sezione

[Problemi comuni durante la creazione di una build di rilascio](common-problems-when-creating-a-release-build.md)<br/>
[Correzione dei problemi della build di versione](fixing-release-build-problems.md)<br/>
[Uso di VERIFY invece di ASSERT](using-verify-instead-of-assert.md)<br/>
[Uso della compilazione di debug per il controllo della sovrascrittura di memoria](using-the-debug-build-to-check-for-memory-overwrite.md)<br/>
[Procedura: Eseguire il debug di una build di versione](how-to-debug-a-release-build.md)<br/>
[Controllo delle sovrascritture di memoria](checking-for-memory-overwrites.md)<br/>
[Ottimizzazione del codice](optimizing-your-code.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)