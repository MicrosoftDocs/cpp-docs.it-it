---
title: "const_seg | Microsoft Docs"
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
  - "vc-pragma.const_seg"
  - "const_seg_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "const_seg (pragma)"
  - "pragma, const_seg"
ms.assetid: 1eb58ee2-fb0e-4a39-9621-699c8f5ef957
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# const_seg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il segmento in cui le variabili [const](../cpp/const-cpp.md) sono archiviate nel file con estensione obj.  
  
## Sintassi  
  
```  
#pragma const_seg ( [ [ { push | pop}, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Note  
 In questo argomento il significato dei termini *segmento* e *sezione* sono intercambiabili.  
  
 I file con estensione obj possono essere visualizzati con l'applicazione [dumpbin](../build/reference/dumpbin-command-line.md).  Il segmento predefinito nel file con estensione obj per le variabili `const` è .rdata.  Alcune variabili `const`, come le variabili scalari, vengono automaticamente inserite nel flusso di codice.  Il codice inline non verrà visualizzato in .rdata.  
  
 La definizione di un oggetto che richiede l'inizializzazione dinamica in un `const_seg` produce un comportamento non definito.  
  
 `#pragma const_seg` senza parametri reimposta il segmento su .rdata.  
  
 `push` \(facoltativo\)  
 Inserisce un record nello stack interno del compilatore.  `push` può presentare un elemento `identifier` e un elemento `segment-name`.  
  
 `pop` \(facoltativo\)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 `identifier` \(facoltativo\)  
 Se usato con `push`, assegna un nome al record nello stack del compilatore interno.  Se usato con `pop`, estrae record dallo stack interno finché non viene rimosso `identifier`; se `identifier` non viene trovato nello stack interno, nulla viene estratto.  
  
 L'uso di `identifier` consente di visualizzare più record con un unico comando `pop`.  
  
 "`segment-name`" \(facoltativo\)  
 Nome di un segmento.  Se usato con `pop`, viene visualizzato lo stack e `segment-name` diventa il nome del segmento attivo.  
  
 "`segment-class`" \(facoltativo\)  
 Incluso per la compatibilità con le versioni di C\+\+ precedenti alla versione 2.0.  Ignorato.  
  
## Esempio  
  
```  
// pragma_directive_const_seg.cpp  
// compile with: /EHsc  
#include <iostream>  
  
const int i = 7;               // inlined, not stored in .rdata  
const char sz1[]= "test1";     // stored in .rdata  
  
#pragma const_seg(".my_data1")  
const char sz2[]= "test2";     // stored in .my_data1  
  
#pragma const_seg(push, stack1, ".my_data2")  
const char sz3[]= "test3";     // stored in .my_data2  
  
#pragma const_seg(pop, stack1) // pop stack1 from stack  
const char sz4[]= "test4";     // stored in .my_data1  
  
int main() {  
    using namespace std;  
   // const data must be referenced to be put in .obj  
   cout << sz1 << endl;  
   cout << sz2 << endl;  
   cout << sz3 << endl;  
   cout << sz4 << endl;  
}  
```  
  
  **test1**  
**test2**  
**test3**  
**test4**   
## Commenti  
 Per un elenco di nomi che non è necessario usare quando si crea una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 È inoltre possibile specificare le sezioni per i dati inizializzati \([data\_seg](../preprocessor/data-seg.md)\), dati non inizializzati \([bss\_seg](../preprocessor/bss-seg.md)\) e funzioni \([code\_seg](../preprocessor/code-seg.md)\).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)