---
title: "/Zc:inline (rimuovere COMDAT senza riferimenti) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc:inline"
  - "VC.Project.VCCLCompilerTool.RemoveUnreferencedCodeData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) (C++)"
  - "/Zc:inline"
  - "Zc (opzioni del compilatore) (C++)"
  - "-Zc (opzioni del compilatore) (C++)"
ms.assetid: a4c94224-1d73-4bea-a9d5-4fa73dc924df
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:inline (rimuovere COMDAT senza riferimenti)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rimuove le funzioni o i dati COMDAT senza riferimenti o che dispongono solo di collegamenti interni.  Quando si specifica **\/Zc:inline**, il compilatore richiede che le unità di conversione che usano dati o funzioni inline includano le definizioni per i dati o le funzioni.  
  
## Sintassi  
  
```  
/Zc:inline[-]  
```  
  
## Note  
 Quando si specifica **\/Zc:inline**, il compilatore non crea informazioni sui simboli per le funzioni o i dati COMDAT senza riferimenti o per le funzioni o i dati che dispongono solo di collegamenti interni.  Per impostazione predefinita, questa opzione è impostata su OFF \(**\/Zc:inline\-**\).  Questa ottimizzazione semplifica parte delle operazioni eseguite dal linker nelle build di rilascio o quando è specificata l'opzione del linker [\/OPT:REF](../../build/reference/opt-optimizations.md).  Quando il compilatore esegue questa ottimizzazione, può ridurre notevolmente le dimensioni del file .obj e migliorare la velocità del linker.  Questa opzione del compilatore non è abilitata quando le ottimizzazioni sono abilitate \([\/Od](../../build/reference/od-disable-debug.md)\) o quando è specificata l'opzione [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).  
  
 Se si specifica **\/Zc:inline**, il compilatore impone il requisito C\+\+11 che prevede che tutte le funzioni dichiarate `inline` dispongano di una definizione nella stessa unità di conversione se vengono usate.  Quando l'opzione non è specificata, [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] consente codice non conforme che richiama funzioni dichiarate `inline` anche se non è visibile una definizione.  Per altre informazioni, vedere lo standard C\+\+11 nelle sezioni 3.2 e 7.1.2.  Questa opzione del compilatore è stata introdotta in Visual Studio 2013 Update 2.  
  
 Per usare l'opzione **\/Zc:inline**, aggiornare il codice non conforme.  Questo esempio mostra in che modo una dichiarazione di funzione inline senza una definizione, dunque non conforme, viene comunque compilata e si collega quando viene usata l'opzione predefinita **\/Zc:inline\-**:  
  
```cpp  
// example.h  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#pragma once  
  
class Example {  
public:  
   inline void inline_call(); // declared but not defined inline  
   void normal_call();  
   Example() {};  
};  
```  
  
```cpp  
// example.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#include <stdio.h>  
#include "example.h"  
  
void Example::inline_call() {  
   printf("inline_call was called.\n");   
}  
  
void Example::normal_call() {  
   printf("normal_call was called.\n");   
   inline_call(); // with /Zc:inline-, inline_call forced into .obj file  
}  
```  
  
```cpp  
// zcinline.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline.cpp example.cpp  
#include "example.h"  
  
void main() {  
   Example example;  
   example.inline_call(); // normal call when definition unavailable  
}  
```  
  
 Quando l'opzione **\/Zc:inline** è abilitata, lo stesso codice provoca un errore [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md), perché il compilatore non crea un corpo del codice non inline per `Example::inline_call` in example.obj.  In questo modo, la chiamata non inline in `main` farà riferimento a un simbolo esterno non definito.  
  
 Per risolvere questo errore è possibile rimuovere la parola chiave `inline` dalla dichiarazione di `Example::inline_call`, spostare la definizione di `Example::inline_call` nel file di intestazione o spostare l'implementazione di `Example` in main.cpp.  L'esempio seguente sposta la definizione nel file di intestazione, in cui è visibile a qualsiasi chiamante che include l'intestazione.  
  
```cpp  
// example2.h  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#pragma once  
#include <stdio.h>  
  
class Example2 {  
public:  
   inline void inline_call() {  
      printf("inline_call was called.\n");   
   }  
   void normal_call();  
   Example2() {};  
};  
```  
  
```cpp  
// example2.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#include "example2.h"  
  
void Example2::normal_call() {  
   printf("normal_call was called.\n");   
   inline_call();   
}  
```  
  
```cpp  
// zcinline2.cpp  
// Compile by using: cl /W4 /EHsc /O2 zcinline2.cpp example2.cpp  
#include "example2.h"  
  
void main() {  
   Example2 example2;  
   example2.inline_call(); // normal call when definition unavailable  
}  
```  
  
 Per altre informazioni sui problemi di conformità in Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere `/Zc:inline`, quindi fare clic su **OK**.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)