---
title: '&lt;strstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <strstream>
helpviewer_keywords:
- strstream header
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
ms.openlocfilehash: 13eea1101abca0f79f0d7c15405ceb3118707b67
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845653"
---
# <a name="ltstrstreamgt"></a>&lt;strstream&gt;

Definisce diverse classi che supportano operazioni iostreams su sequenze archiviate in una matrice allocata di **`char`** oggetti. Queste sequenze vengono facilmente convertite in e da stringhe C.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<strstream>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Gli oggetti di tipo `strstream` funzionano con **`char`** *, che sono stringhe C. Utilizzare [\<sstream>](../standard-library/sstream.md) per utilizzare oggetti di tipo [basic_string](../standard-library/basic-string-class.md).

> [!NOTE]
> Le classi in \<strstream> sono deprecate. Al loro posto, provare a usare le classi in \<sstream>.

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe strstreambuf](../standard-library/strstreambuf-class.md)|La classe descrive un buffer del flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un **`char`** oggetto matrice.|
|[Classe istrstream](../standard-library/istrstream-class.md)|La classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe ostrstream](../standard-library/ostrstream-class.md)|La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe strstream](../standard-library/strstream-class.md)|La classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|

### <a name="functions"></a>Funzioni

```cpp
void freeze(bool freezefl = true);
char* str();
int pcount();
```

## <a name="see-also"></a>Vedere anche

[\<strstream>](../standard-library/strstream.md)\
[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
