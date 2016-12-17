---
title: "Operatori di assegnazione C | Microsoft Docs"
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
  - "%= (operatore)"
  - "&= (operatore)"
  - "*= (operatore)"
  - "/= (operatore)"
  - "^= (operatore), operatori di assegnazione"
  - "|= (operatore)"
  - "+= (operatore)"
  - "<<= (operatore)"
  - "= (operatore)"
  - "-= (operatore)"
  - "= (operatore), operatori di assegnazione"
  - ">> (operatore)"
  - ">>= (operatore)"
  - "conversioni di assegnazione"
  - "operatori di assegnazione"
  - "operatori di assegnazione, C"
  - "operatore di assegnazione AND bit per bit"
  - "operatore di assegnazione di divisione"
  - "operatore di assegnazione di moltiplicazione (*=)"
  - "operatore >>=, operatori di assegnazione C"
  - "operatori [C], assegnazione"
  - "operatori [C], spostamento"
  - "operatore di assegnazione di resto (%=)"
  - "operatori right shift"
  - "operatori di spostamento, right"
  - "sottrazione (operatore)"
  - "sottrazione (operatore), operatori di assegnazione C"
ms.assetid: 11688dcb-c941-44e7-a636-3fc98e7dac40
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di assegnazione C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'operazione di assegnazione assegna il valore dell'operando destro al percorso di archiviazione definito dall'operando sinistro.  Di conseguenza, l'operando sinistro di un'operazione di assegnazione deve essere un valore l\-value modificabile.  Dopo l'assegnazione, un'espressione di assegnazione assume il valore dell'operando sinistro, ma non è un valore l\-value.  
  
 **Sintassi**  
  
 *assignment\-expression*:  
 *conditional\-expression*  
  
 *unary\-expression assignment\-operator assignment\-expression*  
  
 *assignment\-operator*: uno tra  
 **\= \*\=** `/=` `%=` `+=` **–\= \<\<\= \>\>\= &\=** `^=` `|=`  
  
 Gli operatori di assegnazione in C possono sia trasformare che assegnare valori in un'unica operazione.  In C sono disponibili gli operatori di assegnazione seguenti:  
  
|Operatore|Operazione eseguita|  
|---------------|-------------------------|  
|**\=**|Assegnazione singola|  
|**\*\=**|Assegnazione di moltiplicazione|  
|`/=`|Assegnazione di divisione|  
|`%=`|Assegnazione di resto|  
|`+=`|Assegnazione di addizione|  
|**–\=**|Assegnazione di sottrazione|  
|**\<\<\=**|Assegnazione di spostamento a sinistra|  
|**\>\>\=**|Assegnazione di spostamento a destra|  
|**&\=**|Assegnazione AND bit per bit|  
|`^=`|Assegnazione OR esclusivo bit per bit|  
|`&#124;=`|Assegnazione OR inclusivo bit per bit|  
  
 Nell'assegnazione il tipo del valore destro viene convertito nel tipo del valore a sinistra e il valore viene archiviato nell'operando sinistro dopo che l'assegnazione è stata eseguita.  L'operando sinistro non deve essere una matrice, una funzione o una costante.  Il percorso specifico di conversione, che dipende dai due tipi, è descritto in dettaglio in [Conversioni di tipi](../c-language/type-conversions-c.md).  
  
## Vedere anche  
 [Operatori di assegnazione](../cpp/assignment-operators.md)