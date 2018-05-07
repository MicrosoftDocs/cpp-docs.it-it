---
title: Tipi (C++ CL) gestiti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- __gc types
- types [C++], CLR
ms.assetid: 1ddd114e-be02-4de7-a4dd-a2d72ad8ff81
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 42426c45f4b8caf3cd4cb61ee867470dc9ea639f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
  
 **Nota:** viene posticipata fino alla descrizione dei delegati [delegati ed eventi](../dotnet/delegates-and-events.md) per presentare loro con membri dell'evento all'interno di una classe, l'argomento generale di [dichiarazioni di membri in una classe o interfaccia (C + C++ /CLI) ](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md).  
  
## <a name="see-also"></a>Vedere anche  
 [C + + CLI nozioni di base della migrazione](../dotnet/cpp-cli-migration-primer.md)   
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)   
 [Array](../windows/arrays-cpp-component-extensions.md)