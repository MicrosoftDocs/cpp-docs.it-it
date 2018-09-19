---
title: Errore del compilatore C2001 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2001
dev_langs:
- C++
helpviewer_keywords:
- C2001
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 71048a706678e4d9e6906972ebf148748927e829
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088242"
---
# <a name="compiler-error-c2001"></a>Errore del compilatore C2001

nuova riga nella costante

Impossibile continuare una costante di stringa sulla seconda riga, a meno che procedere nel modo seguente:

- La prima riga con una barra rovesciata finale.

- Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un altro segno di virgolette doppie.

La prima riga con \n finale non è sufficiente.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2001:

```
// C2001.cpp
// C2001 expected
#include <stdio.h>

int main()
{
    printf_s("Hello,
             world");
    printf_s("Hello,\n
             world");
}
```

## <a name="example"></a>Esempio

Sono inclusi gli spazi all'inizio della riga successiva dopo un carattere di continuazione di riga nella costante di stringa. Nessuno degli esempi indicati sopra incorporare un carattere di nuova riga nella costante di stringa. È possibile incorporare un carattere di nuova riga come illustrato di seguito:

```
// C2001b.cpp
#include <stdio.h>

int main()
{
    printf_s("Hello,\n\
             world");

    printf_s("Hello,\
             \nworld");

    printf_s("Hello,\n"
             "world");

    printf_s("Hello,"
             "\nworld");

    printf_s("Hello,"
             " world");

    printf_s("Hello,\
             world");
}
```