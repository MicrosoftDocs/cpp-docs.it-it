---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4743'
title: Avviso del compilatore (livello 1) C4743
ms.date: 05/13/2019
f1_keywords:
- C4743
helpviewer_keywords:
- C4743
ms.assetid: 2ee76ea3-77f3-4c2f-9a57-0751823c89fd
ms.openlocfilehash: a8c8bcd4ef0e4d7084da34e033be4194da11727f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228482"
---
# <a name="compiler-warning-level-1-c4743"></a>Avviso del compilatore (livello 1) C4743

'*Type*' ha dimensioni diverse in '*file1*' è *file2*': *numero* e byte *numerici*

Una variabile esterna a cui viene fatto riferimento o definita in due file ha tipi diversi in tali file e il compilatore ha determinato che le dimensioni della variabile in *file1* differiscono dalle dimensioni della variabile in *file2*.

## <a name="remarks"></a>Commenti

Quando è possibile emettere questo avviso per C++, c'è un caso importante. Se si dichiarano gli stessi tipi con lo stesso nome in due file diversi, se tali dichiarazioni contengono funzioni virtuali e se le dichiarazioni non sono uguali, il compilatore può generare un avviso C4744 per le tabelle delle funzioni virtuali. L'avviso viene generato perché sono presenti due tabelle di funzioni virtuali di dimensioni diverse per lo stesso tipo e il linker deve scegliere una di esse da incorporare nel file eseguibile.  È possibile che il programma chiami la funzione virtuale errata.

Per risolvere il problema, usare la stessa definizione di tipo o usare nomi diversi per i tipi o le variabili.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4743. Per compilarlo, inserire entrambi i file nella stessa cartella, quindi eseguire  

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
