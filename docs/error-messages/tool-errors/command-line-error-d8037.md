---
title: Errore della riga di comando D8037
ms.date: 11/04/2016
f1_keywords:
- D8037
helpviewer_keywords:
- D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
ms.openlocfilehash: ed6778861c89bb9755087c4d58f094a57d5f760f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196859"
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037

Impossibile creare il file il temporaneo. Pulisci directory temporanea dei file il precedenti

Lo spazio disponibile non è sufficiente per la creazione di file intermedi del compilatore temporaneo. Per risolvere questo errore, rimuovere i file MSIL obsoleti nella directory specificata dalla variabile di ambiente **tmp** . Il formato di questi file sarà _CL_hhhhhhhh. SS, dove h rappresenta una cifra esadecimale casuale e ss rappresenta il tipo di file IL. Assicurarsi inoltre di aggiornare il computer con le patch del sistema operativo più recenti.

## <a name="see-also"></a>Vedere anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)
