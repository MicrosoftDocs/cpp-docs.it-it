---
title: Errore della riga di comando D8037
ms.date: 11/04/2016
f1_keywords:
- D8037
helpviewer_keywords:
- D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
ms.openlocfilehash: 3ebca6a21e6e19e0eca144c61e5c529bc6b2d03c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820754"
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037

non è possibile creare il file temporaneo. svuotare la directory temporanea dei file il precedenti

Non c'è spazio sufficiente per creare i file intermedi del compilatore temporaneo. Per risolvere questo errore, rimuovere i vecchi file MSIL nella directory specificata per il **TMP** variabile di ambiente. Questi file saranno di CL_hhhhhhhh, dove h rappresenta una cifra esadecimale casuali e ss rappresenta il tipo di file IL. Inoltre, assicurarsi di aggiornare il computer con le patch più recenti del sistema operativo.

## <a name="see-also"></a>Vedere anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)