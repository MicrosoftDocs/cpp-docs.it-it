---
title: "/volatile (interpretazione della parole chiave volatile) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/volatile:iso"
  - "/volatile:ms"
  - "/volatile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/volatile (opzione del compilatore)"
  - "/volatile (opzione del compilatore) [C++]"
  - "volatile (opzione del compilatore)"
  - "-volatile (opzione del compilatore)"
  - "volatile (opzione del compilatore) [C++]"
  - "-volatile (opzione del compilatore) [C++]"
ms.assetid: 9d08fcc6-5bda-44c8-8151-8d8d54f164b8
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# /volatile (interpretazione della parole chiave volatile)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica in che modo deve essere interpretata la parola chiave [volatile](../../cpp/volatile-cpp.md).  
  
## Sintassi  
  
```  
/volatile:{iso|ms}  
```  
  
## Argomenti  
 **\/volatile:iso**  
 Selezionare la semantica ridotta `volatile` definita dal linguaggio di ISO\-standard C\+\+.  La semantica di acquisizione\/rilascio non è garantita negli accessi volatili.  Se il compilatore è invece destinato ad ARM, si tratta dell'interpretazione predefinita di `volatile`.  
  
 **\/volatile:ms**  
 Selezionare la semantica estesa Microsoft `volatile`, che garantisce l'aggiunta dell'ordinamento in memoria oltre al linguaggio ISO\-standard C\+\+.  La semantica di acquisizione\/rilascio non è garantita negli accessi volatili.  Tuttavia, questa opzione forza anche il compilatore a generare barriere di memoria hardware, che possono aggiungere un sovraccarico su ARM e in altre architetture con memoria a ordinamento debole.  Se il compilatore è destinato a qualsiasi piattaforma tranne quella ARM, si tratta dell'interpretazione predefinita di `volatile`.  
  
## Note  
 È consigliabile utilizzare **\/volatile:iso** con le primitive di sincronizzazione esplicite e le funzioni intrinseche del compilatore, quando si utilizzano con una memoria che è condivisa tra thread.  Per ulteriori informazioni, vedere [volatile](../../cpp/volatile-cpp.md).  
  
 Se si trasferisce il codice esistente o si modifica questa opzione nel corso un progetto, può essere utile abilitare l'avviso [C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md) per identificare le posizioni di codice interessate dalla differenza di semantica.  
  
 Non esiste un equivalente `#pragma` al controllo di questa opzione.  
  
### Per impostare l'opzione del compilatore \/volatile in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Nella casella **Opzioni aggiuntive** aggiungere `/volatile:iso` o `/volatile:ms`.  
  
## Vedere anche  
 [volatile](../../cpp/volatile-cpp.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)