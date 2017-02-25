---
title: "make_public | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.make_public"
  - "make_public_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_public (pragma)"
  - "pragma, make_public"
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# make_public
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che un tipo nativo deve avere accessibilità pubblica dell'assembly.  
  
## Sintassi  
  
```  
#pragma make_public(type)  
```  
  
#### Parametri  
 `type` è il nome del tipo per cui si desidera disporre di accessibilità pubblica dell'assembly.  
  
## Note  
 `make_public` è utile per quando il tipo nativo cui si desidera fare riferimento ha origine da un file h che non è possibile modificare.  Se si desidera utilizzare il tipo nativo nella firma di una funzione pubblica in un tipo con visibilità pubblica dell'assembly, il tipo nativo deve disporre anche di accessibilità pubblica dell'assembly o il compilatore genererà un avviso.  
  
 `make_public` deve essere specificato in ambito globale ed è attivo solo dal punto in cui viene dichiarato fino alla fine del file di codice sorgente.  
  
 Il tipo nativo può essere privato in modo implicito o esplicito; per ulteriori informazioni vedere [Visibilità di tipi](../misc/type-visibility.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato il contenuto di un file h contenente le definizioni per due struct nativi.  
  
```  
// make_public_pragma.h  
struct Native_Struct_1 { int i; };  
struct Native_Struct_2 { int i; };  
```  
  
## Esempio  
 Nell'esempio di codice seguente viene utilizzato il file di intestazione e viene indicato che, se gli struct nativi non vengono contrassegnati in modo esplicito come pubblici, utilizzando `make_public`, il compilatore genererà un avviso durante il tentativo di utilizzo degli struct nativi nella firma della funzione pubblica di un tipo gestito pubblico.  
  
```  
// make_public_pragma.cpp  
// compile with: /c /clr /W1  
#pragma warning (default : 4692)  
#include "make_public_pragma.h"  
#pragma make_public(Native_Struct_1)  
  
public ref struct A {  
   void Test(Native_Struct_1 u) {u.i = 0;}   // OK  
   void Test(Native_Struct_2 u) {u.i = 0;}   // C4692  
};  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)