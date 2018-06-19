---
title: Riga di comando D9025 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9025
dev_langs:
- C++
helpviewer_keywords:
- D9025
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3875a2cbd065fd5ad887267bcc80748fa9845d0d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298850"
---
# <a name="command-line-warning-d9025"></a>Avviso della riga di comando D9025
si esegue l'override di 'opzione1' con 'opzione2'  
  
 Il *opzione1* opzione è stato specificato ma è stata sottoposta a override da *opzione2*. Il *opzione2* è stata utilizzata l'opzione.  
  
 Se due opzioni specificano direttive contraddittorie o incompatibili, viene utilizzata la direttiva specificata o implicita con l'opzione più a destra nella riga di comando.  
  
 Se è visualizzato questo avviso durante la compilazione dall'ambiente di sviluppo e non si è certi provengano le opzioni in conflitto, considerare quanto segue:  
  
-   Nel codice o nelle impostazioni del progetto del progetto, è possibile specificare un'opzione. Se si esamina il compilatore [pagine delle proprietà riga di comando](../../ide/command-line-property-pages.md) e se è possibile visualizzare le opzioni in conflitto nel **tutte le opzioni** campo quindi le opzioni sono impostate nelle pagine delle proprietà del progetto, in caso contrario, le opzioni vengono impostate nel codice sorgente.  
  
     Se le opzioni sono impostate nelle pagine delle proprietà del progetto, cercare nella pagina delle proprietà per il preprocessore del compilatore (con il nodo di progetto selezionato in Esplora soluzioni).  Se non è presente l'opzione set non esiste, verificare le impostazioni della pagina proprietà per il preprocessore per ogni file di codice sorgente (in Esplora soluzioni) non è aggiunto non esiste.  
  
     Se le opzioni sono impostate nel codice potrebbe essere impostato nel codice o nelle intestazioni di windows.  È possibile provare a creare un file di pre-elaborato ([/p](../../build/reference/p-preprocess-to-a-file.md)) e di eseguire la ricerca per il simbolo.