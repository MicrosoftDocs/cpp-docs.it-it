---
title: Classi e struct (C++) | Documenti Microsoft
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
ms.openlocfilehash: 61348578018a5bbddcaff293fa3ed76575eb16de
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
  
 I tre tipi di classe sono struttura, classe e unione. Vengono dichiarati usando il [struct](../cpp/struct-cpp.md), [classe](../cpp/class-cpp.md), e [unione](../cpp/unions.md) parole chiave (vedere [definizione dei tipi di classe](http://msdn.microsoft.com/en-us/e8c65425-0f3a-4dca-afc2-418c3b1e57da)). La tabella seguente illustra le differenze tra i tre tipi di classe.  
  
 Per ulteriori informazioni sulle unioni, vedere [unioni](../cpp/unions.md). Per informazioni sulle classi gestite e gli struct, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
### <a name="access-control-and-constraints-of-structures-classes-and-unions"></a>Controllo degli accessi e vincoli di strutture, classi e unioni  
  
|Strutture|Classi|Unioni|  
|----------------|-------------|------------|  
|La parola chiave della classe è `struct`|chiave della classe è **(classe)**|chiave della classe è **unione**|  
|L'accesso predefinito è pubblico|L'accesso predefinito è privato|L'accesso predefinito è pubblico|  
|Nessun vincolo di utilizzo|Nessun vincolo di utilizzo|Usare solo un membro alla volta|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)