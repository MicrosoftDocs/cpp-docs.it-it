---
title: Progetto PRJ0025 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0025
dev_langs:
- C++
helpviewer_keywords:
- PRJ0025
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 087a5d5af8ed92bdd0446ae87af037acbfd38a95
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0025"></a>Errore di compilazione progetto PRJ0025
Batch 'file' contenuto Unicode del file non può essere tradotto in una tabella codici ANSI dell'utente.  
  
 ***Contenuto UNICODE del file***  
  
 Il sistema di progetto trovata contenuto Unicode in un oggetto personalizzato regola di compilazione o compilazione evento che non è possibile convertire correttamente nella tabella codici ANSI corrente dell'utente.  
  
 La risoluzione di questo errore è aggiornare il contenuto della regola di generazione o l'evento in modo da utilizzare ANSI o installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema di compilazione.  
  
 Per ulteriori informazioni su custom istruzioni di compilazione e gli eventi di compilazione, vedere [informazioni sulle istruzioni di compilazione personalizzate e di eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md).