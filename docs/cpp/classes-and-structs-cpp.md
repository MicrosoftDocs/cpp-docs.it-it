---
description: 'Altre informazioni su: classi e struct (C++)'
title: Classi e struct (C++)
ms.date: 05/07/2019
helpviewer_keywords:
- C++, classes and structs
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
ms.openlocfilehash: 9d845cf130c2cbf06e182a49f3d83c78745864d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114065"
---
# <a name="classes-and-structs-c"></a>Classi e struct (C++)

Questa sezione illustra le classi e gli struct di C++. I due costrutti sono identici in C++, ma negli struct l'accessibilità predefinita è pubblica, mentre nelle classi il valore predefinito è privato.

Le classi e gli struct sono i costrutti che permettono di definire tipi personalizzati. Le classi e gli struct possono includere membri dati e funzioni membro, che permettono di descrivere lo stato e il comportamento del tipo.

Vengono trattati gli argomenti seguenti:

- [class](../cpp/class-cpp.md)

- [struct](../cpp/struct-cpp.md)

- [Cenni preliminari sui membri della classe](../cpp/class-member-overview.md)

- [Controllo di accesso ai membri](../cpp/member-access-control-cpp.md)

- [Ereditarietà](../cpp/inheritance-cpp.md)

- [Membri statici](../cpp/static-members-cpp.md)

- [Conversioni di tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md)

- [Membri dati modificabili (identificatore modificabile)](../cpp/mutable-data-members-cpp.md)

- [Dichiarazioni di classi annidate](../cpp/nested-class-declarations.md)

- [Tipi di classe anonimi](../cpp/anonymous-class-types.md)

- [Puntatori a membri](../cpp/pointers-to-members.md)

- [Puntatore this](../cpp/this-pointer.md)

- [Campi di bit C++](../cpp/cpp-bit-fields.md)

I tre tipi di classe sono struttura, classe e unione. Vengono dichiarati usando le parole chiave [struct](../cpp/struct-cpp.md), [Class](../cpp/class-cpp.md)e [Union](../cpp/unions.md) . La tabella seguente illustra le differenze tra i tre tipi di classe.

Per ulteriori informazioni sulle unioni, vedere [unioni](../cpp/unions.md). Per informazioni sulle classi e sugli struct in C++/CLI e C++/CX, vedere [classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md).

### <a name="access-control-and-constraints-of-structures-classes-and-unions"></a>Controllo degli accessi e vincoli di strutture, classi e unioni

|Strutture|Classi|Unioni|
|----------------|-------------|------------|
|chiave della classe **`struct`**|chiave della classe **`class`**|chiave della classe **`union`**|
|L'accesso predefinito è pubblico|L'accesso predefinito è privato|L'accesso predefinito è pubblico|
|Nessun vincolo di utilizzo|Nessun vincolo di utilizzo|Usare solo un membro alla volta|

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)
