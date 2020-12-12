---
description: 'Altre informazioni su: errore del compilatore C2603'
title: Errore del compilatore C2603
ms.date: 11/04/2016
f1_keywords:
- C2603
helpviewer_keywords:
- C2603
ms.assetid: 9ca520d0-f082-4b65-933d-17c3bcf8b02c
ms.openlocfilehash: e28ea581c4c1417972cddc0ce558bd518acb8889
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208788"
---
# <a name="compiler-error-c2603"></a>Errore del compilatore C2603

> '*Function*': troppi oggetti statici con ambito blocco con costruttori/distruttori nella funzione

Nelle versioni del compilatore Microsoft C++ precedenti a Visual Studio 2015 o quando si specifica l'opzione [/Zc: threadSafeInit-](../../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) Compiler, esiste un limite di 31 per il numero di oggetti statici che è possibile avere in una funzione inline visibile esternamente.

Per risolvere questo problema, è consigliabile adottare la versione più recente del set di strumenti del compilatore Microsoft C++ o, se possibile, rimuovere l'opzione/Zc: threadSafeInit-Compiler. Se ciò non è possibile, provare a combinare gli oggetti statici. Se gli oggetti sono dello stesso tipo, prendere in considerazione l'uso di una singola matrice statica di quel tipo e fare riferimento a singoli membri come richiesto.

## <a name="example"></a>Esempio

Il codice seguente genera C2603 e Mostra un modo per risolverlo:

```cpp
// C2603.cpp
// Compile by using: cl /W4 /c /Zc:threadSafeInit- C2603.cpp
struct C { C() {} };
extern inline void f1() {
    static C C01, C02, C03, C04, C05, C06, C07, C08, C09, C10;
    static C C11, C12, C13, C14, C15, C16, C17, C18, C19, C20;
    static C C21, C22, C23, C24, C25, C26, C27, C28, C29, C30, C31;
    static C C32;   // C2603 Comment this line out to avoid error
}
```
