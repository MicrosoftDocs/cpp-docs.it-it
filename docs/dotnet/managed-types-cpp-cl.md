---
title: Tipi (C++ CL) gestiti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __gc types
- types [C++], CLR
ms.assetid: 1ddd114e-be02-4de7-a4dd-a2d72ad8ff81
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9e7bbd9687c3cc696b35e0284d55a18f59c898cc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="managed-types-ccl"></a>Tipi gestiti (C++/CL)
La sintassi per la dichiarazione di tipi gestiti e per la creazione e utilizzo di oggetti di questi tipi è stato notevolmente modificata dalle estensioni gestite per C++ a Visual C++. Questa operazione è stata eseguita per promuovere l'integrazione nel sistema di tipi standard ISO C++. Queste modifiche sono illustrate in dettaglio nelle sezioni seguenti.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Dichiarazione di un tipo classe gestito](../dotnet/declaration-of-a-managed-class-type.md)  
 Viene illustrato come dichiarare un oggetto gestito `class`, `struct`, o `interface`.  
  
 [Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md)  
 Viene illustrato come dichiarare un oggetto di tipo classe di riferimento utilizzando un handle di rilevamento.  
  
 [Dichiarazione di una matrice CLR](../dotnet/declaration-of-a-clr-array.md)  
 Viene illustrato come dichiarare e inizializzare una matrice.  
  
 [Modifiche nell'ordine di inizializzazione del costruttore](../dotnet/changes-in-constructor-initialization-order.md)  
 Vengono illustrate le modifiche delle chiavi in ordine di inizializzazione di costruttore di classe.  
  
 [Modifiche nella semantica del distruttore](../dotnet/changes-in-destructor-semantics.md)  
 Illustra la finalizzazione deterministica, `Finalize` e `Dispose`, conseguenze per gli oggetti di riferimento e l'utilizzo esplicito di `Finalize`.  
  
 **Nota:** la discussione di delegati viene posticipata fino alla [delegati ed eventi](../dotnet/delegates-and-events.md) per presentare i membri dell'evento all'interno di una classe, l'argomento generale di [dichiarazioni di membro all'interno di una classe o interfaccia (C + C++ /CLI) ](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md).  
  
## <a name="see-also"></a>Vedere anche  
 [C + + CLI nozioni di base della migrazione](../dotnet/cpp-cli-migration-primer.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Array](../windows/arrays-cpp-component-extensions.md)