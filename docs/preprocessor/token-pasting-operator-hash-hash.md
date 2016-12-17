---
title: "Operatore di concatenamento dei token (##) | Microsoft Docs"
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
  - "##"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "## (operatore preprocessore)"
  - "preprocessore, operatori"
ms.assetid: 4f173503-990f-4bff-aef3-ec4d1f1458ef
caps.latest.revision: 10
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Operatore di concatenamento dei token (##)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il segno a doppia cifra o l'operatore di "concatenamento dei token" \(**\#\#**\), talvolta chiamato operatore di "unione", viene utilizzato sia nelle macro del tipo di oggetto che nelle macro di tipo funzione.  Consente ai token separati di essere uniti in un unico token e quindi non può essere il primo o l'ultimo token nella definizione macro.  
  
 Se un parametro formale in una definizione di macro è preceduto o seguito dall'operatore di concatenamento dei token, il parametro formale viene immediatamente sostituito dall'argomento effettivo non espanso.  L'espansione della macro non viene eseguita nell'argomento prima della sostituzione.  
  
 Quindi, ogni occorrenza dell'operatore di concatenamento dei token in *token\-string* viene rimossa e i token che la precedono e la seguono vengono concatenati.  Il token risultante deve essere un token valido.  In tal caso, viene eseguita la scansione del token per una possibile sostituzione se rappresenta un nome di macro.  L'identificatore rappresenta il nome da cui i token concatenati verranno resi noti nel programma prima della sostituzione.  Ogni token rappresenta un token definito altrove, nel programma o nella riga di comando del compilatore.  Lo spazio vuoto che precede o che segue l'operatore è facoltativo.  
  
 In questo esempio viene illustrato l'utilizzo degli operatori di creazione di stringhe e di concatenamento dei token nella specifica dell'output del programma:  
  
```  
#define paster( n ) printf_s( "token" #n " = %d", token##n )  
int token9 = 9;  
```  
  
 Se una macro viene chiamata con un argomento numerico come  
  
```  
paster( 9 );  
```  
  
 la macro restituisce  
  
```  
printf_s( "token" "9" " = %d", token9 );  
```  
  
 che diventa  
  
```  
printf_s( "token9 = %d", token9 );  
```  
  
## Esempio  
  
```  
// preprocessor_token_pasting.cpp  
#include <stdio.h>  
#define paster( n ) printf_s( "token" #n " = %d", token##n )  
int token9 = 9;  
  
int main()  
{  
   paster(9);  
}  
```  
  
  **token9 \= 9**   
## Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)