---
title: "/vd (Disabilita spostamenti costruttori) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/vd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/vd0 (opzione del compilatore) [C++]"
  - "/vd1 (opzione del compilatore) [C++]"
  - "/vdn (Disabilita spostamento costruttori) (opzione del compilatore)"
  - "spostamento di costruttori"
  - "Disabilita spostamento costruttori (opzione del compilatore)"
  - "displacements (opzione del compilatore)"
  - "vd0 (opzione del compilatore) [C++]"
  - "-vd0 (opzione del compilatore) [C++]"
  - "vd1 (opzione del compilatore) [C++]"
  - "-vd1 (opzione del compilatore) [C++]"
  - "vtordisp (campi)"
ms.assetid: 93258964-14d7-4b1c-9cbc-d6f4d74eab69
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /vd (Disabilita spostamenti costruttori)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
/vdn  
```  
  
## Argomenti  
 `0`  
 Elimina il membro di spostamento del costruttore\/distruttore vtordisp.  Scegliere questa opzione solo se si è certi che tutti i costruttori e distruttori di classe chiamino virtualmente le funzioni virtuali.  
  
 `1`  
 Attiva la creazione di membri nascosti di spostamento del costruttore\/distruttore vtordisp.  Questa è la scelta predefinita.  
  
 `2`  
 Consente di utilizzare l'[Operatore dynamic\_cast](../../cpp/dynamic-cast-operator.md) su un oggetto da costruire,  ad esempio da una classe base virtuale a una classe derivata.  
  
 L'opzione **\/vd2** aggiunge un campo vtordisp quando si dispone di una base virtuale con funzioni virtuali.  L'opzione **\/vd1** dovrebbe essere sufficiente.  ma **\/vd2** è necessario quando l'unica funzione virtuale nella base virtuale è rappresentata da un distruttore.  
  
## Note  
 Queste opzioni si applicano solo al codice C\+\+ che utilizza basi virtuali.  
  
 In [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] il supporto per lo spostamento della costruzione C\+\+ viene implementato nelle situazioni in cui viene utilizzata l'ereditarietà virtuale.  Gli spostamenti della costruzione risolvono il problema creato quando una funzione virtuale, dichiarata in una base virtuale e di cui è stato eseguito l'override in una classe derivata, viene chiamata da un costruttore durante la costruzione di un'ulteriore classe derivata.  
  
 Alla funzione virtuale può essere passato un puntatore `this` non corretto come conseguenza di discrepanze tra gli spostamenti nelle basi virtuali di una classe e gli spostamenti nelle relative classi derivate.  La soluzione offre un'unica modifica allo spostamento della costruzione, denominata campo vtordisp, per ogni base virtuale di una classe.  
  
 Per impostazione predefinita, i campi vtordisp vengono introdotti ogni volta che il codice definisce costruttori e distruttori definiti dall'utente ed esegue anche l'override di funzioni virtuali di basi virtuali.  
  
 Queste opzioni influenzano interi file di origine.  Utilizzare [vtordisp](../../preprocessor/vtordisp.md) per disabilitare e quindi riabilitare i campi vtordisp classe per classe.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)