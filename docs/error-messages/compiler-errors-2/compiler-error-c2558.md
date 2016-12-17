---
title: "Errore del compilatore C2558 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2558"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2558"
ms.assetid: 822b701e-dcae-423a-b21f-47f36aff9c90
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2558
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': nessun costruttore di copia disponibile o costruttore di copia dichiarato 'explicit'  
  
 Un costruttore di copia inizializza un oggetto da un altro oggetto dello stesso tipo,  ovvero ne esegue una copia. Viene generato un costruttore di copia predefinito se non viene definito alcun costruttore.  
  
### Per correggere l'errore  
  
1.  Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è `private`.  Nella maggior parte dei casi, è preferibile non copiare una classe che dispone di un costruttore di copia `private`.  Una tecnica di programmazione comune dichiara un costruttore di copia `private` per impedire l'uso diretto di una classe.  La classe potrebbe non avere alcuna utilità in sé o richiedere un'altra classe per funzionare correttamente.  
  
     Se si stabilisce che è sicuro utilizzare una classe che dispone di un costruttore di copia `private`, derivare una nuova classe dalla classe che dispone del costruttore `private` e rendere disponibile un costruttore di copia `public` o `protected` nella nuova classe.  Usare la classe derivata al posto dell'originale.  
  
2.  Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è esplicito.  La dichiarazione di un costruttore di copia come `explicit` impedisce il passaggio degli oggetti di una classe alle funzioni o la restituzione degli stessi.  Per altre informazioni sui costruttori espliciti, vedere [Conversioni](../../cpp/user-defined-type-conversions-cpp.md).  
  
3.  Il problema può verificarsi quando si tenta di copiare un'istanza di una classe dichiarata `const` usando un costruttore di copia che non accetta un parametro di riferimento `const`.  Dichiarare il costruttore di copia con un riferimento di tipo `const` anziché un riferimento di tipo non const.