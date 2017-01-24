---
title: "Classi e struct (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++]"
  - "strutture, classi [C++]"
  - "tipi definiti dall'utente"
  - "tipi definiti dall'utente, classi [C++]"
  - "Visual C++, classi"
ms.assetid: 516dd496-13fb-4f17-845a-e9ca45437873
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi e struct (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa sezione illustra le classi e gli struct di C\+\+.  I due costrutti sono identici in C\+\+, ma negli struct l'accessibilità predefinita è pubblica, mentre nelle classi il valore predefinito è privato.  
  
```  
  
```  
  
 Le classi e gli struct sono i costrutti che permettono di definire tipi personalizzati.  Le classi e gli struct possono includere membri dati e funzioni membro, che permettono di descrivere lo stato e il comportamento del tipo.  
  
 Sono inclusi i seguenti argomenti:  
  
-   [classe](../cpp/class-cpp.md)  
  
-   [struct](../cpp/struct-cpp.md)  
  
-   [Panoramica dei membri di classe](../cpp/class-member-overview.md)  
  
-   [Controllo di accesso dei membri](../cpp/member-access-control-cpp.md)  
  
-   [Ereditarietà](../cpp/inheritance-cpp.md)  
  
-   [Membri static](../cpp/static-members-cpp.md)  
  
-   [Conversioni](../cpp/user-defined-type-conversions-cpp.md)  
  
-   [Membri dati modificabili \(identificatore modificabile\)](../cpp/mutable-data-members-cpp.md)  
  
-   [Dichiarazioni di classi annidate](../cpp/nested-class-declarations.md)  
  
-   [Tipi di classe anonimi](../cpp/anonymous-class-types.md)  
  
-   [Puntatori a membri](../cpp/pointers-to-members.md)  
  
-   [Puntatore this](../cpp/this-pointer.md)  
  
-   [Campi di bit C\+\+](../cpp/cpp-bit-fields.md)  
  
 I tre tipi di classe sono struttura, classe e unione.  Vengono dichiarati mediante le parole chiave [struct](../cpp/struct-cpp.md), [class](../cpp/class-cpp.md) e [union](../cpp/unions.md) \(vedere [Definizione dei tipi di classe](http://msdn.microsoft.com/it-it/e8c65425-0f3a-4dca-afc2-418c3b1e57da)\).  La tabella seguente illustra le differenze tra i tre tipi di classe.  
  
 Per altre informazioni sulle unioni, vedere [Unioni](../cpp/unions.md).  Per informazioni sulle classi gestite e gli struct, vedere [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).\<  
  
### Controllo degli accessi e vincoli di strutture, classi e unioni  
  
|Strutture|Classi|Unioni|  
|---------------|------------|------------|  
|La parola chiave della classe è `struct`|La parola chiave della classe è **class**|La parola chiave della classe è **union**|  
|L'accesso predefinito è pubblico|L'accesso predefinito è privato|L'accesso predefinito è pubblico|  
|Nessun vincolo di utilizzo|Nessun vincolo di utilizzo|Usare solo un membro alla volta|  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)