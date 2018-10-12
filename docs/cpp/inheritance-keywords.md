---
title: Parole chiave di ereditarietà | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __multiple_inheritance
- __single_inheritance_cpp
- __virtual_inheritance_cpp
- __virtual_inheritance
- __multiple_inheritance_cpp
- __single_inheritance
dev_langs:
- C++
helpviewer_keywords:
- __single_inheritance keyword [C++]
- declaring derived classes [C++]
- keywords [C++], inheritance keywords
- __multiple_inheritance keyword [C++]
- __virtual_inheritance keyword [C++]
- inheritance, declaring derived classes
- derived classes [C++], declaring
- inheritance, keywords
ms.assetid: bb810f56-7720-4fea-b8b6-9499edd141df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4b3703d0bd4556090c08a874bce362120817397
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161801"
---
# <a name="inheritance-keywords"></a>Parole chiave di ereditarietà

**Sezione specifica Microsoft**

```
class [__single_inheritance] class-name;
class [__multiple_inheritance] class-name;
class [__virtual_inheritance] class-name;
```

dove:

*nome della classe*<br/>
Il nome della classe che si sta dichiarando.

Il linguaggio C++ consente di dichiarare un puntatore a un membro della classe prima della definizione della classe. Ad esempio:

```cpp
class S;
int S::*p;
```

Nel codice precedente, `p` è dichiarato come puntatore al membro integer di classe S. Tuttavia, `class S` ha non è ancora stato definito in questo codice; è stato solo dichiarato. Quando il compilatore rileva tale puntatore, deve effettuare una rappresentazione generalizzata del puntatore. La dimensione della rappresentazione dipende dal modello di ereditarietà specificato. Sono disponibili quattro modi per specificare un modello di ereditarietà al compilatore:

- Nell'IDE in **rappresentazione di puntatore a membro**

- Nella riga di comando tramite il [/vmg](../build/reference/vmb-vmg-representation-method.md) switch

- Usando il [pointers_to_members](../preprocessor/pointers-to-members.md) (pragma)

- Utilizzando le parole chiave di ereditarietà **Single_Inheritance**, **multiple_inheritance**, e **virtual_inheritance**. Con questa tecnica viene controllato il modello di ereditarietà in base alle classi.

    > [!NOTE]
    >  Se si dichiara sempre un puntatore a un membro di una classe dopo la definizione della classe, non è necessario utilizzare nessuna di queste opzioni.

La dichiarazione di un puntatore a un membro di una classe prima della definizione della classe influisce sulla dimensione e sulla velocità del file eseguibile risultante. Più è complessa l'ereditarietà utilizzata da una classe, maggiore è il numero di byte necessari per rappresentare un puntatore a un membro della classe e maggiori sono le dimensioni del codice necessario per interpretare il puntatore. L'ereditarietà singola è meno complessa e l'ereditarietà virtuale è più complessa.

Se l'esempio precedente viene modificato in:

```cpp
class __single_inheritance S;
int S::*p;
```

indipendentemente dalle opzioni della riga di comando o dai pragma, i puntatori ai membri di `class S` utilizzeranno la più piccola rappresentazione possibile.

> [!NOTE]
>  La stessa dichiarazione con prototipo della rappresentazione della classe puntatore a membro deve verificarsi in ogni unità di conversione che dichiara i puntatori ai membri di quella classe e la dichiarazione deve verificarsi prima che vengano dichiarati i puntatori ai membri.

Per garantire la compatibilità con versioni precedenti **_single_inheritance**, **_multiple_inheritance**, e **_virtual_inheritance** sono sinonimi per **_ dell'ereditarietà singola**, **multiple_inheritance**, e **virtual_inheritance** , a meno che l'opzione del compilatore [/Za \(disabilitare la lingua le estensioni)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)