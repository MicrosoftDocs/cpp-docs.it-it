---
title: Definizioni e convenzioni | Microsoft Docs
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
- nonterminals definition
ms.assetid: f9b3cf5f-6a7c-4a10-9b18-9d4a43efdaeb
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: fa335f2eec22e6f3008abe49f7ac36308ce0ad9a
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="definitions-and-conventions"></a>Definizioni e convenzioni
I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.  
  
 I non terminali sono segnaposti nella sintassi e vengono definiti altrove nel riepilogo della sintassi. Le definizioni possono essere ricorsive.  
  
 Un componente facoltativo viene indicato dall'opzione di indice. Di seguito è riportato un esempio:  
  
```  
  
{  
expression <SUB>opt</SUB> }  
```  
  
 indica un'espressione facoltativa racchiusa tra parentesi graffe.  
  
 Le convenzioni della sintassi utilizzano attributi del tipo di carattere differenti per i diversi componenti della sintassi. I simboli e i caratteri sono i seguenti:  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|*non terminale*|Il tipo corsivo indica non terminali.|  
|**const**|I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato. I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole.|  
|opt|I non terminali seguiti da opt sono sempre facoltativi.|  
|carattere tipografico predefinito|I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni C.|  
  
 I due punti (**:**) che seguono un non terminale introducono la definizione di questo. Le definizioni alternative sono elencate in righe separate, tranne quando sono precedute dalle parole "uno di".  
  
## <a name="see-also"></a>Vedere anche  
 [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)
