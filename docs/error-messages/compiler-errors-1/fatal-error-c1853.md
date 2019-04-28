---
title: Errore irreversibile C1853
ms.date: 11/04/2016
f1_keywords:
- C1853
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
ms.openlocfilehash: ec2d6bf6bac46cca8bdc2e3b8fe7cc6b7799d78a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62165918"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853

> «*filename*' file di intestazione precompilata da una versione precedente del compilatore, o l'intestazione precompilata è C++ e lo si usa C (o viceversa)

Possibili cause:

- L'intestazione precompilata è stato compilato con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.

- L'intestazione precompilata è C++ e in uso da C. provare a ricompilare l'intestazione per l'uso con C specificando uno dei [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzioni del compilatore o modifica il suffisso del file di origine a "c". Per altre informazioni, vedere [due opzioni per la precompilazione di codice](../../build/creating-precompiled-header-files.md#two-choices-for-precompiling-code).