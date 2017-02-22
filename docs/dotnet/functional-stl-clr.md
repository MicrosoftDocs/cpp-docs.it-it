---
title: "functional (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/functional>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/functional> (intestazione) [STL/CLR]"
  - "<functional> (intestazione) [STL/CLR]"
  - "funzioni funzionali [STL/CLR]"
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# functional (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione di `<cliext/functional>` STL\/CLR per definire le varie classi modello e delegati correlati e funzioni del modello.  
  
## Sintassi  
  
```  
#include <functional>  
```  
  
## Dichiarazioni  
  
|Delegato|Descrizione|  
|--------------|-----------------|  
|[binary\_delegate](../dotnet/binary-delegate-stl-clr.md)|Delegato a due argomenti.|  
|[binary\_delegate\_noreturn](../dotnet/binary-delegate-noreturn-stl-clr.md)|Delegato a due argomenti che restituisce `void`.|  
|[unary\_delegate](../dotnet/unary-delegate-stl-clr.md)|Delegato di un solo argomento.|  
|[unary\_delegate\_noreturn](../dotnet/unary-delegate-noreturn-stl-clr.md)|Delegato di un solo argomento che restituisce `void`.|  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[binary\_negate](../dotnet/binary-negate-stl-clr.md)|Functor per negare un functor a due argomenti.|  
|[binder1st](../dotnet/binder1st-stl-clr.md)|Functor per associare primo argomento di un functor a due argomenti.|  
|[binder2nd](../dotnet/binder2nd-stl-clr.md)|Functor per associare come argomento a un functor a due argomenti.|  
|[divides](../dotnet/divides-stl-clr.md)|Functor di divisione.|  
|[equal\_to](../dotnet/equal-to-stl-clr.md)|Functor uguale di confronto.|  
|[greater](../dotnet/greater-stl-clr.md)|Maggiore functor di confronto.|  
|[greater\_equal](../dotnet/greater-equal-stl-clr.md)|Functor maggiore o uguale di confronto.|  
|[less](../dotnet/less-stl-clr.md)|Meno functor di confronto.|  
|[less\_equal](../dotnet/less-equal-stl-clr.md)|Minore o uguale functor di confronto.|  
|[logical\_and](../dotnet/logical-and-stl-clr.md)|AND logico functor.|  
|[logical\_not](../dotnet/logical-not-stl-clr.md)|Functor NOT logico.|  
|[logical\_or](../dotnet/logical-or-stl-clr.md)|OR logico functor.|  
|[minus](../dotnet/minus-stl-clr.md)|Sottrarre il functor.|  
|[modulo](../dotnet/modulus-stl-clr.md)|Functor del modulo.|  
|[multiplies](../dotnet/multiplies-stl-clr.md)|Moltiplicare il functor.|  
|[negate](../dotnet/negate-stl-clr.md)|Functor restituire il relativo argomento negato.|  
|[not\_equal\_to](../dotnet/not-equal-to-stl-clr.md)|Functor diverso di confronto.|  
|[plus](../dotnet/plus-stl-clr.md)|Aggiungere il functor.|  
|[unary\_negate](../dotnet/unary-negate-stl-clr.md)|Functor per negare un functor di un solo argomento.|  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[bind1st](../dotnet/bind1st-stl-clr.md)|Genera un binder1st per un argomento e un functor.|  
|[bind2nd](../dotnet/bind2nd-stl-clr.md)|Genera un binder2nd per un argomento e un functor.|  
|[not1](../dotnet/not1-stl-clr.md)|Genera un unary\_negate per un functor.|  
|[not1](../dotnet/not1-stl-clr.md)|Genera un binary\_negate per un functor.|  
  
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)