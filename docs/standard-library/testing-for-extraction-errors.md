---
title: Verifica degli errori di estrazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- extraction errors
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9394f387546f9b9dccf72f532148aa2b9161ce15
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="testing-for-extraction-errors"></a>Verifica degli errori di estrazione

Le funzioni di elaborazione degli errori di output, discusse in [Funzioni di elaborazione degli errori](../standard-library/output-file-stream-member-functions.md), si applicano anche ai flussi di input. La verifica degli errori di estrazione è importante. Si prenda in considerazione l'istruzione seguente:

```cpp
cin>> n;
```

Se `n` è un intero con segno, un valore maggiore di 32.767 (il valore massimo consentito, o MAX_INT) imposta il bit `fail` del flusso e l'oggetto `cin` diventa inutilizzabile. Tutte le estrazioni successive determinano una restituzione immediata senza alcun valore archiviato.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
