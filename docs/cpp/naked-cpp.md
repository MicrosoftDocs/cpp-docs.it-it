---
title: "naked (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "naked_cpp"
  - "naked"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], naked"
  - "naked __declspec (parola chiave)"
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# naked (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Per le funzioni dichiarate con l'attributo `naked`, il compilatore genera codice senza codice di epilogo e di prologo.  È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice epilogo o di prologo utilizzando il codice assembler inline.  Le funzioni naked sono particolarmente utili nella scrittura di driver di periferiche virtuali.  Si noti che l'attributo `naked` è valido solo in computer x86 e ARM, e non è disponibile per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  
  
## Sintassi  
  
```  
__declspec(naked) declarator  
```  
  
## Note  
 Poiché l'attributo `naked` è rilevante solo alla definizione di funzione e non è un modificatore di tipo, le funzioni naked devono utilizzare la sintassi di attributo esteso e la parola chiave [\_\_declspec](../cpp/declspec.md).  
  
 Il compilatore non può generare una funzione inline per una funzione contrassegnata con l'attributo naked, anche se la funzione viene contrassegnata con la parola chiave [\_\_forceinline](../misc/inline-inline-forceinline.md).  
  
 Il compilatore genera un errore se si applica l'attributo `naked` a qualunque altra cosa della definizione di un metodo non membro.  
  
## Esempi  
 Questo codice definisce una funzione con l'attributo `naked` :  
  
```  
__declspec( naked ) int func( formal_parameters ) {}  
```  
  
 O, in alternativa:  
  
```  
#define Naked __declspec( naked )  
Naked int func( formal_parameters ) {}  
```  
  
 L'attributo `naked` ha effetto solo sulla natura di generazione del codice del compilatore per le sequenze di prologo ed epilogo della funzione.  Non influisce sul codice che viene generato per chiamare tali funzioni.  Pertanto, l'attributo `naked` non è considerato parte del tipo di funzione e i puntatori a funzione non possono avere l'attributo `naked`.  Inoltre, l'attributo `naked` non può essere applicato a una definizione dei dati.  Ad esempio, il seguente esempio di codice genera un errore:  
  
```  
__declspec( naked ) int i;       // Error--naked attribute not  
                                 // permitted on data declarations.  
```  
  
 L'attributo `naked` è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo di funzione.  Ad esempio, questa dichiarazione genera un errore di compilazione:  
  
```  
__declspec( naked ) int func();  // Error--naked attribute not   
                                 // permitted on function declarations  
```  
  
 **Specifica END Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Chiamate di funzioni naked](../cpp/naked-function-calls.md)