---
title: Funzione di supporto di sviluppo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- helper functions
ms.assetid: a845429d-68b1-4e14-aa88-f3f5343bd490
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76172804cc271a740244d06e791db35d534c69e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="developing-your-own-helper-function"></a>Sviluppo di una funzione di supporto personalizzata
È possibile fornire la propria versione della routine per eseguire un'elaborazione specifica in base ai nomi delle DLL o importazioni. Esistono due metodi di questa operazione: codifica personalizzata, eventualmente in base al codice fornito, oppure l'associazione della versione fornita con gli hook di notifica dettagliati in precedenza.  
  
 Codice personalizzati  
 Si tratta piuttosto semplice, poiché in pratica, è possibile utilizzare il codice fornito come linee guida per una nuova. Naturalmente, deve rispettare le convenzioni di chiamata e se viene restituito per il thunk generate dal linker, deve restituire un puntatore a funzione corretto. Una volta nel codice, è possibile eseguire praticamente desiderato per soddisfare la chiamata o ottenere dalla chiamata.  
  
 Utilizzare l'inizio l'elaborazione di Hook di notifica  
 Probabilmente sarà più semplice fornire un nuovo puntatore a una funzione hook di notifica fornito dall'utente che riceve gli stessi valori di supporto predefinito nella notifica dliStartProcessing. A questo punto, la funzione hook può diventare essenzialmente la nuova funzione di supporto, come una restituzione ha esito positivo al supporto predefinito Ignora ulteriori attività di elaborazione nel supporto predefinito.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)