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
ms.openlocfilehash: 24c3a7f85c4ea05c38f3ab1d3f637ea0ab24d4c5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363753"
---
# <a name="based-pointers-c"></a>Puntatori based (C++)

La parola chiave **__based** consente di dichiarare puntatori basati su puntatori (puntatori con offset da puntatori esistenti). La parola chiave **__based** è specifica di Microsoft.The __based keyword is Microsoft-specific.

## <a name="syntax"></a>Sintassi

```
type __based( base ) declarator
```

## <a name="remarks"></a>Osservazioni

I puntatori basati sugli indirizzi dei puntatori sono l'unica forma della parola chiave **__based** valida nelle compilazioni a 32 o 64 bit. Per i compilatori C e C++ a 32 bit Microsoft un puntatore based è un offset a 32 bit di una base puntatore a 32 bit. Una restrizione analoga è presente per ambienti a 64 bit, in cui un puntatore based è un offset a 64 bit rispetto a una base a 64 bit.

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
> È inoltre possibile eseguire la persistenza degli identificatori contenenti puntatori utilizzando [file mappati](/windows/win32/Memory/file-mapping)alla memoria.

Quando si dereferenzia un puntatore based, la base deve essere specificata in modo esplicito o essere implicitamente nota tramite la dichiarazione.

Per compatibilità con le versioni precedenti, **_based** è un sinonimo di **__based,** a meno che non venga specificata l'opzione del compilatore [ \(/-A Disable (estensioni del linguaggio).](../build/reference/za-ze-disable-language-extensions.md)

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
