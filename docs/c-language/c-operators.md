---
title: "Operatori C | Microsoft Docs"
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
  - "associazione di operatori"
  - "dati binari, espressioni binarie"
  - "operatori binari"
  - "operatori [C]"
  - "simboli, operatori"
  - "operatori ternari"
ms.assetid: 13bc4c8e-2dc9-4b23-9f3a-25064e8777ed
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori C sono un subset degli [Operatori C\+\+](../misc/cpp-operators.md).  
  
 Sono disponibili tre tipi di operatori:  Un'espressione unaria è costituita da un operatore unario anteposto a un operando o dalla parola chiave `sizeof` seguita da un'espressione.  L'espressione può essere il nome di una variabile o un'espressione cast.  Se l'espressione è un'espressione cast, deve essere racchiusa tra parentesi.  Un'espressione binaria è costituita da due operandi uniti da un operatore binario.  Un'espressione ternaria è costituita da tre operandi uniti dall'operatore di espressione condizionale.  
  
 In C sono disponibili gli operatori unari seguenti:  
  
|Simbolo|Nome|  
|-------------|----------|  
|**– ~ \!**|Operatori di complemento e di negazione|  
|**\* &**|Operatori di riferimento indiretto e address\-of|  
|`sizeof`|Operatore size|  
|**\+**|Operatore più unario|  
|**\+\+ ––**|Operatori di incremento e decremento unari|  
  
 Gli operatori binari vengono associati da sinistra a destra.  In C sono disponibili gli operatori binari seguenti:  
  
|Simbolo|Nome|  
|-------------|----------|  
|**\* \/ %**|Operatori moltiplicativi|  
|**\+ –**|Operatori additivi|  
|**\<\<**<br /> **\>\>**|Operatori shift|  
|**\<   \>   \<\=   \>\=   \=\=   \!\=**|Operatori relazionali|  
|**&   &#124; ^**|Operatori bit per bit|  
|**&&   &#124;&#124;**|Operatori logici|  
|**,**|Operatore di valutazione sequenziale|  
  
 L'operatore di base \(**:\>**\), supportato da versioni precedenti del compilatore C a 16 bit di Microsoft, è descritto in [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md).  
  
 L'operatore di espressione condizionale ha una precedenza minore rispetto alle espressioni binarie e differisce da tali espressioni per l'associatività a destra.  
  
 Le espressioni con operatori includono inoltre espressioni di assegnazione, che utilizzano operatori di assegnazione unari o binari.  Gli operatori di assegnazione unari sono gli operatori di incremento \(`++`\) e decremento \(**––**\), mentre gli operatori di assegnazione binari sono l'operatore di assegnazione semplice \(**\=**\) e gli operatori di assegnazione composta.  Ogni operatore di assegnazione composta è una combinazione di un altro operatore binario con l'operatore di assegnazione semplice.  
  
## Vedere anche  
 [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)