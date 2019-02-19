---
title: Nessun collegamento
ms.date: 11/04/2016
helpviewer_keywords:
- no linkage
- linkage [C++], none
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
ms.openlocfilehash: c80cb814145ac986864fe351e664d8472f3bf880
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152846"
---
# <a name="no-linkage"></a>Nessun collegamento

Se una dichiarazione di un identificatore all'interno di un blocco non include l'identificatore di classe di archiviazione `extern`, significa che l'identificatore non dispone di un collegamento ed è univoco nella funzione.

I seguenti identificatori non dispongono di collegamento:

- Identificatori dichiarati come elementi diversi da un oggetto o da una funzione

- Identificatori dichiarati come parametri di una funzione

- Identificatori con ambito di blocco per un oggetto dichiarato senza l'identificatore di classe di archiviazione `extern`

Se un identificatore non dispone di collegamento, dichiarando nuovamente lo stesso nome (in un dichiaratore o in un identificatore di tipo) nello stesso livello di ambito verrà generato un errore di ridefinizione dei simboli.

## <a name="see-also"></a>Vedere anche

[Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)
