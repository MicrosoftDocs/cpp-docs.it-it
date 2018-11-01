---
title: Errore irreversibile C1005
ms.date: 11/04/2016
f1_keywords:
- C1005
helpviewer_keywords:
- C1005
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
ms.openlocfilehash: a84791367656729b1cbd50ca180368f6c01531a4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614461"
---
# <a name="fatal-error-c1005"></a>Errore irreversibile C1005

stringa troppo grande per il buffer

Una stringa in un file intermedio del compilatore ha causato l'overflow di un buffer.

Questo errore viene in genere visualizzato quando il parametro passato alle opzioni del compilatore [/Fd](../../build/reference/fd-program-database-file-name.md) o [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) è maggiore di 256 byte.