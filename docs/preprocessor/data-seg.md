---
title: "data_seg | Microsoft Docs"
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
  - "data_seg_CPP"
  - "vc-pragma.data_seg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "data_seg (pragma)"
  - "pragma, data_seg"
ms.assetid: 65c66466-4c98-494f-93af-106beb4caf78
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# data_seg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il segmento di dati in cui le variabili inizializzate vengono archiviate nel file .obj.  
  
## Sintassi  
  
```  
  
#pragma data_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Note  
 In questo argomento il significato dei termini *segmento* e *sezione* sono intercambiabili.  
  
 I file con estensione obj possono essere visualizzati con l'applicazione [dumpbin](../build/reference/dumpbin-command-line.md).  Il segmento predefinito nel file .obj per le variabili inizializzate è .data.  Le variabili che non sono inizializzate sono considerate inizializzate sul valore zero e vengono archiviate nel segmento .bss.  
  
 **data\_seg** senza parametri consente di reimpostare il segmento su .data.  
  
 **push** \(facoltativo\)  
 Inserisce un record nello stack interno del compilatore.  Un elemento **push** può avere *identifier* e *segment\-name*.  
  
 **pop** \(facoltativo\)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 *identifier* \(facoltativo\)  
 Se utilizzato con **push**, assegna un nome al record nello stack interno del compilatore.  Se utilizzato con **pop**, estrae record dallo stack interno finché non viene rimosso *identifier*; se *identifier* non viene trovato nello stack interno, non viene estratto alcun elemento.  
  
 *identifier* consente di visualizzare più record con un unico comando **pop** .  
  
 *"segment\-name"* \(facoltativo\)  
 Nome di un segmento*.* Se utilizzato con **pop**, viene estratto un elemento dallo stack e *segment\-name* diventa il nome di un segmento attivo.  
  
 *"segment\-class"*  \(facoltativo\)  
 Incluso per la compatibilità con le versioni di C\+\+ precedenti alla versione 2.0.  Ignorato.  
  
## Esempio  
  
```  
// pragma_directive_data_seg.cpp  
int h = 1;                     // stored in .data  
int i = 0;                     // stored in .bss  
#pragma data_seg(".my_data1")  
int j = 1;                     // stored in "my_data1"  
  
#pragma data_seg(push, stack1, ".my_data2")     
int l = 2;                     // stored in "my_data2"  
  
#pragma data_seg(pop, stack1)   // pop stack1 off the stack  
int m = 3;                     // stored in "stack_data1"  
  
int main() {  
}  
```  
  
 I dati allocati mediante **data\_seg** non mantengono le informazioni sulla relativa posizione.  
  
 Per un elenco di nomi che non è necessario utilizzare quando si crea una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 È inoltre possibile specificare le sezioni per la variabili const \([const\_seg](../preprocessor/const-seg.md)\), i dati non inizializzati \([bss\_seg](../preprocessor/bss-seg.md)\) e le funzioni \([code\_seg](../preprocessor/code-seg.md)\).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)