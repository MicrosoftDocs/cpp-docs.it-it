---
title: ML errore non irreversibile A2133 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: A2133
dev_langs: C++
helpviewer_keywords: A2133
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 64619e6e14ce0268516c6c688c9a2bdeb5ea7a11
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-nonfatal-error-a2133"></a>Errore ML non irreversibile A2133
**valore sovrascritto da INVOKE di registro**  
  
 Un registro è stato passato come argomento a una routine, ma il codice generato da [INVOKE](../../assembler/masm/invoke.md) gli altri argomenti vengono passati eliminato in modo permanente il contenuto del registro.  
  
 I registri AX AL, AH, EAX, DX, DL, DH ed EDX utilizzabile dall'assembler per eseguire la conversione dei dati.  
  
 Utilizzare un registro diverso.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)