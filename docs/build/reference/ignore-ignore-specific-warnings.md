---
title: "/IGNORE (ignorare determinati avvisi) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ignore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/IGNORE - Opzione del linker"
ms.assetid: 37e77387-8838-4697-898f-d376ac641124
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# /IGNORE (ignorare determinati avvisi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/IGNORE:warning[,warning]  
```  
  
## Parametri  
 `warning`  
 Numero dall'avviso del linker da eliminare, compreso nell'intervallo tra 4000 e 4999.  
  
## Note  
 Per impostazione predefinita, LINK segnala tutti gli avvisi.  Specificare **\/IGNORE:**`warning` per indicare al linker di non visualizzare un numero di avviso specifico.  Per ignorare più avvisi, separare i numeri di avviso con virgole.  
  
 Non è tuttavia possibile ignorare alcuni tipi di avviso.  La tabella seguente elenca gli avvisi che non verranno eliminati dall'opzione **\/IGNORE**:  
  
|Avviso del linker||  
|-----------------------|-|  
|LNK4017|istruzione `keyword` non supportata per la piattaforma di destinazione; verrà ignorata|  
|[LNK4044](../../error-messages/tool-errors/linker-tools-warning-lnk4044.md)|opzione '`option`' non riconosciuta; ignorata|  
|LNK4062|'`option`' non è compatibile con il computer di destinazione '`architecture`' e verrà ignorato|  
|[LNK4075](../../error-messages/tool-errors/linker-tools-warning-lnk4075.md)|"`option1`" ignorata a causa della specifica di "`option2`"|  
|[LNK4086](../../error-messages/tool-errors/linker-tools-warning-lnk4086.md)|il punto di ingresso '`function`' non è \_\_stdcall con '`number`' byte di argomenti; l'immagine potrebbe non essere eseguita|  
|LNK4088|immagine generata grazie all'opzione \/FORCE; l'immagine potrebbe non essere eseguita|  
|[LNK4105](../../error-messages/tool-errors/linker-tools-warning-lnk4105.md)|nessun argomento specificato con l'opzione '`option`'; opzione ignorata|  
|LNK4203|errore di lettura del database di programma '`filename`'; oggetto collegato senza informazioni di debug|  
|[LNK4204](../../error-messages/tool-errors/linker-tools-warning-lnk4204.md)|''`filename`' mancano informazioni di debug per il modulo di riferimento; oggetto collegato senza informazioni di debug|  
|[LNK4205](../../error-messages/tool-errors/linker-tools-warning-lnk4205.md)|''`filename`' mancano informazioni di debug correnti per il modulo di riferimento; oggetto collegato senza informazioni di debug|  
|[LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md)|impossibile trovare informazioni sul tipo precompilato; '`filename`' non collegato o sovrascritto; oggetto collegato senza informazioni di debug|  
|LNK4207|'`filename`' compilato con \/Yc \/Yu \/Z7; impossibile creare PDB; ricompilare con \/Zi; oggetto collegato senza informazioni di debug|  
|LNK4208|formato di PDB non compatibile in '`filename`'; eliminare e rigenerare; oggetto collegato senza informazioni di debug|  
|LNK4209|informazioni di debug danneggiate; ricompilare il modulo; oggetto collegato senza informazioni di debug|  
|[LNK4224](../../error-messages/tool-errors/linker-tools-warning-lnk4224.md)|`option` non è più supportato e verrà ignorato|  
|LNK4228|'`option`' non è valido per una DLL e verrà ignorato|  
|[LNK4229](../../error-messages/tool-errors/linker-tools-warning-lnk4229.md)|la direttiva \/`directive` rilevata non è valida e verrà ignorata|  
  
 In generale, gli avvisi del linker che non possono essere ignorati rappresentano errori di compilazione, errori della riga di comando o errori di configurazione che devono essere corretti.  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Nella cartella **Linker**, selezionare la pagina delle proprietà **Riga di comando**.  
  
3.  Modificare la proprietà **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.