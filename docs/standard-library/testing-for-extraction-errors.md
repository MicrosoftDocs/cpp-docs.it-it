---
title: Verifica degli errori di estrazione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- extraction errors
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 232dbd4312bbb8a0f16b6095622680f070ff2905
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="testing-for-extraction-errors"></a>Verifica degli errori di estrazione
Le funzioni di elaborazione degli errori di output, discusse in [Funzioni di elaborazione degli errori](../standard-library/output-file-stream-member-functions.md), si applicano anche ai flussi di input. La verifica degli errori di estrazione è importante. Si prenda in considerazione l'istruzione seguente:  
  
```  
cin>> n;  
```  
  
 Se `n` è un intero con segno, un valore maggiore di 32.767 (il valore massimo consentito, o MAX_INT) imposta il bit `fail` del flusso e l'oggetto `cin` diventa inutilizzabile. Tutte le estrazioni successive determinano una restituzione immediata senza alcun valore archiviato.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)

