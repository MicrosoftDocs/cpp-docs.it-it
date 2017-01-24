---
title: "/Zc:forScope (Imponi conformit&#224; nell&#39;ambito di un ciclo For) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.ForceConformanceInForLoopScope"
  - "VC.Project.VCCLWCECompilerTool.ForceConformanceInForLoopScope"
  - "/zc:forScope"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) [C++]"
  - "Conformità (opzioni del compilatore)"
  - "Zc (opzioni del compilatore) [C++]"
  - "-Zc (opzioni del compilatore) [C++]"
ms.assetid: 3031f02d-3b14-4ad0-869e-22b0110c3aed
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:forScope (Imponi conformit&#224; nell&#39;ambito di un ciclo For)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Permette di implementare il comportamento C\+\+ standard per cicli [for](../../cpp/for-statement-cpp.md) con estensioni Microsoft \([\/Ze](../../build/reference/za-ze-disable-language-extensions.md)\).  L'opzione **\/Zc:forScope** è abilitata per impostazione predefinita.  
  
## Sintassi  
  
```  
/Zc:forScope[-]  
```  
  
## Note  
 L'opzione **\/Zc:forScope\-** è deprecata e verrà rimossa in una futura versione. L'uso di **\/Zc:forScope\-** genera l'avviso di deprecazione D9035.  
  
 Il comportamento standard permette all'inizializzatore del ciclo **for** di uscire dall'ambito dopo il ciclo **for**. In **\/Zc:forScope\-** e [\/Ze](../../build/reference/za-ze-disable-language-extensions.md) l'inizializzatore del ciclo **for** rimane nell'ambito fino al termine dell'ambito locale.  
  
 Il codice seguente viene compilato in **\/Ze** ma non in **\/Za**:  
  
```cpp  
// zc_forScope.cpp  
// compile by using: cl /Zc:forScope- /Za zc_forScope.cpp  
// C2065, D9035 expected  
int main() {  
    // Compile by using cl /Zc:forScope- zc_forScope.cpp  
    // to compile this non-standard code as-is.  
    // Uncomment the following line to resolve C2065 for /Za.  
    // int i;  
    for (int i = 0; i < 1; i++)  
        ;  
    i = 20;   // i has already gone out of scope under /Za  
}  
```  
  
 Se si usa **\/Zc:forScope\-**, viene visualizzato l'avviso C4288 \(disattivato per impostazione predefinita\) se una variabile si trova all'interno dell'ambito a causa di una dichiarazione effettuata in un ambito precedente. Per illustrare questo comportamento, rimuovere i caratteri `//` dal codice di esempio per dichiarare `int i`.  
  
 È possibile modificare il comportamento di runtime di **\/Zc:forScope** con il pragma [conform](../../preprocessor/conform.md).  
  
 Se si usa **\/Zc:forScope\-** in un progetto con un file PCH esistente, viene generato un avviso, **\/Zc:forScope\-** viene ignorato e la compilazione continua con i file PCH esistenti. Per generare un nuovo file PCH, usare [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md).  
  
 Per altre informazioni sui problemi di conformità in Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro di navigazione aprire la pagina delle proprietà **Proprietà di configurazione**, **C\/C\+\+**, **Linguaggio**.  
  
3.  Modificare la proprietà **Imponi conformità nell'ambito di un ciclo For**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForceConformanceInForLoopScope%2A>.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)   
 [\/Za, \/Ze \(Disabilita estensioni linguaggio\)](../../build/reference/za-ze-disable-language-extensions.md)