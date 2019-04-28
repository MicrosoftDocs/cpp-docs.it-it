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
ms.openlocfilehash: 45c2967a55e85ae31bb77bb2e8d50415eafbea46
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62293030"
---
# <a name="editbin-reference"></a>Riferimenti a EDITBIN

L'Editor di File di Microsoft COFF Binary (EDITBIN. EXE) consente di modificare i file binari di File formato COFF (Common Object). È possibile usare EDITBIN per modificare i file oggetto, i file eseguibili e librerie a collegamento dinamico (DLL).

> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

EDITBIN non è disponibile per l'uso con i file generati con il [/GL](gl-whole-program-optimization.md) opzione del compilatore. Eventuali modifiche ai file binari generati con /GL dovrà essere ottenuta tramite la ricompilazione e il collegamento.

- [Riga di comando EDITBIN](editbin-command-line.md)

- [Opzioni di EDITBIN](editbin-options.md)

## <a name="see-also"></a>Vedere anche

[Strumenti di compilazione MSVC aggiuntive](c-cpp-build-tools.md)
