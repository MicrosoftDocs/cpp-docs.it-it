---
title: Strumenti del linker LNK4075 avviso | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4075
dev_langs:
- C++
helpviewer_keywords:
- LNK4075
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 9dee257bec0f09bd729bf10c4a1468ecb20dfa61
ms.openlocfilehash: 84dea754a1d2268c92e703dd04b0169ccc258ab3
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-warning-lnk4075"></a>Avviso degli strumenti del linker LNK4075
ignorando "opzione1" a causa di "option2" specifica  
  
 La seconda opzione prevale sulla prima.  
  
 Vengono specificate le opzioni del linker si escludono a vicenda.  Esaminare le opzioni del linker.  In cui vengono specificate le opzioni del linker dipende dalla modalità di generazione del progetto.  
  
-   Se si sta compilando nell'ambiente di sviluppo, cercare nelle pagine delle proprietà linker del progetto e in cui vengono specificate entrambe le opzioni del linker.  Vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md) per ulteriori informazioni.  
  
-   Se si compila dalla riga di comando, esaminare le opzioni del linker specificate non esiste.  
  
-   Se si compila con script di compilazione, esaminare gli script per in cui vengono specificate le opzioni del linker.  
  
 Quando si trova in cui vengono specificate le opzioni del linker si escludono a vicenda, rimuovere una delle opzioni del linker.  
  
 Alcuni esempi specifici:  
  
-   Se si collega un modulo compilato con **/ZI**, che implica un'opzione del linker interna denominata /EDITANDCONTINUE a un modulo compilato con /OPT: REF, /OPT: ICF o /INCREMENTAL: No, che non implicano alcun /EDITANDCONTINUE, verrà restituito l'errore LNK4075.  Vedere [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md) per ulteriori informazioni.
