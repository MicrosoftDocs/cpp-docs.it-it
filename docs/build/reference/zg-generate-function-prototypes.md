---
title: "/Zg (Genera i prototipi delle funzioni) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/zg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zg (opzione del compilatore) [C++]"
  - "prototipi di funzioni, Genera i prototipi delle funzioni (opzione del compilatore)"
  - "Genera i prototipi delle funzioni (opzione del compilatore)"
  - "Zg (opzione del compilatore) [C++]"
  - "-Zg (opzione del compilatore) [C++]"
ms.assetid: c8df1b46-24ff-46f2-8356-e0a144b21dd2
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# /Zg (Genera i prototipi delle funzioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rimosso. Crea un prototipo di funzione per ogni funzione definita nel file di origine, ma non compila il file di origine.  
  
## Sintassi  
  
```  
/Zg  
```  
  
## Note  
 L'opzione del compilatore non è più disponibile. È stata rimossa in Visual C\+\+ 2015. Questa pagina rimane per gli utenti di versioni precedenti di Visual C\+\+.  
  
 Il prototipo di funzione include il tipo restituito della funzione e un elenco di tipi di argomento. L'elenco di tipi di argomento viene creato dai tipi di parametri formali della funzione. I prototipi di funzione già presenti nel file di origine vengono ignorati.  
  
 L'elenco di prototipi viene scritto nell'output standard. Questo elenco può risultare utile per verificare che gli argomenti effettivi e i parametri formali di una funzione siano compatibili. È possibile salvare l'elenco mediante il reindirizzamento dell'output standard a un file. Quindi, è possibile usare **\#include** per rendere l'elenco di prototipi della funzione parte del file di origine. In questo modo, il compilatore esegue un controllo del tipo di argomento.  
  
 Se si usa l'opzione **\/Zg** e il programma contiene parametri formali con un tipo struct, enum o unione \(o puntatori a questi tipi\), la dichiarazione di ogni tipo struct, enum o unione deve avere un tag \(nome\). Nell'esempio seguente il nome del tag è `MyStruct`.  
  
```  
// Zg_compiler_option.c  
// compile with: /Zg  
typedef struct MyStruct { int i; } T2;  
void f2(T2 * t) {}  
```  
  
 **\/Zg** è stato deprecato. Il compilatore Visual C\+\+ prevede di rimuovere il supporto per il codice di tipo C meno recente. Per altre informazioni, vedere [Opzioni del compilatore obsolete in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)