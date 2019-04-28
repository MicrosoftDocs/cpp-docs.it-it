---
title: Operatore di concatenamento dei token (##)
ms.date: 11/04/2016
f1_keywords:
- '##'
helpviewer_keywords:
- preprocessor, operators
- '## preprocessor operator'
ms.assetid: 4f173503-990f-4bff-aef3-ec4d1f1458ef
ms.openlocfilehash: dab4da5fd65fc280d2061256a580a015917d24b6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179594"
---
# <a name="token-pasting-operator-"></a>Operatore di concatenamento dei token (##)

L'operatore double-cancelletto o "concatenamento dei token" (**##**), talvolta denominato l'operatore di "unione", viene usato nelle macro di tipo oggetto sia simile a funzione. Consente ai token separati di essere uniti in un unico token e quindi non può essere il primo o l'ultimo token nella definizione macro.

Se un parametro formale in una definizione di macro è preceduto o seguito dall'operatore di concatenamento dei token, il parametro formale viene immediatamente sostituito dall'argomento effettivo non espanso. L'espansione della macro non viene eseguita nell'argomento prima della sostituzione.

Quindi, ogni occorrenza dell'operatore di Incolla per token in *token-string* viene rimosso, e i token che precedono e seguono vengono concatenati. Il token risultante deve essere un token valido. In tal caso, viene eseguita la scansione del token per una possibile sostituzione se rappresenta un nome di macro. L'identificatore rappresenta il nome da cui i token concatenati verranno resi noti nel programma prima della sostituzione. Ogni token rappresenta un token definito altrove, nel programma o nella riga di comando del compilatore. Lo spazio vuoto che precede o che segue l'operatore è facoltativo.

In questo esempio viene illustrato l'utilizzo degli operatori di creazione di stringhe e di concatenamento dei token nella specifica dell'output del programma:

```cpp
#define paster( n ) printf_s( "token" #n " = %d", token##n )
int token9 = 9;
```

Se una macro viene chiamata con un argomento numerico come

```cpp
paster( 9 );
```

la macro restituisce

```cpp
printf_s( "token" "9" " = %d", token9 );
```

che diventa

```cpp
printf_s( "token9 = %d", token9 );
```

## <a name="example"></a>Esempio

```cpp
// preprocessor_token_pasting.cpp
#include <stdio.h>
#define paster( n ) printf_s( "token" #n " = %d", token##n )
int token9 = 9;

int main()
{
   paster(9);
}
```

```Output
token9 = 9
```

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)