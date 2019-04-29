---
title: Puntatori based (C++)
ms.date: 10/09/2018
f1_keywords:
- __based
- _based
- __based_cpp
helpviewer_keywords:
- __based keyword [C++]
- based pointers
- pointers, based
ms.assetid: 1e5f2e96-c52e-4738-8e14-87278681205e
ms.openlocfilehash: 771d3ee132e4cd63499fec886ef9f7cd06ec0260
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393961"
---
# <a name="based-pointers-c"></a>Puntatori based (C++)

**Sezione specifica Microsoft**

Il **based** (parola chiave) consente di dichiarare puntatori basati su puntatori (puntatori con offset rispetto ai puntatori esistenti).

## <a name="syntax"></a>Sintassi

```

type __based( base ) declarator
```

## <a name="remarks"></a>Note

I puntatori basati sugli indirizzi di puntatori sono l'unica forma del **based** parola chiave valida in compilazioni a 32 bit o 64 bit. Per i compilatori C e C++ a 32 bit Microsoft un puntatore based è un offset a 32 bit di una base puntatore a 32 bit. Una restrizione analoga è presente per ambienti a 64 bit, in cui un puntatore based è un offset a 64 bit rispetto a una base a 64 bit.

Un utilizzo dei puntatori basati su puntatori è correlato agli identificatori persistenti che contengono puntatori. Un elenco collegato costituito da puntatori basati su un puntatore può essere salvato su disco e successivamente ricaricato in un'altra posizione della memoria, con i puntatori che rimangono validi. Ad esempio:

```cpp
// based_pointers1.cpp
// compile with: /c
void *vpBuffer;
struct llist_t {
   void __based( vpBuffer ) *vpData;
   struct llist_t __based( vpBuffer ) *llNext;
};
```

Il puntatore `vpBuffer` viene assegnato l'indirizzo di memoria allocata in un qualche punto successivo del programma. L'elenco collegato viene rilocato rispetto al valore `vpBuffer`.

> [!NOTE]
>  Rendere persistenti gli identificatori che contengono puntatori possono essere eseguiti anche utilizzando [file mappati alla memoria](/windows/desktop/Memory/file-mapping).

Quando si dereferenzia un puntatore based, la base deve essere specificata in modo esplicito o essere implicitamente nota tramite la dichiarazione.

Per garantire la compatibilità con le versioni precedenti, **based** è un sinonimo **based** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrata la modifica di un puntatore based tramite la modifica della base relativa.

```cpp
// based_pointers2.cpp
// compile with: /EHsc
#include <iostream>

int a1[] = { 1,2,3 };
int a2[] = { 10,11,12 };
int *pBased;

typedef int __based(pBased) * pBasedPtr;

using namespace std;
int main() {
   pBased = &a1[0];
   pBasedPtr pb = 0;

   cout << *pb << endl;
   cout << *(pb+1) << endl;

   pBased = &a2[0];

   cout << *pb << endl;
   cout << *(pb+1) << endl;
}
```

```Output
1
2
10
11
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[alloc_text](../preprocessor/alloc-text.md)