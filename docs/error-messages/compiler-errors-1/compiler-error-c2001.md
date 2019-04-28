---
title: Errore del compilatore C2001
ms.date: 11/04/2016
f1_keywords:
- C2001
helpviewer_keywords:
- C2001
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
ms.openlocfilehash: 03b54fe2373063c8c0f9905da93822928392998d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62209023"
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