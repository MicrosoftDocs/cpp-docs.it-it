---
title: Build di rilascio
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: 77e02b424b10b5e9606cc49152c2e21d7eeed9cb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667454"
---
# <a name="release-builds"></a>Build di rilascio

Una build di rilascio utilizza ottimizzazioni. Quando si usano le ottimizzazioni per creare una build di rilascio, il compilatore non genera informazioni sul debug simbolici. Chiama l'assenza di informazioni sul debug simbolici, oltre al fatto che il codice non viene generato per la traccia e ASSERZIONE, significa che le dimensioni del file eseguibile sono ridotto e pertanto è più veloce.

In questa sezione vengono fornite informazioni su perché e quando si desidera modificare da una build di debug in una build di rilascio. Sono inoltre illustrati alcuni dei problemi che possono verificarsi durante la modifica da debug a una build di rilascio:

- [Creazione di una Build di rilascio](../../build/reference/how-to-create-a-release-build.md)

- [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)

- [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)

   - [Analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md)

   - [Usando la Build di Debug per un controllo della sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md)

   - [Debug di una Build di rilascio](../../build/reference/how-to-debug-a-release-build.md)

   - [Controllo delle sovrascritture di memoria](../../build/reference/checking-for-memory-overwrites.md)

## <a name="see-also"></a>Vedere anche

[Compilazione di progetti C++ in Visual Studio](../../ide/building-cpp-projects-in-visual-studio.md)<br/>
[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)