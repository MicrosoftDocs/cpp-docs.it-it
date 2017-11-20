---
title: Concatenamento dei token operatore (#) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '##'
dev_langs: C++
helpviewer_keywords:
- preprocessor, operators
- '## preprocessor operator'
ms.assetid: 4f173503-990f-4bff-aef3-ec4d1f1458ef
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 5573107688968026bf98eda4b18223e35b7b3ef2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="token-pasting-operator-"></a>Operatore di concatenamento dei token (##)
L'operatore doppia cancelletto o "concatenamento dei token" (**##**), talvolta denominato l'operatore di "unione" viene usato nelle macro simile a oggetto sia di tipo funzione. Consente ai token separati di essere uniti in un unico token e quindi non può essere il primo o l'ultimo token nella definizione macro.  
  
 Se un parametro formale in una definizione di macro è preceduto o seguito dall'operatore di concatenamento dei token, il parametro formale viene immediatamente sostituito dall'argomento effettivo non espanso. L'espansione della macro non viene eseguita nell'argomento prima della sostituzione.  
  
 Quindi, ogni occorrenza dell'operatore di concatenamento dei token in *token stringa* viene rimosso e i token che precedono e seguono vengono concatenati. Il token risultante deve essere un token valido. In tal caso, viene eseguita la scansione del token per una possibile sostituzione se rappresenta un nome di macro. L'identificatore rappresenta il nome da cui i token concatenati verranno resi noti nel programma prima della sostituzione. Ogni token rappresenta un token definito altrove, nel programma o nella riga di comando del compilatore. Lo spazio vuoto che precede o che segue l'operatore è facoltativo.  
  
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
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
token9 = 9  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)