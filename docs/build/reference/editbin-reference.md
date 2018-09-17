---
title: Riferimenti a EDITBIN | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- editbin
dev_langs:
- C++
helpviewer_keywords:
- binary data, editing
- object files, modifying
- EDITBIN program
- COFF files, editing
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 809d1d4f25611b2310d651702f01e1e98888ad4a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45699947"
---
# <a name="editbin-reference"></a>Riferimenti a EDITBIN

L'Editor di File di Microsoft COFF Binary (EDITBIN. EXE) consente di modificare i file binari di File formato COFF (Common Object). È possibile usare EDITBIN per modificare i file oggetto, i file eseguibili e librerie a collegamento dinamico (DLL).

> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

EDITBIN non è disponibile per l'uso con i file generati con il [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore. Eventuali modifiche ai file binari generati con /GL dovrà essere ottenuta tramite la ricompilazione e il collegamento.

- [Riga di comando EDITBIN](../../build/reference/editbin-command-line.md)

- [Opzioni di EDITBIN](../../build/reference/editbin-options.md)

## <a name="see-also"></a>Vedere anche

[Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)