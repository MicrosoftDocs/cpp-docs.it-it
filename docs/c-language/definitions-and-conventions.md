---
title: Definizioni e convenzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- nonterminals definition
ms.assetid: f9b3cf5f-6a7c-4a10-9b18-9d4a43efdaeb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74a29acfcdc58b068ebabe9bc1c9b033cf801c21
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760406"
---
# <a name="definitions-and-conventions"></a>Definizioni e convenzioni
I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.  
  
I non terminali sono segnaposti nella sintassi e vengono definiti altrove nel riepilogo della sintassi. Le definizioni possono essere ricorsive.  
  
Un componente facoltativo viene indicato da <sub>opt</sub> con indice. Ad esempio,  
  
> **{** *expression*<sub>opt</sub> **}**
  
indica un'espressione facoltativa racchiusa tra parentesi graffe.  
  
Le convenzioni della sintassi utilizzano attributi del tipo di carattere differenti per i diversi componenti della sintassi. I simboli e i caratteri sono i seguenti:  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|*non terminale*|Il tipo corsivo indica non terminali.|  
|**const**|I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato. I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole.|  
|<sub>opt</sub>|I non terminali seguiti da <sub>opt</sub> sono sempre facoltativi.|  
|carattere tipografico predefinito|I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni C.|  
  
I due punti (**:**) che seguono un non terminale introducono la definizione di questo. Le definizioni alternative sono elencate in righe separate, tranne quando sono precedute dalle parole "uno di".  
  
## <a name="see-also"></a>Vedere anche  
[Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)