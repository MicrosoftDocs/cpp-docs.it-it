---
title: "/Zm (Specifica il limite di allocazione della memoria per le intestazioni precompilate) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/zm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), limiti di allocazione di memoria"
  - "/Zm (opzione del compilatore) [C++]"
  - "compilatore cl.exe, limiti di allocazione di memoria"
  - "allocazione di memoria, opzione del compilatore Limiti di allocazione di memoria"
  - "PCH (file), limiti di allocazione di memoria"
  - "file di intestazione precompilata, limiti di allocazione di memoria"
  - "Specifica il limite di allocazione della memoria per le intestazioni precompilate (opzione del compilatore)"
  - "Zm (opzione del compilatore) [C++]"
  - "-Zm (opzione del compilatore) [C++]"
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# /Zm (Specifica il limite di allocazione della memoria per le intestazioni precompilate)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina la quantità di memoria allocata dal compilatore per costruire intestazioni precompilate.  
  
## Sintassi  
  
```  
/Zmfactor  
```  
  
## Argomenti  
 `factor`  
 Fattore di scala che determina la quantità di memoria utilizzata dal compilatore per costruire intestazioni precompilate.  
  
 L'argomento `factor` rappresenta una percentuale della dimensione predefinita di un buffer di lavoro definito dal compilatore.  Il valore predefinito di `factor` è 100 \(percento\), tuttavia è possibile specificare valori superiori o inferiori.  
  
## Note  
 Nelle versioni precedenti di Visual C\+\+ il compilatore utilizza diversi heap discreti, ciascuno dei quali è caratterizzato da un limite finito.  Attualmente il compilatore aumenta in modo dinamico le dimensioni degli heap fino a un limite totale e richiede un buffer di dimensioni fisse solo per costruire intestazioni precompilate.  Di conseguenza, l'opzione del compilatore **\/Zm** sarà necessaria solo in casi rari.  
  
 Se il compilatore esaurisce lo spazio dell'heap e genera il messaggio di errore [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) quando si utilizza l'opzione del compilatore **\/Zm**, è possibile che sia stata riservata una quantità di memoria eccessiva.  Considerare la possibilità di rimuovere l'opzione **\/Zm**.  Se il compilatore genera il messaggio di errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md), un messaggio [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) associato specifica l'argomento `factor` da utilizzare quando si ripete la compilazione utilizzando l'opzione del compilatore **\/Zm**.  
  
 Nella tabella seguente viene illustrato il modo in cui l'argomento `factor` influisce sul limite di allocazione della memoria se si presuppone che le dimensioni del buffer di intestazioni precompilate predefinito siano pari a 75 MB.  
  
|Valore di `factor`|Limite di allocazione della memoria|  
|------------------------|-----------------------------------------|  
|10|7.5 MB|  
|100|75 MB|  
|200|150 MB|  
|1000|750 MB|  
|2000|1500 MB|  
  
## Altri modi per impostare il limite di allocazione della memoria  
  
#### Per impostare l'opzione del compilatore \/Zm nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nel riquadro di navigazione selezionare **Proprietà di configurazione**, **C\/C\+\+**, **Riga di comando**.  
  
3.  Immettere l'opzione del compilatore **\/Zm** nella casella **Opzioni aggiuntive**.  
  
#### Per impostare l'opzione del compilatore \/Zm a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)