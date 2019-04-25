---
title: Avviso del compilatore (livello 1) C4743
ms.date: 11/04/2016
f1_keywords:
- C4743
helpviewer_keywords:
- C4743
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
ms.openlocfilehash: d17fd65f1108aab6e3ce97ec75c0ffb899c06cda
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62152008"
---
# <a name="compiler-warning-level-1-c4743"></a>Avviso del compilatore (livello 1) C4743

«*tipo*'ha una diversa dimensione '*file1*"e"*file2*': *numero* e *numero* byte

Una variabile esterna riferimenti o definizione in due file ha tipi diversi in tali file, ed è stato determinato che la dimensione della variabile nello *file1* differisce dalla dimensione della variabile nel *file2*.

C'è importante caso quando questo messaggio di avviso può essere emessi per C++. Se si dichiarano gli stessi tipi con lo stesso nome in due diversi file, se tali dichiarazioni contengono funzioni virtuali e le dichiarazioni non sono uguali, il compilatore può generare avviso C4744 per le tabelle di funzione virtuale. L'avviso si verifica perché sono presenti due tabelle di funzioni virtuali con dimensioni diverse per lo stesso tipo e il linker deve stabilire uno di essi da incorporare nell'eseguibile.  È possibile che ciò può comportare il programma chiami la funzione virtuale non corretta.

Per risolvere questo problema, usare la stessa definizione di tipo o usare nomi diversi per i tipi o le variabili.

## <a name="example"></a>Esempio

In questo esempio contiene una definizione del tipo.

```
// C4743a.cpp
// compile with: /c
class C {
public:
    virtual void f1(void);
    virtual void f2(void);
    virtual void f3(void);
};

void C::f1(void) {}
void C::f2(void) {}
void C::f3(void) {}
C q;
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4743.

```
// C4743b.cpp
// compile with: C4743a.cpp /W1 /GL /O2
// C4743 expected
class C {
public:
    virtual void f1(void);
    virtual void f2(void);
    virtual void f3(void);
    virtual void f4(void);
    virtual void f5(void);
};

void C::f4(void) {}
void C::f5(void) {}
C x;

int main() {}
```