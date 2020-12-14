---
description: 'Altre informazioni su: errore irreversibile C1005'
title: Errore irreversibile C1005
ms.date: 11/04/2016
f1_keywords:
- C1005
helpviewer_keywords:
- C1005
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
ms.openlocfilehash: c57856a09aa3473c7f5ba3049a2962fb4553e4e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262672"
---
# <a name="fatal-error-c1005"></a>Errore irreversibile C1005

stringa troppo grande per il buffer

Una stringa in un file intermedio del compilatore ha causato l'overflow di un buffer.

Questo errore viene in genere visualizzato quando il parametro passato alle opzioni del compilatore [/Fd](../../build/reference/fd-program-database-file-name.md) o [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) è maggiore di 256 byte.
