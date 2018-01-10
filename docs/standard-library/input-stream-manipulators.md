---
title: Manipolatori dei flussi di input | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- input streams, manipulators
- input stream objects
ms.assetid: 0addcacb-7b7b-4d70-9775-a59abc400fb3
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 17242528dd2be4a72a763f34ee651fc170fea58c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="input-stream-manipulators"></a>Manipolatori dei flussi di input
Molti manipolatori, ad esempio [setprecision]--brokenlink--(../Topic/not%20found:3ddde610-70cc-4cfa-8a89-3e83d1d356a8.md#setprecision), sono definiti per la classe `ios`, pertanto si applicano ai flussi di input. Alcuni manipolatori tuttavia incidono sugli oggetti di flusso di input. Di questi, i più importanti sono i manipolatori base, `dec`, `oct` e `hex`, che determinano la base di conversione usata con i numeri provenienti dal flusso di input.  
  
 In fase di estrazione, il manipolatore `hex` consente l'elaborazione di diversi formati di input. Ad esempio, c, C, 0xc, 0xC, 0Xc e 0XC vengono tutti interpretati come l'intero decimale 12. Qualsiasi carattere diverso da quelli compresi tra 0 e 9, tra A e F, tra a e f, nonché da x e X termina la conversione numerica. La sequenza `"124n5"` viene pertanto convertita nel numero 124 con il bit [basic_ios::fail](../standard-library/basic-ios-class.md#fail) impostato.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)

