---
title: Puntatori const e volatile
ms.date: 11/19/2019
helpviewer_keywords:
- volatile keyword [C++], and pointers
- pointers, and const
- pointers, and volatile
- const keyword [C++], volatile pointers
ms.assetid: 0c92dc6c-400e-4342-b345-63ddfe649d7e
ms.openlocfilehash: a8fd25777d1169ba281fbee173c1c8f5673c8b56
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227569"
---
# <a name="const-and-volatile-pointers"></a>Puntatori const e volatile

Le parole chiave [const](const-cpp.md) e [volatile](volatile-cpp.md) cambiano il modo in cui vengono trattati i puntatori. La **`const`** parola chiave specifica che il puntatore non può essere modificato dopo l'inizializzazione. il puntatore è protetto dalla modifica successivamente.

La **`volatile`** parola chiave specifica che il valore associato al nome che segue può essere modificato da azioni diverse da quelle nell'applicazione utente. Pertanto, la **`volatile`** parola chiave è utile per dichiarare oggetti nella memoria condivisa a cui possono accedere più processi o aree dati globali utilizzate per la comunicazione con le routine del servizio di interrupt.

Quando un nome viene dichiarato come **`volatile`** , il compilatore ricarica il valore dalla memoria ogni volta che accede al programma. In questo modo vengono ridotte notevolmente le ottimizzazioni possibili. Tuttavia, quando lo stato di un oggetto può cambiare in modo imprevisto, questo è l'unico modo per garantire prestazioni del programma prevedibili.

Per dichiarare l'oggetto a cui punta il puntatore come **`const`** o **`volatile`** , usare una dichiarazione nel formato seguente:

```cpp
const char *cpch;
volatile char *vpch;
```

Per dichiarare il valore del puntatore, ovvero l'indirizzo effettivo archiviato nel puntatore, ad esempio **`const`** o **`volatile`** , utilizzare una dichiarazione del modulo:

```cpp
char * const pchc;
char * volatile pchv;
```

Il linguaggio C++ impedisce le assegnazioni che consentono la modifica di un oggetto o di un puntatore dichiarato come **`const`** . Tali assegnazioni rimuoverebbero le informazioni utilizzate per dichiarare l'oggetto o il puntatore, violando pertanto lo scopo della dichiarazione originale. Si considerino le dichiarazioni seguenti:

```cpp
const char cch = 'A';
char ch = 'B';
```

Date le dichiarazioni precedenti di due oggetti ( `cch` , di tipo **const char**e `ch` , di tipo **Char)**, le seguenti dichiarazioni/inizializzazioni sono valide:

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

La dichiarazione di `pch2` definisce un puntatore tramite cui un oggetto costante potrebbe essere modificato e pertanto non è consentita. La dichiarazione di `pch3` specifica che il puntatore è costante, non l'oggetto; la dichiarazione non è consentita per lo stesso motivo per cui la `pch2` dichiarazione non è consentita.

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

I puntatori dichiarati come **`volatile`** , o come una combinazione di **`const`** e **`volatile`** , rispettano le stesse regole.

I puntatori agli **`const`** oggetti vengono spesso usati nelle dichiarazioni di funzione come segue:

```cpp
errno_t strcpy_s( char *strDestination, size_t numberOfElements, const char *strSource );
```

L'istruzione precedente dichiara una funzione, [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md), in cui due dei tre argomenti sono di tipo puntatore a **`char`** . Poiché gli argomenti vengono passati per riferimento e non per valore, la funzione può modificare sia `strDestination` che `strSource` se `strSource` non è stato dichiarato come **`const`** . La dichiarazione di `strSource` come **`const`** assicura al chiamante che `strSource` non può essere modificata dalla funzione chiamata.

> [!NOTE]
> Poiché è presente una conversione standard da *typeName* <strong>\*</strong> a **`const`** *typeName* <strong>\*</strong> , è lecito passare un argomento di tipo `char *` a [strcpy_s](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md). Tuttavia, il contrario non è vero. non esiste alcuna conversione implicita per rimuovere l' **`const`** attributo da un oggetto o un puntatore.

Un **`const`** puntatore di un tipo specificato può essere assegnato a un puntatore dello stesso tipo. Tuttavia, un puntatore non **`const`** può essere assegnato a un **`const`** puntatore. Nel codice seguente vengono mostrate le assegnazioni corrette e quelle non corrette:

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

[Puntatori](pointers-cpp.md) 
 [Puntatori non elaborati](raw-pointers.md)
