---
title: Errore irreversibile C1853
ms.date: 11/04/2016
f1_keywords:
- C1853
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
ms.openlocfilehash: 056db975fecef4e101dbbba7e2084236489498c7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202865"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853

> il file di intestazione precompilata '*filename*' è di una versione precedente del compilatore oppure l'intestazione precompilata è C++ e si sta utilizzando C (o viceversa)

Possibili cause:

- L'intestazione precompilata è stata compilata con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.

- L'intestazione precompilata è C++ e viene usata da c. provare a ricompilare l'intestazione per l'uso con c specificando una delle opzioni del compilatore [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) o modificando il suffisso del file di origine in "C". Per ulteriori informazioni, vedere [due opzioni per la precompilazione del codice](../../build/creating-precompiled-header-files.md#two-choices-for-precompiling-code).
