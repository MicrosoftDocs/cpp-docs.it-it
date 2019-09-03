---
title: Pragma init_seg
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.init_seg
- init_seg_CPP
helpviewer_keywords:
- pragmas, init_seg
- init_seg pragma
- data segment initializing [C++]
ms.assetid: 40a5898a-5c85-4aa9-8d73-3d967eb13610
ms.openlocfilehash: 5e57ea0eedfc1df6e196391c5edd3acfbad0a7c7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221013"
---
# <a name="init_seg-pragma"></a>Pragma init_seg

**C++Specifico**

Specifica una parola chiave o una sezione di codice che influisce sull'ordine in cui viene eseguito il codice di avvio.

## <a name="syntax"></a>Sintassi

> **#pragma init_seg (** {**utente** **lib** |  **del compilatore** | | "*nome-sezione*" [ **,** *Func-Name* ]} **)**

## <a name="remarks"></a>Note

I termini *Segment* e *Section* hanno lo stesso significato in questo articolo.

Poiché il codice è talvolta necessario per inizializzare gli oggetti statici globali, è necessario specificare quando creare gli oggetti. In particolare, è importante usare il pragma **init_seg** nelle librerie a collegamento dinamico (dll) o nelle librerie che richiedono l'inizializzazione.

Le opzioni per il pragma **init_seg** sono:

**compilatore**\
Riservato per l'inizializzazione della libreria di runtime di Microsoft C Gli oggetti in questo gruppo sono costruiti per primi.

**lib**\
Disponibile per le inizializzazioni dei fornitori della libreria di classi di terze parti. Gli oggetti in questo gruppo vengono costruiti dopo quelli contrassegnati come **compilatore**, ma prima di qualsiasi altro.

**utente**\
Disponibile per qualsiasi utente. Gli oggetti in questo gruppo sono costruiti per ultimi.

*nome sezione*\
Consente la specifica esplicita della sezione di inizializzazione. Gli oggetti in un nome di *sezione* specificato dall'utente non vengono costruiti in modo implicito. Tuttavia, i rispettivi indirizzi vengono inseriti nella sezione denominata da *Section-name*.

Il *nome di sezione* fornito conterrà i puntatori alle funzioni helper che costruiranno gli oggetti globali dichiarati dopo il pragma in tale modulo.

Per un elenco di nomi che non è consigliabile usare durante la creazione di una sezione, vedere [/Section](../build/reference/section-specify-section-attributes.md).

*nome Func*\
Specifica una funzione da chiamare invece di `atexit` al termine del programma. Questa funzione helper chiama anche [atexit](../c-runtime-library/reference/atexit.md) con un puntatore al distruttore per l'oggetto globale. Se si specifica un identificatore di funzione nel pragma del modulo,

```cpp
int __cdecl myexit (void (__cdecl *pf)(void))
```

allora la funzione verrà chiamata al posto di `atexit` della libreria di runtime C. Consente di compilare un elenco dei distruttori da chiamare quando si è pronti per eliminare gli oggetti.

Se si desidera posticiparne l'inizializzazione (ad esempio in una DLL) è possibile scegliere di specificare il nome della sezione in modo esplicito. Il codice deve quindi chiamare i costruttori per ogni oggetto statico.

Non ci sono virgolette che racchiudono l'identificatore per la sostituzione di `atexit`.

Gli oggetti verranno comunque inseriti nelle sezioni definite dagli altri `XXX_seg` pragma.

Gli oggetti dichiarati nel modulo non vengono inizializzati automaticamente dalla fase di esecuzione del linguaggio C. Il codice deve eseguire l'inizializzazione.

Per impostazione predefinita, le sezioni `init_seg` sono di sola lettura. Se il nome della sezione `.CRT`è, il compilatore modifica automaticamente l'attributo in sola lettura, anche se è contrassegnato come lettura, scrittura.

Non è possibile specificare **init_seg** più di una volta in un'unità di conversione.

Anche se l'oggetto non dispone di un costruttore definito dall'utente, uno definito in modo esplicito nel codice, il compilatore potrebbe generarne uno. Ad esempio, potrebbe crearne uno per associare i puntatori della tabella v. Quando necessario, il codice chiama il costruttore generato dal compilatore.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_init_seg.cpp
#include <stdio.h>
#pragma warning(disable : 4075)

typedef void (__cdecl *PF)(void);
int cxpf = 0;   // number of destructors we need to call
PF pfx[200];    // pointers to destructors.

int myexit (PF pf) {
   pfx[cxpf++] = pf;
   return 0;
}

struct A {
   A() { puts("A()"); }
   ~A() { puts("~A()"); }
};

// ctor & dtor called by CRT startup code
// because this is before the pragma init_seg
A aaaa;

// The order here is important.
// Section names must be 8 characters or less.
// The sections with the same name before the $
// are merged into one section. The order that
// they are merged is determined by sorting
// the characters after the $.
// InitSegStart and InitSegEnd are used to set
// boundaries so we can find the real functions
// that we need to call for initialization.

#pragma section(".mine$a", read)
__declspec(allocate(".mine$a")) const PF InitSegStart = (PF)1;

#pragma section(".mine$z",read)
__declspec(allocate(".mine$z")) const PF InitSegEnd = (PF)1;

// The comparison for 0 is important.
// For now, each section is 256 bytes. When they
// are merged, they are padded with zeros. You
// can't depend on the section being 256 bytes, but
// you can depend on it being padded with zeros.

void InitializeObjects () {
   const PF *x = &InitSegStart;
   for (++x ; x < &InitSegEnd ; ++x)
      if (*x) (*x)();
}

void DestroyObjects () {
   while (cxpf>0) {
      --cxpf;
      (pfx[cxpf])();
   }
}

// by default, goes into a read only section
#pragma init_seg(".mine$m", myexit)

A bbbb;
A cccc;

int main () {
   InitializeObjects();
   DestroyObjects();
}
```

```Output
A()
A()
A()
~A()
~A()
~A()
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
