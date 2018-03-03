---
title: Progetto PRJ0025 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0025
dev_langs:
- C++
helpviewer_keywords:
- PRJ0025
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f99a57439e87e1841555c90326072ba1667b6b5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0025"></a>Errore di compilazione progetto PRJ0025
Batch 'file' contenuto Unicode del file non può essere tradotto in una tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 Il sistema di progetto trovata contenuto Unicode in un oggetto personalizzato regola di compilazione o compilazione evento che non è possibile convertire correttamente nella tabella codici ANSI corrente dell'utente.  
  
 La risoluzione di questo errore è aggiornare il contenuto della regola di generazione o l'evento in modo da utilizzare ANSI o installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema di compilazione.  
  
 Per ulteriori informazioni su custom istruzioni di compilazione e gli eventi di compilazione, vedere [informazioni sulle istruzioni di compilazione personalizzate e di eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md).