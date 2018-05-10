---
title: Verifica degli errori di estrazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- extraction errors
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc84277b654a79eebd38461c3ee83aefd533e4a8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="testing-for-extraction-errors"></a>Verifica degli errori di estrazione

Le funzioni di elaborazione degli errori di output, discusse in [Funzioni di elaborazione degli errori](../standard-library/output-file-stream-member-functions.md), si applicano anche ai flussi di input. La verifica degli errori di estrazione è importante. Si prenda in considerazione l'istruzione seguente:

```cpp
cin>> n;
```

Se `n` è un intero con segno, un valore maggiore di 32.767 (il valore massimo consentito, o MAX_INT) imposta il bit `fail` del flusso e l'oggetto `cin` diventa inutilizzabile. Tutte le estrazioni successive determinano una restituzione immediata senza alcun valore archiviato.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
