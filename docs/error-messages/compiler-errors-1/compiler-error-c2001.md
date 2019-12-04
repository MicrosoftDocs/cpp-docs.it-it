---
title: Errore del compilatore da C2001
ms.date: 11/04/2016
f1_keywords:
- C2001
helpviewer_keywords:
- C2001
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
ms.openlocfilehash: 2bf9bd322812764b2f63493d4b22b58d853a25fa
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756838"
---
# <a name="compiler-error-c2001"></a>Errore del compilatore da C2001

nuova riga nella costante

Una costante di stringa non può proseguire in una seconda riga, a meno che non si esegua le operazioni seguenti:

- Termina la prima riga con una barra rovesciata.

- Chiudere la stringa nella prima riga con le virgolette doppie e aprire la stringa nella riga successiva con altre virgolette doppie.

La fine della prima riga con \n non è sufficiente.

## <a name="example"></a>Esempio

L'esempio seguente genera l'da C2001:

```cpp
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

Gli spazi all'inizio della riga successiva dopo un carattere di continuazione di riga vengono inclusi nella costante di stringa. Nessuno degli esempi illustrati in precedenza incorpora un carattere di nuova riga nella costante di stringa. È possibile incorporare un carattere di nuova riga come illustrato di seguito:

```cpp
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
