---
title: "Parole chiave di ereditariet&#224; | Microsoft Docs"
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
  - "__multiple_inheritance"
  - "__single_inheritance_cpp"
  - "__virtual_inheritance_cpp"
  - "__virtual_inheritance"
  - "__multiple_inheritance_cpp"
  - "__single_inheritance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__multiple_inheritance (parola chiave) [C++]"
  - "__single_inheritance (parola chiave) [C++]"
  - "__virtual_inheritance (parola chiave) [C++]"
  - "dichiarazione di classi derivate"
  - "classi derivate, dichiarazione"
  - "ereditarietà, dichiarazione di classi derivate"
  - "ereditarietà, parole chiave"
  - "parole chiave [C++], parole chiave di ereditarietà"
ms.assetid: bb810f56-7720-4fea-b8b6-9499edd141df
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parole chiave di ereditariet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
```  
  
class [__single_inheritance] class-name; class [__multiple_inheritance] class-name; class [__virtual_inheritance] class-name;  
```  
  
 dove:  
  
 *class\-name*  
 Il nome della classe che si sta dichiarando.  
  
 Il linguaggio C\+\+ consente di dichiarare un puntatore a un membro della classe prima della definizione della classe.  Ad esempio:  
  
```  
class S;  
int S::*p;  
```  
  
 Nel codice riportato in precedenza, `p` è dichiarato come un puntatore al membro Integer di classe S.  Tuttavia, `class S` non è ancora stato definito in questo codice; è stato solo dichiarato.  Quando il compilatore rileva tale puntatore, deve effettuare una rappresentazione generalizzata del puntatore.  La dimensione della rappresentazione dipende dal modello di ereditarietà specificato.  Sono disponibili quattro modi per specificare un modello di ereditarietà al compilatore:  
  
-   Nell'IDE in **Rappresentazione di puntatore a membro**  
  
-   Nella riga di comando mediante l'opzione [\/vmg](../build/reference/vmb-vmg-representation-method.md)  
  
-   Utilizzando il pragma [pointers\_to\_members](../preprocessor/pointers-to-members.md)  
  
-   Utilizzando le parole chiave di ereditarietà `__single_inheritance`, `__multiple_inheritance` e `__virtual_inheritance`.  Con questa tecnica viene controllato il modello di ereditarietà in base alle classi.  
  
    > [!NOTE]
    >  Se si dichiara sempre un puntatore a un membro di una classe dopo la definizione della classe, non è necessario utilizzare nessuna di queste opzioni.  
  
 La dichiarazione di un puntatore a un membro di una classe prima della definizione della classe influisce sulla dimensione e sulla velocità del file eseguibile risultante.  Più è complessa l'ereditarietà utilizzata da una classe, maggiore è il numero di byte necessari per rappresentare un puntatore a un membro della classe e maggiori sono le dimensioni del codice necessario per interpretare il puntatore.  L'ereditarietà singola è meno complessa e l'ereditarietà virtuale è più complessa.  
  
 Se l'esempio precedente viene modificato in:  
  
```  
class __single_inheritance S;  
int S::*p;  
```  
  
 indipendentemente dalle opzioni della riga di comando o dai pragma, i puntatori ai membri di `class S` utilizzeranno la più piccola rappresentazione possibile.  
  
> [!NOTE]
>  La stessa dichiarazione con prototipo della rappresentazione della classe puntatore a membro deve verificarsi in ogni unità di conversione che dichiara i puntatori ai membri di quella classe e la dichiarazione deve verificarsi prima che vengano dichiarati i puntatori ai membri.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)