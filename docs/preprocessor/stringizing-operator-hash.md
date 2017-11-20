---
title: Creazione di stringhe (operatore) (#) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '#'
dev_langs: C++
helpviewer_keywords:
- preprocessor, operators
- arguments [C++], converting to strings
- stringizing operator
- preprocessor
- string literals, converting macro parameters to
- macros [C++], converting parameters to strings
- '# preprocessor operator'
ms.assetid: 1175dd19-4538-43b3-ad97-a008ab80e7b1
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 585bdd0fa11cecdf3fb337f8c11d2287fe495371
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="stringizing-operator-"></a>Operatore per la creazione di stringhe (#)
Il cancelletto o operatore "per" (**#**) converte i parametri di macro in valori letterali stringa senza espandere la definizione di parametro. Tale operatore viene utilizzato solo con le macro che accetta argomenti. Se questo operatore precede un parametro formale nella definizione della macro, l'argomento effettivo passato alla chiamata della macro viene racchiuso tra virgolette singole e considerato come un valore letterale stringa. Il valore letterale stringa sostituisce quindi ogni occorrenza di una combinazione dell'operatore per la creazione di stringhe e del parametro formale nella definizione di macro.  
  
> [!NOTE]
>  L'estensione Microsoft C (versione 6.0 e precedenti) allo standard ANSI C che in precedenza espandeva gli argomenti formali di macro presenti in valori letterali stringa e in costanti carattere non è più supportata. Codice che si basava su tale estensione deve essere riscritto utilizzando la creazione di stringhe (**#**) (operatore).  
  
Lo spazio vuoto che precede il primo token dell'argomento effettivo e che segue l'ultimo token dell'argomento effettivo viene ignorato. Tutti gli spazi vuoti tra i token dell'argomento effettivo vengono ridotti a un singolo spazio vuoto nel valore letterale stringa risultante. Di conseguenza, se tra due token nell'argomento effettivo è presente un commento, quest'ultimo viene ridotto a un singolo spazio vuoto. Il valore letterale stringa risultante verrà automaticamente concatenato con tutti i valori letterali stringa adiacenti da cui è separato solo da spazi vuoti.  
  
Inoltre, se un carattere incluso nell'argomento, in genere richiede una sequenza di escape se utilizzato in un valore letterale stringa (ad esempio, il segno di virgolette (**"**) o una barra rovesciata (**\\**) carattere), barra rovesciata necessaria di escape viene automaticamente inserita prima del carattere.  
  
L'operatore di concatenamento di Visual C++ non funzionare correttamente quando viene utilizzato con stringhe che includono le sequenze di escape. In questo caso, il compilatore genera [errore del compilatore C2017](../error-messages/compiler-errors-1/compiler-error-c2017.md).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente vengono illustrate una definizione di macro che include l'operatore per la creazione di stringhe e una funzione principale che richiama la macro:  
  
Tali chiamate verranno espanse durante la pre-elaborazione, creando il codice seguente:  
  
```cpp  
int main() {  
   printf_s( "In quotes in the printf function call\n" "\n" );  
   printf_s( "\"In quotes when printed to the screen\"\n" "\n" );  
   printf_s( "\"This: \\\" prints an escaped double quote\"" "\n" );  
}  
```  
  
```cpp  
// stringizer.cpp  
#include <stdio.h>  
#define stringer( x ) printf_s( #x "\n" )  
int main() {  
   stringer( In quotes in the printf function call );   
   stringer( "In quotes when printed to the screen" );     
   stringer( "This: \"  prints an escaped double quote" );  
}  
```  
  
```Output  
In quotes in the printf function call  
"In quotes when printed to the screen"  
"This: \"  prints an escaped double quote"  
```  
  
## <a name="example"></a>Esempio  
Nell'esempio di codice seguente viene mostrato come è possibile espandere un parametro di macro:  
  
```cpp  
// stringizer_2.cpp  
// compile with: /E  
#define F abc  
#define B def  
#define FB(arg) #arg  
#define FB1(arg) FB(arg)  
FB(F B)  
FB1(F B)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)