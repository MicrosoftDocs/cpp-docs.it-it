---
title: Del compilatore (livello 4) avviso C4512 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4512
dev_langs:
- C++
helpviewer_keywords:
- C4512
ms.assetid: afb68995-684a-4be5-a73a-38d7a16dc030
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9aee9e7f48430ddc9b2b9a6a7f055ac8b1e32b71
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029949"
---
# <a name="compiler-warning-level-4-c4512"></a>Avviso del compilatore (livello 4) C4512

'classe': impossibile generare un operatore di assegnazione

Il compilatore non può generare un operatore di assegnazione per la classe specificata. Non è stato creato alcun operatore di assegnazione.

L'avviso può essere generato da un operatore di assegnazione per la classe base non accessibile dalla classe derivata.

Per evitare la visualizzazione dell'avviso, specificare un operatore di assegnazione definito dall'utente per la classe.

Verrà inoltre generata una funzione di operatore di assegnazione per una classe che non ne definisce nessuna. L'operatore di assegnazione è una copia membro per membro dei membri dati di un oggetto. Poiché dopo l'inizializzazione non è possibile modificare gli elementi di dati `const`, se la classe contiene un elemento `const`, l'operatore di assegnazione predefinito non funzionerà. Un'altra causa dell'avviso di C4512 è una dichiarazione di un membro dati non statico di tipo di riferimento. Se l'intento è quello di creare un tipo non copiabile, è necessario anche impedire la creazione di un costruttore di copia predefinito.

Per evitare la visualizzazione dell'avviso C4512 per il codice, sono possibili tre soluzioni:

- Definire in modo esplicito un operatore di assegnazione per la classe.

- Rimuovere **const** o l'operatore di riferimento dell'elemento dati nella classe.

- Usare il #pragma [avviso](../../preprocessor/warning.md) istruzione per eliminare l'avviso.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C4512.

```
// C4512.cpp
// compile with: /EHsc /W4
// processor: x86

class Base {
private:
   const int a;

public:
   Base(int val = 0) : a(val) {}
   int get_a() { return a; }
};   // C4512 warning

class Base2 {
private:
   const int a;

public:
   Base2(int val = 0) : a(val) {}
   Base2 & operator=( const Base2 & ) { return *this; }
   int get_a() { return a; }
};

// Type designer intends this to be non-copyable because it has a
// reference member
class Base3
{
private:
   char& cr;

public:
   Base3(char& r) : cr(r) {}
   // Uncomment the following line to explicitly disable copying:
   // Base3(const Base3&) = delete;
};   // C4512 warning

int main() {
   Base first;
   Base second;

   // OK
   Base2 first2;
   Base2 second2;

   char c = 'x';
   Base3 first3(c);
   Base3 second3 = first3; // C2280 if no default copy ctor
}
```