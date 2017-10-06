---
title: Istruzione Null (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- semicolon, C null statement
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 72576ce6-26d0-4379-be65-fee522088790
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 4a03d50c5c2a80bccd864f7e4d51df4d33169277
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="null-statement-c"></a>Istruzione Null (C)
Un'istruzione "null" è un'istruzione che contiene solo un punto e virgola; può essere visualizzata in qualsiasi punto in cui è prevista un'istruzione. Quando viene eseguita un'istruzione null, non succede nulla. Il modo corretto per codificare un'istruzione null è:  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
;  
  
```  
  
## <a name="remarks"></a>Note  
 Istruzioni quali **do**, **for**, **if** e `while` richiedono che un'istruzione eseguibile venga visualizzata come corpo dell'istruzione. L'istruzione null soddisfa il requisito della sintassi nei casi in cui non è necessario un corpo effettivo dell'istruzione.  
  
 Come per qualsiasi altra istruzione di C, è possibile includere un'etichetta prima di un'istruzione null. Per etichettare un elemento che non è un'istruzione, come la parentesi graffa di chiusura di un'istruzione composta, è possibile etichettare un'istruzione null e inserirla subito prima dell'elemento per ottenere lo stesso risultato.  
  
 In questo esempio viene illustrata l'istruzione null:  
  
```  
for ( i = 0; i < 10; line[i++] = 0 )  
     ;  
```  
  
 In questo esempio, l'espressione del ciclo dell'istruzione **for** `line[i++] = 0` inizializza i primi 10 elementi di `line` su 0. Il corpo dell'istruzione è un'istruzione null, poiché non sono disponibili ulteriori istruzioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
