---
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
ms.openlocfilehash: 266347de063b4e050cb032aa2d8d74e7934b8081
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328345"
---
# <a name="editbin-reference"></a>Riferimenti a EDITBIN

Editor di file binari COFF Microsoft (EDITBIN. EXE) modifica i file binari COFF (Common Object File Format). È possibile utilizzare EDITBIN per modificare file oggetto, file eseguibili e librerie a collegamento dinamico (DLL).

> [!NOTE]
> È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio.You can start this tool only from the Visual Studio command prompt. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

EDITBIN non è disponibile per l'utilizzo su file generati con l'opzione del compilatore [/GL.](gl-whole-program-optimization.md) Eventuali modifiche ai file binari prodotti con /GL dovranno essere ottenute ricompilando e collegando.

- [Riga di comando EDITBIN](editbin-command-line.md)

- [Opzioni EDITBIN](editbin-options.md)

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione aggiuntivi MSVC](c-cpp-build-tools.md)
