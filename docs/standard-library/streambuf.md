---
title: '&lt;streambuf&gt;'
ms.date: 11/04/2016
f1_keywords:
- <streambuf>
helpviewer_keywords:
- streambuf header
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
ms.openlocfilehash: 15bfa86a3c697442b66a5f77aa6ea7a9aba5643c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62412371"
---
# <a name="ltstreambufgt"></a>&lt;streambuf&gt;

Includere l'intestazione standard \<streambuf> per definire la classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), che è alla base del funzionamento delle classi iostream. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.

## <a name="syntax"></a>Sintassi

```cpp
#include <streambuf>
```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[streambuf](../standard-library/streambuf-typedefs.md#streambuf)|Una specializzazione dello `basic_streambuf` che usa **char** come parametri del modello.|
|[wstreambuf](../standard-library/streambuf-typedefs.md#wstreambuf)|Una specializzazione dello `basic_streambuf` che usa **wchar_t** come parametri del modello.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe basic_streambuf](basic-streambuf-class.md)|La classe modello descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
