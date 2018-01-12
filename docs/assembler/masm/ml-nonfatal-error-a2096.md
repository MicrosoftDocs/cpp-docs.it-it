---
title: ML errore non irreversibile A2096 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: A2096
dev_langs: C++
helpviewer_keywords: A2096
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6d4466d87e33068b10b3f620bfbe764e4aec76c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ml-nonfatal-error-a2096"></a>Errore ML non irreversibile A2096
**segmento, gruppo o il Registro di segmento previsto**  
  
 Un segmento o un gruppo è previsto ma non è stato trovato.  
  
 Si è verificata una delle operazioni seguenti:  
  
-   L'operando di sinistra specificata con il segmento di eseguire l'override di operatore (**:**) non è un segmento register (CS, DS, SS, ES, ADFS o GS), nome del gruppo, il nome del segmento o espressione di segmento.  
  
-   Il [PRESUPPONI](../../assembler/masm/assume.md) direttiva è stata specificata un registro del segmento senza un indirizzo valido di segmento, Registro di segmento, gruppo o speciale **FLAT** gruppo.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)