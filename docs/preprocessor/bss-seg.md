---
title: "bss_seg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.bss_seg"
  - "bss_seg_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bss_seg (pragma)"
  - "pragma, bss_seg"
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# bss_seg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il segmento in cui le variabili non inizializzate vengono archiviate nel file obj.  
  
## Sintassi  
  
```  
  
#pragma bss_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Note  
 I file obj possono essere visualizzati con l'applicazione [dumpbin](../build/reference/dumpbin-command-line.md).  Il segmento predefinito nel file obj per i dati non inizializzati è bss.  In alcuni casi, l'utilizzo di **bss\_seg** può velocizzare i tempi di carico mediante il raggruppamento dei dati inizializzati in una sezione.  
  
 **bss\_seg** senza parametri consente di reimpostare il segmento su bss.  
  
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
// pragma_directive_bss_seg.cpp  
int i;                     // stored in .bss  
#pragma bss_seg(".my_data1")  
int j;                     // stored in "my_data1"  
  
#pragma bss_seg(push, stack1, ".my_data2")     
int l;                     // stored in "my_data2"  
  
#pragma bss_seg(pop, stack1)   // pop stack1 from stack  
int m;                     // stored in "stack_data1"  
  
int main() {  
}  
```  
  
 È inoltre possibile specificare le sezioni per i dati inizializzati \([data\_seg](../preprocessor/data-seg.md)\), le funzioni \([code\_seg](../preprocessor/code-seg.md)\) e le variabili const \([const\_seg](../preprocessor/const-seg.md)\).  
  
 I dati allocati mediante il pragma **bss\_seg** non mantengono le informazioni sulla posizione.  
  
 Per un elenco di nomi che non è necessario utilizzare quando si crea una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)