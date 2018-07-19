---
title: '&lt;streambuf&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <streambuf>
dev_langs:
- C++
helpviewer_keywords:
- streambuf header
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 138ec5bb28e108751a7d4b03651826db38c098fa
ms.sourcegitcommit: 76fd30ff3e0352e2206460503b61f45897e60e4f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/13/2018
ms.locfileid: "39026932"
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
|[Classe basic_streambuf](http://msdn.microsoft.com/d9c706ba-ce01-43e0-b0b2-a558fc53ea8d)|La classe modello descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
