---
title: "/FC (Percorso completo del file di codice sorgente nella diagnostica) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UseFullPaths"
  - "/FC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FC (opzione del compilatore) [C++]"
  - "-FC (opzione del compilatore) [C++]"
ms.assetid: 1f11414e-cb42-421b-be68-9d369aab036b
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /FC (Percorso completo del file di codice sorgente nella diagnostica)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fa sì che venga visualizzato il percorso completo dei file di codice sorgente passati al compilatore nella diagnostica.  
  
## Sintassi  
  
```  
/FC  
```  
  
## Note  
 Si consideri l'esempio di codice riportato di seguito:  
  
```  
// compiler_option_FC.cpp  
int main( ) {  
   int i   // C2143  
}  
```  
  
 Senza **\/FC**, il test diagnostico è simile al seguente:  
  
-   compiler\_option\_FC.cpp\(5\): errore C2143: errore di sintassi: ';' mancante prima di '}'  
  
 Con **\/FC**, il test diagnostico è simile al seguente:  
  
-   C:\\sourcefile.cpp\(134\): errore C2143: errore di sintassi: ';' mancante prima di '}'  
  
 L'opzione **\/FC** è anche necessaria per visualizzare il percorso completo di un nome file quando si utilizza la macro \_\_FILE\_\_.  Per ulteriori informazioni su questa macro, vedere [Macro predefinite](../../preprocessor/predefined-macros.md).  
  
 L'opzione **\/FC** è implicita di **\/ZI**.  Per ulteriori informazioni su **\/ZI**, vedere [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **C\/C\+\+**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Usa percorsi completi**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UseFullPaths%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)