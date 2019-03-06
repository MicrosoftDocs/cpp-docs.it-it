---
title: Build di rilascio
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
ms.openlocfilehash: 346beace1979871cfd9bf4ee0d487e7f85a26eaa
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426095"
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
