---
title: Errore della riga di comando D8037 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D8037
dev_langs:
- C++
helpviewer_keywords:
- D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 38bbb8e85f0bb11af3846435f31cfc4223a39f16
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086317"
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037

non è possibile creare il file temporaneo. svuotare la directory temporanea dei file il precedenti

Non c'è spazio sufficiente per creare i file intermedi del compilatore temporaneo. Per risolvere questo errore, rimuovere i vecchi file MSIL nella directory specificata per il **TMP** variabile di ambiente. Questi file saranno di CL_hhhhhhhh, dove h rappresenta una cifra esadecimale casuali e ss rappresenta il tipo di file IL. Inoltre, assicurarsi di aggiornare il computer con le patch più recenti del sistema operativo.

## <a name="see-also"></a>Vedere anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)