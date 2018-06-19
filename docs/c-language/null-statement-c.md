---
title: Istruzione Null (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- semicolon, C null statement
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 72576ce6-26d0-4379-be65-fee522088790
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 72e120fa412481a8313809bd5cdaf748de498bde
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32384268"
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