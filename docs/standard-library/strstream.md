---
title: '&lt;strstream&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <strstream>
dev_langs:
- C++
helpviewer_keywords:
- strstream header
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 882248ab4f9ed692aa36bac5873251867b2fff54
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltstrstreamgt"></a>&lt;strstream&gt;

Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in una matrice allocata di oggetti `char`. Queste sequenze vengono facilmente convertite in e da stringhe C.

## <a name="syntax"></a>Sintassi

```cpp
#include <strstream>

```

## <a name="remarks"></a>Note

Gli oggetti di tipo `strstream` funzionano con `char` *, che sono stringhe C. Usare [\<sstream>](../standard-library/sstream.md) per utilizzare oggetti di tipo [basic_string](../standard-library/basic-string-class.md).

> [!NOTE]
> Le classi in \<strstream > sono deprecati. Provare a usare le classi in \<sstream > invece.

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe strstreambuf](../standard-library/strstreambuf-class.md)|La classe descrive un buffer del flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice `char`.|
|[Classe istrstream](../standard-library/istrstream-class.md)|La classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe ostrstream](../standard-library/ostrstream-class.md)|La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe strstream](../standard-library/strstream-class.md)|La classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|

## <a name="see-also"></a>Vedere anche

[\<strstream>](../standard-library/strstream.md)<br/>
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
