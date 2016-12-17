---
title: "Avviso del compilatore (livello 1) C4691 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4691"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4691"
ms.assetid: 722133d9-87f6-46c1-9e86-9825453d6999
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4691
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': tipo di riferimento previsto in assembly 'file' non di riferimento, utilizzato il tipo definito nell'unità di conversione corrente  
  
 Il file di metadati contenente la definizione di tipo originale non include riferimenti e viene quindi utilizzata la definizione di tipo locale.  
  
 Se è in corso la ricompilazione del *file*, è possibile ignorare l'avviso C4691 o disattivarne la visualizzazione con il pragma [warning](../../preprocessor/warning.md).  Ovvero, l'avviso può essere ignorato se il file in corso di generazione è lo stesso file in cui il compilatore prevede di trovare la definizione di tipo.  
  
 È comunque possibile che si verifichi un comportamento non previsto se viene utilizzata una definizione non inclusa nell'assembly a cui si riferimento nei metadati: i tipi CLR sono tipizzati non solo dal nome del tipo, ma anche dall'assembly.  Un tipo Z di un assembly z.dll è quindi diverso dal tipo Z di un assembly y.dll.  
  
## Esempio  
 In questo esempio è inclusa la definizione di tipo originale.  
  
```  
// C4691_a.cpp  
// compile with: /clr /LD /W1  
public ref class Original_Type {};  
```  
  
## Esempio  
 In questo esempio, che fa riferimento a C4691\_a.dll, viene dichiarato un campo di tipo Original\_Type.  
  
```  
// C4691_b.cpp  
// compile with: /clr /LD  
#using "C4691_a.dll"  
public ref class Client {  
public:  
   Original_Type^ ot;  
};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4691:  Si noti che in questo esempio è inclusa una definizione per Original\_Type e non si fa riferimento a C4691a.dll.  
  
 Per correggere l'errore, fare riferimento al file di metadati contenente la definizione di tipo originale e rimuovere la definizione e la dichiarazione locali.  
  
```  
// C4691_c.cpp  
// compile with: /clr /LD /W1  
// C4691 expected  
  
// Uncomment the following line to resolve.  
// #using "C4691_a.dll"  
#using "C4691_b.dll"  
  
// Delete the following line to resolve.  
ref class Original_Type;  
  
public ref class MyClass : Client {};  
```