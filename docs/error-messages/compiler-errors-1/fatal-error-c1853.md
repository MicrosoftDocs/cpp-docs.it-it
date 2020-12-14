---
description: 'Altre informazioni su: errore irreversibile C1853'
title: Errore irreversibile C1853
ms.date: 11/04/2016
f1_keywords:
- C1853
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
ms.openlocfilehash: 60c8e254e9bd36f52bddb4d6dce56c987b6c31e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276231"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853

> il file di intestazione precompilata '*filename*' è di una versione precedente del compilatore oppure l'intestazione precompilata è C++ e si sta utilizzando C (o viceversa)

Cause possibili:

- L'intestazione precompilata è stata compilata con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.

- L'intestazione precompilata è C++ e viene usata da C. provare a ricompilare l'intestazione per l'uso con C specificando una delle opzioni del compilatore [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) o modificando il suffisso del file di origine in "C". Per ulteriori informazioni, vedere [due opzioni per la precompilazione del codice](../../build/creating-precompiled-header-files.md#two-choices-for-precompiling-code).
