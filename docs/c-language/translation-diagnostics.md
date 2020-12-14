---
description: 'Altre informazioni su: Translation: Diagnostics'
title: 'Conversione: Diagnostica'
ms.date: 11/04/2016
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
ms.openlocfilehash: 09fc44dea8d51dbb267d402745c8c2a095b969d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243055"
---
# <a name="translation-diagnostics"></a>Conversione: Diagnostica

**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica

Microsoft C produce messaggi di errore nel form:

> *filename* **(** *numero di riga* **):** *messaggio* del <em>numero</em> **C** di *diagnostica*

dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; *diagnostic* è "error" o "warning"; *number* è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; *message* è un messaggio esplicativo.

## <a name="see-also"></a>Vedi anche

[Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)
