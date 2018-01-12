---
title: Riga di comando D9025 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: D9025
dev_langs: C++
helpviewer_keywords: D9025
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d95c4c16b472f0e1b37a981df7f73ff573d06447
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-line-warning-d9025"></a>Avviso della riga di comando D9025
si esegue l'override di 'opzione1' con 'opzione2'  
  
 Il *opzione1* opzione è stato specificato ma è stata sottoposta a override da *opzione2*. Il *opzione2* è stata utilizzata l'opzione.  
  
 Se due opzioni specificano direttive contraddittorie o incompatibili, viene utilizzata la direttiva specificata o implicita con l'opzione più a destra nella riga di comando.  
  
 Se è visualizzato questo avviso durante la compilazione dall'ambiente di sviluppo e non si è certi provengano le opzioni in conflitto, considerare quanto segue:  
  
-   Nel codice o nelle impostazioni del progetto del progetto, è possibile specificare un'opzione. Se si esamina il compilatore [pagine delle proprietà riga di comando](../../ide/command-line-property-pages.md) e se è possibile visualizzare le opzioni in conflitto nel **tutte le opzioni** campo quindi le opzioni sono impostate nelle pagine delle proprietà del progetto, in caso contrario, le opzioni vengono impostate nel codice sorgente.  
  
     Se le opzioni sono impostate nelle pagine delle proprietà del progetto, cercare nella pagina delle proprietà per il preprocessore del compilatore (con il nodo di progetto selezionato in Esplora soluzioni).  Se non è presente l'opzione set non esiste, verificare le impostazioni della pagina proprietà per il preprocessore per ogni file di codice sorgente (in Esplora soluzioni) non è aggiunto non esiste.  
  
     Se le opzioni sono impostate nel codice potrebbe essere impostato nel codice o nelle intestazioni di windows.  È possibile provare a creare un file di pre-elaborato ([/p](../../build/reference/p-preprocess-to-a-file.md)) e di eseguire la ricerca per il simbolo.