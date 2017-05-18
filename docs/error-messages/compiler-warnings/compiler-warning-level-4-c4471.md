---
title: Compilatore (livello 4) Avviso C4471 | Documenti Microsoft
ms.custom: 
ms.date: 04/24/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4471
dev_langs:
- C++
helpviewer_keywords:
- C4471
ms.assetid: ccfd8bd5-bc1b-4be7-a6ea-0e3a7add6607
caps.latest.revision: 1
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: d7d097b399d3681ef523d8787ecc38af472840f6
ms.openlocfilehash: fc0ddb07ec768804be61185211bbac0ee6fbf2b6
ms.contentlocale: it-it
ms.lasthandoff: 04/28/2017

---
# <a name="compiler-warning-level-4-c4471"></a>Compilatore (livello 4) Avviso C4471
'*enumerazione*': una dichiarazione con prototipo di un'enumerazione senza ambita deve avere un tipo sottostante (presupposto int)  
  
Una dichiarazione con prototipo di un'enumerazione senza ambita è stata trovata senza un identificatore per il tipo sottostante. Per impostazione predefinita, si presuppone che Visual C++ `int` è il tipo sottostante un'enumerazione. Ciò può causare problemi se un altro tipo viene utilizzato nella definizione di enumerazione, ad esempio, se viene specificato un tipo esplicito diverso, o se è impostato in modo implicito un tipo diverso da un inizializzatore. L'utente potrebbe avere problemi di portabilità; non presupporre che altri compilatori `int` è il tipo sottostante di un'enumerazione.  
  
Questo avviso è disattivata per impostazione predefinita. è possibile utilizzare /Wall o /w*N*4471 per abilitarla nella riga di comando, o utilizzare #pragma [avviso](../../preprocessor/warning.md) nel file di origine.  
  
In alcuni casi, questo avviso è non corretto. Se una dichiarazione con prototipo per un'enumerazione viene visualizzata dopo la definizione, può generare questo avviso. Ad esempio, questo codice è valido, anche se potrebbe essere C4471:  
  
```cpp  
// C4471a.cpp
// Compile with: cl /c /w14471 C4471a.cpp
enum Example { item = 0x80000000UL };
enum Example;    // Spurious C4471
// ...
```  
  
## <a name="example"></a>Esempio  
In generale, è possibile utilizzare la definizione completa per un'enumerazione senza ambito anziché una dichiarazione con prototipo. È possibile inserire la definizione in un file di intestazione e includerla nel file di origine che fanno riferimento a esso. Questa funzionalità è disponibile codice scritto per C++ 98 e versioni successive. Si consiglia di questa soluzione per la portabilità e facilità di manutenzione.  
  
```cpp  
// C4471b.cpp
// Compile with: cl /c /w14471 C4471b.cpp
enum Example;    // C4471
// To fix, replace the line above with the enumeration definition:
// enum Example { item = 0x80000000UL };
// ...
```  
  
## <a name="example"></a>Esempio  
In C++ 11, è possibile aggiungere un tipo esplicito per un'enumerazione senza ambito e la dichiarazione con prototipo. Questa soluzione è consigliabile solo se la logica di inclusione di intestazione complessi impedisce l'utilizzo della definizione di invece di una dichiarazione con prototipo. Questa soluzione può causare un problema di manutenzione: se si modifica il tipo sottostante utilizzato per la definizione di enumerazione, è necessario modificare anche tutte le dichiarazioni con prototipo per corrispondere o potrebbe essere invisibile all'utente errori nel codice. In un file di intestazione per ridurre questo problema, è possibile inserire la dichiarazione con prototipo.  
  
```cpp  
// C4471c.cpp
// Client code for enumeration defined in C4471d.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example;    // C4471, int assumed
// To fix, replace the lines above with the forward declarations:
// enum Example : unsigned;
// ...
```  
  
```cpp  
// C4471d.cpp
// Definition for enumeration used in C4471c.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example : unsigned { item = 0x80000000 }; // explicit type
// ...
```  
  
Se si specifica un tipo esplicito per un'enumerazione, è consigliabile attivare anche avviso [C4369](compiler-warning-level-1-C4369.md), che è attivata per impostazione predefinita. Identifica i casi in cui un elemento dell'enumerazione richiede un tipo diverso rispetto al tipo specificato in modo esplicito.
  
## <a name="example"></a>Esempio  
È possibile modificare il codice per utilizzare un'enumerazione con ambito, una funzionalità che è una novità in C++ 11. Per utilizzare un'enumerazione con ambito, è necessario modificare la definizione e il codice di client che utilizza il tipo di enumerazione. È consigliabile che utilizzare un'enumerazione con ambito se si verificano problemi con inquinamento dello spazio dei nomi, come i nomi degli elementi di enumerazione definito sono limitati all'ambito di enumerazione. Un'altra funzionalità di un'enumerazione con ambito è che i relativi membri non possono essere convertiti in modo implicito in un altro tipo integrale o di enumerazione che può essere un'origine di bug di difficile individuazione.

```cpp  
// C4471e.cpp
// Client code for scoped enumeration defined in C4471f.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum Example;    // C4471
// To fix, replace the line above with the forward declaration:
// enum class Example;
// ...
```  
  
```cpp  
// C4471f.cpp
// Definition for scoped enumeration used in C4471e.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum class Example { item = 0 };
// ...
```  
  

