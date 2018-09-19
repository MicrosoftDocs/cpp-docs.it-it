---
title: Errore irreversibile U1095 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1095
dev_langs:
- C++
helpviewer_keywords:
- U1095
ms.assetid: a392582b-06db-4568-9c13-450293a4fbda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 964ec1d029e56a5d9d78659ad919c71a4e44506d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039881"
---
# <a name="nmake-fatal-error-u1095"></a>Errore irreversibile U1095 di NMAKE 

riga di comando espansa 'commandline' troppo lungo

Dopo l'espansione della macro, la riga di comando specificata ha superato il limite di lunghezza delle righe di comando per il sistema operativo.

MS-DOS consente fino a 128 caratteri in una riga di comando.

Se il comando è per un programma in grado di accettare input da riga di comando da un file, modificare il comando e fornire l'input da un file su disco o un file inline. Ad esempio, collegamento e LIB accettare input da un file di risposta.