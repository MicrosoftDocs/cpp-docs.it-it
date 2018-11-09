---
title: 'Conversione: diagnostica'
ms.date: 11/04/2016
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
ms.openlocfilehash: 4863b97dc1db7ff295b5f786ca97da2551d0fa62
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664997"
---
# <a name="translation-diagnostics"></a>Conversione: diagnostica

**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica

Microsoft C produce messaggi di errore nel form:

> *filename* **(** *line-number* **) :** *diagnostic* **C**<em>number</em> *message*

dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; *diagnostic* è "error" o "warning"; *number* è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; *message* è un messaggio esplicativo.

## <a name="see-also"></a>Vedere anche

[Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)