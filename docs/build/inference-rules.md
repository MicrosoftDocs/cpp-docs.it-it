---
title: Le regole di inferenza | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- NMAKE program, inference rules
ms.assetid: caff320f-fb07-4eea-80c3-a6a2133a8492
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 932aad860cd2b78208857ca7b028e35cd96d481e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="inference-rules"></a>Regole di inferenza
Le regole di inferenza forniscono comandi per aggiornare le destinazioni e dedurre i relativi dipendenti. Estensioni in una regola di inferenza corrispondono a una singola destinazione e i dipendenti che hanno lo stesso nome di base. Le regole di inferenza sono definiti dall'utente o predefiniti; è possibile ridefinire le regole predefinite.  
  
 Se una dipendenza non aggiornata non presenta comandi e [. SUFFISSI](../build/dot-directives.md) contiene l'estensione del dipendente, utilizzato NMAKE una regola le cui estensioni corrispondono alla destinazione e un oggetto esistente del file nella directory correnti o specificate. Se i file esistenti, corrisponde a più di una regola di **. SUFFISSI** elenco determina quale utilizzare; priorità elenco deriva da sinistra a destra. Se un file dipendente non esiste e non è elencato come destinazione in un altro blocco di descrizione, una regola di inferenza possibile creare la mancante dipendenti da un altro file con lo stesso nome di base. Se un blocco di descrizione non contiene oggetti dipendenti o i comandi, una regola di inferenza possibile aggiornare la destinazione. Le regole di inferenza possono compilare una destinazione della riga di comando, anche se è non presente alcun blocco di descrizione. NMAKE può richiamare una regola per un dipendente dedotto, anche se viene specificato un dipendente esplicito.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Definizione di una regola](../build/defining-a-rule.md)  
  
 [Regole in modalità batch](../build/batch-mode-rules.md)  
  
 [Regole predefinite](../build/predefined-rules.md)  
  
 [Dipendenti dedotti e regole](../build/inferred-dependents-and-rules.md)  
  
 [Precedenza nelle regole di inferenza](../build/precedence-in-inference-rules.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)