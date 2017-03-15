---
title: "Istruzione switch (C++) | Microsoft Docs"
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
  - "default"
  - "default_cpp"
  - "switch"
  - "switch_cpp"
  - "case"
  - "case_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "case (parola chiave) [C++], istruzioni switch"
  - "default (parola chiave) [C++]"
  - "switch (parola chiave) [C++]"
ms.assetid: 6c3f3ed3-5593-463c-8f4b-b33742b455c6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione switch (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente la selezione tra più sezioni di codice, in base al valore di un'espressione integrale.  
  
## Sintassi  
  
```  
  
      switch ( expression )  
   case constant-expression : statement  
   [default  : statement]  
```  
  
## Note  
 L'*expression* deve essere di un tipo integrale o di un tipo di classe per il quale esiste una conversione non ambigua nel tipo integrale.  La promozione a intero viene eseguita come descritto in [Promozioni a intero](../misc/integral-promotions.md).  
  
 Il corpo dell'istruzione `switch` è costituito da una serie di etichette **case** e da un'etichetta **default** facoltativa.  Due espressioni costanti nelle istruzioni **case** non possono restituire lo stesso valore.  L'etichetta **default** può apparire una sola volta.  Le istruzioni con etichette non sono requisiti sintattici, ma l'istruzione `switch` è inutile senza di essi.   L'istruzione default non deve necessariamente essere alla fine; può apparire in un punto qualsiasi del corpo dell'istruzione switch.  Un'etichetta case o default può apparire solo all'interno di un'istruzione switch.  
  
 *constant\-expression* in ogni etichetta **case** viene convertito nel tipo di *expression* e viene confrontato con *expression* per l'uguaglianza.  Il controllo passa all'istruzione il cui elemento **case** *constant\-expression* corrisponde al valore di *expression*.  Il comportamento risultante è illustrato nella tabella seguente.  
  
### Comportamento dell'istruzione switch  
  
|Condizione|Azione|  
|----------------|------------|  
|Il valore convertito corrisponde a quello dell'espressione di controllo promossa.|Il controllo viene trasferito all'istruzione che segue tale etichetta.|  
|Nessuna costante corrisponde alle costanti nelle etichette **case**; è presente un'etichetta **default**.|Il controllo viene trasferito all'etichetta **default**.|  
|Nessuna costante corrisponde alle costanti nelle etichette **case**; non è presente un'etichetta **default**.|Il controllo viene trasferito all'istruzione che segue l'istruzione `switch`.|  
  
 Se viene trovata un'espressione corrispondente, il controllo non viene impedito da etichette **case** o **default** successive.  L'istruzione [break](../cpp/break-statement-cpp.md) viene utilizzata per arrestare l'esecuzione e trasferire il controllo all'istruzione dopo l'istruzione `switch`.  Senza un'istruzione **break**, ogni istruzione dall'etichetta **case** corrispondente alla fine di `switch` viene eseguita, inclusa l'etichetta **default**.  Ad esempio:  
  
```  
// switch_statement1.cpp  
#include <stdio.h>  
  
int main() {  
   char *buffer = "Any character stream";  
   int capa, lettera, nota;  
   char c;  
   capa = lettera = nota = 0;  
  
   while ( c = *buffer++ )   // Walks buffer until NULL  
   {  
      switch ( c )  
      {  
         case 'A':  
            capa++;  
            break;  
         case 'a':  
            lettera++;  
            break;  
         default:  
            nota++;  
      }  
   }  
   printf_s( "\nUppercase a: %d\nLowercase a: %d\nTotal: %d\n",  
      capa, lettera, (capa + lettera + nota) );  
}  
```  
  
 Nell'esempio precedente `capa` viene incrementato se `c` è una `A` maiuscola.  L'istruzione `break` dopo `capa++` termina l'esecuzione del corpo dell'istruzione `switch` e il controllo passa al ciclo `while`.  Senza l'istruzione `break`, anche `lettera` e `nota` vengono incrementati.  Uno scopo simile viene utilizzato dall'istruzione `break` per `case 'a'`.  Se `c` è una `a` minuscola, `lettera` viene incrementata e l'istruzione `break` termina il corpo dell'istruzione `switch`.  Se `c` non è `a` o `A`, l'istruzione `default` viene eseguita.  
  
 Un blocco interno di un'istruzione `switch` può contenere definizioni con inizializzazioni finché sono raggiungibili, ovvero non vengono ignorate da tutti i possibili percorsi di esecuzione.  I nomi introdotti utilizzando queste dichiarazioni hanno ambito locale.  Ad esempio:  
  
```  
// switch_statement2.cpp  
// C2360 expected  
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[])  
{  
   switch( tolower( *argv[1] ) )  
   {  
       // Error. Unreachable declaration.  
       char szChEntered[] = "Character entered was: ";  
  
   case 'a' :  
       {  
       // Declaration of szChEntered OK. Local scope.  
       char szChEntered[] = "Character entered was: ";  
       cout << szChEntered << "a\n";  
       }  
       break;  
  
   case 'b' :  
       // Value of szChEntered undefined.  
       cout << szChEntered << "b\n";  
       break;  
  
   default:  
       // Value of szChEntered undefined.  
       cout << szChEntered << "neither a nor b\n";  
       break;  
   }  
}  
```  
  
 Un'istruzione `switch` può essere annidata.  In tali casi, le etichette **case** o **default** sono associate all'istruzione `switch` più vicina che le contiene.  
  
## Sezione specifica Microsoft  
 Microsoft C non limita il numero di valori di etichette case che possono essere presenti in un'istruzione `switch`.  Tale numero è limitato solo dalla memoria disponibile.  ANSI C richiede che in un'istruzione `switch` siano consentite almeno 257 etichette case.  
  
 Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate.  Utilizzare l'opzione del compilatore [\/Za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [\(NOTINBUILD\) Using Labels in the case Statement](http://msdn.microsoft.com/it-it/a6ff057d-1aee-42ed-a28d-ee6a565b3197)