---
title: Strumenti del linker LNK4075 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4075
dev_langs: C++
helpviewer_keywords: LNK4075
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 78ff64b316a9b87a95fa68a95b5e4ca57923649d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-warning-lnk4075"></a>Avviso degli strumenti del linker LNK4075
ignorando l'opzione "1" a causa di "opzione2" specifica  
  
 La seconda opzione sostituisce il primo.  
  
 Vengono specificate le opzioni del linker si escludono a vicenda.  Esaminare le opzioni del linker.  In cui vengono specificate le opzioni del linker dipende da come si compila il progetto.  
  
-   Se si sta compilando nell'ambiente di sviluppo, cercare nelle pagine delle proprietà linker per il progetto e in cui vengono specificate entrambe le opzioni del linker.  Vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md) per ulteriori informazioni.  
  
-   Se si compila dalla riga di comando, esaminare le opzioni del linker specificate non esiste.  
  
-   Se si compila con script di compilazione, esaminare gli script in cui vengono specificate le opzioni del linker.  
  
 Quando si trova in cui vengono specificate le opzioni del linker si escludono a vicenda, rimuovere una delle opzioni del linker.  
  
 Alcuni esempi specifici:  
  
-   Se si collega un modulo compilato con **/ZI**, che implica un'opzione del linker interna denominata /EDITANDCONTINUE a un modulo compilato con /OPT: REF, /OPT: ICF o /INCREMENTAL: No, che non implica alcun /EDITANDCONTINUE, sarà possibile l'errore LNK4075.  Vedere [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md) per ulteriori informazioni.