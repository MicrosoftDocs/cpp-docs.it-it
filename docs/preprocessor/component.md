---
title: "componente | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.component"
  - "component_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "component (pragma)"
  - "pragma, componente"
ms.assetid: 7b66355e-3201-4c14-8190-f4a2a81a604a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# componente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Controlla la raccolta di informazioni di visualizzazione o di informazioni sulle dipendenze dall'interno dei file di origine.  
  
## Sintassi  
  
```  
  
      #pragma component( browser, { on | off }[, references [, name ]] )  
#pragma component( minrebuild, on | off )  
#pragma component( mintypeinfo, on | off )  
```  
  
## Note  
  
## Browser  
 È possibile abilitare o disabilitare la raccolta e specificare determinati nomi da ignorare man mano che vengono raccolte le informazioni.  
  
 L'utilizzo di On o Off consente di controllare la raccolta di informazioni di visualizzazione dal pragma in avanti.  Ad esempio:  
  
```  
#pragma component(browser, off)  
```  
  
 arresta la raccolta di informazioni di visualizzazione da parte del compilatore.  
  
> [!NOTE]
>  Per abilitare la raccolta di informazioni di visualizzazione con questo pragma, [è innanzitutto necessario abilitare tali informazioni di visualizzazione](../build/reference/building-browse-information-files-overview.md).  
  
 L'opzione **references** può essere utilizzata con o senza l'argomento *name*.  L'utilizzo di **references** senza l'argomento *name* consente di abilitare o disabilitare la raccolta di riferimenti. Le altre informazioni di visualizzazione continuano tuttavia a essere raccolte.  Ad esempio:  
  
```  
#pragma component(browser, off, references)  
```  
  
 arresta la raccolta di informazioni di riferimento da parte del compilatore.  
  
 L'utilizzo di **references** con l'argomento *name* e **off** impedisce la visualizzazione dei riferimenti all'argomento *name* nella finestra delle informazioni di visualizzazione.  Utilizzare questa sintassi per ignorare i nomi e i tipi non desiderati e per ridurre le dimensioni dei file di informazioni di visualizzazione.  Ad esempio:  
  
```  
#pragma component(browser, off, references, DWORD)  
```  
  
 ignora i riferimenti a **DWORD** da quel punto in poi.  È possibile riabilitare la raccolta dei riferimenti a `DWORD` utilizzando **on**:  
  
```  
#pragma component(browser, on, references, DWORD)  
```  
  
 Questo è l'unico modo per riprendere la raccolta dei riferimenti a *name*; è necessario abilitare in modo esplicito qualsiasi *name* disabilitato.  
  
 Per impedire al preprocessore di espandere *name*, ad esempio di espandere **NULL** in **0**, racchiuderlo tra virgolette:  
  
```  
#pragma component(browser, off, references, "NULL")  
```  
  
## Ricompilazione minima  
 La funzionalità di ricompilazione minima di Visual C\+\+ richiede la creazione e l'archiviazione delle informazioni sulle dipendenze delle classi C\+\+ da parte del compilatore, che richiede spazio su disco.  Per risparmiare spazio su disco, è possibile utilizzare `#pragma component( minrebuild, off )` ogni qual volta non è necessario raccogliere informazioni sulle dipendenze, ad esempio nei file di intestazione non modificabili.  Inserire `#pragma component(minrebuild, on)` dopo le classi non modificabili per riabilitare la raccolta delle dipendenze.  
  
## Ridurre le informazioni sui tipi  
 L'opzione **mintypeinfo** riduce le informazioni di debug per l'area specificata.  Il volume di queste informazioni è notevole e incide sui file pdb e obj.  Non è possibile eseguire il debug delle classi e delle strutture nell'area mintypeinfo.  L'utilizzo dell'opzione mintypeinfo può essere utile per evitare il seguente avviso:  
  
```  
LINK : warning LNK4018: too many type indexes in PDB "filename", discarding subsequent type information  
```  
  
 Per ulteriori informazioni, vedere l'opzione del compilatore \/Gm [Abilita ricompilazione minima](../build/reference/gm-enable-minimal-rebuild.md).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)