---
title: Operatore di concatenamento dei token (##)
ms.date: 08/29/2019
f1_keywords:
- '##'
helpviewer_keywords:
- preprocessor, operators
- '## preprocessor operator'
ms.assetid: 4f173503-990f-4bff-aef3-ec4d1f1458ef
ms.openlocfilehash: 4bf1b8c8f56ab9375503c9e8fb6a906706fc70bb
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218113"
---
# <a name="token-pasting-operator-"></a>Operatore di concatenamento dei token (##)

L'operatore di Unione o di *incollaggio* a doppio segno ( **##** ), che viene talvolta definito operatore di *unione* o di *combinazione* , viene utilizzato sia nelle macro di tipo oggetto che di tipo funzione. Consente di unire token separati in un unico token e pertanto non può essere il primo o l'ultimo token nella definizione della macro.

Se un parametro formale in una definizione di macro è preceduto o seguito dall'operatore di concatenamento dei token, il parametro formale viene immediatamente sostituito dall'argomento effettivo non espanso. L'espansione della macro non viene eseguita nell'argomento prima della sostituzione.

Quindi, ogni occorrenza dell'operatore di incollamento dei token nella *stringa di token* viene rimossa e i token precedenti e successivi vengono concatenati. Il token risultante deve essere un token valido. In tal caso, viene eseguita la scansione del token per una possibile sostituzione se rappresenta un nome di macro. L'identificatore rappresenta il nome da cui i token concatenati verranno resi noti nel programma prima della sostituzione. Ogni token rappresenta un token definito altrove, nel programma o nella riga di comando del compilatore. Lo spazio vuoto che precede o che segue l'operatore è facoltativo.

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
