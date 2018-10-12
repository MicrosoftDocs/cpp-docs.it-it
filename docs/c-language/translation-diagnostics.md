---
title: 'Conversione: diagnostica | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d297cfd4f4dee49d3344ae2f159f85682f05ea2f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017586"
---
# <a name="translation-diagnostics"></a>Conversione: diagnostica

**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica

Microsoft C produce messaggi di errore nel form:

> *filename* **(** *line-number* **) :** *diagnostic* **C**<em>number</em> *message*

dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; *diagnostic* è "error" o "warning"; *number* è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; *message* è un messaggio esplicativo.

## <a name="see-also"></a>Vedere anche

[Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)