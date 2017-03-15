---
title: "/WL (Attiva le informazioni di diagnostica su una sola riga) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/wl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/WL (opzione del compilatore) [C++]"
  - "WL (opzione del compilatore) [C++]"
  - "-WL (opzione del compilatore) [C++]"
ms.assetid: 332cadb4-8ea6-45fe-b67d-33ddec1f2c2e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /WL (Attiva le informazioni di diagnostica su una sola riga)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge ulteriori informazioni a un messaggio di errore o avviso.  
  
## Sintassi  
  
```  
/WL  
```  
  
## Note  
 I messaggi di errore e di avviso del compilatore C\+\+ possono essere seguiti da ulteriori informazioni visualizzate, per impostazione predefinita, su una nuova riga.  Quando si esegue la compilazione dalla riga di comando, la riga di informazioni ulteriore può essere aggiunta al messaggio di errore o di avviso.  Ciò potrebbe risultare utile se si acquisisce l'output di compilazione in un file di log e quindi si elabora quel log per trovare tutti gli errori e gli avvisi.  Un punto e virgola separerà il messaggio di errore o di avviso dalla riga aggiuntiva.  
  
 Non tutti i messaggi di errore e di avviso contengono una riga aggiuntiva di informazioni.  Nel codice riportato di seguito viene generato un errore contenente una riga di informazioni aggiuntiva che consente di verificare l'effetto dell'utilizzo di **\/WL**.  
  
```  
// compiler_option_WL.cpp  
// compile with: /WL  
#include <queue>  
int main() {  
   std::queue<int> q;  
   q.fromthecontinuum();   // C2039  
}  
```  
  
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