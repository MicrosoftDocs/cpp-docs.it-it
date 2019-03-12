---
title: Overload di modelli sicuri
ms.date: 11/04/2016
f1_keywords:
- _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
- _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
- _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
helpviewer_keywords:
- _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
- _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
- _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
- secure template overloads
ms.assetid: 562741d0-39c0-485e-8529-73d740f29f8f
ms.openlocfilehash: dfb13d5a48376efb72a845e2f5e2380407937f5b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57744560"
---
# <a name="secure-template-overloads"></a>Overload di modelli sicuri

Microsoft ha deprecato molte funzioni della libreria di runtime C (CRT) a favore di versioni con sicurezza avanzata. `strcpy_s`, ad esempio, è la sostituzione più sicura per `strcpy`. Le funzioni deprecate generano spesso errori di protezione, poiché non impediscono operazioni che possono comportare la sovrascrittura della memoria. Per impostazione predefinita, il compilatore genera un avviso di deprecazione quando si usa una di queste funzioni. CRT fornisce overload di modelli C++ per queste funzioni per semplificare la transizione alle varianti più sicure.

Questo snippet di codice, ad esempio, genera un avviso in quanto `strcpy` è deprecato:

```cpp
char szBuf[10];
strcpy(szBuf, "test"); // warning: deprecated
```

L'avviso di deprecazione informa l'utente che il codice può non essere sicuro. Dopo aver verificato che il codice non può sovrascrivere la memoria, sono disponibili varie opzioni. È possibile scegliere di ignorare l'avviso, di eliminare l'avviso definendo il simbolo `_CRT_SECURE_NO_WARNINGS` prima delle istruzioni include per le intestazioni CRT oppure di aggiornare il codice in modo da usare `strcpy_s`:

```cpp
char szBuf[10];
strcpy_s(szBuf, 10, "test"); // security-enhanced _s function
```

Gli overload di modello forniscono scelte aggiuntive. La definizione di `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` su 1 abilita gli overload di modello delle funzioni CRT standard che chiamano automaticamente le varianti più sicure. Se `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` è 1, non sono necessarie modifiche al codice. La chiamata a `strcpy` viene modificata in una chiamata a `strcpy_s` con l'argomento di dimensione fornito automaticamente.

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

// ...

char szBuf[10];
strcpy(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")
```

La macro `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` non interessa le funzioni che accettano un conteggio, come `strncpy`. Per abilitare gli overload di modello per le funzioni di conteggio, definire `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` su 1. Prima di eseguire questa operazione, tuttavia, assicurarsi che il codice passi il numero dei caratteri, non la dimensione del buffer (un errore comune). Inoltre, il codice che scrive esplicitamente una terminazione null alla fine del buffer dopo la chiamata di funzione non è necessario se viene chiamata la variante sicura. Se è necessario il troncamento, vedere [_TRUNCATE](../c-runtime-library/truncate.md).

> [!NOTE]
>  La macro `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` necessita che anche `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` sia definito come 1. Se `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` è definito come 1 e `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` è definito come 0, l'applicazione non eseguirà alcun overload di modello.

La definizione di `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` su 1 abilita gli overload di modello delle varianti sicure (nomi che terminano in "_s"). In questo caso, se `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` è 1, sarà necessario apportare una piccola modifica al codice originale:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1

// ...

char szBuf[10];
strcpy_s(szBuf, "test"); // ==> strcpy_s(szBuf, 10, "test")
```

Solo il nome della funzione deve essere modificato (aggiungendo "_s"); l'overload di modello si occuperà di fornire l'argomento di dimensione.

Per impostazione predefinita, `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` e `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT` sono definiti come 0 (disabilitato) e `_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES` è definito come 1 (abilitato).

Si noti che questi overload di modello funzionano solo per le matrici statiche. I buffer allocati dinamicamente richiedono modifiche aggiuntive al codice sorgente. Rivedere gli esempi illustrati in precedenza:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1

// ...

char *szBuf = (char*)malloc(10);
strcpy(szBuf, "test"); // still deprecated; you have to change it to
                       // strcpy_s(szBuf, 10, "test");
```

E questo:

```cpp
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1

// ...

char *szBuf = (char*)malloc(10);
strcpy_s(szBuf, "test"); // doesn't compile; you have to change it to
                         // strcpy_s(szBuf, 10, "test");
```

## <a name="see-also"></a>Vedere anche

[Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md)<br/>
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
