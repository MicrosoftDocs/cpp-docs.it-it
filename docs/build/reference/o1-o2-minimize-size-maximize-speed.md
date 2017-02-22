---
title: "/O1, /O2 (Riduci dimensione, Ottimizza velocit&#224;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/o2"
  - "/o1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/O1 (opzione del compilatore) [C++]"
  - "/O2 (opzione del compilatore) [C++]"
  - "velocità codice"
  - "Ottimizza velocità (opzione del compilatore) [C++]"
  - "Riduci dimensione (opzione del compilatore) [C++]"
  - "O1 (opzione del compilatore) [C++]"
  - "-O1 (opzione del compilatore) [C++]"
  - "O2 (opzione del compilatore) [C++]"
  - "-O2 (opzione del compilatore) [C++]"
  - "dimensione codice"
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# /O1, /O2 (Riduci dimensione, Ottimizza velocit&#224;)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Seleziona un insieme predefinito di opzioni che influiscono sulle dimensioni e la velocità dei file.  
  
## Sintassi  
  
```  
/O1  
/O2  
```  
  
## Note  
 Nella tabella riportata di seguito vengono descritte le opzioni **\/O1** e **\/O2**.  
  
|Opzione|Equivalente a|Commento|  
|-------------|-------------------|--------------|  
|**\/O1** \(Riduci dimensione\)|**\/Og \/Os \/Oy \/Ob2 \/Gs \/GF \/Gy**|Crea il codice di dimensioni più piccole nella maggior parte dei casi.|  
|**\/O2** \(Ottimizza velocità\)|**\/Og \/Oi \/Ot \/Oy \/Ob2 \/Gs \/GF \/Gy**|Crea il codice più veloce nella maggior parte dei casi. Si tratta dell'impostazione predefinita per le build di rilascio.|  
  
 Le opzioni **\/O1** e **\/O2** attivano inoltre l'ottimizzazione del valore restituito denominato, che elimina il distruttore e il costruttore di copia di un valore restituito basato sullo stack.  Si consideri l'esempio riportato di seguito.  La funzione `Test` non creerà il distruttore né il costruttore di copia.  Per esaminare gli effetti dell'ottimizzazione del valore restituito denominato durante l'esecuzione del programma, aggiungere istruzioni di output al costruttore, al distruttore e al costruttore di copia.  Per ulteriori informazioni, vedere [Ottimizzazione denominata di valore restituito in Visual C\+\+ 2005](http://go.microsoft.com/fwlink/?linkid=131571).  
  
```  
// O1_O2_NRVO.cpp  
// compile with: /O1  
struct A {  
   A() {}  
   ~A() {}  
   A(const A& aa) {}  
};  
  
A Test() {  
   A a;  
   return a;  
}  
int main() {  
   A aa;  
   aa = Test();  
}  
```  
  
 **Sezione specifico x86**  
  
 Tali opzioni presuppongono l'utilizzo dell'opzione Omissione dei puntatori ai frame \([\/Oy](../../build/reference/oy-frame-pointer-omission.md)\).  
  
 **END x86 Specific**  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Ottimizzazione**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md)