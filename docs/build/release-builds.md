---
title: C++Build di rilascio-Visual Studio
ms.date: 12/10/2018
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: 46ae5e0f3d545f0e3e004f612314ab416b270fd8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168824"
---
# <a name="release-builds"></a>Build di rilascio

Una build di rilascio usa le ottimizzazioni. Quando si usano le ottimizzazioni per creare una build di rilascio, il compilatore non genera informazioni di debug simbolico. L'assenza di informazioni sul debug simbolico, oltre al fatto che il codice non viene generato per le chiamate di traccia e ASSERT, significa che la dimensione del file eseguibile è ridotta e sarà quindi più veloce.

## <a name="in-this-section"></a>Contenuto della sezione

[Problemi comuni durante la creazione di una build di rilascio](common-problems-when-creating-a-release-build.md)<br/>
[Correzione dei problemi della build di versione](fixing-release-build-problems.md)<br/>
[Uso di VERIFY invece di ASSERT](using-verify-instead-of-assert.md)<br/>
[Uso della compilazione di debug per il controllo della sovrascrittura di memoria](using-the-debug-build-to-check-for-memory-overwrite.md)<br/>
[Procedura: Eseguire il debug di una build di versione](how-to-debug-a-release-build.md)<br/>
[Controllo delle sovrascritture di memoria](checking-for-memory-overwrites.md)<br/>
[Ottimizzazione del codice](optimizing-your-code.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md)
