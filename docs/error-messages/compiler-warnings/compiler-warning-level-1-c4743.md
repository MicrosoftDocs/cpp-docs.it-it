---
title: Avviso del compilatore (livello 1) C4743
ms.date: 05/13/2019
f1_keywords:
- C4743
helpviewer_keywords:
- C4743
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
ms.openlocfilehash: 53ead0e34b55eca44399cee09f1947a12e1eadd3
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611838"
---
# <a name="compiler-warning-level-1-c4743"></a>Avviso del compilatore (livello 1) C4743

«*tipo*'ha una diversa dimensione '*file1*"e"*file2*': *numero* e *numero* byte

Una variabile esterna riferimenti o definizione in due file ha tipi diversi in tali file, ed è stato determinato che la dimensione della variabile nello *file1* differisce dalla dimensione della variabile nel *file2*.

## <a name="remarks"></a>Note

C'è un importante caso quando questo avviso può essere creato per C++. Se si dichiarano gli stessi tipi con lo stesso nome in due diversi file, se tali dichiarazioni contengono funzioni virtuali e le dichiarazioni non sono uguali, il compilatore può generare avviso C4744 per le tabelle di funzione virtuale. L'avviso si verifica perché sono presenti due tabelle di dimensioni diverse funzioni virtuali per lo stesso tipo e il linker deve stabilire uno di essi da incorporare nell'eseguibile.  È possibile che ciò può comportare il programma chiami la funzione virtuale non corretta.

Per risolvere questo problema, usare la stessa definizione di tipo o usare nomi diversi per i tipi o le variabili.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4743. Per compilare un'applicazione, posizionare entrambi i file nella stessa cartella, quindi eseguire  

```cmd
cl /EHsc /W1 /GL /O2 C4743a.cpp C4743b.cpp
```

```cpp
// C4743a.cpp
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

```cpp
// C4743b.cpp
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
