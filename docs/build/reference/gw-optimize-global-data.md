---
title: "/Gw (Ottimizza dati globali) | Microsoft Docs"
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
  - "/Gw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gw (opzione del compilatore) [C++]"
  - "-Gw (opzione del compilatore) [C++]"
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Gw (Ottimizza dati globali)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impacchettare i dati globali nelle sezioni COMDAT per l'ottimizzazione.  
  
## Sintassi  
  
```  
/Gw[-]  
```  
  
## Note  
 L'opzione **\/Gw** indica al compilatore di impacchettare i dati globali in singole sezioni COMDAT.  Per impostazione predefinita, **\/Gw** è disattivata e deve essere abilitata esplicitamente.  Per disabilitarla in modo esplicito, utilizzare **\/Gw\-**.  Quando sia **\/Gw** che [\/GL](../../build/reference/gl-whole-program-optimization.md) sono abilitati, il linker utilizza l'ottimizzazione dell'intero programma per confrontare le sezioni COMDAT tra più file oggetto per escludere i dati globali senza riferimenti o per unire i dati globali di sola lettura identici.  In tal modo è possibile ridurre in modo significativo la dimensione del file eseguibile binario risultante.  
  
 Quando si compila e si esegue il linking separatamente, è possibile utilizzare l'opzione del linker [\/OPT:PER](../../build/reference/opt-optimizations.md) per escludere dal file eseguibile i dati globali senza riferimenti in file oggetto compilati con l'opzione **\/Gw**.  
  
 È inoltre possibile utilizzare le opzioni del linker [\/OPT:ICF](../../build/reference/opt-optimizations.md) e [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md) assieme per unire nel file eseguibile tutti i dati globali di sola lettura identici per più file oggetto compilati con l'opzione **\/Gw**.  
  
 Per ulteriori informazioni, vedere [Introduzione all'opzione del compilatore \/Gw](http://blogs.msdn.com/b/vcblog/archive/2013/09/11/introducing-gw-compiler-switch.aspx) nel blog del team di Visual C\+\+.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** per includere **\/Gw**, quindi scegliere **OK**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)