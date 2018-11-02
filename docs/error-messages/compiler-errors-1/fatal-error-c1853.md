---
title: Errore irreversibile C1853
ms.date: 11/04/2016
f1_keywords:
- C1853
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
ms.openlocfilehash: 30cf003cc81cb27f7c68b7f0a38529e2d9c88ef5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677825"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853

> «*filename*' file di intestazione precompilata da una versione precedente del compilatore, o l'intestazione precompilata è C++ e lo si usa C (o viceversa)

Possibili cause:

- L'intestazione precompilata è stato compilato con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.

- L'intestazione precompilata è C++ e in uso da C. provare a ricompilare l'intestazione per l'uso con C specificando uno dei [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzioni del compilatore o modifica il suffisso del file di origine a "c". Per altre informazioni, vedere [due opzioni per la precompilazione di codice](../../build/reference/creating-precompiled-header-files.md#two-choices-for-precompiling-code).