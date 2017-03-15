---
title: "Avviso del compilatore C4746 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
caps.latest.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 2
---
# Avviso del compilatore C4746
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'accesso volatile della '\<espressione\>' è soggetto all'impostazione \/volatile:\[iso&#124;ms\]; considerare l'utilizzo di funzioni intrinseche \_\_iso\_volatile\_load\/store.  
  
 C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente.  È dedicato ad aiutare gli sviluppatori ad identificare i percorsi di codice che sono interessati dal modello specifico volatile specificato \(che può essere controllato tramite l'opzione del compilatore [\/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) \).  In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando \/volatile:ms viene utilizzato.  
  
 Le funzioni intrinseche \_\_iso\_volatile\_load\/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile.  Utilizzando queste funzioni intrinseche non verrà generato C4746.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).