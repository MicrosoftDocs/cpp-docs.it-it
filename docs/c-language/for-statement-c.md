---
title: "Istruzione for (C) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "for (parola chiave) [C]"
ms.assetid: 560a8de4-19db-4868-9f18-dbe51b17900d
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione for (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `for` consente di ripetere un'istruzione o un'istruzione composta un numero specificato di volte.  Il corpo di un'istruzione `for` viene eseguito zero o più volte fino a quando una condizione facoltativa non restituisce false.  È possibile utilizzare espressioni facoltative nell'istruzione `for` per inizializzare e modificare i valori durante l'esecuzione dell'istruzione `for`.  
  
## Sintassi  
 *iteration\-statement*:  
 `for` \( `init-expression` opt ; `cond-expression`opt ; `loop-expression` opt \)`statement`  
  
 L'esecuzione di un'istruzione `for` procede nel modo seguente:  
  
1.  Viene valutato `init-expression`, se presente.  Questo consente l'inizializzazione del ciclo.  Non esistono restrizioni per il tipo di `init-expression`.  
  
2.  Viene valutato `cond-expression`, se presente.  Questa espressione deve essere di tipo aritmetico o puntatore.  Viene valutata prima di ogni iterazione.  Sono possibili tre risultati:  
  
    -   Se `cond-expression` è true \(diverso da zero\), viene eseguito `statement` ; quindi viene valutato `loop-expression`, se presente.  `loop-expression` viene valutato al termine di ogni iterazione.  Non esistono restrizioni per il relativo tipo.  Gli effetti collaterali vengono eseguiti in ordine.  Il processo inizia nuovamente con la valutazione di `cond-expression`.  
  
    -   Se `cond-expression` viene omesso, `cond-expression` è considerato true e l'esecuzione prosegue esattamente come descritto nel paragrafo precedente.  Un'istruzione `for` senza un argomento `cond-expression` termina solo quando viene eseguita un'istruzione `return` o `break` nel corpo dell'istruzione o quando viene eseguita un'istruzione `goto` \(a un'istruzione con etichetta all'esterno del corpo dell'istruzione `for`\).  
  
    -   Se `cond-expression` restituisce `false` \(0\), l'esecuzione dell'istruzione `for` termina e il controllo passa all'istruzione successiva del programma.  
  
 L'istruzione `for` può terminare anche quando viene eseguita un'istruzione `break`, `goto` o `return` all'interno del corpo dell'istruzione.  Un'istruzione `continue` in un ciclo `for` determina la valutazione di `loop-expression`.  Quando un'istruzione `break` viene eseguita all'interno di un ciclo `for`, `loop-expression` non viene valutato né eseguito.  Questa istruzione  
  
```  
for( ;; )  
```  
  
 è la modalità consueta di produrre un ciclo infinito che può essere terminato solo con un'istruzione `break` `goto` o `return`.  
  
## Codice  
 In questo esempio viene illustrata l'istruzione `for`:  
  
```  
// c_for.c  
int main()  
{  
   char* line = "H e  \tl\tlo World\0";  
   int space = 0;  
   int tab = 0;  
   int i;  
   int max = strlen(line);  
   for (i = 0; i < max; i++ )   
   {  
      if ( line[i] == ' ' )  
      {  
          space++;  
      }  
      if ( line[i] == '\t' )  
      {  
          tab++;  
      }  
   }  
  
   printf("Number of spaces: %i\n", space);  
   printf("Number of tabs: %i\n", tab);  
   return 0;  
}  
```  
  
## Output  
  
```  
Number of spaces: 4  
Number of tabs: 2  
```  
  
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)