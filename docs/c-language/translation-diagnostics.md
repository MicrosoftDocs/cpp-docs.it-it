---
title: 'Conversione: diagnostica'
ms.date: 11/04/2016
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
ms.openlocfilehash: a274b7c5f29b091b2bf29922abfa4d66d3447b47
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62344967"
---
# <a name="translation-diagnostics"></a>Conversione: diagnostica

**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica

Microsoft C produce messaggi di errore nel form:

> *filename* **(** *numero di riga* **):** *messaggio* del<em>numero</em> **C**di *diagnostica*

dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; *diagnostic* è "error" o "warning"; *number* è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; *message* è un messaggio esplicativo.

## <a name="see-also"></a>Vedere anche

[Comportamento definito in fase di implementazione](../c-language/implementation-defined-behavior.md)
