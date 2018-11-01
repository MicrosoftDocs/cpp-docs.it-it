---
title: Puntatori const e volatile
ms.date: 11/04/2016
helpviewer_keywords:
- volatile keyword [C++], and pointers
- pointers, and const
- pointers, and volatile
- const keyword [C++], volatile pointers
ms.assetid: 0c92dc6c-400e-4342-b345-63ddfe649d7e
ms.openlocfilehash: c869adbbdc8a5a17d315e64e5ac15545e0c46e26
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50628189"
---
# <a name="const-and-volatile-pointers"></a>Puntatori const e volatile

Il [const](../cpp/const-cpp.md) e [volatile](../cpp/volatile-cpp.md) modificare parole chiave come vengono trattati i puntatori. Il **const** parola chiave specifica che il puntatore non può essere modificato dopo l'inizializzazione, il puntatore è protetta dalle modifiche successivamente.

Il **volatile** parola chiave specifica che il valore associato al nome che segue può essere modificato da azioni diverse da quelle dell'applicazione utente. Pertanto, il **volatile** (parola chiave) è utile per dichiarare gli oggetti nella memoria condivisa accessibile da più processi o aree dati globali utilizzate per la comunicazione con le routine di servizio di interrupt.

Quando un nome è dichiarato come **volatile**, il compilatore Ricarica il valore dalla memoria ogni volta che si accede dal programma. In questo modo vengono ridotte notevolmente le ottimizzazioni possibili. Tuttavia, quando lo stato di un oggetto può cambiare in modo imprevisto, questo è l'unico modo per garantire prestazioni del programma prevedibili.

Per dichiarare l'oggetto a cui punta il puntatore come **const** oppure **volatile**, usare una dichiarazione del form:

```cpp
const char *cpch;
volatile char *vpch;
```

Per dichiarare il valore del puntatore, ovvero, ovvero l'indirizzo effettivo archiviato nel puntatore, ovvero come **const** o **volatile**, usare una dichiarazione del form:

```cpp
char * const pchc;
char * volatile pchv;
```

Il linguaggio C++ impedisce le assegnazioni che permetterebbero la modifica di un oggetto o puntatore dichiarato come **const**. Tali assegnazioni rimuoverebbero le informazioni utilizzate per dichiarare l'oggetto o il puntatore, violando pertanto lo scopo della dichiarazione originale. Si considerino le dichiarazioni seguenti:

```cpp
const char cch = 'A';
char ch = 'B';
```

Date le dichiarazioni precedenti di due oggetti (`cch`, di tipo **const char**, e `ch`, di tipo **char)**, la dichiarazione e le inizializzazioni seguenti sono valide:

```cpp
const char *pch1 = &cch;
const char *const pch4 = &cch;
const char *pch5 = &ch;
char *pch6 = &ch;
char *const pch7 = &ch;
const char *const pch8 = &ch;
```

La dichiarazione e le inizializzazioni seguenti non sono corrette.

```cpp
char *pch2 = &cch;   // Error
char *const pch3 = &cch;   // Error
```

La dichiarazione di `pch2` definisce un puntatore tramite cui un oggetto costante potrebbe essere modificato e pertanto non è consentita. La dichiarazione di `pch3` specifica che il puntatore è costante, non l'oggetto; la dichiarazione non è consentita per lo stesso motivo la `pch2` dichiarazione non è consentita.

Le otto assegnazioni seguenti mostrano l'assegnazione mediante il puntatore e la modifica del relativo valore per le dichiarazioni precedenti. Si supponga per il momento che l'inizializzazione sia corretta per `pch1` tramite `pch8`.

```cpp
*pch1 = 'A';  // Error: object declared const
pch1 = &ch;   // OK: pointer not declared const
*pch2 = 'A';  // OK: normal pointer
pch2 = &ch;   // OK: normal pointer
*pch3 = 'A';  // OK: object not declared const
pch3 = &ch;   // Error: pointer declared const
*pch4 = 'A';  // Error: object declared const
pch4 = &ch;   // Error: pointer declared const
```

I puntatori dichiarati come **volatili**, o come una combinazione di **const** e **volatile**, rispettano le stesse regole.

Puntatori a **const** gli oggetti vengono spesso usati nelle dichiarazioni di funzione come indicato di seguito:

```cpp
errno_t strcpy_s( char *strDestination, size_t numberOfElements, const char *strSource );
```

L'istruzione precedente viene dichiarata una funzione, [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md), in cui due dei tre argomenti sono di tipo pointer a **char**. Poiché gli argomenti vengono passati per riferimento e non per valore, la funzione sarebbe libera di modificare entrambe `strDestination` e `strSource` se `strSource` non è stato dichiarato come **const**. La dichiarazione di `strSource` come **const** garantisce al chiamante che `strSource` non può essere modificato dalla funzione chiamata.

> [!NOTE]
> Perché viene eseguita una conversione standard dalla *nomeTipo* <strong>\*</strong> alla **const** *typename* <strong>\*</strong>, è consentito passare un argomento di tipo `char *` al [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md). Tuttavia, non è vero; il contrario non esiste alcuna conversione implicita per rimuovere il **const** attributo da un oggetto o puntatore.

Oggetto **const** puntatore di un determinato tipo può essere assegnato a un puntatore dello stesso tipo. Tuttavia, un puntatore che non sia **const** non è possibile assegnare a un **const** puntatore. Nel codice seguente vengono mostrate le assegnazioni corrette e quelle non corrette:

```cpp
// const_pointer.cpp
int *const cpObject = 0;
int *pObject;

int main() {
pObject = cpObject;
cpObject = pObject;   // C3892
}
```

Nell'esempio seguente viene illustrato come dichiarare un oggetto come const se si dispone di un puntatore a un puntatore a un oggetto.

```cpp
// const_pointer2.cpp
struct X {
   X(int i) : m_i(i) { }
   int m_i;
};

int main() {
   // correct
   const X cx(10);
   const X * pcx = &cx;
   const X ** ppcx = &pcx;

   // also correct
   X const cx2(20);
   X const * pcx2 = &cx2;
   X const ** ppcx2 = &pcx2;
}
```

## <a name="see-also"></a>Vedere anche

[Pointers](../cpp/pointers-cpp.md)