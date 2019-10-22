---
title: '&lt;streambuf&gt;'
ms.date: 11/04/2016
f1_keywords:
- <streambuf>
helpviewer_keywords:
- streambuf header
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
ms.openlocfilehash: ca5f53d67bb32e59c20d1d440879144f0a617c66
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72686016"
---
# <a name="ltstreambufgt"></a>&lt;streambuf&gt;

Includere l'intestazione standard iostreams \<streambuf > per definire il modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), che è di base per il funzionamento delle classi iostreams. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.

## <a name="syntax"></a>Sintassi

```cpp
#include <streambuf>
```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[streambuf](../standard-library/streambuf-typedefs.md#streambuf)|Una specializzazione di `basic_streambuf` che utilizza **char** come parametri di modello.|
|[wstreambuf](../standard-library/streambuf-typedefs.md#wstreambuf)|Una specializzazione di `basic_streambuf` che utilizza **wchar_t** come parametri del modello.|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[Classe basic_streambuf](basic-streambuf-class.md)|Il modello di classe descrive una classe base astratta per la derivazione di un buffer del flusso, che controlla la trasmissione di elementi da e verso una rappresentazione specifica di un flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
