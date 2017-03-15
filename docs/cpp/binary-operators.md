---
title: "Operatori binari | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori binari"
  - "operatori di selezione dei membri"
  - "operatori [C++], binaria"
ms.assetid: c0e7fbff-bc87-4708-8333-504ac09ee83e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Operatori binari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente viene mostrato un elenco di operatori che possono essere sottoposti a overload.  
  
### Operatori binari ridefinibili  
  
|Operatore|Nome|  
|---------------|----------|  
|**,**|Virgola|  
|`!=`|Disuguaglianza|  
|`%`|Modulo|  
|`%=`|Modulo\/assegnazione|  
|**&**|AND bit per bit|  
|**&&**|AND logico|  
|**&\=**|AND bit\/assegnazione|  
|**\***|Moltiplicazione|  
|**\*\=**|Moltiplicazione\/assegnazione|  
|**\+**|Addizione|  
|`+=`|Addizione\/assegnazione|  
|**–**|Sottrazione|  
|**–\=**|Sottrazione\/assegnazione|  
|**–\>**|Selezione dei membri|  
|**–\>\***|Selezione puntatore a membro|  
|**\/**|Divisione|  
|`/=`|Divisione\/assegnazione|  
|**\<**|Minore di|  
|**\<\<**|Spostamento a sinistra|  
|**\<\<\=**|Spostamento a sinistra\/assegnazione|  
|**\<\=**|Minore o uguale a|  
|**\=**|Assegnazione|  
|`==`|Uguaglianza|  
|**\>**|Maggiore di|  
|**\>\=**|Maggiore o uguale a|  
|**\>\>**|Spostamento a destra|  
|**\>\>\=**|Spostamento a destra\/assegnazione|  
|**^**|OR esclusivo|  
|`^=`|OR esclusivo\/assegnazione|  
|**&#124;**|OR inclusivo bit per bit|  
|`&#124;=`|OR inclusivo bit\/assegnazione|  
|`&#124;&#124;`|OR logico|  
  
 Per dichiarare una funzione di un operatore binario come membro non statico, è necessario dichiararla nel seguente formato:  
  
 *ret\-type* **operator**`op`**\(** `arg` **\)**  
  
 dove *ret\-type* è il tipo restituito, `op` è uno degli operatori elencati nella tabella precedente e `arg` è un argomento di qualsiasi tipo.  
  
 Per dichiarare una funzione di un operatore binario come funzione globale, è necessario dichiararla nel seguente formato:  
  
 *ret\-type* **operator**`op`**\(** `arg1`**,** `arg2` **\)**  
  
 dove *ret\-type* e `op` vengono così descritti per le funzioni dell'operatore membro e `arg1` e `arg2` sono argomenti.  Almeno uno degli argomenti deve essere di tipo di classe.  
  
> [!NOTE]
>  Non c'è alcuna restrizione sui tipi restituiti degli operatori binari; tuttavia, la maggior parte degli operatori binari definiti dall'utente restituiscono un tipo di classe o un riferimento al tipo di classe.  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)