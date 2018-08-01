---
title: Classi e struct (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, classes
- structures, C++ classes
- user-defined types
- classes [C++]
- user-defined types, C++ classes
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ffd822aa59af9c703d00f8fc195fe4eeb91ce833
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405470"
---
# <a name="classes-and-structs-c"></a>Classi e struct (C++)
Questa sezione illustra le classi e gli struct di C++. I due costrutti sono identici in C++, ma negli struct l'accessibilità predefinita è pubblica, mentre nelle classi il valore predefinito è privato.  
  
 Le classi e gli struct sono i costrutti che permettono di definire tipi personalizzati. Le classi e gli struct possono includere membri dati e funzioni membro, che permettono di descrivere lo stato e il comportamento del tipo.  
  
 Sono inclusi i seguenti argomenti:  
  
-   [class](../cpp/class-cpp.md)  
  
-   [struct](../cpp/struct-cpp.md)  
  
-   [Panoramica dei membri di classe](../cpp/class-member-overview.md)  
  
-   [Controllo di accesso ai membri](../cpp/member-access-control-cpp.md)  
  
-   [Ereditarietà](../cpp/inheritance-cpp.md)  
  
-   [Membri statici](../cpp/static-members-cpp.md)  
  
-   [Conversioni di tipo definite dall'utente](../cpp/user-defined-type-conversions-cpp.md)  
  
-   [Mutable membri dati (identificatore modificabile)](../cpp/mutable-data-members-cpp.md)  
  
-   [Dichiarazioni di classi annidate](../cpp/nested-class-declarations.md)  
  
-   [Tipi di classe anonimi](../cpp/anonymous-class-types.md)  
  
-   [Puntatori a membri](../cpp/pointers-to-members.md)  
  
-   [Puntatore this](../cpp/this-pointer.md)  
  
-   [Campi di bit C++](../cpp/cpp-bit-fields.md)  
  
 I tre tipi di classe sono struttura, classe e unione. Vengono dichiarati usando la [struct](../cpp/struct-cpp.md), [classe](../cpp/class-cpp.md), e [union](../cpp/unions.md) parole chiave. La tabella seguente illustra le differenze tra i tre tipi di classe.  
  
 Per altre informazioni sulle unioni, vedere [unioni](../cpp/unions.md). Per informazioni sulle classi gestite e gli struct, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
### <a name="access-control-and-constraints-of-structures-classes-and-unions"></a>Controllo degli accessi e vincoli di strutture, classi e unioni  
  
|Strutture|Classi|Unioni|  
|----------------|-------------|------------|  
|chiave della classe è **struct**|chiave della classe è **classe**|chiave della classe è **union**|  
|L'accesso predefinito è pubblico|L'accesso predefinito è privato|L'accesso predefinito è pubblico|  
|Nessun vincolo di utilizzo|Nessun vincolo di utilizzo|Usare solo un membro alla volta|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)