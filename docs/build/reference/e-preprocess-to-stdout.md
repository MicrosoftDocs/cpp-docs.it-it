---
title: "/E (Pre-elabora in stdout) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/e"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/E (opzione del compilatore) [C++]"
  - "-E (opzione del compilatore) [C++]"
  - "output del preprocessore"
  - "output del preprocessore, copia in stdout"
ms.assetid: ddbb1725-d950-4978-ab2f-30a5cd7b778c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /E (Pre-elabora in stdout)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Pre\-elabora i file di origine C e C\+\+ e copia i file pre\-elaborati nella periferica di output standard.  
  
## Sintassi  
  
```  
/E  
```  
  
## Note  
 Durante questa operazione tutte le direttive del preprocessore e le espansioni delle macro vengono eseguite e i commenti vengono rimossi.  Per conservare i commenti nell'output pre\-elaborato, utilizzare anche l'opzione del compilatore [\/C \(Conserva i commenti durante la pre\-elaborazione\)](../../build/reference/c-preserve-comments-during-preprocessing.md).  
  
 L'opzione **\/E** aggiunge le direttive `#line` all'output, all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale.  Tali direttive rinumerano le righe del file pre\-elaborato.  Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine anziché alle righe del file pre\-elaborato.  
  
 L'opzione **\/E** disattiva la compilazione.  È necessario inviare di nuovo il file pre\-elaborato per la compilazione.  L'opzione **\/E** elimina anche i file di output dalle opzioni **\/FA**, **\/Fa** e **\/Fm**.  Per ulteriori informazioni, vedere [\/FA, \/Fa \(File di listato\)](../../build/reference/fa-fa-listing-file.md) e [\/Fm \(Specifica file map\)](../../build/reference/fm-name-mapfile.md).  
  
 Per disattivare le direttive `#line`, utilizzare invece l'opzione [\/EP \(Pre\-elabora in stdout senza direttive \#line\)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md).  
  
 Per inviare l'output pre\-elaborato in un file anziché a `stdout`, utilizzare invece l'opzione [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md).  
  
 Per disattivare le direttive `#line` e inviare l'output pre\-elaborato in un file, utilizzare insieme le opzioni **\/P** e **\/EP**.  
  
 Non è possibile utilizzare intestazioni precompilate con l'opzione **\/E**.  
  
 Quando si esegue la pre\-elaborazione in un file separato, gli spazi non vengono inviati dopo i token.  Possono verificarsi pertanto dei problemi o degli effetti secondari non intenzionali.  Il programma riportato di seguito viene compilato correttamente:  
  
```  
#define m(x) x  
m(int)main( )  
{  
   return 0;  
}  
```  
  
 Se invece si esegue la compilazione con:  
  
```  
cl -E test.cpp > test2.cpp  
```  
  
 `int main` in test2.cpp risulterà in modo errato `intmain`.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## Esempio  
 La riga di comando che segue pre\-elabora `ADD.C`, conserva i commenti, aggiunge le direttive `#line` e visualizza il risultato sulla periferica di output standard:  
  
```  
CL /E /C ADD.C  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)