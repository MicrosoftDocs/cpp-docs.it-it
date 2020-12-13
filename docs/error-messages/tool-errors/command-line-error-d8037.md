---
description: 'Altre informazioni su: Command-Line errore D8037'
title: Errore della riga di comando D8037
ms.date: 11/04/2016
f1_keywords:
- D8037
helpviewer_keywords:
- D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
ms.openlocfilehash: a3f01828bbe8d1df98260ebec2b5646442ec65e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136184"
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037

Impossibile creare il file il temporaneo. Pulisci directory temporanea dei file il precedenti

Lo spazio disponibile non è sufficiente per la creazione di file intermedi del compilatore temporaneo. Per risolvere questo errore, rimuovere i file MSIL obsoleti nella directory specificata dalla variabile di ambiente **tmp** . Il formato di questi file sarà _CL_hhhhhhhh. SS, dove h rappresenta una cifra esadecimale casuale e ss rappresenta il tipo di file IL. Assicurarsi inoltre di aggiornare il computer con le patch del sistema operativo più recenti.

## <a name="see-also"></a>Vedi anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)
