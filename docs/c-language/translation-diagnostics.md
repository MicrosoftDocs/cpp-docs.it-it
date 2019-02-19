---
title: 'Conversione: Diagnostica'
ms.date: 11/04/2016
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
ms.openlocfilehash: a274b7c5f29b091b2bf29922abfa4d66d3447b47
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152599"
---
# <a name="translation-diagnostics"></a>Conversione: Diagnostica

**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica

Microsoft C produce messaggi di errore nel form:

> *filename* **(** *line-number* **) :** *diagnostic* **C**<em>number</em> *message*

dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; *diagnostic* è "error" o "warning"; *number* è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; *message* è un messaggio esplicativo.

## <a name="see-also"></a>Vedere anche

[Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)
