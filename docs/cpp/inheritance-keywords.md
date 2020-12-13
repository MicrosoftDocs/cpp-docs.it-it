---
description: 'Altre informazioni su: parole chiave di ereditarietà'
title: Parole chiave di ereditarietà
ms.date: 11/04/2016
f1_keywords:
- __multiple_inheritance
- __single_inheritance_cpp
- __virtual_inheritance_cpp
- __virtual_inheritance
- __multiple_inheritance_cpp
- __single_inheritance
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
ms.openlocfilehash: 05d13303064c2857780af62b1b4beba00483b72e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340463"
---
# <a name="inheritance-keywords"></a>Parole chiave di ereditarietà

**Specifico di Microsoft**

```
class [__single_inheritance] class-name;
class [__multiple_inheritance] class-name;
class [__virtual_inheritance] class-name;
```

dove:

*Nome classe*<br/>
Il nome della classe che si sta dichiarando.

Il linguaggio C++ consente di dichiarare un puntatore a un membro della classe prima della definizione della classe. Ad esempio:

```cpp
class S;
int S::*p;
```

Nel codice precedente, `p` viene dichiarato come un puntatore a un membro integer della classe S. Tuttavia, `class S` non è ancora stato definito in questo codice. è stato dichiarato solo. Quando il compilatore rileva tale puntatore, deve effettuare una rappresentazione generalizzata del puntatore. La dimensione della rappresentazione dipende dal modello di ereditarietà specificato. Sono disponibili quattro modi per specificare un modello di ereditarietà al compilatore:

- Nell'IDE sotto la **rappresentazione da puntatore a membro**

- Dalla riga di comando usando l'opzione [/VMG](../build/reference/vmb-vmg-representation-method.md)

- Uso del pragma [pointers_to_members](../preprocessor/pointers-to-members.md)

- Utilizzo delle parole chiave di ereditarietà **`__single_inheritance`** , **`__multiple_inheritance`** e **`__virtual_inheritance`** . Con questa tecnica viene controllato il modello di ereditarietà in base alle classi.

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
> La stessa dichiarazione con prototipo della rappresentazione della classe puntatore a membro deve verificarsi in ogni unità di conversione che dichiara i puntatori ai membri di quella classe e la dichiarazione deve verificarsi prima che vengano dichiarati i puntatori ai membri.

Per compatibilità con le versioni precedenti, **_single_inheritance**, **_multiple_inheritance** e **_virtual_inheritance** sono sinonimi per **`__single_inheritance`** , e a **`__multiple_inheritance`** **`__virtual_inheritance`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)
