---
title: Errore del compilatore da C2001
ms.date: 11/04/2016
f1_keywords:
- C2001
helpviewer_keywords:
- C2001
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
ms.openlocfilehash: 6b40a3bd186b5c45a0ea5163f433635ab1e7b07f
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743490"
---
# <a name="compiler-error-c2001"></a>Errore del compilatore da C2001

nuova riga nella costante

Una costante di stringa non può proseguire in una seconda riga, a meno che non si esegua le operazioni seguenti:

- Termina la prima riga con una barra rovesciata.

- Chiudere la stringa nella prima riga con le virgolette doppie e aprire la stringa nella riga successiva con altre virgolette doppie.

La fine della prima riga con \n non è sufficiente.

## <a name="examples"></a>Esempi

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
