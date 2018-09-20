---
title: Tipi (C++-CL) gestiti | Microsoft Docs
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
ms.openlocfilehash: 382228b9e8364d90d7929b4633744071c5eb0c77
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408039"
---
# <a name="managed-types-ccl"></a>Tipi gestiti (C++/CL)

La sintassi per la dichiarazione di tipi gestiti e per la creazione e uso di questi oggetti è stata modificata in modo significativo dalle estensioni gestite per C++ per Visual C++. Questa operazione è stata eseguita per promuovere l'integrazione nel sistema di tipi standard ISO C++. Queste modifiche vengono presentate in dettaglio nelle sottosezioni seguenti.

## <a name="in-this-section"></a>In questa sezione

[Dichiarazione di un tipo classe gestito](../dotnet/declaration-of-a-managed-class-type.md)<br/>
Viene illustrato come dichiarare un oggetto gestito `class`, `struct`, o `interface`.

[Dichiarazione di un oggetto classe di riferimento CLR](../dotnet/declaration-of-a-clr-reference-class-object.md)<br/>
Viene illustrato come dichiarare un oggetto di tipo classe di riferimento utilizzando un handle di rilevamento.

[Dichiarazione di una matrice CLR](../dotnet/declaration-of-a-clr-array.md)<br/>
Viene illustrato come dichiarare e inizializzare una matrice.

[Modifiche nell'ordine di inizializzazione del costruttore](../dotnet/changes-in-constructor-initialization-order.md)<br/>
Illustra le principali modifiche nell'ordine di inizializzazione di costruttore di classe.

[Modifiche nella semantica del distruttore](../dotnet/changes-in-destructor-semantics.md)<br/>
Descrive la finalizzazione non deterministica `Finalize` rispetto a `Dispose`, possibili implicazioni per gli oggetti di riferimento e l'utilizzo esplicito di `Finalize`.

**Nota:** la descrizione dei delegati viene posticipata fino alla [delegati ed eventi](../dotnet/delegates-and-events.md) allo scopo di presentarli con membri evento all'interno di una classe, l'argomento generale di [dichiarazioni di membri in una classe o interfaccia (C + + CLI) ](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md).

## <a name="see-also"></a>Vedere anche

[Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)<br/>
[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)<br/>
[Array](../windows/arrays-cpp-component-extensions.md)