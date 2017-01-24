---
title: "Operatore per la creazione di stringhe (#) | Microsoft Docs"
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
  - "#"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operatore del preprocessore #"
  - "argomenti [C++], conversione in stringhe"
  - "macro [C++], conversione di parametri in stringhe"
  - "preprocessore"
  - "preprocessore, operatori"
  - "stringhe letterali, conversione di parametri di macro"
  - "operatore per la creazione di stringhe"
ms.assetid: 1175dd19-4538-43b3-ad97-a008ab80e7b1
caps.latest.revision: 16
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Operatore per la creazione di stringhe (#)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il cancelletto o operatore per la creazione di stringhe \(**\#**\) converte i parametri di macro in valori letterali stringa senza espandere la definizione di parametro.  Tale operatore viene utilizzato solo con le macro che accetta argomenti.  Se questo operatore precede un parametro formale nella definizione della macro, l'argomento effettivo passato alla chiamata della macro viene racchiuso tra virgolette singole e considerato come un valore letterale stringa.  Il valore letterale stringa sostituisce quindi ogni occorrenza di una combinazione dell'operatore per la creazione di stringhe e del parametro formale nella definizione di macro.  
  
> [!NOTE]
>  L'estensione Microsoft C \(versione 6.0 e precedenti\) allo standard ANSI C che in precedenza espandeva gli argomenti formali di macro presenti in valori letterali stringa e in costanti carattere non è più supportata.  Il codice che si basava su tale estensione deve essere riscritto utilizzando l'operatore per la creazione di stringhe \(**\#**\).  
  
 Lo spazio vuoto che precede il primo token dell'argomento effettivo e che segue l'ultimo token dell'argomento effettivo viene ignorato.  Tutti gli spazi vuoti tra i token dell'argomento effettivo vengono ridotti a un singolo spazio vuoto nel valore letterale stringa risultante.  Di conseguenza, se tra due token nell'argomento effettivo è presente un commento, quest'ultimo viene ridotto a un singolo spazio vuoto.  Il valore letterale stringa risultante verrà automaticamente concatenato con tutti i valori letterali stringa adiacenti da cui è separato solo da spazi vuoti.  
  
 Inoltre, se un carattere incluso nell'argomento richiede in genere una sequenza di escape se utilizzato in un valore letterale stringa, ad esempio le virgolette doppie \(**"**\) o il carattere barra rovesciata \(**\\**\), la barra rovesciata necessaria di escape viene automaticamente inserita prima del carattere.  
  
 In Visual C\+\+ l'operatore per la creazione di stringhe potrebbe non comportarsi come previsto in tutte le situazioni. Per ulteriori informazioni, vedere [16.3.2 Operatore \#](../misc/16-3-2-the-hash-operator.md).  
  
## Esempio  
 Nell'esempio seguente vengono illustrate una definizione di macro che include l'operatore per la creazione di stringhe e una funzione principale che richiama la macro:  
  
 Tali chiamate verranno espanse durante la pre\-elaborazione, creando il codice seguente:  
  
```  
int main() {  
   printf_s( "In quotes in the printf function call\n" "\n" );  
   printf_s( "\"In quotes when printed to the screen\"\n" "\n" );  
   printf_s( "\"This: \\\" prints an escaped double quote\"" "\n" );  
}  
```  
  
```  
// stringizer.cpp  
#include <stdio.h>  
#define stringer( x ) printf_s( #x "\n" )  
int main() {  
   stringer( In quotes in the printf function call );   
   stringer( "In quotes when printed to the screen" );     
   stringer( "This: \"  prints an escaped double quote" );  
}  
```  
  
  **In quotes in the printf function call**  
**"In quotes when printed to the screen"**  
**"This: \\"  prints an escaped double quote"**   
## Esempio  
 Nell'esempio di codice seguente viene mostrato come è possibile espandere un parametro di macro:  
  
```  
// stringizer_2.cpp  
// compile with: /E  
#define F abc  
#define B def  
#define FB(arg) #arg  
#define FB1(arg) FB(arg)  
FB(F B)  
FB1(F B)  
```  
  
## Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)