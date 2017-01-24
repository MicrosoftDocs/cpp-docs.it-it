---
title: "Scelta del metodo di esportazione da utilizzare | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".def (file) [C++], esportazione da DLL"
  - "__declspec(dllexport) (parola chiave) [C++]"
  - "file def [C++], esportazione da DLL"
  - "esportazione di DLL [C++], confronto di metodi"
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scelta del metodo di esportazione da utilizzare
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile esportare funzioni in uno di due file delle modalità \- un file def o la parola chiave di `__declspec(dllexport)`.  Per individuare il metodo è consigliato per la DLL, si considerino le seguenti domande:  
  
-   Si intende esportare successivamente più funzioni?  
  
-   La DLL viene utilizzata solo da applicazioni che è possibile ricompilare, oppure è utilizzato da applicazioni che non è possibile ricostruzione\-, ad esempio applicazioni create da terze parti?  
  
## Pro e contro dell'utilizzo dei file def  
 L'esportazione delle funzioni in un file def fornisce il controllo sugli ordinali di esportazione.  Quando si aggiunge una funzione esportata nella DLL, è possibile assegnarle un valore ordinale più elevato di qualsiasi altra funzione esportata.  In questi casi, le applicazioni che utilizzano il collegamento implicito non devono ricollegarsi alla libreria di importazione che contiene la nuova funzione.  È molto utile se si progetta una DLL che verrà utilizzata da molte applicazioni perché è possibile aggiungere nuove funzionalità e inoltre necessario assicurarsi che continuerà a funzionare correttamente con applicazioni già si basano su.  Ad esempio, le DLL MFC vengono compilati utilizzando i file def.  
  
 Un altro vantaggio dell'utilizzo di un file def è che è possibile utilizzare l'attributo di `NONAME` per esportare una funzione.  Verrà inserito soltanto l'ordinale nella tabella di esportazione della DLL.  Per le DLL con molte funzioni esportate, utilizzando l'attributo `NONAME` può ridurre le dimensioni del file DLL.  Per informazioni su come scrivere un'istruzione di definizione di modulo, vedere [Regole relative alle istruzioni di definizione dei moduli](../build/reference/rules-for-module-definition-statements.md).  Per informazioni sull'esportazione ordinale, vedere [Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
 Uno svantaggio di utilizzare un file def è che se si esportano le funzioni in un file c\+\+, è necessario inserire i nomi decorati nel file def o definire le funzioni esportate utilizzando extern "C" per evitare la decorazione dei nomi che viene eseguita dal compilatore di Visual C\+\+.  
  
 Se si inseriscono i nomi decorati nel file def, è possibile utilizzare lo strumento di [DUMPBIN](../build/reference/dumpbin-reference.md) o utilizzando l'opzione [\/MAP](../build/reference/map-generate-mapfile.md) del linker.  I nomi decorati che vengono creati dal compilatore nel compilatore specifici; pertanto, se si inseriscono i nomi decorati che vengono creati dal compilatore in un file def, anche le applicazioni collegate alla DLL devono essere compilate utilizzando la stessa versione del compilatore in modo che i nomi decorati nell'applicazione chiamante corrispondano ai nomi esportati nel file def della DLL.  
  
## Pro e contro dell'utilizzo di \_\_declspec\(dllexport\)  
 Utilizzando `__declspec(dllexport)` è vantaggioso perché evita di dover mantenere un file def e ottenere i nomi decorati delle funzioni esportate.  Tuttavia, l'utilità della modalità di esportazione è limitata dal numero di applicazioni collegate che si è disposti a ricompilazione.  Se si ricompila la DLL con nuove esportazioni, è necessario ricompilare le applicazioni poiché i nomi decorati delle funzioni C\+\+ esportate potrebbero cambiare se si utilizza una versione diversa del compilatore per ricompilarlo.  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)