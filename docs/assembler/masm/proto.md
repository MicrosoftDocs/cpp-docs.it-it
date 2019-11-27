---
title: PROTO
ms.date: 10/22/2018
f1_keywords:
- PROTO
helpviewer_keywords:
- PROTO directive
ms.assetid: 0487ee16-9dc7-43d1-9445-cd1601f5a080
ms.openlocfilehash: 24ec2a9abc6c8b76fc81f6d412019296c53160f4
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74394760"
---
# <a name="proto"></a>PROTO

Prototipo di una funzione o di una routine. È possibile chiamare la funzione con prototipo dalla direttiva PROTO usando la direttiva [Invoke](invoke.md) .

## <a name="syntax"></a>Sintassi

> *Label* **proto** ⟦*distance*⟧ ⟦*Language-Type*⟧ ⟦ __,__ ⟦*parametro*⟧ __:__ *tag* ... ⟧

### <a name="parameters"></a>Parametri

*etichetta*\
Nome della funzione con prototipo.

\ *distanza*
Opzionale Utilizzato nei modelli di memoria a 16 bit per eseguire l'override dell'impostazione predefinita e indicare chiamate **near** o **lontano** .

\ del *tipo di linguaggio*
Opzionale Imposta la convenzione di chiamata e di denominazione per le procedure e i simboli pubblici. Le convenzioni supportate sono:

- modello **Flat** a 32 bit: **C**, **stdcall**

- modelli a 16 bit: **C**, **Basic**, **FORTRAN**, **Pascal**, **syscall**, **stdcall**

\ *parametro*
Nome facoltativo per un parametro di funzione.

\ *tag*
Tipo di un parametro di funzione.

Il *parametro* e i parametri dei *tag* possono essere visualizzati più volte, una volta per ogni argomento passato.

## <a name="example"></a>Esempio

In questo esempio viene illustrata una Dichiarazione **proto** per una funzione denominata `addup3` che utilizza una chiamata **near** per eseguire l'override dell'impostazione predefinita del modello a 16 bit per le chiamate di routine e utilizza la convenzione di chiamata **C** per i parametri dello stack e i valori restituiti. Accetta due argomenti, una **parola** e un **vararg**.

```MASM
addup3 PROTO NEAR C, argcount:WORD, arg1:VARARG
```

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[. Riferimento al modello](dot-model.md)
