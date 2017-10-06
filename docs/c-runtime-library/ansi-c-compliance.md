---
title: "Conformità ANSI C | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Ansi
dev_langs:
- C++
helpviewer_keywords:
- underscores, leading
- compatibility [C++], ANSI C
- compliance with ANSI C
- conventions [C++], Microsoft extensions
- underscores
- naming conventions [C++], Microsoft library
- ANSI [C++], C standard
- Microsoft extensions naming conventions
ms.assetid: 6be271bf-eecf-491a-a928-0ee2dd60e3b9
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 7e6c5d4045f0b71890a34d845b898844ca550ca8
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="ansi-c-compliance"></a>Conformità ANSI C
La convenzione di denominazione per tutti gli identificatori specifici Microsoft nel sistema di runtime (ad esempio funzioni, macro, costanti, variabili e definizioni di tipo) è conforme a ANSI. In questa documentazione, qualsiasi funzione di runtime che segue gli standard ANSI/ISO C viene indicata come compatibile con ANSI. Le applicazioni conformi allo standard ANSI devono utilizzare solo queste funzioni compatibili con ANSI.  
  
 I nomi delle funzioni specifiche Microsoft e delle variabili globali iniziano con un carattere di sottolineatura. Questi nomi possono essere sottoposti a override solo localmente, all'interno dell'ambito del codice. Ad esempio, quando si includono i file di intestazione di runtime Microsoft, è ancora possibile eseguire localmente l'override della funzione specifica Microsoft denominata `_open` dichiarando una variabile locale con lo stesso nome. Tuttavia, non è possibile utilizzare questo nome per una funzione globale o una variabile globale.  
  
 I nomi delle macro specifiche Microsoft e delle costanti manifesto iniziano con due caratteri di sottolineatura o con un singolo carattere di sottolineatura iniziale immediatamente seguito da una lettera maiuscola. L'ambito di questi identificatori è assoluto. Ad esempio, non è possibile usare l'identificatore specifico Microsoft **_UPPER** per questo motivo.  
  
## <a name="see-also"></a>Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)
