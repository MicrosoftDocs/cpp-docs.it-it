---
title: Errore irreversibile C1853 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- devlang-cpp
ms.topic: error-reference
f1_keywords:
- C1853
dev_langs:
- C++
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 016e5bbf064643ddff0f63c5e16a967ed914f3e2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044951"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853

> «*filename*' file di intestazione precompilata da una versione precedente del compilatore, o l'intestazione precompilata è C++ e lo si usa C (o viceversa)

Possibili cause:

- L'intestazione precompilata è stato compilato con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.

- L'intestazione precompilata è C++ e in uso da C. provare a ricompilare l'intestazione per l'uso con C specificando uno dei [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzioni del compilatore o modifica il suffisso del file di origine a "c". Per altre informazioni, vedere [due opzioni per la precompilazione di codice](../../build/reference/creating-precompiled-header-files.md#two-choices-for-precompiling-code).