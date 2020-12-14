---
description: 'Altre informazioni su: riferimento a EDITBIN)'
title: Riferimenti a EDITBIN
ms.date: 11/04/2016
f1_keywords:
- editbin
helpviewer_keywords:
- binary data, editing
- object files, modifying
- EDITBIN program
- COFF files, editing
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
ms.openlocfilehash: ad211ab85ac00cd716b7c3b8e381a9a448ea04ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201027"
---
# <a name="editbin-reference"></a>Riferimenti a EDITBIN

L'editor file binario Microsoft COFF (EDITBIN.EXE) modifica i file binari COFF (Common Object File Format). È possibile utilizzare EDITBIN) per modificare i file oggetto, i file eseguibili e le librerie a collegamento dinamico (DLL).

> [!NOTE]
> È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

EDITBIN) non è disponibile per l'uso nei file prodotti con l'opzione del compilatore [/GL](gl-whole-program-optimization.md) . Tutte le modifiche apportate ai file binari generati con/GL dovranno essere ottenute ricompilando e collegando.

- [Riga di comando EDITBIN](editbin-command-line.md)

- [Opzioni di EDITBIN](editbin-options.md)

## <a name="see-also"></a>Vedi anche

[Ulteriori strumenti di compilazione MSVC](c-cpp-build-tools.md)
