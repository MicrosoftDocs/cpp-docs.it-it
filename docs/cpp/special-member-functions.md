---
title: Funzioni membro speciali | Documenti Microsoft
ms.custom: 
ms.date: 12/06/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- special member functions [C++]
- constructors [C++]
- destructors [C++]
- copy operators [C++]
- move operators [C++]
- assignment operators [C++]
ms.assetid: 017d6817-b012-44f0-b153-f3076c251ea7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ff4fc72d2a40cc52ec614cbd5b470738ad1aa391
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="special-member-functions"></a>Funzioni membro speciali  
  
Il *funzioni membro speciali* sono funzioni membro che, in alcuni casi, il compilatore genera automaticamente di classe (o struct). Queste funzioni sono il [costruttore predefinito](constructors-cpp.md#default_constructors), [distruttore](destructors-cpp.md), [costruttore di copia e l'operatore di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md)e il [costruttore di spostamento e operatore di assegnazione di spostamento](move-constructors-and-move-assignment-operators-cpp.md). Se la classe non definisce uno o più delle funzioni membro speciali, il compilatore può in modo implicito dichiarare quindi definire le funzioni che vengono utilizzate. Le implementazioni generate dal compilatore vengono chiamate i *predefinito* funzioni membro speciali. Il compilatore genera funzioni se non sono necessari.  
  
È possibile dichiarare in modo esplicito una funzione membro speciale predefinito utilizzando il `= default` (parola chiave). In questo modo il compilatore di definire la funzione solo se necessario, esattamente come se la funzione non è stata dichiarata affatto. 

In alcuni casi, il compilatore potrebbe generare *eliminato* speciali funzioni membro, che non sono definiti e pertanto non disponibile per la chiamata. Questa situazione può verificarsi nei casi in cui una chiamata a una funzione membro speciale particolare in una classe non ha senso, altre proprietà della classe di base. Per evitare in modo esplicito la generazione automatica di una funzione membro speciale, è possibile dichiararla come eliminato tramite il `= delete` (parola chiave).  
  
Il compilatore genera un *costruttore predefinito*, un costruttore che non accetta argomenti, solo quando non è stato dichiarato un altro costruttore. Se è stata dichiarata solo un costruttore che accetta parametri, il codice che tenta di chiamare un costruttore predefinito, il compilatore per produrre un messaggio di errore. Il costruttore predefinito generato dal compilatore esegue semplice member-wise [inizializzazione predefinita](initializers.md#default_initialization) dell'oggetto. Inizializzazione predefinita, tutte le variabili membro viene lasciato in uno stato indeterminato.  
  
Il distruttore predefinito esegue automaticamente distruzione dell'oggetto. È virtuale solo se un distruttore della classe base è virtuale.  
  
Schema di bit automaticamente di eseguire la copia predefinita e costruzione di spostamenti e operazioni di assegnazione copia o spostamento di membri dati non statici. Spostare le operazioni vengono generate solo quando non vengono dichiarate alcun distruttore o operazioni di copia o spostamento. Un costruttore di copia predefinito viene generato solo quando non viene dichiarato alcun costruttore di copia. Se viene dichiarata un'operazione di spostamento viene eliminato in modo implicito. Un operatore di assegnazione di copia predefinito viene generato solo quando non viene dichiarato in modo esplicito alcun operatore di assegnazione di copia. Se viene dichiarata un'operazione di spostamento viene eliminato in modo implicito.  
  
## <a name="see-also"></a>Vedere anche  
[Riferimenti al linguaggio C++](cpp-language-reference.md)  



 
